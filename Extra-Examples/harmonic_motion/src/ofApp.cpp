#include "ofApp.h"


// NOTE: once you run the sketch, click the green dot in the corner of your window
// to make it fullscreen!

void ofApp::setup()
{
    ofBackground(0);
    ofSetCircleResolution(80);
    circleSize = 2;
}

void ofApp::draw()
{
    // Create variables w and h to hold screen width and height values
    float w = ofGetWidth();
    float h = ofGetHeight();
    
    // How far apart circles are drawn
    float spacing = circleSize*2;
    
    // Sets the limit for the right-most circle to be drawn.
    float rightLimit = w - spacing + 1;
    
    // Use a for-loop to draw the dots.
    // Why i = spacing?: doesn't start by drawing the circle right on the left edge of the screen
    // Why i < rightLimit?: I don't want to draw circles on the right edge of the screen
    // Why i+=spacing?: I want to draw evenly-spaced circles based on the 'spacing' value I set
    for(int i = spacing; i < rightLimit; i+=spacing)
    {
        float t = ofGetElapsedTimef();
        
        // Base the hue value of the each circle on its vertical position
        float hue = ofMap(sin(ofRadToDeg(t*i/rate))*heightRange, -heightRange, heightRange, 0, 255);
        
        ofPushMatrix();
        // Translate the x-value of each dot based on spacing, translate the y-value to the center of the screen.
        ofTranslate(i, h/2);
        
            // Set the color of the circles/lines
            ofSetColor(ofColor::fromHsb(hue, sat, 255, alpha));
        
            if(drawCircles)
            {
                // Draw the circle based on its rate and point in the loop.
                ofDrawCircle(0, sin(ofRadToDeg(t*i/rate))*heightRange, (circleSize*circleSizeMult)/2);
            }
    
            if(drawLines)
            {
                // Draw lines based on dot positions, with some extra cosine fun thrown in for the x-values
                ofSetLineWidth(lineWidth);
                ofDrawLine(cos(ofRadToDeg(t*i/rate))*heightRange, sin(ofRadToDeg(t*i/rate))*heightRange, cos(ofRadToDeg(t*(i+spacing)/rate))*heightRange, sin(ofRadToDeg(t*(i+spacing)/rate))*heightRange);
            }
        ofPopMatrix();
        //std::cout << sin(ofRadToDeg(t*i/20000))*200 << std::endl;
    }
    
    // Display interaction functions
    
    if(drawInstructions)
    {
        ofDrawBitmapStringHighlight("Press 'H' to show or hide these instructions", 20, 40);
        ofDrawBitmapStringHighlight("Each parameter can be increased or decreased by pressing or holding down its corresponding keys", 20, 55);
        ofDrawBitmapString("------------------------------------------------------------------------------------------------", 20, 70);
        ofDrawBitmapStringHighlight("Size/Spacing: " + ofToString(circleSize) + " | '<' , '>'", 20, 90);
        ofDrawBitmapStringHighlight("Amplitude: " + ofToString(heightRange) + " | '[' , ']'", 20, 105);
        ofDrawBitmapStringHighlight("Rate: " + ofToString(rate) + " | '9' , '0'", 20, 120);
        ofDrawBitmapStringHighlight("Size multiplier: " + ofToString(circleSizeMult) + " | '-' , '+'", 20, 135);
        ofDrawBitmapStringHighlight("Alpha (opacity): " + ofToString(alpha) + " | 'A' , 'S'", 20, 150);
        ofDrawBitmapStringHighlight("Saturation: " + ofToString(sat) + " | 'Q' , 'W'", 20, 165);
        ofDrawBitmapStringHighlight("Line Thickness: " + ofToString(lineWidth) + " | 'Z' , 'X'", 20, 180);
        ofDrawBitmapStringHighlight("Draw Circles: " + ofToString(drawCircles) + " | 'C'", 20, 195);
        ofDrawBitmapStringHighlight("Draw Lines: " + ofToString(drawLines) + " | 'L'", 20, 210);
    }
    
}

// Set up key pressed to allow for manipulating parameters in real time
void ofApp::keyPressed(int key)
{
    if(key == ',' && circleSize > 1)
    {
        circleSize--;
    }
    else if(key == '.')
    {
        circleSize++;
    }
    
    else if(key == '[' && heightRange > 1)
    {
        heightRange-=4;
    }
    
    else if(key == ']' && heightRange < 1440)
    {
        heightRange+=4;
    }
    
    else if(key == '9' && rate > 1001)
    {
        rate-=1000;
    }
    
    else if(key == '0' && rate < 150000)
    {
        rate+=1000;
    }
    
    else if(key == '-' && circleSizeMult > 1)
    {
        circleSizeMult-=1;
    }
    
    else if(key == '=' && circleSizeMult < 100)
    {
        circleSizeMult+=1;
    }
    
    else if(key == 'a' && alpha > 0)
    {
        alpha-=1;
    }
    
    else if(key == 's' && alpha < 255)
    {
        alpha+=1;
    }
    
    else if(key == 'q' && sat > 0)
    {
        sat-=2;
    }
    
    else if(key == 'w' && sat < 255)
    {
        sat+=2;
    }
    
    else if(key == 'z' && lineWidth > 1)
    {
        lineWidth-=1;
    }
    
    else if(key == 'x' && lineWidth < 200)
    {
        lineWidth+=1;
    }
    
    else if (key == 'l')
    {
        drawLines = !drawLines;
    }
    
    else if (key == 'c')
    {
        drawCircles = !drawCircles;
    }
    else if (key == 'h')
    {
        drawInstructions = !drawInstructions;
    }
    
}

