
void fastIO(void) {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
int n;
cin>>n;
vl v(n);
ll rs = 0;
ll ls = 0;
ll cnt = 0;
loop(n) { cin >> v[i];
rs+=v[i];
}
loop(n-1){
    rs-=v[i];
    ls+=v[i];
    if(rs==ls)cnt++;
}

cout<<cnt endl;
}
