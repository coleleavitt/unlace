unsigned __int64 __fastcall sub_4146E0(
        __int64 *a1,
        int a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        char a6,
        double a7,
        __m128 a8)
{
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rbp
  _DWORD *v17; // rsi
  int v18; // r12d

  v11 = a1[25];
  *(_DWORD *)v11 = a2;
  sub_125180((unsigned __int8 *)(v11 + 32), a3);
  sub_125180((unsigned __int8 *)(v11 + 48), a4);
  sub_125180((unsigned __int8 *)(v11 + 64), a5);
  if ( a6 || a2 > 62 )
    *(_DWORD *)(v11 + 4) |= 0x10u;
  v16 = a1[25];
  v17 = (_DWORD *)a1[24];
  if ( (_DWORD *)v16 != v17 )
  {
    v18 = *(_DWORD *)(v16 + 68);
    sub_11CDA0(v16 + 64);
    *(_DWORD *)(v16 + 68) = v18;
    v17 = (_DWORD *)a1[24];
  }
  return sub_414640(a1, v17, v12, v13, v14, v15, a7, a8);
}

