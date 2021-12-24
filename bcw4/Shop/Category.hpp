#ifndef CATEGORY_CPP
#define CATEGORY_CPP

#include <iostream>
#include <list>

class Item;

class Category {
protected:
    std::list <Item*> items;
    static std::list <Category*> allCategories;
    static int quantity;
public:
    Category();
    ~Category();

    const std::list <Item*> getItem();
    std::list <Category*> getAllCategories();
    void addItem(Item& item);
    void removeItem(Item& item);
};

#endif