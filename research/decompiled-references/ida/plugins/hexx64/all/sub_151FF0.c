__int64 __fastcall sub_151FF0(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7)
{
  unsigned int v12; // r10d
  char v14; // al
  __int64 v15; // rax
  int v16; // r14d
  char v17; // al
  __int64 v18; // rdx
  __int64 v19; // rcx

  do
  {
    if ( (unsigned __int8)sub_14E7A0(a1, *(_BYTE *)(a4 + 32), *(_QWORD *)(a4 + 40)) )
      break;
    v12 = sub_14E7A0(a1, *(_BYTE *)(a4 + 48), *(_QWORD *)(a4 + 56));
    if ( (_BYTE)v12 )
      break;
    if ( *(_BYTE *)a2 == 10 )
      return v12;
    if ( !a3 )
      return v12;
    v14 = sub_151D70(a6, (__int64)a1);
    v12 = 0;
    if ( v14 )
    {
      if ( *(_BYTE *)a2 != 4 )
        return v12;
      v15 = *(_QWORD *)(a2 + 8);
      if ( *(_DWORD *)v15 != 12 || *(_BYTE *)(v15 + 32) != 10 && *(_BYTE *)(v15 + 48) != 10 )
        return v12;
    }
    v16 = *(_DWORD *)(a2 + 4);
    v17 = sub_13C7E0(a3, a2, (int *)a4, a5, a2, 0xFFFFFFFF, a7);
    v12 = 0;
    if ( v17 )
    {
      sub_11C950((unsigned __int8 *)a2, (__int64)a1, v18, v19, *(double *)a7.m128i_i64);
      if ( *(_DWORD *)(a2 + 4) < v16 )
        sub_1207E0((char *)a2, a1, 9, *(_QWORD *)(a4 + 24), v16, a7);
      return 1;
    }
    if ( *(_BYTE *)a2 != 4 )
      return v12;
    a4 = *(_QWORD *)(a2 + 8);
    if ( *(_DWORD *)a4 != 12 )
      return v12;
    a2 = a4 + 48;
    a6 = a4 + 32;
  }
  while ( !(unsigned __int8)sub_151FF0((__int64)a1, a4 + 32, a3, a4, a5, a4 + 48) );
  return 1;
}

