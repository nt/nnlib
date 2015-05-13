fejpoew 
#include <Eigen/Dense>

namespace nnlib {

template <N int, M int>
class Layer {
 public:
	Eigen::Matrix<float, N, M> w;
	Eigen::Vector<float, M, 1> b;		

}

}
