plugin_LTLIBRARIES = swapframes.la
swapframes_la_LDFLAGS = -avoid-version -module -shared 
swapframes_la_SOURCES = swapframes.C 
AM_CXXFLAGS = $(LARGEFILE_CFLAGS)

INCLUDES = -I$(top_srcdir)/guicast -I$(top_srcdir)/cinelerra -I$(top_srcdir)/quicktime -I$(top_srcdir)/plugins/colors

noinst_HEADERS = swapframes.h picon_png.h 
EXTRA_DIST = picon.png
