//
// Created by trykr on 05.02.2019.
//
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
#include <map>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int min = INT_MAX;
    map<short, int> school_to_students_count;
    for (int i = 0; i < n; i++)
    {
        string name;
        string initials;
        short school_number;
        cin >> name;
        cin >> initials;
        cin >> school_number;
        if (school_to_students_count.find(school_number) == school_to_students_count.end()) {
            school_to_students_count[school_number] = 1;
        } else {
            school_to_students_count[school_number] += 1;
        }
    }

    auto it = school_to_students_count.begin();
    while (it != school_to_students_count.end()) {
        if (it->second < min) {
            min = it->second;
        }
        it++;
    }

    it = school_to_students_count.begin();
    while (it != school_to_students_count.end()) {
        if (it->second == min) {
            cout << it->first << endl;
        }
        it++;
    }
}