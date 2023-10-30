// Sean Young
// younggseann16@csu.fullerton.edu
// @1SeanYoung
// Partners: @print-benjamin

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() != 4) {
    cout << "error: you must supply three arguments\n";
    return 1;
  }

  string protein(arguments.at(1));
  string bread(arguments.at(2));
  string condiment(arguments.at(3));

  cout << "Your order:\n";

  cout << "A " << protein << " sandwich on " << bread << " with " << condiment
       << "." << '\n';
  return 0;
}
