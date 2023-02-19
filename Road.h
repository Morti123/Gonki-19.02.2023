#pragma once
#include <SFML/Graphics.hpp>
#include "settings.h"

struct Roadobj {
	sf::Texture texture;
	sf::Sprite sprite;
	float offset;
	float score;
};

void roadObjInit(Roadobj& obj, sf::Vector2f pos, std::string fileName, float offset) {
	obj.texture.loadFromFile(fileName);
	obj.sprite.setTexture(obj.texture);
	obj.sprite.setPosition(pos);
	obj.offset = offset;
	obj.score = 0.f;
}
void roadObjUpdate(Roadobj& obj) {
	obj.sprite.move(0, SpriteSpeedY);
	if (obj.sprite.getPosition().y >= WINDOW_HEIGHT) {
		obj.sprite.setPosition(obj.offset, -WINDOW_HEIGHT);
	}
}

void RoadObjDraw(sf::RenderWindow& window, Roadobj& obj) {
	window.draw(obj.sprite);
}