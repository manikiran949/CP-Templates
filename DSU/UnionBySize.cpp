class DSU{
    public:
    vector<int> par,sz;
    DSU(int n){
        par.resize(n);
        sz.resize(n);
        for(int i=0;i<n;i++){
            par[i]=i;
            sz[i]=1;
        }
    }
    int findupar(int n){
        if(n==par[n]) return n;
        return par[n]=findupar(par[n]);
    }
    void unionbysize(int u,int v){
        int p1=findupar(u);
        int p2=findupar(v);
        if(p1==p2) return;
        if(sz[p1]>sz[p2]){
            par[p2]=p1;
            sz[p1]+=sz[p2];
        }
        else{
            sz[p2]+=sz[p1];
            par[p1]=p2;
        }
    }
};
