#include <functional>

#include <Eigen/Dense>

using Eigen::Matrix;

namespace nnlib {

template <int N, int M>
class Layer {
 public:
	Matrix<float, N, M> w;
	Matrix<float, M, 1> b;
	std::function<Matrix<float, N, 1>(Matrix<float, N, 1>)> preprocessing;	
	std::function<Matrix<float, M, 1>(Matrix<float, M, 1>)> activation;	

	// TODO: vectorize properly
	Matrix<float, 1, M> forward(Matrix<float, N, 1>);
};

}
