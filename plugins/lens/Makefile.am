plugin_LTLIBRARIES = lens.la
lens_la_LDFLAGS = -avoid-version -module -shared 
lens_la_SOURCES = lens.C 
AM_CXXFLAGS = $(LARGEFILE_CFLAGS)

INCLUDES = -I$(top_srcdir)/guicast -I$(top_srcdir)/cinelerra -I$(top_srcdir)/quicktime -I$(top_srcdir)/plugins/colors

noinst_HEADERS = lens.h picon_png.h 
EXTRA_DIST = picon.png
