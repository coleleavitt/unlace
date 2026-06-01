__int64 __fastcall sub_3BF230(
        __int64 a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128i a5,
        __m128i a6,
        double a7,
        double a8,
        __m128 a9)
{
  const char **v10; // rdi
  const char *v11; // rbp
  double v12; // xmm4_8
  double v13; // xmm5_8
  __int64 v15; // rax
  __int64 v16; // rax

  v10 = *(const char ***)(a2 + 32);
  if ( *(_DWORD *)(a2 + 80) == 3 )
  {
    v11 = *v10;
  }
  else
  {
    v15 = sub_389B40((__int64)v10, a2 + 80, a3);
    if ( !v15 )
      return 0;
    v16 = *(_QWORD *)(v15 + 24);
    if ( *(_DWORD *)(v16 + 8) != 64 )
      return 0;
    v11 = *(const char **)(v16 + 24);
    if ( v11 == (const char *)-1LL )
      return 0;
  }
  if ( sub_3A9880(nullptr, (__int64)v11, 1) )
  {
    sub_3BF060(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL), v11, a3, a4, a5, a6, v12, v13, a9);
    return 1;
  }
  return 0;
}

