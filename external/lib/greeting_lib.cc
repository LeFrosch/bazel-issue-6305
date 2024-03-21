#include "greeting_lib.h"
#include <string>

std::string get_greet(std::string who) {
  std::string result = "Greetings ";
  result.append(who);
  return result;
}
