#include "Face.h"



// Our face class only has one method: drawFace().
// All we can do is draw our face objects.
// Each time we call the drawFace() function, we will draw a face
// based on an x, y, size and hue value we set when we call drawFace()
// in our ofApp file.

void Face::drawFace(float x, float y, float size, float hue)
{
    ofSetRectMode(OF_RECTMODE_CENTER);
    
    
    // DRAW HEAD
    ofSetColor(ofColor::fromHsb(hue, 255, 127));
    ofDrawEllipse(x, y, size, size*2);
    
    // DRAW EYE
    
    // draw sclera
    ofSetColor(255);
    ofDrawEllipse(x, y - size/2, size/2, size/6);
    
    // draw pupil
    ofSetColor(ofColor::fromHsb(hue, 255, 80));
    ofDrawEllipse(x, y - size/2, size/6, size/6);
    
    
    // DRAW MOUTH
    ofSetColor(ofColor::fromHsb(hue, 255, 255));
    ofDrawRectangle(x, y + size/2, size/2, size/6);
    
    // draw "lip creator"
    ofSetColor(0);
    ofDrawLine(x - size/4, y + size/2, x + size/4, y + size/2);
    
    
    
    
    
}
