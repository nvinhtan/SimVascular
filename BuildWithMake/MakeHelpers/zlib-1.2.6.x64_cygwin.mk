ifeq ($(CLUSTER), x64_cygwin)
    ZLIB_TOPLEVEL = $(OPEN_SOFTWARE_BINARIES_TOPLEVEL)/zlib-1.2.6
    ZLIB_INCDIR = -I$(ZLIB_TOPLEVEL)
    ZLIB_LIBDIR = $(ZLIB_TOPLEVEL)
    ZLIB_LIBS   = /LIBPATH:$(ZLIB_LIBDIR) zlib.lib
endif