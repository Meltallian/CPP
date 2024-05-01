#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap	a("Freddo");

	std::cout << "[DiamondTrap] Hit points : " << a.getHP() << std::endl;
	std::cout << "[DiamondTrap] Energy points : " << a.getEP() << std::endl;
	std::cout << "[DiamondTrap] Attack damage : " << a.getAD() << std::endl;

	a.whoAmI();
	a.attack("Chad");
	return 0;
}