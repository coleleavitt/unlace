unsigned __int64 sub_13370(__int64 a1, __int64 a2, ...)
{
  const char *v2; // rsi
  const char *v4; // [rsp+0h] [rbp-F8h] BYREF
  __int128 v5; // [rsp+8h] [rbp-F0h]
  gcc_va_list va; // [rsp+20h] [rbp-D8h] BYREF
  unsigned __int64 v7; // [rsp+38h] [rbp-C0h]
  __int64 v8; // [rsp+50h] [rbp-A8h]
  __int64 v9; // [rsp+58h] [rbp-A0h]
  __int64 v10; // [rsp+60h] [rbp-98h]
  __int64 v11; // [rsp+68h] [rbp-90h]

  va_start(va, a2);
  v8 = va_arg(va, _QWORD);
  v9 = va_arg(va, _QWORD);
  v10 = va_arg(va, _QWORD);
  v11 = va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a2);
  v7 = __readfsqword(0x28u);
  v4 = nullptr;
  v5 = 0;
  sub_E340((__int64 *)&v4, a2, (const __m128i *)va, v9, v10, v11);
  v2 = s1;
  if ( (_QWORD)v5 )
    v2 = v4;
  set_cmt(a1, v2, 0);
  if ( v4 )
  {
    *(_QWORD *)&v5 = 0;
    qfree(v4);
  }
  return v7 - __readfsqword(0x28u);
}
