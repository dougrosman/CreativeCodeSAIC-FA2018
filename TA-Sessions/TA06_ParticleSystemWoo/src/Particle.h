#pragma once

#include "ofMain.h"
////// Particle.h

class Particle
{
	public:
		
    // CONSTRUCTOR
    
    Particle();
    
    // VARIABLES
    
    // Position
    glm::vec3 pos;
    
    // velocity
    glm::vec3 vel;
    
    // acceleration
    glm::vec3 accel;
    
    // drag
    float drag;
    
    // size
    float size;
    
    // color
    ofColor color;
    
    // FUNCTIONS
    
    void setup();
    void update();
    void draw();
    
};
