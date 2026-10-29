char *__fastcall sub_47BB0(__int64 *a1, char *a2)
{
  char *v2; // rbx
  char *v3; // rsi
  __int64 v4; // rbp
  __int64 v5; // r13
  char *v6; // rcx
  unsigned __int64 v7; // rdx
  char *v9; // r15
  char v10; // al
  char *v11; // rdx
  char *result; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rdi
  char *v15; // r13
  signed __int64 v16; // rdx
  unsigned __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // r13
  __m128i v22; // xmm0
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rbp
  __m128i v26; // xmm0
  int v27; // eax
  __m128i v28; // xmm0
  __int64 v29; // rax
  __m128i v30; // xmm0
  __m128i v31; // xmm0
  __int64 v32; // rax
  __m128i v33; // xmm0
  size_t v34; // r14
  void *v35; // rax
  __int64 v36; // r15
  unsigned __int64 v37; // r15
  unsigned __int64 v38; // r14
  __int64 v39; // rax
  char *v40; // rsi
  __int64 v41; // rbx
  signed __int64 v42; // rdx
  __int64 v44; // [rsp+8h] [rbp-40h]

  v2 = (char *)a1[9];
  v3 = (char *)a1[5];
  v4 = v2 - v3;
  v5 = (v2 - v3) >> 3;
  if ( 16 * ((v2 == nullptr) + v5 - 1) + ((a1[4] - a1[2]) >> 5) + ((a1[6] - a1[7]) >> 5) == 0x3FFFFFFFFFFFFFFLL )
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  v6 = (char *)*a1;
  v7 = a1[1];
  if ( v7 - ((__int64)&v2[-*a1] >> 3) <= 1 )
  {
    v14 = 2 * (v5 + 2);
    if ( v14 >= v7 )
    {
      v36 = 1;
      if ( v7 )
        v36 = v7;
      v37 = v7 + v36;
      v38 = v37 + 2;
      if ( (v37 + 2) >> 60 )
      {
        if ( v38 >> 61 )
          sub_EC78(v14, v3, v7, v6);
        std::__throw_bad_alloc();
      }
      v39 = operator new(8 * v38);
      v40 = (char *)a1[5];
      v41 = v39;
      v15 = (char *)(v39 + 8 * ((v37 - v5) >> 1));
      v42 = a1[9] + 8 - (_QWORD)v40;
      if ( v42 <= 8 )
      {
        if ( v42 == 8 )
          *(_QWORD *)v15 = *(_QWORD *)v40;
      }
      else
      {
        memmove(v15, v40, v42);
      }
      operator delete((void *)*a1, 8 * a1[1]);
      *a1 = v41;
      a1[1] = v38;
    }
    else
    {
      v15 = &v6[8 * ((v7 - (v5 + 2)) >> 1)];
      v16 = v2 + 8 - v3;
      if ( v15 < v3 )
      {
        if ( v16 <= 8 )
        {
          if ( v16 == 8 )
            *(_QWORD *)v15 = *(_QWORD *)v3;
        }
        else
        {
          memmove(v15, v3, v16);
        }
      }
      else if ( v16 <= 8 )
      {
        if ( v16 == 8 )
          *(_QWORD *)&v15[v4] = *(_QWORD *)v3;
      }
      else
      {
        memmove(v15, v3, v2 + 8 - v3);
      }
    }
    a1[5] = (__int64)v15;
    v17 = *(_QWORD *)v15;
    v2 = &v15[v4];
    a1[9] = (__int64)&v15[v4];
    *(__m128i *)(a1 + 3) = _mm_unpacklo_epi64((__m128i)v17, (__m128i)(v17 + 512));
    *(__m128i *)(a1 + 7) = _mm_unpacklo_epi64(
                             (__m128i)*(unsigned __int64 *)&v15[v4],
                             (__m128i)(unsigned __int64)(*(_QWORD *)&v15[v4] + 512LL));
  }
  *((_QWORD *)v2 + 1) = operator new(0x200u);
  v9 = (char *)a1[6];
  v10 = *a2;
  *((_QWORD *)v9 + 1) = 0;
  *v9 = v10;
  *((_OWORD *)v9 + 1) = 0;
  v44 = *((_QWORD *)a2 + 2);
  if ( v44 )
  {
    v18 = *((_QWORD *)a2 + 2);
    v19 = qalloc_or_throw();
    *((_QWORD *)v9 + 1) = v19;
    v20 = v19;
    v21 = 0;
    *((_QWORD *)v9 + 3) = v18;
    while ( 1 )
    {
      v24 = 184 * v21 + v20;
      v25 = *((_QWORD *)a2 + 1) + 184 * v21;
      v26 = _mm_loadu_si128((const __m128i *)(v25 + 16));
      *(_BYTE *)v24 = *(_BYTE *)v25;
      v27 = *(_DWORD *)(v25 + 4);
      *(__m128i *)(v24 + 16) = v26;
      v28 = _mm_loadu_si128((const __m128i *)(v25 + 32));
      *(_DWORD *)(v24 + 4) = v27;
      v29 = *(_QWORD *)(v25 + 8);
      *(__m128i *)(v24 + 32) = v28;
      v30 = _mm_loadu_si128((const __m128i *)(v25 + 48));
      *(_QWORD *)(v24 + 8) = v29;
      LOBYTE(v29) = *(_BYTE *)(v25 + 96);
      *(__m128i *)(v24 + 48) = v30;
      v31 = _mm_loadu_si128((const __m128i *)(v25 + 64));
      *(_BYTE *)(v24 + 96) = v29;
      v32 = *(_QWORD *)(v25 + 104);
      *(__m128i *)(v24 + 64) = v31;
      v33 = _mm_loadu_si128((const __m128i *)(v25 + 80));
      *(_QWORD *)(v24 + 104) = v32;
      *(_QWORD *)(v24 + 112) = 0;
      *(__m128i *)(v24 + 80) = v33;
      *(_OWORD *)(v24 + 120) = 0;
      v34 = *(_QWORD *)(v25 + 120);
      if ( v34 )
      {
        v35 = (void *)qalloc_or_throw();
        *(_QWORD *)(v24 + 112) = v35;
        *(_QWORD *)(v24 + 128) = v34;
        memcpy(v35, *(const void **)(v25 + 112), v34);
        *(_QWORD *)(v24 + 120) = v34;
      }
      v22 = _mm_loadu_si128((const __m128i *)(v25 + 152));
      ++v21;
      *(_DWORD *)(v24 + 136) = *(_DWORD *)(v25 + 136);
      v23 = *(_QWORD *)(v25 + 144);
      *(__m128i *)(v24 + 152) = v22;
      *(_QWORD *)(v24 + 144) = v23;
      *(_QWORD *)(v24 + 168) = *(_QWORD *)(v25 + 168);
      *(_BYTE *)(v24 + 176) = *(_BYTE *)(v25 + 176);
      if ( v44 == v21 )
        break;
      v20 = *((_QWORD *)v9 + 1);
    }
    *((_QWORD *)v9 + 2) = v44;
  }
  v11 = (char *)(a1[9] + 8);
  a1[9] = (__int64)v11;
  result = *(char **)v11;
  v13 = *(_QWORD *)v11 + 512LL;
  a1[7] = (__int64)result;
  a1[8] = v13;
  a1[6] = (__int64)result;
  return result;
}

