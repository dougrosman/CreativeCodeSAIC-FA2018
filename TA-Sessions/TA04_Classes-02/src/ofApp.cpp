#include "ofApp.h"


void ofApp::setup()
{

}

void ofApp::update()
{

}


void ofApp::draw()
{
    int t = ofGetElapsedTimeMillis();
    
    if(t % 5000 == 0)
    {
        timeValues.push_back(t);
        
        for(int i = 0; i < timeValues.size(); i++)
        {
            std::cout << timeValues[i] << std::endl;
        }
    }
    
    
    
   
    
    
}

void ofApp::keyPressed(int key)
{

}

