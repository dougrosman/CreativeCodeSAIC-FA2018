#pragma once

#include "ofMain.h"
#include "Face.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void draw();

    
    Face myFace;
    
    // Declare a Faces vector to store face objects
    std::vector<Face> allMyFaces;
		
};
