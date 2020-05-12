#include "Gra.h"
//Konstruktor i destruktor



Gra::Gra()
{
	this->initVar();
	this->initWindow();
}

Gra::~Gra()
{
	delete this->window;
}


const bool Gra::running() const
{
	return this->window->isOpen();
}


//Metody

void Gra::updateEvent()
{
	while (this->window->pollEvent(this->event))
	{
		switch (this->event.type)
		{
		case Event::Closed:
			this->window->close();
			break;
		case Event::KeyPressed:
				if (this->event.key.code == Keyboard::Escape)
					this->window->close();
			break;
		}
	}
}

void Gra::update() // Odpowiada np za podniesione rzeczy
{
	this->updateEvent();
}

void Gra::render() //Renderuje obiekty | wyœwietla ekran
{

	this->window->clear();
	this->window->display();
}

//Prywatne funkcje
void Gra::initVar()
{
	;
	//this->window = nullptr; 
}

void Gra::initWindow()
{
	this->videMode.height = 1000;
	this->videMode.width = 1000;
	this->window = new RenderWindow(this->videMode, "RPG");
}