int __fastcall sub_1A6F40(void (*a1)(void *))
{
  return __cxa_atexit(a1, nullptr, &lpdso_handle);
}
