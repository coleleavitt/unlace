unsigned __int64 sub_943B0(_BYTE *a1, __int64 a2, ...)
{
  const char *v4; // rsi
  __int64 v5; // rdi
  const char *v6; // [rsp+0h] [rbp-F8h] BYREF
  __int128 v7; // [rsp+8h] [rbp-F0h]
  gcc_va_list va; // [rsp+20h] [rbp-D8h] BYREF
  unsigned __int64 v9; // [rsp+38h] [rbp-C0h]
  __int64 v10; // [rsp+50h] [rbp-A8h]
  __int64 v11; // [rsp+58h] [rbp-A0h]
  __int64 v12; // [rsp+60h] [rbp-98h]
  __int64 v13; // [rsp+68h] [rbp-90h]

  va_start(va, a2);
  v10 = va_arg(va, _QWORD);
  v11 = va_arg(va, _QWORD);
  v12 = va_arg(va, _QWORD);
  v13 = va_arg(va, _QWORD);
  va_end(va);
  v9 = __readfsqword(0x28u);
  if ( !*a1 )
  {
    va_start(va, a2);
    v6 = nullptr;
    v7 = 0;
    sub_20090((__int64 *)&v6, a2, (const __m128i *)va, v11, v12, v13);
    v4 = src;
    if ( (_QWORD)v7 )
      v4 = v6;
    sub_1D740((__int64)"%s", v4);
    v5 = (__int64)v6;
    *a1 = 1;
    if ( v5 )
    {
      *(_QWORD *)&v7 = 0;
      qfree(v5);
    }
  }
  return v9 - __readfsqword(0x28u);
}

