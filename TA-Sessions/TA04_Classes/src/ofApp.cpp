#include "ofApp.h"


void ofApp::setup()
{
    ofBackground(0);
    // int is any whole number
    // float is a number with a decimal
    // char, characters:
    
    char letter = 'a';
    string myName = "doug";
    string theLetterA = "a";
    
    
    font.load("SourceCodePro-Regular.ttf", 20);
    
    
}


void ofApp::update()
{

}


void ofApp::draw()
{
    ofSetRectMode(OF_RECTMODE_CENTER);
    ofSetColor(255);
    ofDrawRectangle(ofGetWidth()/2, ofGetHeight()/2, 400, 100);
    ofSetColor(0, 255, 255);
    font.setLetterSpacing(30);
    font.drawString("hey what's up", ofGetWidth()/2, ofGetHeight()/2);
}


void ofApp::keyPressed(int key)
{

}

