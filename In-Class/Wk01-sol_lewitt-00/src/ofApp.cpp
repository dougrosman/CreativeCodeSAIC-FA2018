#include "ofApp.h"

// Draws figures from Sol Lewitt instructions that change size dynamically based on mouse location.

//_Wall Drawing #327_ - On a black wall, a white trapezoid within which are white vertical parallel lines and a white square within which are white horizontal parallel lines. The vertical lines within the trapezoid do not enter the square, and the horizontal lines within the square do not enter the trapezoid.

void ofApp::setup()
{

}

void ofApp::draw()
{
    
    ofBackground(0);
    
    //Get the width and height of the screen
    int width = ofGetWidth();
    int height = ofGetHeight();
    
    //Get the center of our x dimension;
    //float is short for 'floating point'
    //centerX is a float in case I need to divi
    float centerX = width/2;
    
    //Get the center Y
    float centerY = height/2;
    
    glm::vec2 center(centerX, centerY);
    //glm::vec2 center(ofGetMouseX(), ofGetMouseY());
    
    ofFill();
    ofSetColor(255);
    ofDrawCircle(center, 10);
    
    glm::vec2 startPoint(200, 200);
    
    //set the top width of the trapezoid
    // float topWidth = 400;
    float topWidth = ofMap(ofGetMouseX(), 0, 1440, 1, 500);
    
    //set the bottom width
    //float bottomWidth = 600;
    float bottomWidth = ofMap(ofGetMouseX(), 0, 1440, 1, 800);
    //set the height
    // float trapHeight = 300;
    float trapHeight = ofMap(ofGetMouseY(), 0, 900, 1, 800);
    
    glm::vec2 p0(centerX - topWidth/2, centerY - trapHeight/2);
    glm::vec2 p1(centerX + topWidth/2, centerY - trapHeight/2);
    glm::vec2 p2(centerX + bottomWidth/2, centerY + trapHeight/2);
    glm::vec2 p3(centerX - bottomWidth/2, centerY + trapHeight/2);
    
    glm::vec2 topLeftPoint(centerX - bottomWidth/2, centerY - trapHeight/2);
    glm::vec2 topRightPoint(centerX + bottomWidth/2, centerY - trapHeight/2);
    
    ofNoFill;
    ofSetLineWidth(2);
    ofSetColor(255);
    ofDrawLine(p0, p1);
    ofDrawLine(p1, p2);
    ofDrawLine(p2, p3);
    ofDrawLine(p3, p0);
    
    // Draw the lines inside
    int spacing = 10;
    int lineStart = centerX - bottomWidth/2 + 2;
    int lineEnd = centerX - 2 + bottomWidth/2;
    
    for(int x = lineStart; x < lineEnd; x+=spacing)
    {
        // we will use x to set the x position of our lines
        ofDrawLine(x, centerY-trapHeight/2, x, centerY+trapHeight/2);
    }
    
    int squareSize = ofMap(ofGetMouseX(), 0, 1440, 1, 300);
    
    ofSetRectMode(OF_RECTMODE_CENTER);
    ofSetColor(0);
    ofDrawTriangle(topLeftPoint, p0, p3);
    ofDrawTriangle(p1, topRightPoint, p2);
    
    // Draw Rectangle masks
    ofSetColor(255);
    ofDrawRectangle(centerX, centerY, squareSize+2, squareSize+2);
    ofSetColor(0);
    ofDrawRectangle(centerX, centerY, squareSize, squareSize);
    
    for(int y = centerY - squareSize/2; y < centerY+squareSize/2; y+=spacing)
    {
        ofSetColor(255);
        ofDrawLine(centerX - squareSize/2, y, centerX + squareSize/2, y);
    }
    
}

