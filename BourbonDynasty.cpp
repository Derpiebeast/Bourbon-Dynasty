#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Person {
    private:
        string name;
        string title;
        string birthDate;
        string deathDate;
        string marriageDate;
        vector<string> children;
        
    public:
        Person(string n, string t, string b, string d, string m, vector<string> c) {
            name = n;
            title = t;
            birthDate = b;
            deathDate = d;
            marriageDate = m;
            children = c;
        }
        
        void setName(string n) {
            name = n;
        }
        
        string getName() {
            return name;
        }
        
        void setTitle(string t) {
            title = t;
        }
        
        string getTitle() {
            return title;
        }
        
        void setBirthDate(string b) {
            birthDate = b;
        }
        
        string getBirthDate() {
            return birthDate;
        }
        
        void setDeathDate(string d) {
            deathDate = d;
        }
        
        string getDeathDate() {
            return deathDate;
        }
        
        void setMarriageDate(string m) {
            marriageDate = m;
        }
        
        string getMarriageDate() {
            return marriageDate;
        }
        
        void setChildren(vector<string> c) {
            children = c;
        }
        
        vector<string> getChildren() {
            return children;
        }
};

class BourbonFamily {
    private:
        vector<Person> members;
        
    public:
        void addMember(string n, string t, string b, string d, string m, vector<string> c) {
            Person member(n, t, b, d, m, c);
            members.push_back(member);
        }
        
        void deleteMember(string n) {
            for (auto it = members.begin(); it != members.end(); ++it) {
                if (it->getName() == n) {
                    members.erase(it);
                    break;
                }
            }
        }
        
        void modifyMember(string n, string field, string value) {
            for (auto it = members.begin(); it != members.end(); ++it) {
                if (it->getName() == n) {
                    if (field == "Name") {
                        it->setName(value);
                    } else if (field == "Title") {
                        it->setTitle(value);
                    } else if (field == "BirthDate") {
                        it->setBirthDate(value);
                    } else if (field == "DeathDate") {
                        it->setDeathDate(value);
                    } else if (field == "MarriageDate") {
                        it->setMarriageDate(value);
                    } else if (field == "Children") {
        
                        vector<string> children;
                        string child = "";
                        for (int i = 0; i < value.length(); i++) {
                            if (value[i] == ',') {
                                children.push_back(child);
                                child = "";
                            } else {
                                child += value[i];
                            }
                        }
                        children.push_back(child);
                        it->setChildren(children);
                    }
                    break;
                }
            }
        }
        
        void printMember(string n) {
            for (auto it = members.begin(); it !=

