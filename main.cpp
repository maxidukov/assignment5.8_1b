#include <iostream>
#include <vector>
#include <algorithm>

template<class T>
  std::vector<T> my_unique(const std::vector<T>& v){
  std::vector<T> vout = v;
  std::sort(vout.begin(),vout.end());
  auto it = std::unique(vout.begin(),vout.end());
  //vout.erase(it,vout.end());
  vout.resize(std::distance(vout.begin(),it));
  return vout;
}

/*template<class T>
void my_unique(std::vector<T>& v){
  std::sort(v.begin(),v.end());
  auto it = std::unique(v.begin(),v.end());
  v.erase(it,v.end());
}*/

int main() {
  std::vector<int> v = {1,1,2,5,6,1,2,4};
  std::cout << "[IN]: ";
  for(const auto& i:v) std::cout << i << " ";
  std::cout << std::endl;
  std::vector<int>v_unique = my_unique(v);
  std::cout << "[OUT]: ";
  for(const auto& i:v_unique) std::cout << i << " ";
  std::cout << std::endl;

  /*std::cout << std::endl;
  std::vector<int> v2 = {1,1,2,5,6,1,2,4};
  std::cout << "[IN]: ";
  for(const auto& i:v2) std::cout << i << " ";
  std::cout << std::endl;
  my_unique(v2);
  std::cout << "[OUT]: ";
  for(const auto& i:v2) std::cout << i << " ";
  std::cout << std::endl;*/
}
