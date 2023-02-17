#include <iostream>
#include <string>

using namespace std;

class BourbonFamily {
    private:
        string name;
        string rulePeriod;
        string collapseDate;

    public:
        BourbonFamily(string n, string rp, string cd) {
            name = n;
            rulePeriod = rp;
            collapseDate = cd;
        }

        void printInfo() {
            cout << "The Bourbon Royal Family of France ruled over the country for several centuries, from the 16th century until the French Revolution in 1789. The Bourbon dynasty was restored to power after the fall of Napoleon in 1815, a period known as the Restoration. During this time, the Bourbons implemented a number of reforms and tried to restore the traditional order of French society. However, they faced significant opposition from various groups, including liberals and republicans, who sought to promote more democratic and egalitarian values." << endl;

            cout << endl;

            cout << "The Restoration period lasted until 1830, when the July Revolution broke out and forced the abdication of King Charles X. The Bourbon dynasty was replaced by the July Monarchy, which was led by King Louis-Philippe. The collapse of the Bourbon dynasty marked the end of an era in French history, and signaled the beginning of a new phase of political and social change." << endl;

            cout << endl;

            cout << "Despite their eventual downfall, the Bourbon Royal Family played a significant role in French history, and their legacy can still be seen today in the many cultural and historical landmarks that dot the French landscape." << endl;

            cout << endl;

            cout << "Bourbon Family Name: " << name << endl;
            cout << "Period of Rule: " << rulePeriod << endl;
            cout << "Date of Collapse: " << collapseDate << endl;
        }
};

int main() {
    BourbonFamily bourbon("Bourbon", "16th century - 1789, 1815 - 1830", "1830");
    bourbon.printInfo();
    return 0;
}
