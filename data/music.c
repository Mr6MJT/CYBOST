#include <stdlib.h>

int main()
{
	system("sudo apt-get install sox");
	system("sudo apt-get install sox libsox-fmt-all");
	system("cd MUSIC && play music.mp3");
}
