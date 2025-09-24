#include<bits/stdc++.h>
using namespace std;
int main()
{
    // name - age
    map<string, int> student = {
        {"Jack", 15}, {"Ron", 17}, {"Harry",20}
    };

    cout<<"Age of Jack is "<<student["Jack"]<<endl;
    cout<<"Age of Ron is "<<student["Ron"]<<endl;
    cout<<"Age of Harry is "<<student["Harry"]<<endl;

    student["Peter"] = 18; // input new value to the map
    student.insert({"Parker", 19}); // alternate way to input using .insert()

    string name;
    int age;
    cin>>name;
    cin>>age;
    student.insert({name,age}); //user input

    student["Jack"] = 18;

    for(auto u:student)
    {
        cout<<"Student name: "<<u.first<<endl;
        cout<<"Student age: "<<u.second<<endl;
    }
}





