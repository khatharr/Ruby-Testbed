#include "ruby/ruby.h"

#pragma comment(lib, "msvcr110-ruby210.lib")

int main(int argc, char** argv) {
  ruby_sysinit(&argc, &argv);
  {
    RUBY_INIT_STACK;
    ruby_init();
    //defs
    ruby_run_node(ruby_options(argc, argv));
  }
  return 0;
}
