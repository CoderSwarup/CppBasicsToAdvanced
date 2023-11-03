#include <iostream>
#include <vector>
using namespace std;
template <class t>
void display(vector<t> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
}
int main(){

  vector<int> vec1;      //zero length integer vector
    vector<char> vec2(1);  //4-element character vector
  vec2.push_back('3');
    display(vec2);
    vector<char> vec3(vec2);//4-element character vector from vec2
    vector<int> vec4(9,3); //6-element vector of 3s

  return 0;
  }
