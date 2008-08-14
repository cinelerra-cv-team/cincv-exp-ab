plugin_LTLIBRARIES = motion2.la
motion2_la_LDFLAGS = -avoid-version -module -shared 
motion2_la_SOURCES = motion.C motionwindow.C 
motion2_la_LIBADD = $(top_builddir)/plugins/motion/libaffine.la $(top_builddir)/plugins/downsample/libdownsampleengine.la
AM_CXXFLAGS = $(LARGEFILE_CFLAGS)

INCLUDES = -I$(top_srcdir)/guicast -I$(top_srcdir)/cinelerra -I$(top_srcdir)/quicktime -I$(top_srcdir)/plugins/colors

noinst_HEADERS = motion.h picon_png.h motionwindow.h motionwindow.inc motion.inc 
EXTRA_DIST = picon.png
