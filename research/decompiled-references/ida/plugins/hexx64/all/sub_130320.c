__int64 __fastcall sub_130320(const __m128i *a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, __m128i a6, __m128 a7)
{
  __int64 v8; // r14
  __int64 v10; // r15
  char v11; // al
  _DWORD *v13; // [rsp+8h] [rbp-50h]
  _DWORD *v14; // [rsp+8h] [rbp-50h]
  int v15; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  if ( *(_DWORD *)a3 != 10 )
    return 0;
  if ( *(_BYTE *)(a3 + 32) != 4 )
    return 0;
  v8 = *(_QWORD *)(a3 + 40);
  if ( !v8
    || (unsigned int)(*(_DWORD *)v8 - 23) > 1
    || (unsigned int)(*a5 - 23) > 1
    || *(_DWORD *)(a3 + 68) + a5[17] != *(_DWORD *)(v8 + 68) )
  {
    return 0;
  }
  v10 = *(_QWORD *)(a1[30].m128i_i64[0] + 112);
  if ( *(_DWORD *)v8 != *a5 )
  {
    v13 = a5;
    v11 = sub_152630(v8, &v15);
    a5 = v13;
    if ( v11 )
    {
      if ( 8 * (*(_DWORD *)(a3 + 36) - *(_DWORD *)(a3 + 68)) < v15 )
        return 0;
    }
    else if ( v13[17] != 4 || (*(_BYTE *)(v10 + 48) & 0x10) == 0 )
    {
      return 0;
    }
  }
  v14 = a5;
  if ( !sub_1255D0((unsigned __int8 *)(v8 + 48), v10, (__int64)(a5 + 12), 1, *(double *)a6.m128i_i64) )
    return 0;
  return sub_1301F0(a1, a4, (__int64)(v14 + 8), a2, v8 + 32, a6, a7);
}

