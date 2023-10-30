// Sean Young
// younggseann16@csu.fullerton.edu
// @1SeanYoung
// Partners: @print-benjamin

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) {
  vector<string> arguments{argv, argv + argc};

  if (arguments.size() <= 1) {
    cout << "error: you must supply at least one number \n";
    return 1;
  }

  bool zero{true};
  double sum{0.0};

  for (string& argue : arguments) {
    if (zero) {
      zero = false;
      continue;
    }
    sum += stod(argue);
  }

  double average = sum / static_cast<double>(arguments.size() - 1);

  cout << "average = " << average << "\n";

  return 0;
}
