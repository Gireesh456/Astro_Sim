#include<bits/stdc++.h>
using namespace std;
vector<double> force(double mass1,double mass2,double x1,double y1,double z1,double x2,double y2,double z2){
    vector<double> v;
    const double G=6.67e-11;
    double distance=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)+(z1-z2)*(z1-z2));
    double distance_cube=distance*distance*distance;
    v.push_back(G*(x1-x2)*mass_1*mass_2/distance_cube);//x-component of force.
    v.push_back(G*(y1-y2)*mass_1*mass_2/distance_cube);//y-cmponent of force.
    v.push_back(G*(z1-z2)*mass_1*mass_2/distance_cube);//z-component of force.
    //cout<<v[0]<<endl<<v[1]<<endl<<v[2]<<endl;
    return v;
}
int main(){
    vector<double> v;
    v=force(1e5,1e5,1,2,3,4,5,6);
    cout<<v[0]<<endl<<v[1]<<endl<<v[2]<<endl;
}