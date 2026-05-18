__int64 sub_1628A0(__int64 a1, __int64 **a2, _BYTE *a3, ...)
{
  double v3; // xmm0_8
  unsigned int v4; // r12d
  __int64 v5; // rax
  _QWORD *v6; // rbp
  gcc_va_list va; // [rsp+0h] [rbp-F8h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-E0h]
  __int128 v10; // [rsp+50h] [rbp-A8h]

  va_start(va, a3);
  *(double *)&v10 = va_arg(va, double);
  v3 = *(double *)&v10;
  va_end(va);
  va_start(va, a3);
  v9 = __readfsqword(0x28u);
  v4 = 7;
  v5 = sub_DBC60(a1, a3, (__int64)va, *(double *)&v10);
  v6 = (_QWORD *)v5;
  if ( v5 )
  {
    v4 = sub_162780(a1, a2, v5, v3);
    sub_C9250(a1, v6);
  }
  return v4;
}
