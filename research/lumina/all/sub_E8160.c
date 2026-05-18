unsigned __int64 sub_E8160(__int64 *a1, _BYTE *a2, ...)
{
  _QWORD *v4; // rsi
  __int64 v5; // rdi
  gcc_va_list va; // [rsp+0h] [rbp-E8h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-D0h]
  __int128 v9; // [rsp+50h] [rbp-98h]

  va_start(va, a2);
  *(double *)&v9 = va_arg(va, double);
  va_end(va);
  v8 = __readfsqword(0x28u);
  v4 = (_QWORD *)a1[21];
  if ( v4 )
    sub_C9250(*a1, v4);
  v5 = *a1;
  va_start(va, a2);
  a1[21] = sub_DBC60(v5, a2, (__int64)va, *(double *)&v9);
  return __readfsqword(0x28u) ^ v8;
}
