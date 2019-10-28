#include <iostream>
using namespace std;
int main(void){
    int num;
    cin>>num;
    int i;
    int result[10001]={0};
    result[1]=2;
    for (i=2; i<=10000; i++) {
        result[i]=result[i-1]+4*(i-1)+1;
    }
    while (num--) {
        int in;
        cin>>in;
        cout<<result[in]<<endl;
        
    }
    return 0;
}
