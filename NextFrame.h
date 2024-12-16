#ifndef TETRIS_ENSTA_NEXTFRAME_H
#define TETRIS_ENSTA_NEXTFRAME_H

#include <SFML/Graphics.hpp>
#include <array>

class NextFrame {
public:
    NextFrame();
    ~NextFrame();

private:
    static constexpr float rectSize = 20.0f;
    std::array<sf::RectangleShape, 4> m_rects;
};
#endif //TETRIS_ENSTA_NEXTFRAME_H
