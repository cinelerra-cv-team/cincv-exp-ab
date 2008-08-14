plugin_LTLIBRARIES = spectrogram.la
spectrogram_la_LDFLAGS = -avoid-version -module -shared 
spectrogram_la_LIBADD = $(top_builddir)/plugins/parametric/libfourier.la $(top_builddir)/plugins/colors/libcolors.la
spectrogram_la_SOURCES = spectrogram.C 
AM_CXXFLAGS = $(LARGEFILE_CFLAGS)

INCLUDES = -I$(top_srcdir)/guicast -I$(top_srcdir)/cinelerra -I$(top_srcdir)/quicktime -I$(top_srcdir)/plugins/parametric -I$(top_srcdir)/plugins/colors

noinst_HEADERS = picon_png.h spectrogram.h 
EXTRA_DIST = picon.png
