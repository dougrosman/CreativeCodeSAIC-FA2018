#include "ofApp.h"


void ofApp::setup()
{
    // convenience variables!
    float w = ofGetWidth();
    float h = ofGetHeight();
    
    // store 10 faces in a vector
    for(int i = 0; i < 10; i++)
    {
        // create a temporary Face object and set its attributes
        Face newFace;
        newFace.x = ofRandom(200, 600);
        newFace.y = ofRandom(300, 500);
        newFace.size = ofRandom(50, 300);
        newFace.hue = ofRandom(255);
        
        // push that temporary Face object into the Faces vector we created
        allMyFaces.push_back(newFace);
    }
}



void ofApp::draw()
{
    
    ofSetCircleResolution(80);
    
    // convenience variables!
    float w = ofGetWidth();
    float h = ofGetHeight();
    
    for(int i = 0; i < allMyFaces.size(); i++)
    {
        Face faceToDraw = allMyFaces[i];
        
        faceToDraw.drawFace(allMyFaces[i].x, allMyFaces[i].y, allMyFaces[i].size, allMyFaces[i].hue);
    }
    
    

}




