bin_PROGRAMS=mplexlo

INCLUDES=-I$(top_srcdir)/libmpeg3
AM_CFLAGS = $(LARGEFILE_CFLAGS)
mplexlo_LDADD=$(top_builddir)/libmpeg3/libmpeg3hv.la -lm -lpthread
mplexlo_SOURCES=mplex.c
