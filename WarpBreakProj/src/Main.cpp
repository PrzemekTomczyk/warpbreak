#ifndef SFML_STATIC
#ifdef _DEBUG
#pragma comment(lib,"sfml-graphics-d.lib")
#pragma comment(lib,"sfml-system-d.lib")
#pragma comment(lib,"sfml-window-d.lib")
#pragma comment(lib,"sfml-audio-d.lib")
#pragma comment(lib,"sfml-main-d.lib")
#pragma comment(lib,"sfml-network-d.lib")
#pragma comment(lib,"thor-d.lib") 
#pragma comment(lib,"Box2D-d.lib") 
#pragma comment(lib,"libyaml-cppmdd")
#else
#pragma comment(lib,"sfml-graphics.lib")
#pragma comment(lib,"sfml-system.lib")
#pragma comment(lib,"sfml-window.lib")
#pragma comment(lib,"sfml-audio.lib")
#pragma comment(lib,"sfml-main.lib")
#pragma comment(lib,"sfml-network.lib")
#pragma comment(lib,"thor.lib") 
#pragma comment(lib,"Box2D.lib") 
#pragma comment(lib,"libyaml-cppmd")
#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")
#endif //_DEBUG
#else
#ifdef _DEBUG
#pragma comment(lib,"sfml-graphics-s-d.lib")
#pragma comment(lib,"freetype.lib")
#pragma comment(lib,"opengl32.lib")
#pragma comment(lib,"sfml-system-s-d.lib")
#pragma comment(lib,"winmm.lib")
#pragma comment(lib,"sfml-window-s-d.lib")
#pragma comment(lib,"winmm")
#pragma comment(lib,"gdi32")
#pragma comment(lib,"sfml-audio-s-d.lib")
#pragma comment(lib,"flac.lib")
#pragma comment(lib,"ogg.lib")
#pragma comment(lib,"vorbisenc.lib")
#pragma comment(lib,"vorbisfile.lib")
#pragma comment(lib,"vorbis.lib")
#pragma comment(lib,"openal32.lib")
#pragma comment(lib,"sfml-main-d.lib")
#pragma comment(lib,"thor-s-d.lib") 
#pragma comment(lib,"Box2D-d.lib") 
#pragma comment(lib,"libyaml-cppmdd")
#pragma comment(lib,"openal32.lib")
#else
#pragma comment(lib,"sfml-graphics-s.lib")
#pragma comment(lib,"freetype.lib")
#pragma comment(lib,"opengl32.lib")
#pragma comment(lib,"sfml-system-s.lib")
#pragma comment(lib,"winmm.lib")
#pragma comment(lib,"sfml-window-s.lib")
#pragma comment(lib,"gdi32")
#pragma comment(lib,"winmm")
#pragma comment(lib,"sfml-audio-s.lib")
#pragma comment(lib,"flac.lib")
#pragma comment(lib,"ogg.lib")
#pragma comment(lib,"vorbisenc.lib")
#pragma comment(lib,"vorbisfile.lib")
#pragma comment(lib,"vorbis.lib")
#pragma comment(lib,"openal32.lib")
#pragma comment(lib,"sfml-main.lib")
#pragma comment(lib,"sfml-network-s.lib")
#pragma comment(lib,"ws2_32.lib")
#pragma comment(lib,"thor-s.lib") 
#pragma comment(lib,"Box2D.lib") 
#pragma comment(lib,"libyaml-cppmd")
#pragma comment(lib,"openal32.lib")
#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")
#endif //_DEBUG
#endif // !SFML_STATIC

#include "Game.h"
#include <cstdlib>
#include <ctime>

/// <summary>
/// main enrtry point
/// </summary>
/// <returns>true</returns>
int main(){
	std::srand(std::time(nullptr));

	Game game;
	game.run();

	return 1;
}