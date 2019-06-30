# n-base
N-BASE

# compilation
generate buildsystem:
    cmake -H. -Bbuild

generate binary file:
    cmake --build build -- -j8

# documentation

generate documetation:
    doxygen Doxyfile

generate a callgraph for a specific file:
    egypt build/CMakeFiles/n-base.dir/application/main.c.192r.expand | dot -Gsize=8.5,11 -Grankdir=LR -Tps -o callgraph.ps

# TODO
*generate cvallgraph automatically for all files
*create simple cmake/make target like: all, docs, test, etc
