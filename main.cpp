#include <stdio.h>
#include <cmath>

#include <SFML/Graphics.hpp>
#include <unistd.h>

#define _(i) (coordone_depart_X[i] * cos(current_angle)) - (coordone_depart_Y[i] * sin(current_angle))
const float pi = 3.14159265359;


int main(){
	int fps = 30;
	int secondes = 1;
	int micro_seconde = secondes * 100000;
	int number_of_frames = fps*secondes;

	float delay = (1 / fps) * 100000;

	int taille = 200;
	int coordone_depart_X[4] = {taille, taille, -taille, -taille};
	int coordone_depart_Y[4] = {taille, -taille, -taille, taille};

	float X1_total[number_of_frames], Y1_total[number_of_frames];
	float X2_total[number_of_frames], Y2_total[number_of_frames];
	float X3_total[number_of_frames], Y3_total[number_of_frames];
	float X4_total[number_of_frames], Y4_total[number_of_frames];
	
	int i;
	for (int i = 0; i < number_of_frames; ++i)
	{
	
		float current_angle = (2 * pi) * ((float)(i+1)/(float)(number_of_frames));

		X1_total[i] = _(0);
		Y1_total[i] = _(0);

		X2_total[i] = _(1);
		Y2_total[i] = _(1);

		X3_total[i] = _(2);
		Y3_total[i] = _(2);

		X4_total[i] = _(3);
		Y4_total[i] = _(3);

	}

	sf::RenderWindow window(sf::VideoMode(800, 600), "Square rotation in 2D");	

	sf::ConvexShape square;

	square.setPointCount(4);


	while(true){
		window.clear();

		square.setPoint(0, sf::Vector2f(400 + X1_total[i], Y1_total[i] + 300));
		square.setPoint(1, sf::Vector2f(400 + X2_total[i], Y2_total[i] + 300));
		square.setPoint(2, sf::Vector2f(400 + X3_total[i], Y3_total[i] + 300));
		square.setPoint(3, sf::Vector2f(400 + X4_total[i], Y4_total[i] + 300));

		window.draw(square);

		window.display();
		usleep(micro_seconde);
	}
	return 0;
}
