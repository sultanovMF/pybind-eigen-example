#include <pybind11/pybind11.h>
#include <pybind11/eigen.h>
#include <pybind11/stl.h>
#include <pybind11/complex.h>
#include <pybind11/functional.h>

#include <Eigen/Dense>
#include <string>

auto det(Eigen::Matrix2f m) {
	return m.determinant();
}

std::string hello() {
	return "hello!";
}


PYBIND11_MODULE(pybind_eigen_example, m) {
  m.doc() = "Pybind eigen example";

  m.def("hello", &hello);
  m.def("det", &det);
}
