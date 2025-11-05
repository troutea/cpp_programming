#include <iostream>
#include <cstdlib>  // for atoi()
using namespace std;

int main(int argc, char* argv[]) {
    // Check if argument was provided
    if (argc < 2) {
        cout << "Error: No parameter provided" << endl;
        return 1;
    }
    
    // Convert string argument to integer
    int n = atoi(argv[1]);
    
    // Calculate and display result
    cout << (n + 1) << endl;
    
    return 0;
}

