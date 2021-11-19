#include <iostream>

class Identifiable {
public:
    static int TotalCopy;
    static int LastId;
private: 
    std::string num;
    int id;
public:
    Identifiable(const std::string Num) {
        TotalCopy += 1;
        LastId += 1;
        this->id = LastId;
        this->num = Num;
    }

    ~Identifiable() {
        TotalCopy -= 1;
    }

    int getTotalCopy() const {
        return TotalCopy;
    }

    int getId() const{
        return this->id;
    }

    const std::string getNum() const {
        return this->num;
    }
};

int Identifiable::TotalCopy = 0;
int Identifiable::LastId = 0;

int main() {

Identifiable* first = new Identifiable("First");
Identifiable* second = new Identifiable("Second");;
Identifiable* third =  new  Identifiable("Third");

std::cout << "id : " << first->getId() << " Num : " << first->getNum() << std::endl;
std::cout << "id : " << second->getId() << " Num : " << second->getNum() << std::endl;
std::cout << "id : " << third->getId() << " Num : " << third->getNum() << std::endl;

delete first;
delete second;
delete third;
}