//
// file: Board.h
// description: header file for the game board
//
// @author Chenyang Lin
// // // // // // // // // // // // // // // //

#ifndef _BOARD_
#define _BOARD_

#define BOARD_LINE_WIDTH 6       // Width of each of the two lines that delimit the board
#define BLOCK_SIZE 16            // Width and Height of each block of an arrow
#define BOARD_POSITION 800       // Center position of the board from the left of the screen 
#define BOARD_WIDTH 25           // Board width in blocks
#define BOARD_HEIGHT 40          // Board height in blocks
#define PIECE_BLOCKS 5           // Number of horizontal and vertical blocks of an arrow
#define MIN_VERTICAL_MARGIN 20   // Minimum vertical margin for the board limit
#define MIN_HORIZONTAL_MARGIN 20 // Minimum horizontal margin for the board limit

class Board{

    public:

        Board(int ScreenHeight);

        int GetYPosInPixels(int Pos);

}