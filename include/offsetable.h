#ifndef OFFSETABLE_H
#define OFFSETABLE_H

#include "general_types.h"

class Offsetable
{
public:
	Offsetable() { _offset.x = _offset.y = 0; }
	General::Point<float> _offset;
};

#endif
