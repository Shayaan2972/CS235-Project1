#include "Dish.hpp"
#include <string>
#include <vector>

int main(){
    Dish d;

    std::vector<std::string> list = {"rice", "spices"};
    d.setName("Biryani");
    d.setPrice(19.99);
    d.setCuisineType(Dish::INDIAN);
    d.setPrepTime(55);
    d.setIngredients(list);

    d.display();

    return 0;
}