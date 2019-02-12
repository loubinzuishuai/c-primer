#pragma once
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
class Screen
{
public:
	typedef string::size_type pos;
	Screen() = default;
	Screen(pos ht, pos wd, char c) :height(ht), width(wd), contents(ht*wd, c) {}
	~Screen();
	char get() const { return contents[cursor]; }
	inline char get(pos r, pos c) const;
	Screen &move(pos r, pos c);
	void func() const;
private:
	pos cursor = 0;
	pos height = 0, width = 0;
	string contents;
	mutable int mute_times = 0;
};

