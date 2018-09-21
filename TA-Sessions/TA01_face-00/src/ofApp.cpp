#include "ofApp.h"


void ofApp::setup()
{
    
    ofSetCircleResolution(50);
    ofBackground(0);
}


void ofApp::draw()
{
    // Create "convenience variables" so I don't have to keep typing long things.
    float w = ofGetWidth();
    float h = ofGetHeight();
    float x = ofGetMouseX();
    float y = ofGetMouseY();
    
    // Draw rectangles from the center
    ofSetRectMode(OF_RECTMODE_CENTER);
    
    // Draw the face one component at a time.
    
    ///////////////////// HEAD ///////////////////////
    
    ofSetLineWidth(2);
    ofSetColor(ofColor::yellow);
    ofNoFill();
    ofDrawEllipse(x, y, w/3, w/2);
    
    
    ///////////////////// EYES ////////////////////////
    
    /// Left Eye
    ofSetColor(ofColor::bisque);
    ofDrawRectangle(x - 50, y - 100, 50, 50);
    ofDrawEllipse(x - 50, y - 100, 4, 4);
    //ofDrawBitmapString("350, 300", 350, 300);
    
    /// Right Eye
    ofFill();
    ofSetColor(0, 180, 210);
    ofDrawEllipse(x+50, y - 100, 50, 50);
    ofDrawEllipse(x+50, y - 100, 4, 4);
    //ofDrawBitmapString("450, 300", 450, 300);
    

    ///////// HAIR //////////
    
    for(int i = -40; i < 70; i+=10)
    {
        ofDrawLine(x+i, y-240, x+i-20, y-170);
    }
    
    //////////////////// NOSE ////////////////////////
    
    ofSetColor(ofColor::pink);
    ofDrawRectangle(x, y + 20 , 20, 30);
    
    //////////////////// MOUTH ///////////////////////
    
    ofSetColor(ofColor::red);
    ofDrawRectangle(x, y + 120 , 80, 20);
    
}

