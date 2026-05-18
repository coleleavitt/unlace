void __noreturn sub_18D0E0(__int64 a1, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v2; // [rsp+18h] [rbp-C0h]

  va_start(va, a1);
  v2 = __readfsqword(0x28u);
  ((void (__fastcall *)(__int64, __va_list_tag *))sub_19D9B0)(a1, va);
  sub_1980F0();
  sub_198E30(255);
}
