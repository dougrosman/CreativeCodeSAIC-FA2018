#include "ofApp.h"


void ofApp::setup()
{
    ofBackground(0);
    ofSetBackgroundAuto(FALSE);
    ofSetFrameRate(60);
}

void ofApp::draw()
{

    ofSetLineWidth(3);
    
    // Click and drag to draw a line.
    if(ofGetMousePressed())
    {
        
        // Get the current Mouse position
        float currX = ofGetMouseX();
        float currY = ofGetMouseY();
        
        // Draw our line
        ofDrawLine(prevX, prevY, currX, currY);
        
        // Store our most recent current mouseX and mouseY into prevX and prevY for drawing the next connecting line.
        prevX = currX;
        prevY = currY;
        
    }
    else
    {
        // Set a new color for each new drawn line
        ofSetColor(ofColor::fromHsb(ofRandom(255), 255, 255));
        
        // keep updating prevX and prevY with current mouse position so your lines are drawn correctly.
        prevX = ofGetMouseX();
        prevY = ofGetMouseY();
    }
}

void ofApp::keyPressed(int key)
{
    // press 'c' to clear the background
    if(key == 'c')
    {
        ofClear(0);
    }
}

