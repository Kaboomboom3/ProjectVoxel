#pragma once

#include "Window.h"

namespace ProjectVoxel {
	namespace Graphics {
		class Renderer {
		public:
			virtual ~Renderer();

			virtual Window &GetWindow() noexcept = 0;

			virtual void SwapBuffers() = 0;
		};
	}
}
