#include "Screen.h"



Screen::Screen()
{
}


Screen::~Screen()
{
}

inline char Screen::get(pos r, pos c) const
{
	return contents[r*width + c];
}

Screen & Screen::move(pos r, pos c)
{
	// TODO: �ڴ˴����� return ���
	cursor = r*width + c;
	return *this;
}

void Screen::func() const
{
	mute_times++;
}
