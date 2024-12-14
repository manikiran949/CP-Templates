#include<bits/stdc++.h>
using namespace std;
#define int long long

static void run_with_stack_size(void (*func)(void), size_t stsize) {
    char *stack, *send;
    stack = (char *)malloc(stsize);
    send = stack + stsize - 16;
    send = (char *)((uintptr_t)send / 16 * 16);
    asm volatile(
        "mov %%esp, (%0)\n"
        "mov %0, %%esp\n"
        :
        : "r"(send));
    func();
    asm volatile("mov (%0), %%esp\n" : : "r"(send));
    free(stack);
}

vector<int> all(100000000,-1);
int idx=0;

void rec(int ind,vector<int>&a){
    int n=a.size();
    if(ind==n){
        int sum=0,fct=1;
        for(int i=n-1;i>=0;i--){
            sum+=a[i]*fct;
            fct*=10;
        }
        all[idx]=sum;
        idx++;
        return;
    }
    if(ind<=(n/2)){
        if(ind==0){
            for(int i=1;i<=9;i++){
                a[ind]=i;
                rec(ind+1,a);
            }
        }
        else if(ind==(n/2)){
            for(int i=a[ind-1]+1;i<=9;i++){
                a[ind]=i;
                rec(ind+1,a);
            }
        }
        else{
            for(int i=a[ind-1];i<=9;i++){
                a[ind]=i;
                rec(ind+1,a);
            }
        }
    }
    else{
        if(ind==(n/2)+1){
            for(int i=a[ind-1]-1;i>=1;i--){
                a[ind]=i;
                rec(ind+1,a);
            }
        }
        else{
            for(int i=a[ind-1];i>=1;i--){
                a[ind]=i;
                rec(ind+1,a);
            }
        }
    }
}

void main_(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t=1; 
    // cin >> t; 
     for(int i=1;i<=17;i+=2){
        vector<int> a(i);
        rec(0,a);
    }
    while(t--){
        int l,r,m; cin>>l>>r>>m;
        int ans=0;
        for(auto it:all){
            if(it>r) break;
            if(it==-1)
            if(it>=l && it<=r && it%m==0) ans++;
        }
    cout<<ans<<'\n';
    }
}

signed main(){
    run_with_stack_size(main_, 1024 * 1024 * 1024);
    // main_();
    return 0;
}
