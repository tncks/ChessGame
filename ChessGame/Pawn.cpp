#include "stdafx.h"
#include "Pawn.h"

#define myabs(x) ((x)<0 ? -(x):(x))

Pawn::Pawn(unsigned int iTeam) : Pieces(Pieces::Pawn, iTeam)
{

}

bool Pawn::Move(int ax, int ay, int bx, int by) const {
	if ((ax==bx)&&(myabs(by-ay)==1)) {
		return Pieces::Move(ax, ay, bx, by);
	}
	
	// ������ ���� ���ߴµ� ó���� �����Ҷ� bFirst=true �̸� Pawn �ѹ��� ��ĭ �̵��Ҽ� �����ϱ� -> ��ĭ or ��ĭ �������� �̵��ϴ°� �����������

	return false;
}