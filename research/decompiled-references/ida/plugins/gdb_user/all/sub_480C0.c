unsigned __int64 sub_480C0(__int64 a1, __int64 a2, ...)
{
  __int64 v2; // rax
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-C0h]

  va_start(va, a2);
  v5 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 480);
  if ( v2 && !*(_BYTE *)(v2 + 68) )
    ((void (__fastcall *)(__int64, __int64, __int64, __va_list_tag *))sub_4D010)(1, v2, a2, va);
  else
    ((void (__fastcall *)(__int64, __int64, __va_list_tag *))sub_4F6D0)(1, a2, va);
  return v5 - __readfsqword(0x28u);
}

