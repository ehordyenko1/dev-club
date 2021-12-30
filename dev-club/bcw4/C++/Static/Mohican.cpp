#include <iostream>
#include <list>

class Mohican {
protected:
    int Id;
    static int lastId;
    static std::list<Mohican*> lastMohicans;
public:
    Mohican() {
        lastId += 1;
        Id = lastId;
        lastMohicans.push_back(this);
    }

    ~Mohican() {
        lastId -= 1;
        lastMohicans.remove(this);
    }

    static Mohican getLastMohican() {
        return *lastMohicans.back();
    }

    int getId() {
        return Id;
    }
};
std::list<Mohican*> Mohican::lastMohicans;

int Mohican::lastId = 0;

int main() {

Mohican* first = new Mohican();
Mohican* second = new Mohican();
Mohican* third = new Mohican();
std::cout <<  Mohican::getLastMohican().getId() << std::endl;

delete third;

std::cout <<  Mohican::getLastMohican().getId() << std::endl;

}

