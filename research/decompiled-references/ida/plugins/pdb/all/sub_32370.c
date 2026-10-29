unsigned __int64 __fastcall sub_32370(int *a1, __int64 *a2, __int64 *a3, char a4)
{
  unsigned __int64 v5; // rax
  int v7; // edx
  unsigned __int64 v8; // rsi
  __int64 v9; // rbx
  __m128i v10; // xmm0
  unsigned __int64 v11; // rax
  __m128i v12; // xmm0
  size_t v13; // r13
  size_t v14; // r13
  __m128i v15; // xmm0
  __int64 v16; // rdx
  __int64 v17; // rsi
  char v18; // al
  __m128i v19; // xmm0
  __int64 v20; // rax
  __m128i v21; // xmm0
  __int64 v22; // rbp
  __m128i v23; // xmm0
  void *v24; // rax
  __m128i v25; // xmm0
  __m128i v26; // xmm1
  __int64 v27; // rax
  __m128i v28; // xmm0
  unsigned __int64 v30; // r12
  __int64 v31; // rax
  void *v32; // rax
  const void *v33; // rsi
  void *v34; // rax
  const void *v35; // rsi
  const void *v36; // rbp
  void *v37; // rax
  __m128i v38; // [rsp+0h] [rbp-C8h] BYREF
  void *v39; // [rsp+10h] [rbp-B8h]
  __m128i v40; // [rsp+18h] [rbp-B0h] BYREF
  void *v41; // [rsp+28h] [rbp-A0h]
  __m128i v42; // [rsp+30h] [rbp-98h] BYREF
  __int64 v43; // [rsp+40h] [rbp-88h] BYREF
  __m128i v44; // [rsp+48h] [rbp-80h] BYREF
  __m128i v45; // [rsp+58h] [rbp-70h] BYREF
  __m128i v46; // [rsp+68h] [rbp-60h] BYREF
  __int64 v47; // [rsp+78h] [rbp-50h]
  __int64 v48; // [rsp+80h] [rbp-48h]
  char v49; // [rsp+88h] [rbp-40h]
  unsigned __int64 v50; // [rsp+98h] [rbp-30h]

  v5 = *a1;
  v50 = __readfsqword(0x28u);
  if ( v5 >= a2[1] )
  {
LABEL_23:
    v12 = _mm_loadu_si128((const __m128i *)a3);
    v9 = *a2 + 144 * v5;
    goto LABEL_6;
  }
  v7 = v5 + 1;
  while ( 1 )
  {
    v8 = *a3;
    v9 = *a2 + 144 * v5;
    v10 = _mm_loadu_si128((const __m128i *)v9);
    if ( *a3 < _mm_add_epi64(v10, _mm_srli_si128(v10, 8)).m128i_u64[0] )
      break;
    *a1 = v7;
    v5 = v7++;
    if ( v5 >= a2[1] )
      goto LABEL_23;
  }
  v11 = a3[1];
  if ( *(_QWORD *)v9 >= v8 + v11 )
  {
    v12 = _mm_unpacklo_epi64((__m128i)v8, (__m128i)v11);
LABEL_6:
    v13 = a3[3];
    v38 = v12;
    v39 = nullptr;
    v40 = 0;
    if ( v13 )
    {
      v32 = (void *)qalloc_or_throw(v13);
      v33 = (const void *)a3[2];
      v40.m128i_i64[1] = v13;
      v39 = v32;
      memcpy(v32, v33, v13);
      v40.m128i_i64[0] = v13;
    }
    v14 = a3[6];
    v41 = nullptr;
    v42 = 0;
    if ( v14 )
    {
      v34 = (void *)qalloc_or_throw(v14);
      v35 = (const void *)a3[5];
      v41 = v34;
      v42.m128i_i64[1] = v14;
      memcpy(v34, v35, v14);
      v42.m128i_i64[0] = v14;
    }
    v43 = 0;
    copy_tinfo_t(&v43, a3 + 8);
    v15 = _mm_loadu_si128((const __m128i *)(a3 + 9));
    v16 = a3[16];
    v17 = *a2;
    v47 = a3[15];
    v18 = *((_BYTE *)a3 + 136);
    v44 = v15;
    v19 = _mm_loadu_si128((const __m128i *)(a3 + 11));
    v49 = v18;
    v20 = a2[1];
    v45 = v19;
    v21 = _mm_loadu_si128((const __m128i *)(a3 + 13));
    v48 = v16;
    v22 = v9 - v17;
    v46 = v21;
    if ( a2[2] < (unsigned __int64)(v20 + 1) )
    {
      v31 = qvector_reserve(a2, v17, v20 + 1, 144);
      *a2 = v31;
      v9 = v31 + v22;
      v20 = a2[1];
    }
    memmove((void *)(v9 + 144), (const void *)v9, 144 * v20 - v22);
    v23 = _mm_load_si128(&v38);
    *(_QWORD *)(v9 + 64) = 0;
    *(__m128i *)v9 = v23;
    v24 = v39;
    v25 = _mm_loadu_si128(&v40);
    v39 = nullptr;
    *(__m128i *)(v9 + 24) = v25;
    *(_QWORD *)(v9 + 16) = v24;
    v26 = _mm_load_si128(&v42);
    v40 = 0;
    *(_QWORD *)(v9 + 40) = v41;
    *(__m128i *)(v9 + 48) = v26;
    v41 = nullptr;
    v42 = 0;
    copy_tinfo_t(v9 + 64, &v43);
    v27 = v47;
    *(__m128i *)(v9 + 72) = _mm_loadu_si128(&v44);
    v28 = _mm_loadu_si128(&v45);
    *(_QWORD *)(v9 + 120) = v27;
    *(__m128i *)(v9 + 88) = v28;
    *(__m128i *)(v9 + 104) = _mm_loadu_si128(&v46);
    *(_QWORD *)(v9 + 128) = v48;
    *(_BYTE *)(v9 + 136) = v49;
    ++a2[1];
    clear_tinfo_t(&v43);
    if ( v41 )
    {
      v42.m128i_i64[0] = 0;
      qfree(v41);
    }
    if ( v39 )
    {
      v40.m128i_i64[0] = 0;
      qfree(v39);
    }
    return v50 - __readfsqword(0x28u);
  }
  if ( a4 && (!a3[3] || strcmp((const char *)a3[2], "__vecDelDtor"))
    || *(_QWORD *)(v9 + 24) && !strcmp(*(const char **)(v9 + 16), "__vecDelDtor") )
  {
    copy_tinfo_t(v9 + 64, a3 + 8);
    if ( (__int64 *)(v9 + 16) != a3 + 2 )
    {
      v30 = a3[3];
      if ( v30 > 1 )
      {
        v36 = (const void *)a3[2];
        v37 = *(void **)(v9 + 16);
        if ( *(_QWORD *)(v9 + 32) < v30 )
        {
          v37 = (void *)qvector_reserve(v9 + 16, *(_QWORD *)(v9 + 16), v30, 1);
          *(_QWORD *)(v9 + 16) = v37;
        }
        *(_QWORD *)(v9 + 24) = v30;
        memmove(v37, v36, v30 - 1);
        *(_BYTE *)(*(_QWORD *)(v9 + 16) + v30 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(v9 + 24) = 0;
      }
    }
  }
  return v50 - __readfsqword(0x28u);
}

