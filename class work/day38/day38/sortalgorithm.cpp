#include <iostream>
#include <list>
using namespace std;

class Employee {
    int id;
    string name;

public:
    Employee(int id, string name) : id(id), name(name) {}

    int getId() const {
        return id;
    }

    void setId(int id) {
        this->id = id;
    }

    string getName() const {
        return name;
    }

    void setName(string name) {
        this->name = name;
    }

    void display() const {
        cout << "Name: " << name << " | ID: " << id << endl;
    }

    bool operator==(const Employee& other) const {
        return id == other.id;
    }

    // Swap function for bubble sort
    void swap(Employee& other) {
        std::swap(id, other.id);
        std::swap(name, other.name);
    }
};

//  User-defined bubble sort for std::list<Employee> based on ID
void bubbleSortList(list<Employee>& empList) {
    bool swapped;
    do {
        swapped = false;
        for (auto it1 = empList.begin(); next(it1) != empList.end(); ++it1) {
            auto it2 = next(it1);
            if (it1->getId() > it2->getId()) {
                it1->swap(*it2);
                swapped = true;
            }
        }
    } while (swapped);
}

int main() {
    Employee e1(101, "Vaish");
    Employee e2(102, "Helo");
    Employee e3(103, "Hgtf");
    Employee e4(104, "Vgftgj");
    Employee e5(105, "Hghi");
    Employee e6(106, "Guh");
    Employee e7(107, "Hguyu");

    list<Employee> listemp;

    // Adding elements
    listemp.push_front(e1);
    listemp.push_back(e2);
    listemp.emplace_front(e3);
    listemp.emplace_back(e4);
    listemp.insert(listemp.begin(), e5);

    cout << "Original List:\n";
    for (const auto& emp : listemp)
        emp.display();

    cout << "---------------------------\nReversed List:\n";
    listemp.reverse();
    for (const auto& emp : listemp)
        emp.display();

    cout << "---------------------------\nAfter Removing Employee with ID 102:\n";
    listemp.remove(e2);  // remove uses == operator
    for (const auto& emp : listemp)
        emp.display();

    cout << "---------------------------\nAfter Bubble Sort by ID:\n";
    bubbleSortList(listemp);
    for (const auto& emp : listemp)
        emp.display();

    return 0;
}
