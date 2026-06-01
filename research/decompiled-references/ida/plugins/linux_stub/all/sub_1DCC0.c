unsigned __int64 sub_1DCC0(__int64 a1, __int64 a2, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v4; // [rsp+18h] [rbp-C0h]
  __int64 v5; // [rsp+30h] [rbp-A8h]
  __int64 v6; // [rsp+38h] [rbp-A0h]
  __int64 v7; // [rsp+40h] [rbp-98h]
  __int64 v8; // [rsp+48h] [rbp-90h]

  va_start(va, a2);
  v5 = va_arg(va, _QWORD);
  v6 = va_arg(va, _QWORD);
  v7 = va_arg(va, _QWORD);
  v8 = va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a2);
  v4 = __readfsqword(0x28u);
  ((void (__fastcall *)(__int64, __int64, __int64, __va_list_tag *, __int64, __int64))sub_261F0)(1, a1, a2, va, v7, v8);
  return v4 - __readfsqword(0x28u);
}

