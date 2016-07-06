# !/bin/sh

./autogen.sh

home_3rd=~/3rd

./configure --prefix=$home_3rd/czmq libzmq_CFLAGS="-I $home_3rd/libzmq/include" libzmq_LIBS=$home_3rd/libzmq/lib/libzmq.la

make 

make install
