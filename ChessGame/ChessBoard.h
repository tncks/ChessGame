#pragma once

class Pieces;

class ChessBoard {
private:
	Pieces * pBoard[8][8];

public:
	ChessBoard(bool bStd = true);
	~ChessBoard(void);

	Pieces *GetPiece(int x, int y);
	const Pieces *GetPiece(int x, int y) const;

	bool MoveTo(int ax, int ay, int bx, int by);
};