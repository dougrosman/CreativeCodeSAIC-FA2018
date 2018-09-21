#include "ofApp.h"


void ofApp::setup()
{
    ofBackground(0);
    ofSetBackgroundAuto(FALSE);
    ofSetFrameRate(60);
}

void ofApp::update()
{

}


void ofApp::draw()
{
    float width = ofGetWidth();
    float height = ofGetHeight();
    
    ofSetLineWidth(3);
    ofSetColor(ofColor::fromHsb(255, 255, 255));
    
    if(ofGetMousePressed())
    {
        // Get the current Mouse position
        float currX = ofGetMouseX();
        float currY = ofGetMouseY();
        
        // Draw our line
        ofDrawLine(prevX, prevY, currX, currY);
        
        prevX = currX;
        prevY = currY;
        
        
        
    }
    else
    {
        prevX = ofGetMouseX();
        prevY = ofGetMouseY();
    }
    
    
}


void ofApp::keyPressed(int key)
{
    if(key == 'c')
    {
        ofClear(0);
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key)
{
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
