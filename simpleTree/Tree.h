#pragma once

class Tree {
private:
    int height; // Private field storing the height of the tree.

    // Private helper methods for drawing different parts of the tree.
    void drawTopPart();
    void drawMiddlePart();
    void drawBottomPart();
    void drawSpaces(int count);
    void drawStars(int count);
    void drawTrunk();

public:
    // Constructor of the Tree class, taking the height of the tree as an argument.
    Tree(int height);

    // Public method for drawing the entire tree.
    void draw();
};
