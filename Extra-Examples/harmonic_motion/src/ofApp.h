#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void draw();
		
    void keyPressed(int key);
    
    
    // Create variables that allow you to manipulate the sketch in real-time.
    
    float circleSize = 0;   // size of each circle. Used to determine spacing between circles
    float heightRange = 1;  // height of the sine wave oscillations
    float rate = 10000; // how quickly the sine wave cycles
    float circleSizeMult = 1; // enlarges the circles without affecting spacing
    float alpha = 255;  // allows you to change the alpha channel (opacity) of the circles
    float sat = 255; // allows you to change the saturation
    float lineWidth = 1; // allows you to change line thickness
    bool drawCircles = true;
    bool drawLines = false;
    bool drawInstructions = true;
};
