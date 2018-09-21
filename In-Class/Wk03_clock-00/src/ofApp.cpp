#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetCircleResolution(60);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    float seconds = ofGetSeconds();
    float minutes = ofGetMinutes();
    float hours = ofGetHours();
    
    float sDeg = ofMap(seconds, 0, 60, 0, 360);
    float mDeg = ofMap(minutes, 0, 60, 0, 360);
    float hDeg = ofMap(hours, 0, 24, 0, 720);
    
    float w = ofGetWidth();
    float h = ofGetHeight();
    
    ofSetLineWidth(3);
    ofPushMatrix();
        ofTranslate(w/2, h/2);
        ofRotateZDeg(180);
        ofSetColor(0);
        ofDrawCircle(0, 0, 310);
    
        // Draw second hand
        ofPushMatrix();
            ofSetColor(255, 0, 0);
            ofRotateZDeg(sDeg);
            ofDrawLine(0, 0, 0, 300);
        ofPopMatrix();
    
        // Draw minute hand
        ofPushMatrix();
            ofSetColor(0, 255, 0);
            ofRotateZDeg(mDeg);
            ofDrawLine(0, 0, 0, 200);
        ofPopMatrix();
    
        // Draw hour hand
        ofPushMatrix();
            ofSetColor(0, 0, 255);
            ofRotateZDeg(hDeg);
            ofDrawLine(0, 0, 0, 100);
        ofPopMatrix();
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
