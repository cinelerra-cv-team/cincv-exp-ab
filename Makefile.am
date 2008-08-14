SUBDIRS=libmpeg3 quicktime mpeg2enc thirdparty/toolame-02l\
	guicast cinelerra mplexlo plugins po image m4
EXTRA_DIST = config.rpath  admin doc depcomp README.BUILD COPYING \
	cinelerra-cvs-current.spec
AUTOMAKE_OPTIONS=foreign
ACLOCAL_AMFLAGS = -I m4

dist-hook:
	-rm -rf $(distdir)/admin/CVS
	-rm -rf $(distdir)/debian/tmp
	-rm -rf $(distdir)/debian/CVS
	-rm -rf $(distdir)/debian/patches/CVS
	-rm -rf $(distdir)/doc/CVS
	-find $(distdir) -type d -name .svn -exec rm -rf {} \; -prune
