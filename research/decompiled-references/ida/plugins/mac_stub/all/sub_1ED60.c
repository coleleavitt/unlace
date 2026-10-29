unsigned __int64 sub_1ED60(__int64 a1, __int64 a2, ...)
{
  __int64 v3; // rax
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-C0h]

  v5 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 792) )
  {
    va_start(va, a2);
    v3 = *(_QWORD *)(a1 + 480);
    if ( v3 && !*(_BYTE *)(v3 + 68) )
      ((void (__fastcall *)(_QWORD, __int64, __int64, __va_list_tag *))sub_31790)(0, v3, a2, va);
    else
      sub_35030(0, a2, va);
  }
  return v5 - __readfsqword(0x28u);
}

