#include <iostream>

int main()
{
    int dog_age = 8;
    int early_years = 21; //First two years of a dogs life count as 21 years
    int later_years = (dog_age -2)*4; //Each following year counts as 4 human years
    int human_years = early_years + later_years;

    std::cout << "My name is Jack! Ruff ruff, I am " << human_years << " years old in human years.";
}

