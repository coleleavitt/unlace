unsigned __int64 sub_1FEE0(__int64 a1, __int64 a2, ...)
{
  __int64 v3; // rax
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-C0h]
  __int64 v6; // [rsp+30h] [rbp-A8h]
  __int64 v7; // [rsp+38h] [rbp-A0h]
  __int64 v8; // [rsp+40h] [rbp-98h]
  __int64 v9; // [rsp+48h] [rbp-90h]

  va_start(va, a2);
  v6 = va_arg(va, _QWORD);
  v7 = va_arg(va, _QWORD);
  v8 = va_arg(va, _QWORD);
  v9 = va_arg(va, _QWORD);
  va_end(va);
  v5 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 792) )
  {
    va_start(va, a2);
    v3 = *(_QWORD *)(a1 + 480);
    if ( v3 && !*(_BYTE *)(v3 + 68) )
      ((void (__fastcall *)(_QWORD, __int64, __int64, __va_list_tag *, __int64, __int64))sub_240B0)(
        0,
        v3,
        a2,
        va,
        v8,
        v9);
    else
      ((void (__fastcall *)(_QWORD, __int64, __va_list_tag *, __int64, __int64, __int64))sub_24350)(
        0,
        a2,
        va,
        v7,
        v8,
        v9);
  }
  return v5 - __readfsqword(0x28u);
}

