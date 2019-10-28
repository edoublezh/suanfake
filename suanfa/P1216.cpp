//
//#include <iostream>
//using namespace std;
//int main(int argc, const char * argv[]) {
//    int hang;//行数
//    cin>>hang;
//    int in[1001][1001]={0};
//    int i,j;
//    //输入
//    for (i=1; i<=hang; i++) {
//        for (j=1; j<=i; j++) {
//            cin>>in[i][j];
//        }
//    }
//
//    for (i=1; i<=hang; i++) {
//        for (j=1; j<=i; j++) {
//            in[i][j]+=max( in[i-1][j-1], in[i-1][j]);
//        }
//    }
//
//    int maxnum=0;
//    for (i=1; i<=hang; i++) {
//        maxnum=max(maxnum,in[hang][i]);
//    }
//    cout<<maxnum;
//    return 0;
//}
