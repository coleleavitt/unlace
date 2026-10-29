__int64 __fastcall sub_1301F0(const __m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __m128i a6, __m128 a7)
{
  unsigned int v7; // r15d
  __int64 v9; // rdx
  __int64 v12; // rax
  signed int v13; // r8d
  unsigned __int64 *v14; // r15
  int v15; // [rsp+Ch] [rbp-64h]
  __int64 v16; // [rsp+10h] [rbp-60h]
  char v17[4]; // [rsp+20h] [rbp-50h] BYREF
  signed int v18; // [rsp+24h] [rbp-4Ch]
  unsigned __int64 v19; // [rsp+38h] [rbp-38h]

  v7 = 0;
  v19 = __readfsqword(0x28u);
  v9 = *(unsigned int *)(a3 + 4);
  if ( *(_DWORD *)(a5 + 4) > (int)v9 )
  {
    sub_123A40((__int64)v17, (unsigned __int8 *)a5, v9, a4);
    v12 = a2;
    if ( !a2 )
      v12 = a1[3].m128i_i64[1];
    v13 = *(_DWORD *)(a3 + 4);
    v16 = *(_QWORD *)(v12 + 24);
    if ( v13 >= v18 || v13 <= 0 )
    {
      v7 = 0;
    }
    else
    {
      v15 = *(_DWORD *)(a3 + 4);
      v14 = *(unsigned __int64 **)(a1[30].m128i_i64[0] + 112);
      if ( !(unsigned __int8)sub_127850((__int64)v17, v14, v13, 0, a6) )
        sub_1207E0(v17, v14, 11, v16, v15, a6);
      v7 = sub_12EA80((__int64)v14, a1, a2, a3, a4, (__int64)v17, a6, a7, 2);
    }
    sub_11CDA0((__int64)v17);
  }
  return v7;
}

