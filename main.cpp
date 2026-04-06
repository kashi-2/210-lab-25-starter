// Comsc-210 || Akashdeep Singh

#include <iostream>
#include <fstream>
#include <vector>
#include <list>
#include <set>
#include <chrono>
#include <algorithm>

using namespace std;
using namespace chrono;

//constants
const string FILENAME = "codes.txt";
const string TEST_CODE = "TESTCODE";

//function prototypes
long long readVector(vector<string>& v);
long long readList(list<string>& l);
long long readSet(set<string>& s);

long long sortVector(vector<string>& v);
long long sortList(list<string>& l);

long long insertVector(vector<string>& v);
long long insertList(list<string>& l);
long long insertSet(set<string>& s);

long long deleteVector(vector<string>& v);
long long deleteList(list<string>& l);
long long deleteSet(set<string>& s);

int main() {

    vector<string> vec;
    list<string> lst;
    set<string> st;

    //read
    long long vRead = readVector(vec);
    long long lRead = readList(lst);
    long long sRead = readSet(st);

    //sort
    long long vSort = sortVector(vec);
    long long lSort = sortList(lst);
    long long sSort = -1; // set already sorted

    //insert
    long long vInsert = insertVector(vec);
    long long lInsert = insertList(lst);
    long long sInsert = insertSet(st);

    //delete
    long long vDelete = deleteVector(vec);
    long long lDelete = deleteList(lst);
    long long sDelete = deleteSet(st);

    //output
    cout << " Operation    Vector      List       Set\n";
    cout << "      Read " << vRead << "      " << lRead << "      " << sRead << endl;
    cout << "      Sort " << vSort << "      " << lSort << "      " << sSort << endl;
    cout << "    Insert " << vInsert << "      " << lInsert << "      " << sInsert << endl;
    cout << "    Delete " << vDelete << "      " << lDelete << "      " << sDelete << endl;

    return 0;
}