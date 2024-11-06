#include <stdio.h>

#include "SurfaceT.h"
#include "Vector.h"

struct CellSystem {
	//type T = NULL;
	typedef RGB32 T;
	Vector<SurfaceT<T>> Cell;
};

template<class T>
CellSystem ConstructCellSystem<T>(Vector<SurfaceT<T>>& In) {
	CellSystem C;
	//C.T = T;
	C.Cell = In;

	return C;
}

bool Free(CellSystem& C) {
	Free(C.Cell);
	return true;
}