plugin_LTLIBRARIES = graphic.la
graphic_la_LDFLAGS = -avoid-version -module -shared
graphic_la_LIBADD = $(top_builddir)/plugins/parametric/libfourier.la
graphic_la_SOURCES = graphic.C
AM_CXXFLAGS = $(LARGEFILE_CFLAGS)

INCLUDES = -I$(top_srcdir)/guicast -I$(top_srcdir)/cinelerra -I$(top_srcdir)/quicktime -I$(top_srcdir)/plugins/parametric
noinst_HEADERS = picon_png.h graphic.h 
