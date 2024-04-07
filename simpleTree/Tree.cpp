#include "Tree.h" // Includes the header file for the Tree class.
#include <iostream>

using namespace std;

// Implementation of the constructor of the Tree class.
Tree::Tree(int newHeight) : height(newHeight)
{
}

// Method for drawing the entire tree.
void Tree::draw()
{
    cout << endl; // Outputs an empty line for better formatting.
    drawTopPart(); // Draws the top part of the tree.
    drawMiddlePart(); // Draws the middle part of the tree.
    drawBottomPart(); // Draws the bottom part of the tree.
    drawTrunk(); // Draws the trunk of the tree.
}

// Method for drawing the top part of the tree.
void Tree::drawTopPart()
{
    for (int i = 0; i < height; ++i) {
        drawSpaces(3 * height - i); // Draws spaces before the stars.
        drawStars(2 * i + 1); // Draws stars.
        cout << endl; // Moves to a new line.
    }
}

// Method for drawing the middle part of the tree.
void Tree::drawMiddlePart()
{
    for (int i = height - 2; i < 2 * height; ++i) {
        drawSpaces(3 * height - i); // Draws spaces before the stars.
        drawStars(2 * i + 1); // Draws stars.
        cout << endl; // Moves to a new line.
    }
}

// Method for drawing the bottom part of the tree.
void Tree::drawBottomPart()
{
    for (int i = 2 * height - 4; i < 3 * height - 2; ++i) {
        drawSpaces(3 * height - i); // Draws spaces before the stars.
        drawStars(2 * i + 1); // Draws stars.
        cout << endl; // Moves to a new line.
    }
}

// Method for drawing spaces.
void Tree::drawSpaces(int count)
{
    for (int i = 0; i < count; ++i) {
        cout << " ";
    }
}

// Method for drawing stars.
void Tree::drawStars(int count)
{
    for (int i = 0; i < count; ++i) {
        cout << "*";
    }
}

// Method for drawing the trunk of the tree.
void Tree::drawTrunk()
{
    for (int i = 0; i < height; i++) {
        drawSpaces(3 * height); // Draws spaces before the trunk.
        cout << "*" << endl; // Outputs the trunk of the tree.
    }
}
