#include <iostream>
#include "Tree.h" // Includes the header file for the Tree class.

using namespace std;

// Function to get the height of the tree from the user.
int getTreeHeight() {
    int treeHeight;
    do {
        cout << "Enter the height of the tree: "; // Asks the user to enter the height of the tree.
        cin >> treeHeight; // Retrieves the height value from the user.
    } while (treeHeight <= 1); // Checks if the height is greater than 1.

    return treeHeight; // Returns the provided height of the tree.
}

int main() {

    int treeHeight = getTreeHeight(); // Retrieves the height of the tree from the user.

    Tree tree(treeHeight); // Creates a tree object with the given height.
    tree.draw(); // Calls the draw() method to draw the tree.

    return 0;
}
