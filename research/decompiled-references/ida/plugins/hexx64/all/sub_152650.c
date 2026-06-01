char __fastcall sub_152650(__int64 a1, unsigned __int64 *a2, __int64 a3, __int64 a4, __m128i a5)
{
  int v5; // eax
  char v7; // bl
  unsigned __int8 v9[24]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-30h]

  v5 = *(_DWORD *)(a3 + 4);
  v10 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 4) > v5 )
  {
    sub_123A40((__int64)v9, (unsigned __int8 *)a1, a3, a4);
    sub_1279B0((__int64)v9, a2, -1, *(_DWORD *)(a3 + 4), a5);
    v7 = sub_125B60(v9, a3, 0, *(double *)a5.m128i_i64);
    sub_11CDA0((__int64)v9);
    return v7;
  }
  if ( *(_DWORD *)(a1 + 4) < v5 )
  {
    sub_123A40((__int64)v9, (unsigned __int8 *)a3, a3, a4);
    sub_1279B0((__int64)v9, a2, -1, *(_DWORD *)(a1 + 4), a5);
    v7 = sub_125B60(v9, a1, 0, *(double *)a5.m128i_i64);
    sub_11CDA0((__int64)v9);
    return v7;
  }
  return sub_125B60((unsigned __int8 *)a1, a3, 0, *(double *)a5.m128i_i64);
}

