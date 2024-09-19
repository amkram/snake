enum class Direction {
    up,
    down,
    left,
    right
};
class Snake {
    // use linked list as body
    Direction direction;
public:
    void moveForward();
    void setDirection(Direction newDirection);
};