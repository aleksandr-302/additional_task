#include <iostream>
#include <map>

using namespace std;

struct student{
string first_name;
string father_name;
string last_name;
int a = 0;
int b = 0;
int k = 0;
};



int main()
{
    map<string, student> group;
    char command = 'y';
    student example;
    while(command == 'y'){
        cout << "Enter first name" << endl;
        cin >> example.first_name;
        cout << "Enter last name" << endl;
        cin >> example.last_name;
        cout << "Enter father name" << endl;
        cin >> example.father_name;
        cout << "Enter first part of the group number " << endl;
        cin >> example.a;
        cout << "Enter second part of the group number" << endl;
        cin >> example.b;
        cout << "Enter number in group" << endl;
        cin >> example.k;

        group[example.last_name] = example;

        cout << "Do you want to add another student?(y / n)"<<endl;
        cin >> command;
    }

    string surname;
    while (command == 'n'){
        cout << "which student do you want to find?" << endl;
        cin >> surname;
        cout << group[surname].first_name <<  "  " << group[surname].father_name << "\n Group number: " <<  group[surname].a <<  "/" <<  group[surname].b << ", Number in group: " <<  group[surname].k << endl;
    }
    return 0;
}
