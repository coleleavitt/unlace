__int64 __fastcall sub_D57A0(__int64 a1, _DWORD *a2)
{
  const __m128i **v4; // rax
  bool v5; // zf
  __int64 v6; // rdi
  const __m128i *v7; // rbx
  __int64 result; // rax
  __int32 v9; // edx
  __int64 *v10; // rax
  __int32 v11; // ecx
  int v12; // esi
  __m128i v13; // xmm0
  __m128i v14; // [rsp+0h] [rbp-88h] BYREF
  __m128i v15; // [rsp+10h] [rbp-78h] BYREF
  __m128i v16; // [rsp+20h] [rbp-68h] BYREF
  __m128i v17; // [rsp+30h] [rbp-58h]
  __m128i v18; // [rsp+40h] [rbp-48h]
  __m128i v19; // [rsp+50h] [rbp-38h]
  unsigned __int64 v20; // [rsp+68h] [rbp-20h]

  v20 = __readfsqword(0x28u);
  v4 = *(const __m128i ***)(a1 + 48);
  v5 = *(_BYTE *)(a1 + 63) == 2;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = *v4;
  v14 = _mm_loadu_si128(*v4);
  v15 = _mm_loadu_si128(v7 + 1);
  v16 = _mm_loadu_si128(v7 + 2);
  if ( !v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 120LL))(v6);
  v17 = _mm_loadu_si128(v7 + 3);
  v18 = _mm_loadu_si128(v7 + 4);
  v19 = _mm_loadu_si128(v7 + 5);
  if ( *(_OWORD *)&v17 != *(_OWORD *)&v14 || *(_OWORD *)&v18 != *(_OWORD *)&v15 || *(_OWORD *)&v19 != *(_OWORD *)&v16 )
    return 1;
  result = 1;
  if ( v14.m128i_i8[12] )
  {
    v9 = v14.m128i_i32[0];
    v10 = &v14.m128i_i64[1];
    v11 = v14.m128i_i32[0] + v14.m128i_i32[1];
    do
    {
      v12 = *(_DWORD *)v10++;
      v9 += v11 + v12;
      v11 += v9 + *((_DWORD *)v10 - 1);
    }
    while ( v10 < &v16.m128i_i64[1] );
    result = 1;
    if ( v16.m128i_i64[1] == __PAIR64__(v11, v9) )
    {
      if ( *(_OWORD *)&v14 != *(_OWORD *)(a1 + 72)
        || *(_OWORD *)&v15 != *(_OWORD *)(a1 + 88)
        || *(_OWORD *)&v16 != *(_OWORD *)(a1 + 104) )
      {
        v13 = _mm_load_si128(&v14);
        *a2 = 1;
        *(__m128i *)(a1 + 72) = v13;
        *(__m128i *)(a1 + 88) = _mm_load_si128(&v15);
        *(__m128i *)(a1 + 104) = _mm_load_si128(&v16);
        *(_DWORD *)(a1 + 56) = *(_WORD *)(a1 + 86) & 0xFE00 | (*(unsigned __int16 *)(a1 + 86) << 16) & 0x10000;
      }
      return 0;
    }
  }
  return result;
}
