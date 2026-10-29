__int64 __fastcall sub_193D60(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, double a5, __m128 a6)
{
  __int64 v7; // rsi
  __int64 v9; // r13
  __int64 v10; // r15
  __int64 v11; // rdx
  __m128i *v12; // rax
  __m128i *v13; // rcx
  unsigned int v14; // ebx
  unsigned __int64 v16; // rdx
  signed int **v17; // rax
  signed int *v18; // r12
  signed int **v19; // r13
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // r9
  const __m128i *v24; // rdi
  __int64 v25; // rdx
  __m128i v26; // xmm0
  __int64 v28; // rax
  __int64 v29; // [rsp+8h] [rbp-78h]
  __int64 v30; // [rsp+10h] [rbp-70h]
  unsigned __int64 *v32[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v33; // [rsp+30h] [rbp-50h]
  __int128 v34; // [rsp+38h] [rbp-48h]
  unsigned __int64 v35; // [rsp+48h] [rbp-38h]

  v35 = __readfsqword(0x28u);
  if ( !a3 )
  {
    *(_BYTE *)(a2 + 48) = 1;
    return 1;
  }
  v7 = *(_QWORD *)(a1 + 24);
  if ( a3 >= *(_DWORD *)(v7 + 64) )
    sub_190DD0(a5);
  v9 = *(_QWORD *)(*(_QWORD *)(v7 + 528) + 8LL * a3);
  v34 = 0;
  v32[0] = nullptr;
  v32[1] = nullptr;
  v33 = 0;
  sub_103D60(a4, v7, (__int64 *)v32);
  v10 = sub_129150(v9, v32, *(_QWORD *)(v9 + 56), 0, 0, 0, 0.0, a6, 0x101u);
  if ( !v10 )
    goto LABEL_10;
  if ( !sub_1911D0((_QWORD *)a1, v10, a4) )
  {
LABEL_18:
    v14 = 0;
    goto LABEL_11;
  }
  v11 = *(_QWORD *)(a2 + 8);
  v12 = *(__m128i **)a2;
  v13 = (__m128i *)(*(_QWORD *)a2 + 24 * v11);
  if ( *(__m128i **)a2 == v13 )
    goto LABEL_16;
  while ( v10 != v12->m128i_i64[1] )
  {
    v12 = (__m128i *)((char *)v12 + 24);
    if ( v13 == v12 )
      goto LABEL_16;
  }
  if ( v12 == v13 )
  {
LABEL_16:
    v16 = v11 + 1;
    if ( *(_QWORD *)(a2 + 16) < v16 )
    {
      v30 = *(_QWORD *)(a2 + 16);
      v20 = qvector_reserve(a2, 0, v16, 24);
      v21 = *(_QWORD *)(a2 + 8);
      v22 = v20;
      v23 = *(_QWORD *)(a2 + 16);
      v24 = *(const __m128i **)a2;
      *(_QWORD *)(a2 + 16) = v30;
      v25 = v21 - 1;
      if ( v25 >= 0 )
      {
        do
        {
          v26 = _mm_loadu_si128(v24);
          v20 += 24;
          v24 = (const __m128i *)((char *)v24 + 24);
          *(__m128i *)(v20 - 24) = v26;
          *(_QWORD *)(v20 - 8) = v24[-1].m128i_i64[1];
        }
        while ( v25-- != 0 );
        v24 = *(const __m128i **)a2;
      }
      v29 = v23;
      qfree((__int64)v24);
      v28 = 3LL * *(_QWORD *)(a2 + 8);
      *(_QWORD *)a2 = v22;
      *(_QWORD *)(a2 + 16) = v29;
      v13 = (__m128i *)(v22 + 8 * v28);
    }
    v13[1].m128i_i64[0] = 0;
    *v13 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v9, (__m128i)(unsigned __int64)v10);
    ++*(_QWORD *)(a2 + 8);
    if ( !sub_A9D90(v9, v32, *(_QWORD *)(v10 + 8), 0, 1u) )
    {
      v17 = (signed int **)sub_104DF0((unsigned __int64 *)(**(_QWORD **)(a1 + 8) + 24LL * *(int *)(v9 + 72)), a4);
      v18 = *v17;
      v19 = v17;
      if ( 4LL * (_QWORD)v17[1] )
      {
        while ( (unsigned __int8)sub_193AA0(a1, (_QWORD *)a2, *v18, (__int64)v19) )
        {
          if ( ++v18 == &(*v19)[(_QWORD)v19[1]] )
            goto LABEL_10;
        }
        v14 = 0;
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    goto LABEL_18;
  }
LABEL_10:
  v14 = 1;
LABEL_11:
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    qfree(v33);
  }
  qfree((__int64)v32[0]);
  return v14;
}

