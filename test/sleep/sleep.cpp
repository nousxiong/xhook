/// 
/// Test hook win32 api Sleep.
/// 

#include <xhook.hpp>
#include <iostream>


typedef void(WINAPI *SleepF)(DWORD dwMilliseconds);
SleepF sleep_fn = &::Sleep;

void WINAPI MySleep(DWORD ms)
{
  std::cout << "MySleep(" << ms << ")" << std::endl;
}

int main()
{
  XHookRestoreAfterWith();
  XHookTransactionBegin();
  XHookUpdateThread(GetCurrentThread());
  XHookAttach(&(PVOID&)sleep_fn, MySleep);
  XHookTransactionCommit();
  ::Sleep(1);
  std::cout << "done." << std::endl;
  return 0;
}

