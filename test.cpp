// Shayaan Mohammed
// Shayaanuddin.Mohammed45@myhunter.cuny.edu
// Date: Sept 16, 2024
// This test file tests the default and parametrized constructor along with the various methods for the dish class.


#include "Dish.hpp"
#include <string>
#include <vector>
#include <iostream>

int main(){
    //Testing default constructor 
    Dish d;
    std::vector<std::string> listBurgers = {"buns", "lettuce"};
    //Testing Paraemetrized constructor 
    Dish e("Burgers", listBurgers, 20, 5.00, Dish::AMERICAN);

    std::vector<std::string> listBiryani = {"rice", "spices"};
    //Testing setters
    d.setName("Biryani");
    d.setPrice(19.99);
    d.setCuisineType(Dish::INDIAN);
    d.setPrepTime(55);
    d.setIngredients(listBiryani);

    d.display(); 

    //Testing getters
    if (d.getName() == "Biryani"){
        std::cout << std:: endl << "getName succesful" << std:: endl;
    };
    if (d.getPrice() == 19.99){
        std::cout << "getPrice succesfl"<< std:: endl;
    };
    if (d.getCuisineType() == "INDIAN"){
        std::cout << "getCuisineType succesful"<< std:: endl;
    };
    if (d.getPrepTime() == 55){
        std::cout << "getCuisineType succesful"<< std:: endl;
    };
    if (d.getIngredients() == listBiryani){
        std::cout << "getIngredients succesful"<< std:: endl;
    }

    return 0;
}