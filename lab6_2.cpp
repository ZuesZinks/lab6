#include <iostream>
#include <cmath>

using namespace std;
double deg2rad(double x){
    double y;
    y = x * M_PI/180.0;
    return y;
}
double rad2deg(double x){
    double y;
    y = x * 180.0/M_PI;
    return y;
}
double findXComponent(double l1,double l2,double a1,double a2){
    double a = l1*cos(a1);
    double b = l2*cos(a2);
    double c = a+b;
    return c;
}
double findYComponent(double l1,double l2,double a1,double a2){
    double a = l1*sin(a1);
    double b = l2*sin(a2);
    double c = a+b;
    return c;
}
double pythagoras(double xcomp,double ycomp){
    xcomp = pow(xcomp,2);
    ycomp = pow(ycomp,2);
    double t = sqrt(xcomp+ycomp);
    return t;
}
void showResult(double a,double b){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<< endl;
    cout << "Length of the resultant vector = " << a << endl;
    cout << "Direction of the resultant vector (deg) = " << b << endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<< endl;
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
