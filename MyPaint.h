/*
Project Group: Chris Groce, Kevin McGinn, Nick Taylor
CSE 20212

MyPaint.h

This is the interface for the MyPaint class, which
acts as a display for the TowerDefense game
 */

#ifndef MYPAINT_H_
#define MYPAINT_H_
 
//!
//! Yo: the Q_OBJECT macro tells us that this class can have
//! slots and signals.  It also tells qmake to compile this
//! class in a special way
//!

#include <QWidget>
#include "Board.h"

using namespace std;

class MyPaint : public QWidget {
 	Q_OBJECT

public:
	MyPaint(QWidget *parent = 0);

protected:
        void paintEvent(QPaintEvent *e); //puts graphics on the screen
        void mousePressEvent(QMouseEvent *e); //interprets mouse presses

private:
        //data
        Board myBoard; //Board the game is playing on
        int windowHorizontal; //horizontal window size
        int windowVertical; //vertical window size
        int cellDim; //dimension of each cell
        int numRows; //number of rows on screen
        int numCols; //number of cols on screen
        //helper functions
        int onMoveButton(int, int); //returns whether or not mouse click is within the bounds of the movement button
};

#endif