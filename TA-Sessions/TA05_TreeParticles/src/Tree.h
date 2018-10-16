#pragma once

#include "ofMain.h"

class Tree {

	public:
    
    // constructors
    Tree();
    
		
    // variables
    
    float x; // x position of tree
    float y; // y position of tree
    float scale; // scale of tree
    float vel; // velocity of tree
    
    
    // functions
    
    void update();
    
		
};
