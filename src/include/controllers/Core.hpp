//    _____                      _                 _ __  __ _ _ 
//   |  __ \                    | |               | |  \/  (_|_)
//   | |  | | _____      ___ __ | | ___   __ _  __| | \  / |_ _ 
//   | |  | |/ _ \ \ /\ / / '_ \| |/ _ \ / _` |/ _` | |\/| | | |
//   | |__| | (_) \ V  V /| | | | | (_) | (_| | (_| | |  | | | |
//   |_____/ \___/ \_/\_/ |_| |_|_|\___/ \__,_|\__,_|_|  |_|_|_|
//                                                              
//   © 2014-2017 Filiph Sandström
//   Please see the LICENSE for more info!

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