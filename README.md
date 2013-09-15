learn-gtest
===========

learn how to use googletest to test C language source code.  

<code>$ cd gtest-1.6.0/</code>  
<code>$ g++ -I./include -I./ -c ./src/gtest-all.cc</code>  
<code>$ g++ -I./include -I./ -c ./src/gtest_main.cc</code>  
<code>$ ar -rv libgtest.a gtest-all.o gtest_main.o</code>  

then copy the <code>libgtest.a</code> file and the <code>include</code> folder under gtest-1.6.0/ to your project's directory.
