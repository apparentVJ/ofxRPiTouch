#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    touch.init("/dev/input/event0");    // change according to your setup (evdev)
    ofLog()<<touch.getName();
    
}

//--------------------------------------------------------------
void ofApp::update(){
/*
    cout << "X: " << touch.getCoordTouch().x << endl
                  << "Y: " << touch.getCoordTouch().y << endl
                  << "BTN: " << touch.getButton() << endl
                  << "mtSlot: " << touch.getMTSlot() + 1 << endl
                  << "absPosX: " << touch.getAbsPos().x << endl
                  << "absPosY: " << touch.getAbsPos().y << endl
                  << "AbsTrackingID: " << touch.getAbsTrackingID() << endl
                  << endl;
*/
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    stringstream statusStream;
    ofSetColor(255,255,255);
    
    statusStream << "X: " << touch.getCoordTouch().x << endl
    << "Y: " << touch.getCoordTouch().y << endl
    << "BTN: " << touch.getButton() << endl
    << "mtSlot: " << touch.getMTSlot() + 1 << endl
    << "absPosX: " << touch.getAbsPos().x << endl
    << "absPosY: " << touch.getAbsPos().y << endl
    << "AbsTrackingID: " << touch.getAbsTrackingID() << endl
    << endl;
    ofDrawBitmapString(statusStream.str(),20,20);

    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}

//--------------------------------------------------------------
void ofApp::exit(){

    touch.exit();

}
