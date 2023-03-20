#include<SFML/Graphics.hpp>


//function declaration
void drawBirb(int xpos, int ypos, int color[3]);


sf::RenderWindow window(sf::VideoMode(800, 800), "Happy Spring!"); //set up game window

int main() {//////////////////////////////////////////////////////////////////////////////////////////////////

	//this next line is an array. Arrays are a lot like python lists.
	int birbColor[] = { 255, 200, 200 }; //set up an array of colors to make your birb PINK!


	while (1) {//GAME LOOP OMG-------------------------------------

		drawBirb(200, 200, birbColor); //function call
		window.display();
	}//end game loop-----------------------------------------------

}//////////////////////////////////////////////////////////////////////////////////////////////////


//function definition
void drawBirb(int xpos, int ypos, int color[3]) {
	//SFML stuff
	sf::CircleShape body;
	sf::CircleShape beak; //SFML lets you set the number of sides of a circle, so this is how we make a triangle!
	sf::RectangleShape feets;

	//leggies
	feets.setPosition(xpos + 10, ypos + 35);
	feets.setFillColor(sf::Color(200, 150, 0));
	feets.setSize(sf::Vector2f(5, 15));
	window.draw(feets); //first leg
	feets.setPosition(xpos + 25, ypos + 35);
	window.draw(feets); //second leg

	//body 
	body.setRadius(20);
	body.setFillColor((sf::Color(color[0], color[1], color[2]))); //noticing accessing slots of an array is just like getting to slots of a list
	body.setPosition(xpos, ypos);
	window.draw(body);

	//birb eyes
	body.setRadius(4);
	body.setFillColor((sf::Color(0, 0, 0))); //black
	body.setPosition(xpos + 15, ypos + 10);
	window.draw(body); //first eye
	body.setPosition(xpos + 30, ypos + 10);
	window.draw(body); //second eye

	//birb beak
	beak.setPointCount(3); //make it a triangle
	beak.setRadius(10);
	beak.setFillColor((sf::Color(200, 150, 0))); //orange
	beak.setPosition(xpos + 17, ypos + 10);
	window.draw(beak);

}
