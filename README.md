# Project Documentation: Tree Drawing Program

## Overview:
This project is an academic endeavor created for educational purposes. It consists of three files: Tree.h, Tree.cpp, and main.cpp. The goal of the project is to demonstrate object-oriented programming concepts and basic C++ syntax by implementing a simple program to draw a tree using ASCII art.

## Files:
1. **Tree.h:** This header file contains the class declaration for the Tree class. It defines the private and public members of the Tree class, including the constructor and methods for drawing different parts of the tree.

2. **Tree.cpp:** This source file contains the implementation of the methods declared in the Tree class header file. It includes the constructor and various drawing methods responsible for drawing the top, middle, bottom parts, and trunk of the tree.

3. **main.cpp:** This source file contains the main function of the program. It prompts the user to enter the height of the tree, creates a Tree object with the specified height, and then calls the draw method to draw the tree.

## Functionality:
The program allows the user to specify the height of the tree, and then it visually draws the tree using ASCII art. The tree consists of a triangular-shaped crown and a trunk. The crown is formed by stacking rows of asterisks (*) in a pyramid-like structure, and the trunk is represented by a single column of asterisks (*) at the bottom.

## Usage:
To use the program, simply compile all three source files (Tree.h, Tree.cpp, main.cpp) together using a C++ compiler. Then run the compiled executable. Follow the on-screen instructions to enter the height of the tree when prompted. The program will then display the ASCII art representation of the tree based on the specified height.
### Example:
<p>Input:</p>
<p><code>Enter the height of the tree: 4</code></p>

<p>Output:</p>
<code>                                                    *            // 1   BLOCK 1 
                                                    ***           // 2 
                                                   *****          // 3 
                                                  *******         // 4 
                                                   *****          // 1   BLOCK 2 
                                                  *******         // 2 
                                                 *********        // 3 
                                                ***********       // 4 
                                               *************      // 5 
                                              ***************     // 6 
                                                 *********        // 1   BLOCK 3 
                                                ***********       // 2 
                                               *************      // 3 
                                              ***************     // 4 
                                             *****************    // 5 
                                            *******************   // 6 
                                                     *            // 1   BLOCK 4 
                                                     *            // 2 
                                                     *            // 3 
                                                     *            // 4</code>

## Project Purpose:
This project serves as an educational tool for learning C++ programming concepts, including classes, objects, constructors, methods, header files, and basic input/output operations. It provides hands-on experience in implementing a simple object-oriented program and demonstrates the use of C++ features for practical problem-solving.
