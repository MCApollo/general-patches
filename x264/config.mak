SRCPATH=.
prefix=/usr/local
exec_prefix=${prefix}
bindir=${exec_prefix}/bin
libdir=${exec_prefix}/lib
includedir=${prefix}/include
SYS_ARCH=AARCH64
SYS=MACOSX
CC=aarch64-apple-darwin17-clang
CFLAGS=-Wshadow -O3 -ffast-math  -Wall -I. -I$(SRCPATH) -mdynamic-no-pic -std=gnu99 -D_GNU_SOURCE -fPIC -fomit-frame-pointer -fno-tree-vectorize
COMPILER=GNU
COMPILER_STYLE=GNU
DEPMM=-MM -g0
DEPMT=-MT
LD=aarch64-apple-darwin17-clang -o 
LDFLAGS= -lm -lpthread -s 
LIBX264=libx264.a
AR=aarch64-apple-darwin17-ar rc 
RANLIB=aarch64-apple-darwin17-ranlib
STRIP=aarch64-apple-darwin17-strip
INSTALL=install
AS= gas-preprocessor.pl -as-type clang -- aarch64-apple-darwin17-clang 
ASFLAGS= -I. -I$(SRCPATH) -DPREFIX -DPIC -DSTACK_ALIGNMENT=16 -DPIC
RC=
RCFLAGS=
EXE=
HAVE_GETOPT_LONG=1
DEVNULL=/dev/null
PROF_GEN_CC=-fprofile-generate
PROF_GEN_LD=-fprofile-generate
PROF_USE_CC=-fprofile-use
PROF_USE_LD=-fprofile-use
HAVE_OPENCL=yes
CC_O=-o $@
default: cli
install: install-cli
SOSUFFIX=dylib
SONAME=libx264.155.dylib
SOFLAGS=-shared -dynamiclib -Wl,-single_module -Wl,-read_only_relocs,suppress -install_name $(DESTDIR)$(libdir)/$(SONAME) 
default: lib-shared
install: install-lib-shared
default: lib-static
install: install-lib-static
LDFLAGSCLI =  
CLI_LIBX264 = $(LIBX264)
