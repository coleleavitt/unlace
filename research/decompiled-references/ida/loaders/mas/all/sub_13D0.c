void __noreturn sub_13D0(__int64 a1, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v2; // [rsp+18h] [rbp-C0h]

  va_start(va, a1);
  v2 = __readfsqword(0x28u);
  ((void (__fastcall *)(__int64, __va_list_tag *))vloader_failure)(a1, va);
}

