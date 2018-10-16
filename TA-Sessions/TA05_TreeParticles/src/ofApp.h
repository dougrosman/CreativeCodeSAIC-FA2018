#pragma once

#include "ofMain.h"
#include "Tree.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
    
    
    Tree myTree;
    
    // Create textures to store our image files
    
    ofTexture trunk;
    ofTexture branch;
    ofTexture leaf;
    
    // Vector for storing our Tree objects
    // Remember, a vector in this case is a container for objects
    std::vector<Tree> trees;
    
    
		
};
