plugin_LTLIBRARIES = pitch.la
pitch_la_LDFLAGS = -avoid-version -module -shared 
pitch_la_SOURCES = pitch.C fourier.C
AM_CXXFLAGS = $(LARGEFILE_CFLAGS)

INCLUDES = -I$(top_srcdir)/guicast -I$(top_srcdir)/cinelerra -I$(top_srcdir)/quicktime
LIBTOOL = $(SHELL) $(top_builddir)/libtool $(LTCXX_FLAGS)

noinst_HEADERS = picon_png.h pitch.h fourier.h 
EXTRA_DIST = picon.png
