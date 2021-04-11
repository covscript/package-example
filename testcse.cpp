// Write your code here
#include <iostream>

void hello()
{
	std::cout << "Hello, world!" << std::endl;
}

int sum(int a, int b)
{
	return a + b;
}

void modify(std::string &str)
{
	str += "QAQ";
}

// CNI Registrations
#include <covscript/cni.hpp>
#include <covscript/dll.hpp>

CNI_ROOT_NAMESPACE {
	CNI(hello)
	CNI(sum)
	CNI(modify)
}