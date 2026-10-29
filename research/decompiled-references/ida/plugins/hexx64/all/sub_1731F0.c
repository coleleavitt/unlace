__int64 __fastcall sub_1731F0(__int64 a1, __int64 a2, __int64 a3, char a4, __m128i a5, __m128 a6)
{
  __int64 v7; // r8
  const __m128i *v9; // rsi
  __int64 v10; // rdx
  int v11; // eax
  unsigned __int8 *v12; // r14
  _DWORD v13[2]; // [rsp+0h] [rbp-40h] BYREF
  __int64 v14; // [rsp+8h] [rbp-38h]
  unsigned __int64 v15; // [rsp+18h] [rbp-28h]

  v15 = __readfsqword(0x28u);
  if ( !a4 )
  {
    v7 = *(_QWORD *)(a1 + 48);
    v9 = *(const __m128i **)(a1 + 16);
    v10 = *(_QWORD *)(a1 + 24);
    v11 = *(_DWORD *)(v7 + 68);
    v14 = v7;
    v12 = (unsigned __int8 *)a2;
    v13[0] = 4;
    v13[1] = v11;
    if ( (unsigned __int8)sub_12EA80(*(_QWORD *)(v9[4].m128i_i64[0] + 1504), v9, v10, a2, v7, (__int64)v13, a5, a6, 0) )
    {
      sub_125180(v12, (unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 64LL));
      ++*(_DWORD *)(a1 + 56);
    }
    LOBYTE(v13[0]) = 0;
    sub_11CDA0((__int64)v13);
  }
  return 0;
}

