int main()
{
    spd();
ll n ;
cin>>n;
vl v(n);
loop(n){
    cin>>v[i];
}
    std::sort(v.begin(), v.end());
    int mx = 0;
    for (int i = 0; i < n; ++i)
    {
        int idx = upper_bound(v.begin(), v.end(), v[i] + 5) - v.begin();
        mx = max(idx - i, mx);
    }
    cout << mx  endl;
}
 
