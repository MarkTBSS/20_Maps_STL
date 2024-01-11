#include <iostream>
#include <map>
using namespace std;

int main() {

    map<string, int> markMap;
    markMap.insert(make_pair("hello",9));
    markMap.insert(make_pair("world",8));
    int size = markMap.size();
    cout << "Size : " << size << endl; 
    for (auto value : markMap) {
        cout << value.first << " " << value.second << endl ;
    }

    cout << "markMap[Hello] : " << markMap["Hello"] << endl; 
    cout << "markMap[hello] : " << markMap["hello"] << endl;
    cout << "markMap[world] : " << markMap["world"] << endl;

    return 0;
}