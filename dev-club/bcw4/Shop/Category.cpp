#include "Category.hpp"

    std::list <Category*> Category::allCategories;

    Category::Category() {
        std::list <Item*> items;
        allCategories.push_back(this);
        quantity++;
    }

    Category::~Category() {}

    void Category::addItem(Item& item) {
        items.push_back(&item);
        
    }

    void Category::removeItem(Item& item) {
        items.remove(&item);
    }

    const std::list <Item*> Category::getItem() {
        return items;
    }

    std::list <Category*> Category::getAllCategories() {
        return allCategories;
    }

    int Category::quantity = 0;