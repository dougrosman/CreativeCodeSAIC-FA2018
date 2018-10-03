#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
    bigCaslon.load("BigCaslon.ttf", 20, true, true);
    ofBackground(ofColor::fromHsb(255, 100, 255));
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    // convenience
    float w = ofGetWidth();
    float h = ofGetHeight();
    
    float sinValue = sin(ofGetElapsedTimeMillis());
    
    
    ofPushMatrix();
    ofTranslate(w/2, h/2);
    
    //float rotation = ofGetElapsedTimef();
    
    ofRotateZDeg(sinValue);
    
    ofSetColor(ofColor::fromHsb(120, 255, 255));
    bigCaslon.drawString("HEY THIS IS MY TEXT, NOT YORUS", 0, 0);
    
    ofPopMatrix();

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

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
