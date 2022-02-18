#include <iostream>
#include <cassert>
#include <vector>

using std::vector;

int binary_search(const vector<int> &a, int x) {
  int left = 0, right = (int)a.size()-1; 
  //write your code here
  bool l = false;
  bool r = false;
  while(left<=right){
      int mid = abs(left+(right-left)/2);
      if(a[mid]==x){
          if(a[mid+1]!=x && a[mid-1]!=x){
              return mid;
              break;
          } else if(a[mid+1]==x && a[mid-1]!=x){
              return mid;
              break;
          } else if(a[mid-1]==x){
              right = mid;
          }
          //std::cout<<"here1"<<'\n';
      } else if(a[mid]>x){
          right = mid-1;
          //std::cout<<"here2"<<'\n';
      } else if(a[mid]<x){
          left = mid+1; 
          //std::cout<<"here3"<<'\n';
      } 
  }
    return -1;
}

int linear_search(const vector<int> &a, int x) {
  for (size_t i = 0; i < a.size(); ++i) {
    if (a[i] == x) return i;
  }
  return -1;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  int m;
  std::cin >> m;
  vector<int> b(m);
  for (int i = 0; i < m; ++i) {
    std::cin >> b[i];
  }
  for (int i = 0; i < m; ++i) {
    //replace with the call to binary_search when implemented
    std::cout << binary_search(a, b[i]) << ' ';
  }
}
