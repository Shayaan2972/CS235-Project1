// Shayaan Mohammed
// Shayaanuddin.Mohammed45@myhunter.cuny.edu
// Date: Sept 16, 2024
// The Dish class must have the following private member variables:
// - std::string name_: The name of the dish.
// - std::vector<std::string> ingredients_: A list of ingredients used in the dish. 
// - int prep_time_ : The preparation time in minutes.
// - price_: The price of the dish.
// - CuisineType cuisine_type_ : The cuisine type of the dish.
// Along with various methods for the dish class



#ifndef DISH_HPP
#define DISH_HPP
#include <string>
#include <vector>

class Dish{
    
    public:

    enum CuisineType{
        ITALIAN,
        MEXICAN,
        CHINESE,
        INDIAN,
        AMERICAN,
        FRENCH,
        OTHER
    };

    /**
     * Default constructor.
     * Initializes all private members with default values:
     * - name: "UNKNOWN"
     * - ingredients: Empty list
     * - prep_time: 0
     * - price: 0.0
     * - cuisine_type: OTHER
     */

    Dish();

     /**
     * Parameterized constructor.
     * @param name A reference to the name of the dish.
     * @param ingredients A reference to a list of ingredients (default is
    empty list).
    * @param prep_time The preparation time in minutes (default is 0).
    * @param price The price of the dish (default is 0.0).
    * @param cuisine_type The cuisine type of the dish (a CuisineType enum)
    with default value OTHER.
    * @post The private members are set to the values of the corresponding
    parameters.
    */

    Dish(const std::string& name, const std::vector<std::string>& ingredients = {} , int prep_time = 0, double price = 0.0, CuisineType cuisine_type_ = OTHER);


     /**
     * Sets the name of the dish.
     * @param name A reference to the new name of the dish.
     * @post Sets the private member `name_` to the value of the parameter.
     */
    void setName(const std::string& name);

    /**
     * @return The name of the dish.
     */
    std::string getName() const;

    /**
     * Sets the list of ingredients.
     * @param ingredients A reference to the new list of ingredients.
     * @post Sets the private member `ingredients_` to the value of the
    parameter.
    */
    void setIngredients(const std::vector<std::string>& ingredients);

    /**
     * @return The list of ingredients used in the dish.
     */
    std::vector<std::string> getIngredients() const;

    /**
     * Sets the preparation time.
     * @param prep_time The new preparation time in minutes.
     * @post Sets the private member `prep_time_` to the value of the
    parameter.
    */
    void setPrepTime(const int prep_time);

    /**
     * @return The preparation time in minutes.
     */
    int getPrepTime() const;

    /**
    * Sets the price of the dish.
     * @param price The new price of the dish.
     * @post Sets the private member `price_` to the value of the parameter.
     */ 
    void setPrice(const double price);

    /**
     * @return The price of the dish.
     */
    double getPrice() const;

    /**
     * Sets the cuisine type of the dish.
     * @param cuisine_type The new cuisine type of the dish (a CuisineType
    enum).
    * @post Sets the private member `cuisine_type_` to the value of the
    parameter.
    */
    void setCuisineType(const CuisineType cuisine_type_);

    /**
     * @return The cuisine type of the dish in string form.
     */
    std::string getCuisineType() const;

    /**
     * Displays the details of the dish.
     * @post Outputs the dish's details, including name, ingredients,
    preparation time, price, and cuisine type, to the standard output.
    * The information must be displayed in the following format:
    *
    * Dish Name: [Name of the dish]
    * Ingredients: [Comma-separated list of ingredients]
    * Preparation Time: [Preparation time] minutes
    * Price: $[Price, formatted to two decimal places]
    * Cuisine Type: [Cuisine type]
    */
    void display() const;

    private:
    std::string name_;
    std::vector<std::string> ingredients_;
    int prep_time_;
    double price_;
    CuisineType cuisine_type_;

};


#endif