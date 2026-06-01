__int64 __fastcall sub_30EF0(__int64 a1)
{
  __int64 v1; // rax
  const __m128i *v3; // rbp
  __m128i *v4; // rax
  const __m128i *v5; // roff
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rdx
  __int8 v9; // cl
  unsigned __int8 v10; // [rsp+Fh] [rbp-1A9h]
  int v11; // [rsp+14h] [rbp-1A4h] BYREF
  const __m128i *v12; // [rsp+18h] [rbp-1A0h] BYREF
  _BYTE v13[360]; // [rsp+20h] [rbp-198h] BYREF
  unsigned __int64 v14; // [rsp+188h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 968);
  v14 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 32) == v1 )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  if ( !(unsigned __int8)sub_30630(a1, &v12, &v11) )
    return 0;
  v3 = v12;
  v4 = *(__m128i **)(a1 + 864);
  v5 = v12;
  *v4 = _mm_loadu_si128(v12);
  v4[1] = _mm_loadu_si128(v5 + 1);
  v4[2].m128i_i32[0] = v3[2].m128i_i32[0];
  if ( !(unsigned __int8)track_value_until_address_jpt(a1, *(_QWORD *)(a1 + 864), *(_QWORD *)(a1 + 968)) )
    return 0;
  v6 = *(_QWORD *)(a1 + 968);
  qmemcpy(v13, (const void *)(a1 + 16), sizeof(v13));
  *(_QWORD *)(a1 + 32) = v6;
  v10 = same_value_jpt(a1, a1 + 928, 0);
  if ( !v10 )
    return 0;
  v7 = v11;
  qmemcpy((void *)(a1 + 16), v13, 0x168u);
  v8 = *(_QWORD *)(a1 + 376);
  v9 = v3->m128i_i8[5];
  *(_DWORD *)(v8 + 64) = v3->m128i_u16[3];
  *(_BYTE *)(v8 + 68) = v9;
  sub_30CF0((_QWORD *)a1, (__int64)&v3[2].m128i_i64[1], v7 + 1);
  return v10;
}
