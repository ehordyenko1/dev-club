#include "Item.hpp"
#include <iostream>

    Item::Item(Category* category) {
        std::list <Order*> orders;
        this->category = category;
        category->addItem(*this);
        quantity += 1;
    }

    std::list<Order*> Item::getAllOrders() {
        return orders;
    }

    void Item::setCategory(Category* category) {
        this->category->removeItem(*this);
        this->category = category;
        category->addItem(*this);
    }

    std::list <Item*> Item::getAllItems() {
        std::cout << quantity << std::endl;
        return allItems;
    }

    std::list <Item*> Item::allItems;
    int Item::quantity = 0;