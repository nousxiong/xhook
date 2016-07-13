# xhook
Change XBased's xhook to header only.

XBased's xhook: https://github.com/XBased/xhook

Changes
--------

* xhook.h change to xhook.hpp
* xhook.hpp add xhook.cpp include
* Remove XHOOK_INTERNAL macro
* Move xhook.cpp include Windows.h to xhook.hpp
* All api add XHOOK_FUNC(defined as inline) macro, for inline functions
* Remove class CXHookDis's three s_* members, instead of three static getter methods
* Remove class XHOOK_IA64_BUNDLE's s_* member, instead of static getter method

Usage
--------

* Copy xhook.hpp, xhook.cpp and uimports.cpp to your project's include dir
* Include xhook.hpp
