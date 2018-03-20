#pragma once

class ChessBoard;

class Pieces {
public:
	unsigned int iType;
	unsigned int iTeam;

public:
	enum {
		King = 0,
		Queen = 1,
		Bishop = 2,
		Knight = 3,
		Rook = 4,
		Pawn = 5
	};

	enum {
		Black = 0,
		White = 1
	};
	
protected:
	//Pieces();
	Pieces(unsigned int iType, unsigned int iTeam);

public:
	Pieces(const Pieces &piece);

	virtual bool Move(int ax, int ay, int bx, int by) const;
	virtual bool Attack(int ax, int ay, int bx, int by) const;

public:
	const unsigned int &Type = iType;
	const unsigned int &Team = iTeam;
};