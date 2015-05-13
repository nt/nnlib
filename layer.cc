#include <functional>

#include <Eigen/Dense>

#include "layer.h"

using Eigen::Matrix;

namespace nnlib {

template<int N, int M> Matrix<float, 1, M> Layer<N, M>::forward(Matrix<float, N, 1> input) {
	Matrix<float, 1, M> out;
	return out;	
};

}
