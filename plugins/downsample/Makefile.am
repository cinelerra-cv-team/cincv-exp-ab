plugin_LTLIBRARIES = downsample.la
downsample_la_LDFLAGS = -avoid-version -module -shared 
downsample_la_LIBADD = libdownsampleengine.la 
downsample_la_SOURCES = downsample.C 
noinst_LTLIBRARIES = libdownsampleengine.la
libdownsampleengine_la_LIBADD =
libdownsampleengine_la_SOURCES = downsampleengine.C
AM_CXXFLAGS = $(LARGEFILE_CFLAGS)

INCLUDES = -I$(top_srcdir)/guicast -I$(top_srcdir)/cinelerra -I$(top_srcdir)/quicktime
LIBTOOL = $(SHELL) $(top_builddir)/libtool $(LTCXX_FLAGS)

noinst_HEADERS = picon_png.h downsampleengine.h downsampleengine.inc 
EXTRA_DIST = picon.png
