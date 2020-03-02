#include <iostream>
using namespace std;

int main(){
    int n,y = 0;
    cin >> n;
    
    for(int x = 0;x <= n;x++){
        y += x;
    }
    
    cout << y << endl;
    
    return 0;
}
