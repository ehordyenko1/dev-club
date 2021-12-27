#include "Category.hpp"


class Order;

class Item {
private:
    std::list <Order*> orders;
    static std::list <Item*> allItems;
    Category* category;
    static int quantity;
public:
    Item(Category* category);

    static std::list <Item*> getAllItems();
    std::list<Order*> getAllOrders();
    void setCategory(Category* category);
};