#include <iostream>

int main()
{
    std::string sor;
    std::ifstream ifs("a.txt");
    
    //ifs >> sor ez nem jo, mert szavankent olvas
    while (std::getline(ifs, sor))
    {
	int n;
	std::stringstream s;
	s << sor;
	while (s >> n)
	{
		// feldolgoz
		std::cout << n << " ";
	}
	std::cout << std::endl;
    }
}
