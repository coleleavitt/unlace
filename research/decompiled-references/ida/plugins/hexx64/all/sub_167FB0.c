__int64 __fastcall sub_167FB0(const __m128i *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __m128i a6, __m128 a7)
{
  __int64 result; // rax
  __int64 v10; // r12
  int v11; // r14d
  _DWORD *v12; // rax
  int v13; // eax
  __int64 v14; // r10
  __int64 v15; // rbx
  _BOOL4 v16; // eax
  _DWORD *v17; // rdx
  int v18; // edx
  __int64 v20; // [rsp+8h] [rbp-50h]
  __int64 v21; // [rsp+10h] [rbp-48h]
  int v22; // [rsp+18h] [rbp-40h]
  int v23; // [rsp+1Ch] [rbp-3Ch]

  if ( (*(_BYTE *)(a3 + 6) & 2) != 0 )
    return 0;
  v20 = *(_QWORD *)(a1[30].m128i_i64[0] + 112);
  if ( (unsigned __int8)sub_1205A0((_BYTE *)a3, v20, 0) )
    return 0;
  v10 = a1[3].m128i_i64[1];
  v11 = *(_DWORD *)v10;
  if ( *(_DWORD *)v10 != 42 || a2 != 42 )
  {
    v13 = sub_32E9E0(a2);
    v14 = a3 + 48;
    v23 = v13;
    v15 = a3 + 32;
    v16 = (unsigned int)(v11 - 43) <= 1;
    v22 = 2 * v16;
    v21 = v14;
    if ( (unsigned int)sub_130580(v20, a1, v10, (_DWORD *)v10, a5, a4, a6, a7, v15, v14, 2 * (unsigned __int8)v16) )
    {
      if ( v11 != a2 )
        return 2 * (unsigned int)(v11 == v23);
    }
    else
    {
      if ( v22 == 2 || !(unsigned int)sub_130580(v20, a1, v10, (_DWORD *)v10, a5, a4, a6, a7, v21, v15, 0) )
        return 0;
      if ( v11 != (unsigned int)sub_32EA00(a2) )
        return 2 * (unsigned int)(v11 == (unsigned int)sub_32EA00(v23));
    }
    return 1;
  }
  if ( (unsigned int)sub_130720(a1, v10, v10 + 32, a5, a4, a3 + 32, a6, a7, 0) )
    return 1;
  if ( *(_BYTE *)(v10 + 32) != 4
    || (v17 = *(_DWORD **)(v10 + 40), *v17 != 6)
    || (v18 = sub_130720(a1, v10, (__int64)(v17 + 8), a5, a4, a3 + 32, a6, a7, 0), result = 2, !v18) )
  {
    if ( *(_BYTE *)(a3 + 32) == 4 )
    {
      v12 = *(_DWORD **)(a3 + 40);
      if ( *v12 == 6 )
        return 2
             * (unsigned int)((unsigned int)sub_130720(a1, v10, v10 + 32, a5, a4, (__int64)(v12 + 8), a6, a7, 0) != 0);
    }
    return 0;
  }
  return result;
}

