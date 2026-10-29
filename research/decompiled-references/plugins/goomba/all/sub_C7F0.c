unsigned __int64 sub_C7F0(__int64 a1, __int64 a2, __int64 a3, ...)
{
  void (__fastcall *hexdsp)(__int64, __int64, _QWORD, __int64, __va_list_tag *); // rax
  gcc_va_list va; // [rsp+0h] [rbp-E8h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-D0h]

  va_start(va, a3);
  v7 = __readfsqword(0x28u);
  hexdsp = (void (__fastcall *)(__int64, __int64, _QWORD, __int64, __va_list_tag *))get_hexdsp(a1, a2, a3);
  hexdsp(401, a1, (unsigned __int8)a2, a3, va);
  return v7 - __readfsqword(0x28u);
}
