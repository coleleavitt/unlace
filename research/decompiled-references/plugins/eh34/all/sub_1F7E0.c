__int64 __fastcall sub_1F7E0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rax
  unsigned __int64 v7; // rbp
  int v8; // eax
  unsigned __int64 v9; // r13
  int i; // r13d
  __int64 v11; // r15
  __int64 v12; // r15
  char v13; // cl
  char *v14; // rax
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rsi
  const __m128i *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rcx
  __m128i v24; // xmm0
  bool v25; // cf
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r15
  const __m128i *v29; // rdi
  __int64 v30; // rcx
  __int64 v31; // rdx
  __m128i v32; // xmm0
  int v33; // [rsp+0h] [rbp-54h]
  __int64 v34; // [rsp+4h] [rbp-50h]
  __int64 v35; // [rsp+4h] [rbp-50h]
  __int64 v36; // [rsp+4h] [rbp-50h]
  _QWORD v37[9]; // [rsp+Ch] [rbp-48h] BYREF

  v37[1] = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v4 = a3[1];
  if ( v4 )
  {
    v37[0] = *a3;
    v7 = v4 + v37[0];
    v8 = unpack_dd(v37, v4 + v37[0]);
    v9 = *(_QWORD *)(a1 + 16);
    v33 = v8;
    if ( v9 < v8 )
    {
      v26 = qvector_reserve(a1, 0, v8, 32);
      v27 = *(_QWORD *)(a1 + 8);
      v28 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = v9;
      v29 = *(const __m128i **)a1;
      v30 = v27 - 1;
      if ( v30 >= 0 )
      {
        v31 = v26;
        do
        {
          v32 = _mm_loadu_si128(v29);
          v31 += 32;
          v29 += 2;
          *(__m128i *)(v31 - 32) = v32;
          *(__m128i *)(v31 - 16) = _mm_loadu_si128(v29 - 1);
          v25 = v30-- == 0;
        }
        while ( !v25 );
        v29 = *(const __m128i **)a1;
      }
      v36 = v26;
      qfree(v29);
      *(_QWORD *)(a1 + 16) = v28;
      *(_QWORD *)a1 = v36;
    }
    if ( v33 > 0 )
    {
      for ( i = 0; i != v33; ++i )
      {
        v17 = *(_QWORD *)(a1 + 8);
        if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v17 + 1) )
        {
          v11 = *(_QWORD *)a1;
        }
        else
        {
          v34 = *(_QWORD *)(a1 + 16);
          v18 = qvector_reserve(a1, 0, v17 + 1, 32);
          v19 = *(_QWORD *)(a1 + 8);
          v11 = v18;
          v20 = *(const __m128i **)a1;
          v21 = *(_QWORD *)(a1 + 16);
          *(_QWORD *)(a1 + 16) = v34;
          v22 = v19 - 1;
          if ( v22 >= 0 )
          {
            v23 = v11;
            do
            {
              v24 = _mm_loadu_si128(v20);
              v23 += 32;
              v20 += 2;
              *(__m128i *)(v23 - 32) = v24;
              *(__m128i *)(v23 - 16) = _mm_loadu_si128(v20 - 1);
              v25 = v22-- == 0;
            }
            while ( !v25 );
            v20 = *(const __m128i **)a1;
          }
          v35 = v21;
          qfree(v20);
          v17 = *(_QWORD *)(a1 + 8);
          *(_QWORD *)a1 = v11;
          *(_QWORD *)(a1 + 16) = v35;
        }
        v12 = 32 * v17 + v11;
        v13 = 0;
        *(_BYTE *)v12 = 0;
        *(_QWORD *)(v12 + 4) = 0xFFFFFFFEFFFFFFFELL;
        v14 = (char *)v37[0];
        *(_QWORD *)(v12 + 16) = -1;
        *(_BYTE *)(v12 + 28) = 0;
        ++*(_QWORD *)(a1 + 8);
        if ( (unsigned __int64)v14 < v7 )
          v13 = *v14++;
        v37[0] = v14;
        *(_BYTE *)v12 = v13;
        *(_DWORD *)(v12 + 4) = unpack_dd(v37, v7) - 1;
        *(_DWORD *)(v12 + 8) = unpack_dd(v37, v7) - 1;
        v15 = unpack_dq(v37, v7) - 1;
        if ( v15 != -1 )
          v15 += a2;
        *(_QWORD *)(v12 + 16) = v15;
        v16 = unpack_dd(v37, v7);
        if ( v16 )
        {
          *(_DWORD *)(v12 + 24) = v16 - 1;
          *(_BYTE *)(v12 + 28) = 1;
        }
      }
    }
  }
  return a1;
}
