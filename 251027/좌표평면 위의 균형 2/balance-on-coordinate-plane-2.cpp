#include <iostream>

using namespace std;
#define MAX_N 100
#define MAX_X 100
int n;
int x[MAX_N], y[MAX_N];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    int ans=MAX_N;

    for(int i=0;i<MAX_X;i+=2)
        for(int j=0;j<MAX_X;j+=2){
            int segment[5]={};
        

        for(int k=0;k<n;k++){
            if(x[k]>i&&y[k]>j)
                segment[1]++;
            else if(x[k]>i&&y[k]<j)
                segment[2]++;
            else if(x[k]<i&&y[k]>j)
                segment[3]++;
            else
                segment[4]++;    
        }

        int cur_m=max(segment[1],segment[2]);
        cur_m=max(cur_m,segment[3]);
        cur_m=max(cur_m,segment[4]);

        ans=min(ans,cur_m);

        
        }
    
    cout<<ans;
    return 0;
}