#include "ofApp.h"


void ofApp::setup()
{
    ofBackground(0);
    
    // load our image files into our texture objects
    ofLoadImage(trunk, "trunk.png");
    ofLoadImage(branch, "branch.png");
    ofLoadImage(leaf, "leaf.png");
    
    // Load up our trees vector using a for-loop
    for(int i = 0; i < 20; i++)
    {
        Tree tempTree; // create a temporary Tree object
        tempTree.x = ofRandom(200, 400); // set the x-value
        tempTree.y = ofRandom(100, 600); // set the y-value
        tempTree.scale = ofRandom(3);     // set the size
        tempTree.vel = ofRandom(-2, 2);  // set the velocity
        
        // now that our tempTree is full of new values, push tempTree into the trees vector
        trees.push_back(tempTree);
        
        // Note: each time this for-loop cycles, tempTree is cleared, filled with new x, y, size and vel values, and then pushed into the trees vector
    }
}


void ofApp::update()
{
    // update the position information for EACH TREE in the trees vector
    for (auto& t : trees)
    {
        t.update();
    }
    // THIS FOR-LOOP BELOW THAT I COMMENTED OUT IS DOING THE SAME THING AS THE FOR-LOOP DIRECTLY ABOVE
//    for(int i = 0; i < trees.size(); i++)
//    {
//        trees[i].update();
//    }
}


void ofApp::draw()
{
    
    // Set the anchor points of our textures. We only need to do this once.
    trunk.setAnchorPoint(trunk.getWidth()/2, trunk.getHeight()/2);
    branch.setAnchorPoint(branch.getWidth()/2, branch.getHeight()/2);
    leaf.setAnchorPoint(leaf.getWidth()/2, leaf.getHeight()/2);
    
    
    // Loop through each tree in the trees vector
    for (auto& t : trees)
    {
        ofPushMatrix();
        //scale up the tree based on the size of the current tree
        ofScale(t.scale, t.scale);
        
        // draw the tree components based on the x & y values of the current tree.
        branch.draw(t.x, t.y);
        leaf.draw(t.x, t.y);
        trunk.draw(t.x, t.y);
        ofPopMatrix();
    }
    
    
    // THIS FOR-LOOP BELOW THAT I COMMENTED OUT IS DOING THE SAME THING AS THE FOR-LOOP DIRECTLY ABOVE
//    for (int i = 0; i < trees.size(); i++)
//    {
//        ofPushMatrix();
//        ofScale(trees[i].size, trees[i].size);
//        branch.draw(trees[i].x, trees[i].y);
//        leaf.draw(trees[i].x, trees[i].y);
//        trunk.draw(trees[i].x, trees[i].y);
//        ofPopMatrix();
//    }
    
}


