#pragma once
#include <stdio.h>

#include "SurfaceT.h"
#include "Vector.h"

struct CellSystem {
	//type T = NULL;
	typedef RGB32 T;
	Vector<SurfaceT<T>> Cell;
};

template<class T> CellSystem ConstructCellSystem<T>(Vector<SurfaceT<T>>& In);
bool Free(CellSystem& C);