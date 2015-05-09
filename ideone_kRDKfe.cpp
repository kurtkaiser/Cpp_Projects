#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using std::cin; using std::sort;
using std::cout; using std::streamsize;
using std::endl; using std::string;
using std::vector;
int main()
{
    
    cout << "**Starting**" << endl;
    cout << "A sentence or statement, end-of-file to end:  ";
    // declare variables
    vector<string> statement;
    string word;

    while (cin >> word){
    	statement.push_back(word);
    	//cout << "\n\nHere is words: " << word;
     }
   /* We will use typedef to create a sunonym for the given type
   typedef is not creating a variable, but a shorthand way of writing
   vector<string>::size_type, now we can just write vec_sz */
    typedef vector<string>::size_type vec_sz;
    vec_sz size = statement.size();
    cout << "SiZE: " << size << endl;
    //
    // check for input
    if (size == 0) {
        cout << endl << "You must enter words. "
        "Error. Try again." << endl;
        return 1;
    } 
    // else, if something was entered...
    else {
          /* sort is used to put the strings "words" entered in nondecreasing
   	      order, we say nondecreasing instead of increasing because some "words"
          might be of equal length */
          sort(statement.begin(), statement.end());  
	      int count = 1;
          for (int i = 0; i != size-1; ++i){
              cout << "\nstatement " << i << ": " << statement[i];
              cout << "\nstatement " << i << ": " << statement[i+1];
              if (statement[i] != statement[i + 1])
       	      ++count;
          }
          cout << "\nAmount of nonrepeating words: " << count << endl;     	
	    }
    cout << "\n\n\n";
    system("pause");
    return 0;
}