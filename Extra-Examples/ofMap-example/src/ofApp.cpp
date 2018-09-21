#include "ofApp.h"


void ofApp::setup()
{
    ofBackground(0);
    ofSetCircleResolution(80);
}

void ofApp::draw()
{
    
    /* DRAW A CIRCLE THAT CHANGES SIZE AND COLOR BASED ON
     MOUSE POSITION TO DEMONSTRATE ofMap */
    
    
    // Use ofMap to calculate the hue value of the circle based
    // on your MouseY position
    float hue = ofMap(ofGetMouseY(), 0, 800, 0, 255);
    ofSetColor(ofColor::fromHsb(hue, 255, 255));
    
    // Use ofMap to calculate the size of the circle based on
    // your MouseX position
    float size = ofMap(ofGetMouseX(), 0, 800, 10, 400);
    ofDrawEllipse(ofGetWidth()/2, ofGetHeight()/2, size, size);
    
    // Display the ACTUAL values coming out of your mouse (0-800)
    ofDrawBitmapStringHighlight("Actual: " + ofToString(ofGetMouseX()),
                       ofGetWidth()/2, ofGetHeight()/2 + 20 );
    
    // Display the MAPPED values we're using to set the
    // circle size (10-400)
    ofDrawBitmapStringHighlight("Mapped: " + ofToString(size),
                       ofGetWidth()/2, ofGetHeight()/2);

}
