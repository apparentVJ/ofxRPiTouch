#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	touch.init("/dev/input/event2");
	ofLog()<<touch.getName();
	
	ofSetBackground(20);
	ofSetFramerate(30);

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

	// for every touch point we draw a circle of 20 width.
	

	
	int x = touch.getCoordTouch().x;
	int y = touch.getCoordTouch().y;

	cout << "coord x: " << touch.getCoordTouch().x
	     << "coord y: " << touch.getCoordTouch().y
		<< endl;

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
