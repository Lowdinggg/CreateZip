#include <stdio.h>
#include <Windows.h>
#include <iostream>

int main(int argc, char** argv) {

  FILE* f = fopen(argv[1], "wb");
  fwrite("\x50\x4B\x05\x06\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 22, 1, f);
  fclose(f);
  std::cout << "Successfully created zip file: " << argv[1] << std::endl;
  return 0;

}
