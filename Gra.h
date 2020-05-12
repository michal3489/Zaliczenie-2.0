#ifndef GRA_H
#define GRA_H
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

using namespace sf;

class Gra
{
private:

	RenderWindow* window;
	Event event;
	VideoMode videMode;

	void initVar();
	void initWindow();

public:
	//Konstruktor i destruktor
	Gra();
	virtual ~Gra();

	const bool running() const;

	//funkcje
	void updateEvent();
	void update();
	void render();
};

#endif // !GRA_H