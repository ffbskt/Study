#include <iostream>
#include <vector>



// https://marcoarena.wordpress.com/2016/03/13/cpp-competitive-programming-io/ - input and other
class Asolution{
  public:
  void A() {
      int cur_k = 0;
      int i = 0;
      std::vector<int> H(102, 0);
      if (k == 0) {
          std::cout << "NO" << std::endl;
          return;
      }
      while (cur_k <= k && i < n) {
          if (!H[input[i]]) {
              H[input[i]] = i + 1;
              ++cur_k;
          }
          ++i;
      }
      if (cur_k == k) {
          std::cout << "YES" << "\n";
          for (auto v : H) {
              if (v) {
                  std::cout << v << " ";
              }              
          }
          std::cout << std::endl;  
      } else {
          std::cout << "NO" << std::endl;
      }
  }



  void read_line() {  
    std::cin >> n >> k;
    for (int i = 0; i < n; ++i) {
      int val;
      std::cin >> val;
      input.push_back(val); 
    }  
  }

  int n;
  int k;
  std::vector<int> input;
    
};


int main(int argc, char const *argv[])
{
    Asolution s;
    s.read_line();
    s.A();
    return 0;
}
