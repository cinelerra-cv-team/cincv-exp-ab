plugin_LTLIBRARIES = synthesizer.la
synthesizer_la_LDFLAGS = -avoid-version -module -shared 
synthesizer_la_LIBADD = 
synthesizer_la_SOURCES = synthesizer.C 
AM_CXXFLAGS = $(LARGEFILE_CFLAGS)

INCLUDES = -I$(top_srcdir)/guicast -I$(top_srcdir)/cinelerra -I$(top_srcdir)/quicktime
LIBTOOL = $(SHELL) $(top_builddir)/libtool $(LTCXX_FLAGS)

noinst_HEADERS = picon_png.h synthesizer.h synthesizer.inc synthwindow.inc white_up_png.h white_hi_png.h white_dn_png.h white_checked_png.h white_checkedhi_png.h black_up_png.h black_hi_png.h black_dn_png.h black_checked_png.h black_checkedhi_png.h 
EXTRA_DIST = picon.png
