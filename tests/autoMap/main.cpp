// AutoMap Testing
//
// Copyright 2018 Pieter du Preez <pdupreez@gmail.com>
//
// This file is part of Mozzi.
//
// Mozzi is licensed under a Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License.

#include <iostream>

long map(long x, long in_min, long in_max, long out_min, long out_max)
{
	return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

#include <AutoMap.h>

int main()
{
	std::cout << "Instantiating AutoMap with (10,70,10,70)" << std::endl;
	AutoMap testAutoMap(10,70,10,70);
	int n, i = -20;
	while (i<100) {
		n = testAutoMap(i);
		n = map(i,10,70,10,70);
		std::cout << "\tvs.\t" << n << "\tfrom main map(" << i << ",10,70,10,70)" << std::endl;
		i += 10;
	}
	while (i>-50) {
		n = testAutoMap(i);
		n = map(i,10,70,10,70);
		std::cout << "\tvs.\t" << n << "\tfrom main map(" << i << ",10,70,10,70)" << std::endl;
		i -= 10;
	}
	return 0;
}
