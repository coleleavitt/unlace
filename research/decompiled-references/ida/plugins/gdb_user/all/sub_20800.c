unsigned __int64 sub_20800(__int64 a1, __int64 a2, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v4; // [rsp+18h] [rbp-C0h]

  va_start(va, a2);
  v4 = __readfsqword(0x28u);
  ((void (__fastcall *)(_QWORD, _QWORD, __int64, __va_list_tag *))sub_485F0)(0, *(_QWORD *)(a1 + 480), a2, va);
  return v4 - __readfsqword(0x28u);
}

