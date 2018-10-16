#include "ofApp.h"

////// ofApp.cpp

void ofApp::setup()
{
    ofBackground(0);
    
    for(int i = 0; i < 20000; i++)
    {
        Particle p;
        // PUT SOME VALUES INTO p
        p.pos = {ofGetWidth()/2, ofGetHeight()/2, 0 };
        p.vel = {ofRandom(-2, 2), ofRandom(-6, -2), 0};
        p.accel = {0, .01, 0 };
        p.size = ofRandom(2, 6);
        p.drag = .05;
        p.color = ofColor::fromHsb(ofRandom(150), 150, 255, 150);
        
        particles.push_back(p);
    }
}


void ofApp::update()
{
    for(auto& p : particles)
    {
        
        if(p.pos.x > ofGetWidth() || p.pos.x < 0)
        {
            p.pos = {ofGetWidth()/2, ofGetHeight()/2, 0};
            p.vel = {ofRandom(-2, 2), ofRandom(-6, -2), 0};
        }
        
        if(p.pos.y > ofGetHeight())
        {
            p.pos = {ofGetWidth()/2, ofGetHeight()/2, 0};
            p.vel = {ofRandom(-2, 2), ofRandom(-6, -2), 0};
        }
        
        
        p.update();
    }
    
    
    if(ofGetMousePressed())
    {
        Particle p;
        p.setup();
        particles.push_back(p);
    }
    
    
}


void ofApp::draw()
{
    for(auto& p : particles)
    {
        ofSetColor(p.color);
        ofDrawCircle(p.pos, p.size);
    }
    
}



void ofApp::keyPressed(int key)
{
    
    if(key == 'p')
    {
        Particle p;
        p.setup();
        particles.push_back(p);
    }
    
}

