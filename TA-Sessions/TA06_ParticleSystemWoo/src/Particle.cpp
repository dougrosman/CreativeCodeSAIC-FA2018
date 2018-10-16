#include "Particle.h"

////// Particle.cpp

Particle::Particle()
{
    pos = {0, 0, 0};
    vel = {0, 0, 0};
    accel = {0, 0, 0};
    
    
    size = 0;
    color = ofColor::black;
}


void Particle::update()
{
    vel = vel + accel;
    
    //vel = vel * drag;
    
    pos = pos + vel;
}

void Particle::setup()
{
    pos = {ofGetMouseX(), ofGetMouseY(), 0};
    vel = {ofRandom(-2, 2), ofRandom(-6, -2), 0};
    accel = {0, .01, 0 };
    size = ofRandom(2, 6);
    drag = .05;
    color = ofColor::fromHsb(ofRandom(150), 150, 255, 150);
}

