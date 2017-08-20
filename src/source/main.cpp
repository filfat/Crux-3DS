// Crux-3DS
// © 2014-2017 Filiph Sandström

#include "main.hpp"

int main(int argc, char** argv) {
	srvInit();
	aptInit();
	hidInit();
	
	while (aptMainLoop()) {
		hidScanInput();
		u32 kDown = hidKeysDown();
		if (kDown & KEY_START) break;
	}

	hidExit();
	aptExit();
	exit(0);
}