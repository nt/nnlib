#include "layer.h"

#include <Eigen/Dense>

#include <stdio.h>

int main( int argc, const char* argv[] )
{
	nnlib::Layer<4,2> l;
	Eigen::Matrix<float, 4, 1> in;
	auto out = l.forward(in);
	printf( "\nHello World\n\n" );
}
