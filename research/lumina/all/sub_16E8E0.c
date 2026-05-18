void __noreturn sub_16E8E0(int status, __int64 a2, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v3; // [rsp+18h] [rbp-C0h]

  va_start(va, a2);
  v3 = __readfsqword(0x28u);
  sub_16B820(a2, (__int64)va);
  sub_198E30(status);
}
