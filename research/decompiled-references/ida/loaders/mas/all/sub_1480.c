void __noreturn sub_1480(__int64 a1, ...)
{
  gcc_va_list va; // [rsp+8h] [rbp-4E0h] BYREF
  char v2[1032]; // [rsp+20h] [rbp-4C8h] BYREF
  unsigned __int64 v3; // [rsp+428h] [rbp-C0h]

  va_start(va, a1);
  v3 = __readfsqword(0x28u);
  qvsnprintf(v2, 1024, a1, va);
  sub_13D0((__int64)"mas loader critical error: %s", v2);
}

