#############################################################################
# Makefile for building: myDoor
# Generated by qmake (2.01a) (Qt 4.8.0) on: ?? ?? 15 21:54:24 2014
# Project:  myDoor.pro
# Template: app
# Command: f:\qtsdk\desktop\qt\4.8.0\mingw\bin\qmake.exe -spec f:\QtSDK\Desktop\Qt\4.8.0\mingw\mkspecs\win32-g++ CONFIG+=declarative_debug -o Makefile myDoor.pro
#############################################################################

first: debug
install: debug-install
uninstall: debug-uninstall
MAKEFILE      = Makefile
QMAKE         = f:\qtsdk\desktop\qt\4.8.0\mingw\bin\qmake.exe
DEL_FILE      = del
CHK_DIR_EXISTS= if not exist
MKDIR         = mkdir
COPY          = copy /y
COPY_FILE     = $(COPY)
COPY_DIR      = xcopy /s /q /y /i
INSTALL_FILE  = $(COPY_FILE)
INSTALL_PROGRAM = $(COPY_FILE)
INSTALL_DIR   = $(COPY_DIR)
DEL_FILE      = del
SYMLINK       = 
DEL_DIR       = rmdir
MOVE          = move
CHK_DIR_EXISTS= if not exist
MKDIR         = mkdir
SUBTARGETS    =  \
		debug \
		release

debug: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug
debug-make_default: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug 
debug-make_first: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug first
debug-all: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug all
debug-clean: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug clean
debug-distclean: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug distclean
debug-install: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug install
debug-uninstall: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug uninstall
release: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release
release-make_default: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release 
release-make_first: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release first
release-all: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release all
release-clean: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release clean
release-distclean: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release distclean
release-install: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release install
release-uninstall: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release uninstall

Makefile: myDoor.pro  f:/QtSDK/Desktop/Qt/4.8.0/mingw/mkspecs/win32-g++/qmake.conf f:/QtSDK/Desktop/Qt/4.8.0/mingw/mkspecs/qconfig.pri \
		f:/QtSDK/Desktop/Qt/4.8.0/mingw/mkspecs/modules/qt_webkit_version.pri \
		f:/QtSDK/Desktop/Qt/4.8.0/mingw/mkspecs/features/qt_functions.prf \
		f:/QtSDK/Desktop/Qt/4.8.0/mingw/mkspecs/features/qt_config.prf \
		f:/QtSDK/Desktop/Qt/4.8.0/mingw/mkspecs/features/exclusive_builds.prf \
		f:/QtSDK/Desktop/Qt/4.8.0/mingw/mkspecs/features/default_pre.prf \
		f:/QtSDK/Desktop/Qt/4.8.0/mingw/mkspecs/features/win32/default_pre.prf \
		f:/QtSDK/Desktop/Qt/4.8.0/mingw/mkspecs/features/debug.prf \
		f:/QtSDK/Desktop/Qt/4.8.0/mingw/mkspecs/features/debug_and_release.prf \
		f:/QtSDK/Desktop/Qt/4.8.0/mingw/mkspecs/features/default_post.prf \
		f:/QtSDK/Desktop/Qt/4.8.0/mingw/mkspecs/features/win32/default_post.prf \
		f:/QtSDK/Desktop/Qt/4.8.0/mingw/mkspecs/features/declarative_debug.prf \
		f:/QtSDK/Desktop/Qt/4.8.0/mingw/mkspecs/features/win32/rtti.prf \
		f:/QtSDK/Desktop/Qt/4.8.0/mingw/mkspecs/features/win32/exceptions.prf \
		f:/QtSDK/Desktop/Qt/4.8.0/mingw/mkspecs/features/win32/stl.prf \
		f:/QtSDK/Desktop/Qt/4.8.0/mingw/mkspecs/features/shared.prf \
		f:/QtSDK/Desktop/Qt/4.8.0/mingw/mkspecs/features/warn_on.prf \
		f:/QtSDK/Desktop/Qt/4.8.0/mingw/mkspecs/features/qt.prf \
		f:/QtSDK/Desktop/Qt/4.8.0/mingw/mkspecs/features/win32/thread.prf \
		f:/QtSDK/Desktop/Qt/4.8.0/mingw/mkspecs/features/moc.prf \
		f:/QtSDK/Desktop/Qt/4.8.0/mingw/mkspecs/features/win32/windows.prf \
		f:/QtSDK/Desktop/Qt/4.8.0/mingw/mkspecs/features/resources.prf \
		f:/QtSDK/Desktop/Qt/4.8.0/mingw/mkspecs/features/uic.prf \
		f:/QtSDK/Desktop/Qt/4.8.0/mingw/mkspecs/features/yacc.prf \
		f:/QtSDK/Desktop/Qt/4.8.0/mingw/mkspecs/features/lex.prf \
		f:/QtSDK/Desktop/Qt/4.8.0/mingw/mkspecs/features/include_source_dir.prf \
		f:/QtSDK/Desktop/Qt/4.8.0/mingw/lib/qtmaind.prl
	$(QMAKE) -spec f:\QtSDK\Desktop\Qt\4.8.0\mingw\mkspecs\win32-g++ CONFIG+=declarative_debug -o Makefile myDoor.pro
f:\QtSDK\Desktop\Qt\4.8.0\mingw\mkspecs\qconfig.pri:
f:\QtSDK\Desktop\Qt\4.8.0\mingw\mkspecs\modules\qt_webkit_version.pri:
f:\QtSDK\Desktop\Qt\4.8.0\mingw\mkspecs\features\qt_functions.prf:
f:\QtSDK\Desktop\Qt\4.8.0\mingw\mkspecs\features\qt_config.prf:
f:\QtSDK\Desktop\Qt\4.8.0\mingw\mkspecs\features\exclusive_builds.prf:
f:\QtSDK\Desktop\Qt\4.8.0\mingw\mkspecs\features\default_pre.prf:
f:\QtSDK\Desktop\Qt\4.8.0\mingw\mkspecs\features\win32\default_pre.prf:
f:\QtSDK\Desktop\Qt\4.8.0\mingw\mkspecs\features\debug.prf:
f:\QtSDK\Desktop\Qt\4.8.0\mingw\mkspecs\features\debug_and_release.prf:
f:\QtSDK\Desktop\Qt\4.8.0\mingw\mkspecs\features\default_post.prf:
f:\QtSDK\Desktop\Qt\4.8.0\mingw\mkspecs\features\win32\default_post.prf:
f:\QtSDK\Desktop\Qt\4.8.0\mingw\mkspecs\features\declarative_debug.prf:
f:\QtSDK\Desktop\Qt\4.8.0\mingw\mkspecs\features\win32\rtti.prf:
f:\QtSDK\Desktop\Qt\4.8.0\mingw\mkspecs\features\win32\exceptions.prf:
f:\QtSDK\Desktop\Qt\4.8.0\mingw\mkspecs\features\win32\stl.prf:
f:\QtSDK\Desktop\Qt\4.8.0\mingw\mkspecs\features\shared.prf:
f:\QtSDK\Desktop\Qt\4.8.0\mingw\mkspecs\features\warn_on.prf:
f:\QtSDK\Desktop\Qt\4.8.0\mingw\mkspecs\features\qt.prf:
f:\QtSDK\Desktop\Qt\4.8.0\mingw\mkspecs\features\win32\thread.prf:
f:\QtSDK\Desktop\Qt\4.8.0\mingw\mkspecs\features\moc.prf:
f:\QtSDK\Desktop\Qt\4.8.0\mingw\mkspecs\features\win32\windows.prf:
f:\QtSDK\Desktop\Qt\4.8.0\mingw\mkspecs\features\resources.prf:
f:\QtSDK\Desktop\Qt\4.8.0\mingw\mkspecs\features\uic.prf:
f:\QtSDK\Desktop\Qt\4.8.0\mingw\mkspecs\features\yacc.prf:
f:\QtSDK\Desktop\Qt\4.8.0\mingw\mkspecs\features\lex.prf:
f:\QtSDK\Desktop\Qt\4.8.0\mingw\mkspecs\features\include_source_dir.prf:
f:\QtSDK\Desktop\Qt\4.8.0\mingw\lib\qtmaind.prl:
qmake: qmake_all FORCE
	@$(QMAKE) -spec f:\QtSDK\Desktop\Qt\4.8.0\mingw\mkspecs\win32-g++ CONFIG+=declarative_debug -o Makefile myDoor.pro

qmake_all: FORCE

make_default: debug-make_default release-make_default FORCE
make_first: debug-make_first release-make_first FORCE
all: debug-all release-all FORCE
clean: debug-clean release-clean FORCE
distclean: debug-distclean release-distclean FORCE
	-$(DEL_FILE) Makefile

check: first

debug-mocclean: $(MAKEFILE).Debug
	$(MAKE) -f $(MAKEFILE).Debug mocclean
release-mocclean: $(MAKEFILE).Release
	$(MAKE) -f $(MAKEFILE).Release mocclean
mocclean: debug-mocclean release-mocclean

debug-mocables: $(MAKEFILE).Debug
	$(MAKE) -f $(MAKEFILE).Debug mocables
release-mocables: $(MAKEFILE).Release
	$(MAKE) -f $(MAKEFILE).Release mocables
mocables: debug-mocables release-mocables
FORCE:

$(MAKEFILE).Debug: Makefile
$(MAKEFILE).Release: Makefile
