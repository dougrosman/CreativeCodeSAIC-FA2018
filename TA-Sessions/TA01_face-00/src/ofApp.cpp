#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetCircleResolution(50);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw()
{
    ofBackground(127);
    
    float w = ofGetWidth();
    float h = ofGetHeight();
    
//    float w = ofGetMouseX();
//    float h = ofGetMouseY();
    
    float x = ofGetMouseX();
    float y = ofGetMouseY();
    
    ofSetRectMode(OF_RECTMODE_CENTER);
    
    
    ofSetColor(ofColor::yellow);
    ofNoFill();
    
    ///////////////////// HEAD ///////////////////////
    
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
    
    
    /////// HAIR //////////
    
    for(int i = 0; i < 100; i+=10)
    {
        ofDrawLine(i, 50, i, 150);
    }
    
    
    
//    /// Left Eye
//    ofSetColor(ofColor::bisque);
//    ofDrawRectangle(350, 300, 50, 50);
//    ofDrawEllipse(350, 300, 4, 4);
//    ofDrawBitmapString("350, 300", 350, 300);
//
//    /// Right Eye
//    ofFill();
//    ofSetColor(0, 180, 210);
//    ofDrawEllipse(450, 300, 50, 50);
//    ofDrawEllipse(450, 300, 4, 4);
//    ofDrawBitmapString("450, 300", 450, 300);
    
    //////////////////// NOSE ////////////////////////
    
    //ofDrawTriangle
    
    //////////////////// MOUTH ///////////////////////
    
    
    
    
    
}

