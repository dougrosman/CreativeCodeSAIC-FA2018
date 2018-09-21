#include "ofApp.h"


void ofApp::setup()
{
    img1.load("kitty.png");
    
    ofSetRectMode(OF_RECTMODE_CENTER);
    bgColor = ofColor::pink;
    ofBackground(bgColor);
    ofSetBackgroundAuto(false);
}


void ofApp::update()
{

}

void ofApp::draw()
{
    float w = ofGetWidth();
    float h = ofGetHeight();
    
    if(ofGetMousePressed(OF_MOUSE_BUTTON_LEFT))
    {
        int size = ofRandom(100, 300);
        ofSetColor(ofColor::fromHsb(ofRandom(255), 255, 255));
        img1.draw(ofGetMouseX(), ofGetMouseY(), size, size);
    }
}

void ofApp::keyPressed(int key)
{
    if(key == ' ')
    {
        ofClear(bgColor);
    }
}

