/*Given  names and phone numbers, assemble a phone book that maps friends' names to 
their respective phone numbers. You will then be given an unknown number of names to query your phone book for. 
For each  queried, print the associated entry from your phone book on a new line in the form name=phoneNumber; 
if an entry for  is not found, print Not found instead.

Note: Your phone book should be a Dictionary/Map/HashMap data structure.
Sample Input

3
sam 99912222
tom 11122222
harry 12299933
sam
edward
harry
Sample Output

sam=99912222
Not found
harry=12299933
*/
#include <iostream>
#include <map>
using namespace std;

int main() {
    std::map<string, string> phoneBook;
    int n;
    cin >> n;
    
    // Read names and numbers, add to phoneBook:
    for(int i = 0; i < n; i++){
        string name;
        string phone;
        cin >> name;
        cin >> phone;
        phoneBook[name] = phone;
    }
    
    // Execute queries:
    std::map<string,string>::iterator it;
    string query;
    while( cin >> query ){
        it = phoneBook.find(query);
        
        if ( it != phoneBook.end() ){ // key is found in phoneBook    
            cout << it->first << "=" << it->second << '\n';
        }
        else{ // the iterator hit the end of the phone book without finding key
            cout << "Not found" << '\n';
        }
    }
    
    return 0;
}