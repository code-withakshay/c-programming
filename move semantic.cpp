#include<iostream>
#include<vector>


std::vector<int> create_vector(int size)
{
	std::vector<int> v(size);
	return std::move(v);
	
}

int main()
{
	std::vector<int> v = create_vector(1000000);
	std::cout<<"size of vector: "<<v.size()<<std::endl;
	return 0;
}
