#include <iostream>
#include <algorithm>

using namespace std;
const int M=1000005;

struct three
{
    double w;//每个宝物的重量
    double v;//每个宝物的价值
    double p;//性价比
}s[M];

bool cmp(three a, three b){
    return a.p>b.p; // 根据宝物的单位价值从大到小排序
}

int main(int argc, char const *argv[])
{
    int n;
    double m;
    cout<<"请输入宝物数量n及毛驴的承载能力m : "<<endl;
    cin>>n>>m;
    cout<<"请输入每个宝物的重量和价值，用空格分开： "<<endl;
    for (int i=0;i<n;i++){
        cin>>s[i].w>>s[i].v;
        s[i].p=s[i].v/s[i].w; // 每个宝物单位价值
    }
    sort(s, s+n, cmp);
    double sum=0.0;
    for(int i=0;i<n;i++){
        if(m>s[i].w){
            m-=s[i].w;
            sum+=s[i].v;
        }
        else
        {
            sum+=m*s[i].p;//部分转入
            break;
        }
    }
    cout << "装入宝物的最大价值Maximum value="<<sum<<endl;
    return 0;
}
