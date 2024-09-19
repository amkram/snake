#include <iostream>
#include "snake.hpp"

class Board {
    Snake snake;
public:
    void update() {
        snake.moveForward();
        // apply game logic
    }
};

int main() {
    // set up board
    Board board;
    while(true) {
        // handle input

        board.update();
        // Main game loop
    }
}