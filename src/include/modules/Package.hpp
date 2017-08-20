//    _____                      _                 _ __  __ _ _ 
//   |  __ \                    | |               | |  \/  (_|_)
//   | |  | | _____      ___ __ | | ___   __ _  __| | \  / |_ _ 
//   | |  | |/ _ \ \ /\ / / '_ \| |/ _ \ / _` |/ _` | |\/| | | |
//   | |__| | (_) \ V  V /| | | | | (_) | (_| | (_| | |  | | | |
//   |_____/ \___/ \_/\_/ |_| |_|_|\___/ \__,_|\__,_|_|  |_|_|_|
//                                                              
//   © 2014-2017 Filiph Sandström
//   Please see the LICENSE for more info!
//
//	File name: AppDownloader.hpp
//	Description: This file contains everything needed to handle applications

#pragma once
#include <iostream>
#include <vector>
#include <zlib.h>

#include "ServerConnector.hpp"

namespace DownloadMii {
	struct Package {
		std::string id;
		std::string name;
		std::string description;
		std::string author;
		std::string category;

		std::vector<std::string> platforms;
		std::vector<std::string> icons;
		std::vector<std::string> binaries;
	};

	class AppDownloader {
		public:
			/* Functions */
			AppDownloader();
			AppDownloader(ServerConnector* serverConnector);
			~AppDownloader();

			/* App Handling */
			void LoadAppInfo(Application &app);

			/* Vars */
			ServerConnector* serverConnector;
		private:
	};
}
