#pragma once

////// ofApp.h

#include "ofMain.h"
#include "Particle.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
    
    std::vector<Particle> particles;
    
		
};
