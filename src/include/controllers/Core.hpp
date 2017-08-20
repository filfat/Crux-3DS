// Crux-3DS
// © 2014-2017 Filiph Sandström

#pragma once
#include "../main.hpp"
#include <3ds.h>

namespace Core {
	class Internet {
		public:
			Internet();
			~Internet();

			std::string GET();
		private:
	};
}