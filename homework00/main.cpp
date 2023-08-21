#include <iostream>
using namespace std;
#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Dense>
#include <cmath>
int main()
{
    //define point (P)
    Eigen::Vector3d P(2,1,1);
    //define a rotation matrix  and angle (a)

    Eigen::Matrix3d rotationMatrix;
    double theta = (45 / 180.0 * M_PI);  
    rotationMatrix << cos(theta),-sin(theta), 0, sin(theta),cos(theta),0,0,0,1;

    //define a translate matrix 
    Eigen::Matrix3d translateMatrix;
    translateMatrix <<1,0,1,0,1,2,0,0,1;

    Eigen::Vector3d new_p1,new_p2;
    new_p1 = (rotationMatrix * P);
    new_p2 = translateMatrix * new_p1;
    cout << P << endl;
    cout << "----------------------"<<endl;
    cout << rotationMatrix << endl;
    cout << "-----------------------"<<endl;
    cout << translateMatrix << endl;
    cout << "----------------------------"<<endl;
    cout << new_p1 << endl;

    cout << "----------------------------"<<endl;
    cout << new_p2<< endl;
}