unsigned __int64 sub_ECFF0(__int64 a1, _BYTE *a2, ...)
{
  __int64 v2; // r8
  __int64 v3; // r9
  double v4; // xmm0_8
  int v6; // eax
  _BYTE *v8; // rsi
  gcc_va_list va; // [rsp+0h] [rbp-E8h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-D0h]
  __int64 v11; // [rsp+30h] [rbp-B8h]
  __int64 v12; // [rsp+38h] [rbp-B0h]
  __int64 v13; // [rsp+40h] [rbp-A8h]
  __int64 v14; // [rsp+48h] [rbp-A0h]
  __int128 v15; // [rsp+50h] [rbp-98h]

  va_start(va, a2);
  v11 = va_arg(va, _QWORD);
  v12 = va_arg(va, _QWORD);
  v13 = va_arg(va, _QWORD);
  v2 = v13;
  v14 = va_arg(va, _QWORD);
  v3 = v14;
  *(double *)&v15 = va_arg(va, double);
  v4 = *(double *)&v15;
  va_end(va);
  v10 = __readfsqword(0x28u);
  v6 = *(_DWORD *)(a1 + 28);
  if ( v6 )
  {
    ++*(_DWORD *)(a1 + 32);
    *(_DWORD *)(a1 + 28) = v6 - 1;
    va_start(va, a2);
    if ( *(_DWORD *)(a1 + 80) )
      sub_DFD90(a1 + 56, "\n", 1);
    v8 = *(_BYTE **)(a1 + 40);
    if ( v8 )
      sub_DBBA0(
        a1 + 56,
        v8,
        *(unsigned int *)(a1 + 48),
        *(unsigned int *)(a1 + 52),
        v2,
        v3,
        *(_QWORD *)&va[0].gp_offset,
        va[0].overflow_arg_area,
        va[0].reg_save_area);
    sub_D9E30(a1 + 56, a2, (__int64)va, v4);
    if ( *(_BYTE *)(a1 + 84) == 7 )
      *(_DWORD *)(a1 + 36) = 1;
  }
  return __readfsqword(0x28u) ^ v10;
}
