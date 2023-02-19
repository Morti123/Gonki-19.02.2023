#pragma once
#include <SFML/Graphics.hpp>

const float WINDOW_WIDTH = 600;
const float WINDOW_HEIGHT = 1000;
const std::string WINDOW_TITLE = "SFML Lesson2";
const float FPS = 60.f;

const sf::Vector2f TravaStartPos{ 0, 0 };
const std::string Trava_File_Name("trava (3).jpg");
const sf::Vector2f TravaStartPos2{ 0, -WINDOW_HEIGHT };

const sf::Vector2f DorogaStartPos{ 150, 0 };
const std::string Doroga_File_Name("Doroga (1).png");
const sf::Vector2f DorogaStartPos2{ 150, -WINDOW_HEIGHT };

const sf::Vector2f PesokStartPos{ 135,0 };
const std::string Pesok_File_Name("Pesok (2).jpg");
const sf::Vector2f PesokStartPos2{ 135,-WINDOW_HEIGHT };

const sf::Vector2f MachinaStartPos{ 200, 700 };
const std::string Machina_File_Name("Machina (4).png");

const sf::Vector2f VragStartPos{ 150, -300 };
const std::string Vrag_File_Name("vrag 1.png");

const sf::Vector2f VragStartPos2{ 220, -800 };
const std::string Vrag_File_Name2("vrag 2.png");

const sf::Vector2f VragStartPos3{ 330, -1000 };
const std::string Vrag_File_Name3("vrag 3.png");

const sf::Vector2f VragStartPos4{ 200, -1300 };
const std::string Vrag_File_Name4("vrag 4.png");

float SpriteSpeedY = 4.f;
const float VragSpeedY = 8.f;

const sf::Vector2f TEXT_START_POS{ 10.f, 0.f };
const int CHAR_SIZE = 60;
