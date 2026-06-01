__int64 __fastcall sub_2ECC0(__int64 a1, const __m128i **a2, __int64 *a3)
{
  __int64 v3; // rbx
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rax
  int v7; // r12d
  __int64 v8; // r15
  __int64 v9; // r15
  int v10; // eax
  bool v11; // dl
  const __m128i *v12; // rax
  __int64 v13; // rax
  const __m128i *v14; // rdx
  const __m128i *v15; // rsi
  const __m128i *v16; // rdi
  __int64 v17; // rdx
  __m128i v18; // xmm0
  int v21; // [rsp+4h] [rbp-54h]
  const __m128i *v22; // [rsp+8h] [rbp-50h]
  _QWORD v23[9]; // [rsp+10h] [rbp-48h] BYREF

  v3 = *a3;
  v23[1] = __readfsqword(0x28u);
  v23[0] = v3;
  v5 = a3[1] + v3;
  v21 = unpack_dd(v23, v5);
  v6 = v23[0];
  if ( v21 )
  {
    v7 = 0;
    while ( v6 < v5 )
    {
      v12 = a2[1];
      if ( a2[2] >= (const __m128i *)&v12->m128i_i8[1] )
      {
        v8 = (__int64)*a2;
      }
      else
      {
        v22 = a2[2];
        v13 = qvector_reserve(a2, 0, &v12->m128i_i8[1], 40);
        v14 = a2[1];
        v15 = a2[2];
        v16 = *a2;
        v8 = v13;
        a2[2] = v22;
        v17 = (__int64)&v14[-1].m128i_i64[1] + 7;
        if ( v17 >= 0 )
        {
          do
          {
            v18 = _mm_loadu_si128(v16);
            v13 += 40;
            v16 = (const __m128i *)((char *)v16 + 40);
            *(__m128i *)(v13 - 40) = v18;
            *(__m128i *)(v13 - 24) = _mm_loadu_si128((const __m128i *)((char *)v16 - 24));
            *(_QWORD *)(v13 - 8) = v16[-1].m128i_i64[1];
          }
          while ( v17-- != 0 );
          v16 = *a2;
        }
        qfree(v16);
        *a2 = (const __m128i *)v8;
        v12 = a2[1];
        a2[2] = v15;
      }
      v9 = v8 + 40LL * (_QWORD)v12;
      *(_OWORD *)(v9 + 8) = 0;
      *(_QWORD *)v9 = -1;
      *(_QWORD *)(v9 + 24) = 0xFFFFFFFF00000000LL;
      *(_BYTE *)(v9 + 32) = 0;
      a2[1] = (const __m128i *)((char *)a2[1] + 1);
      *(_QWORD *)v9 = unpack_dq(v23, v5) - 1;
      *(_DWORD *)(v9 + 8) = unpack_dd(v23, v5);
      *(_DWORD *)(v9 + 12) = unpack_dd(v23, v5);
      *(_DWORD *)(v9 + 16) = unpack_dd(v23, v5);
      *(_DWORD *)(v9 + 20) = unpack_dd(v23, v5);
      *(_DWORD *)(v9 + 24) = unpack_dd(v23, v5);
      v10 = unpack_dd(v23, v5);
      v11 = 0;
      *(_DWORD *)(v9 + 28) = v10;
      v6 = v23[0];
      if ( v23[0] < v5 )
      {
        v11 = *(_BYTE *)v23[0] != 0;
        v6 = v23[0] + 1LL;
      }
      v23[0] = v6;
      ++v7;
      *(_BYTE *)(v9 + 32) = v11;
      if ( v21 == v7 )
        goto LABEL_13;
    }
  }
  else
  {
LABEL_13:
    if ( v5 == v6 )
      return 0;
  }
  return 2147500037LL;
}
