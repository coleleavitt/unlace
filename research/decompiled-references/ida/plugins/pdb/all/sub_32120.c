unsigned __int64 __fastcall sub_32120(__int64 a1, __int64 *a2)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r13
  __int128 v5; // xmm0
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rsi
  __m128i *v9; // rbx
  __int64 v10; // rax
  __m128i v12; // [rsp+0h] [rbp-D8h]
  __m128i v13; // [rsp+10h] [rbp-C8h]
  __m128i v14; // [rsp+20h] [rbp-B8h]
  __m128i v15; // [rsp+30h] [rbp-A8h]
  __m128i v16; // [rsp+40h] [rbp-98h]
  __m128i v17; // [rsp+50h] [rbp-88h]
  __m128i v18; // [rsp+60h] [rbp-78h]
  __m128i v19; // [rsp+70h] [rbp-68h]
  __m128i v20; // [rsp+80h] [rbp-58h]
  unsigned __int64 v21; // [rsp+98h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  a2[3] = *(_QWORD *)(a1 + 24);
  *((_DWORD *)a2 + 11) = *(_DWORD *)(a1 + 32);
  *((_BYTE *)a2 + 51) = *(_BYTE *)(a1 + 36);
  v3 = *(_QWORD *)(a1 + 8);
  if ( a2[2] < v3 )
  {
    *a2 = qvector_reserve(a2, *a2, v3, 144);
    v3 = *(_QWORD *)(a1 + 8);
  }
  if ( v3 )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      v7 = a2[1];
      v8 = *a2;
      v9 = (__m128i *)(*(_QWORD *)a1 + 144 * v4);
      if ( a2[2] < (unsigned __int64)(v7 + 1) )
      {
        v10 = qvector_reserve(a2, v8, v7 + 1, 144);
        v5 = 0;
        *a2 = v10;
        v8 = v10;
        v7 = a2[1];
      }
      ++v4;
      v6 = 144 * v7 + v8;
      *(_OWORD *)v6 = v5;
      *(_OWORD *)(v6 + 24) = v5;
      *(_QWORD *)(v6 + 16) = 0;
      *(_QWORD *)(v6 + 40) = 0;
      *(_QWORD *)(v6 + 112) = 1;
      *(_DWORD *)(v6 + 120) = -1;
      *(_QWORD *)(v6 + 128) = 0;
      *(_BYTE *)(v6 + 136) = 0;
      *(_OWORD *)(v6 + 48) = v5;
      *(_OWORD *)(v6 + 64) = v5;
      ++a2[1];
      v12 = _mm_loadu_si128((const __m128i *)v6);
      v13 = _mm_loadu_si128((const __m128i *)(v6 + 16));
      v14 = _mm_loadu_si128((const __m128i *)(v6 + 32));
      v15 = _mm_loadu_si128((const __m128i *)(v6 + 48));
      v16 = _mm_loadu_si128((const __m128i *)(v6 + 64));
      v17 = _mm_loadu_si128((const __m128i *)(v6 + 80));
      v18 = _mm_loadu_si128((const __m128i *)(v6 + 96));
      v19 = _mm_loadu_si128((const __m128i *)(v6 + 112));
      v20 = _mm_loadu_si128((const __m128i *)(v6 + 128));
      *(__m128i *)v6 = _mm_loadu_si128(v9);
      *(__m128i *)(v6 + 16) = _mm_loadu_si128(v9 + 1);
      *(__m128i *)(v6 + 32) = _mm_loadu_si128(v9 + 2);
      *(__m128i *)(v6 + 48) = _mm_loadu_si128(v9 + 3);
      *(__m128i *)(v6 + 64) = _mm_loadu_si128(v9 + 4);
      *(__m128i *)(v6 + 80) = _mm_loadu_si128(v9 + 5);
      *(__m128i *)(v6 + 96) = _mm_loadu_si128(v9 + 6);
      *(__m128i *)(v6 + 112) = _mm_loadu_si128(v9 + 7);
      *(__m128i *)(v6 + 128) = _mm_loadu_si128(v9 + 8);
      *v9 = v12;
      v9[1] = v13;
      v9[2] = v14;
      v9[3] = v15;
      v9[4] = v16;
      v9[5] = v17;
      v9[6] = v18;
      v9[7] = v19;
      v9[8] = v20;
    }
    while ( v4 < *(_QWORD *)(a1 + 8) );
  }
  return v21 - __readfsqword(0x28u);
}

