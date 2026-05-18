bool __fastcall sub_B1840(__int64 a1, const __m128i **a2, __int64 a3)
{
  bool result; // al
  const __m128i *v4; // rbx
  const __m128i *v5; // r14
  __m128i v6; // xmm0
  __int64 v7; // rax
  const __m128i *v8; // rdx
  bool v9; // cf
  const __m128i *v10; // rdx
  const __m128i *v11; // [rsp+8h] [rbp-60h]
  const __m128i *v12; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v13[9]; // [rsp+20h] [rbp-48h] BYREF

  v13[1] = __readfsqword(0x28u);
  v12 = *a2;
  if ( __CFADD__(a3, v12) )
    return 0;
  v4 = (const __m128i *)((char *)v12 + a3);
  if ( !(unsigned __int8)sub_6B1B0((__int64 *)a1, (const void **)&v12, (unsigned __int64)v12->m128i_u64 + a3) )
    return 0;
  v5 = v12 + 1;
  if ( v4 < &v12[1] )
    return 0;
  v6 = _mm_loadu_si128(v12);
  v13[0] = v12 + 1;
  *(__m128i *)(a1 + 24) = v6;
  v7 = sub_196FF0(v13, v4);
  v8 = (const __m128i *)v13[0];
  v9 = (unsigned __int64)v5 < v13[0];
  *(_QWORD *)(a1 + 40) = v7 - 1;
  v12 = v8;
  v11 = v8;
  if ( !v9 )
    return 0;
  *(_QWORD *)(a1 + 48) = sub_196FF0(v13, v4);
  v12 = (const __m128i *)v13[0];
  if ( (unsigned __int64)v11 >= v13[0] )
    return 0;
  if ( !sub_6C650((_DWORD *)(a1 + 56), (unsigned __int64 *)&v12, (__int64)v4) )
    return 0;
  if ( !sub_6C650((_DWORD *)(a1 + 60), (unsigned __int64 *)&v12, (__int64)v4) )
    return 0;
  if ( !sub_6C650((_DWORD *)(a1 + 64), (unsigned __int64 *)&v12, (__int64)v4) )
    return 0;
  result = sub_6C650((_DWORD *)(a1 + 68), (unsigned __int64 *)&v12, (__int64)v4);
  if ( !result )
    return 0;
  if ( v12 >= v4 )
  {
    *(_BYTE *)(a1 + 72) = 0;
    return 0;
  }
  v10 = (const __m128i *)&v12->m128i_i8[1];
  *(_BYTE *)(a1 + 72) = v12->m128i_i8[0];
  *a2 = v10;
  return result;
}
