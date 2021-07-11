/*Complete the Difference class by writing the following:

A class constructor that takes an array of integers as a parameter and saves it to the  instance variable.
A computeDifference method that finds the maximum absolute difference between any  numbers in  and stores it in the  instance variable.
Input Format

You are not responsible for reading any input from stdin. The locked Solution class in the editor reads in  lines of input. The first line contains , the size of the elements array. The second line has  space-separated integers that describe the  array.

Constraints

, where 
Output Format

You are not responsible for printing any output; the Solution class will print the value of the  instance variable.

Sample Input

STDIN   Function
-----   --------
3       __elements[] size N = 3
1 2 5   __elements = [1, 2, 5]
Sample Output

4
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;

	// Add your code here
    Difference(vector<int>element)
    {
        elements=element;
    }
    int computeDifference(){
            int max = elements[0], min = elements[0];      
            for(int i = 1; i < elements.size(); i++){
                if(elements[i] < min){min = elements[i];}
                if(elements[i] > max){max = elements[i];}
                maximumDifference = abs(max - min);
            }

            
            return maximumDifference;
}
}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}