#include "ofApp.h"


void ofApp::setup()
{
    xSpeed = 40;
    ySpeed = 24;
    ofSetBackgroundAuto(FALSE);
    ofBackground(30);
}

void ofApp::update()
{
    xPos+=xSpeed*xDirection;
    yPos+=ySpeed*yDirection;
    
    if(xPos > ofGetWidth())
    {
        xDirection *=-1;
    }
    if(xPos < 0)
    {
        xDirection*=-1;
    }
    if(yPos > ofGetHeight())
    {
        yDirection *=-1;
    }
    if(yPos < 0)
    {
        yDirection*=-1;
    }
}

void ofApp::draw()
{
    ofSetColor(ofColor::fromHsb(ofRandom(255), 150, 255));
    ofDrawCircle(xPos, yPos, 16);
    ofSetColor(ofColor::fromHsb(255, 150, 255, 200));
    ofDrawCircle(xPos, yPos, 14);
    
    ofSetColor(0, 10);
    ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
}

