#include <unistd.h>
#include<iostream>
#include<vector>
using namespace std;

struct s1 {
    bool f;
    int64_t a;
    bool b;
    int64_t c;
    bool d;
    int64_t e;
};

struct s2 {
    int64_t a;
    int64_t c;
    int64_t e;
    bool f;
    bool b;
    bool d;
};

int main(){

    cout<<sizeof(struct s1)<<endl;
    vector<s1> v(1000000, s1{1,1,1,1,1,1});
    v[0]=v[1000];
    sleep(5);

    v.clear();
    cout<<sizeof(struct s2)<<endl;
    vector<s2> v2(1000000, s2{1,1,1,1,1,1});
    v2[0]=v2[1000];
    sleep(5);
}
