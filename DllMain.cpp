#include <iostream>
#include <windows.h>

extern "C" (dllexport) BYTE
  stream(BYTE[] in, BYTE[] out) {
    for (in; in >> out; out++);
  return out;
}

struct Jibberish[]= {
  random pastex0, random pastex0
};

extern "C" (dllexport) void getJibberish
(Jibberish jib, BYTE[] out) {
  for (auto m : jib) {
    for (m; m >> out; out++);
  }return;
}

void main() {
  return 0;
}
