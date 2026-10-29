__int64 __fastcall sub_2EDB0(__int64 a1, __int64 *a2, __m128i a3, __m128 a4, __m128 a5)
{
  char v7; // al
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rbx
  _DWORD *v11; // rsi
  _DWORD *v12; // rsi
  bool v13; // cc
  char *v15; // r12
  __int64 v16; // xmm0_8
  __int64 v17; // rbx
  const void *v18; // r15
  size_t v19; // rax
  size_t v20; // r14
  const void *v21; // r14
  size_t v22; // rax
  size_t v23; // r8
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // rax
  _QWORD *v28; // r12
  __int64 v29; // rdi
  __int64 v30; // r14
  __int64 i; // r15
  _QWORD *v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rsi
  unsigned __int64 v35; // rcx
  __int64 v36; // rbx
  _DWORD *v37; // rsi
  int v38; // eax
  _DWORD *v39; // rsi
  __m128i *v40; // r14
  __int64 v41; // rbx
  __m128i *v42; // r12
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rdx
  __m128i *v45; // rbx
  __int64 v46; // rdi
  const char **v47; // rbx
  const char *v48; // rsi
  void *v49; // rdi
  size_t v50; // rdx
  void *v51; // rdi
  size_t v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // r15
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rbx
  size_t v59; // r12
  __int64 v60; // r14
  size_t v61; // r12
  void *v62; // rax
  __int64 v63; // rdi
  __int64 v64; // r14
  __int64 j; // r15
  _QWORD *v66; // rbx
  __m128i v67; // xmm5
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  void *v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __m128i v75; // [rsp+0h] [rbp-58h] BYREF
  __int64 v76; // [rsp+10h] [rbp-48h]
  __m128i v77[4]; // [rsp+18h] [rbp-40h] BYREF

  v7 = *(_BYTE *)(a1 + 2736);
  if ( !*(_BYTE *)(a1 + 1185) )
  {
    if ( !v7 )
      goto LABEL_36;
    goto LABEL_27;
  }
  if ( *(_BYTE *)(a1 + 1184) )
  {
    if ( !v7 )
      goto LABEL_13;
LABEL_27:
    v28 = *(_QWORD **)(a1 + 2616);
    *(_BYTE *)(a1 + 2736) = 0;
    v29 = v28[57];
    if ( v29 )
    {
      v30 = v28[58];
      if ( v30 )
      {
        for ( i = 0; i != v30; ++i )
        {
          v32 = (_QWORD *)(v29 + 80 * i);
          if ( v32[5] )
          {
            v32[6] = 0;
            qfree();
          }
          if ( v32[2] )
          {
            v32[3] = 0;
            qfree();
          }
          v29 = v28[57];
        }
      }
      v28[58] = 0;
      qfree();
      v28[57] = 0;
      v28[59] = 0;
    }
LABEL_36:
    if ( !*(_BYTE *)(a1 + 1184) )
    {
LABEL_14:
      v15 = (char *)&unk_71A80;
      v16 = *(_QWORD *)(*(_QWORD *)(a1 + 2616) + 464LL);
      if ( v16 )
      {
        v77[0].m128i_i64[0] = *(_QWORD *)(a1 + 2616);
        v55 = 0;
        v75.m128i_i64[0] = v16;
        v56 = qalloc_or_throw();
        v57 = v77[0].m128i_i64[0];
        a3 = _mm_loadl_epi64(&v75);
        a4 = 0;
        v76 = v56;
        v58 = v56;
        do
        {
          v60 = *(_QWORD *)(v57 + 456) + 80 * v55;
          a5 = (__m128)_mm_loadu_si128((const __m128i *)v60);
          *(_QWORD *)(v58 + 16) = 0;
          *(__m128 *)(v58 + 24) = a4;
          *(__m128 *)v58 = a5;
          v61 = *(_QWORD *)(v60 + 24);
          if ( v61 )
          {
            v75.m128i_i64[0] = v57;
            v77[0].m128i_i64[0] = a3.m128i_i64[0];
            v62 = (void *)qalloc_or_throw();
            *(_QWORD *)(v58 + 32) = v61;
            *(_QWORD *)(v58 + 16) = v62;
            memcpy(v62, *(const void **)(v60 + 16), v61);
            *(_QWORD *)(v58 + 24) = v61;
            a3 = _mm_loadl_epi64(v77);
            a4 = 0;
            v57 = v75.m128i_i64[0];
          }
          *(_QWORD *)(v58 + 40) = 0;
          *(__m128 *)(v58 + 48) = a4;
          v59 = *(_QWORD *)(v60 + 48);
          if ( v59 )
          {
            v75.m128i_i64[0] = v57;
            v77[0].m128i_i64[0] = a3.m128i_i64[0];
            v71 = (void *)qalloc_or_throw();
            *(_QWORD *)(v58 + 40) = v71;
            *(_QWORD *)(v58 + 56) = v59;
            memcpy(v71, *(const void **)(v60 + 40), v59);
            *(_QWORD *)(v58 + 48) = v59;
            a3 = _mm_loadl_epi64(v77);
            a4 = 0;
            v57 = v75.m128i_i64[0];
          }
          ++v55;
          v58 += 80;
          *(_QWORD *)(v58 - 16) = *(_QWORD *)(v60 + 64);
          *(_WORD *)(v58 - 8) = *(_WORD *)(v60 + 72);
        }
        while ( a3.m128i_i64[0] != v55 );
        v63 = *a2;
        v75 = _mm_unpacklo_epi64(a3, a3);
        if ( v63 )
        {
          v64 = a2[1];
          if ( v64 )
          {
            for ( j = 0; j != v64; ++j )
            {
              v66 = (_QWORD *)(v63 + 80 * j);
              if ( v66[5] )
              {
                v66[6] = 0;
                qfree();
              }
              if ( v66[2] )
              {
                v66[3] = 0;
                qfree();
              }
              v63 = *a2;
            }
          }
          a2[1] = 0;
          qfree();
        }
        v67 = _mm_load_si128(&v75);
        *a2 = v76;
        *(__m128i *)(a2 + 1) = v67;
      }
      else
      {
        while ( 1 )
        {
          v25 = a2[1];
          v26 = *a2;
          if ( a2[2] < (unsigned __int64)(v25 + 1) )
          {
            v75.m128i_i64[0] = v16;
            v27 = qvector_reserve();
            v25 = a2[1];
            *a2 = v27;
            v26 = v27;
          }
          v17 = v26 + 80 * v25;
          *(_OWORD *)v17 = 0;
          *(_QWORD *)(v17 + 16) = 0;
          *(_QWORD *)(v17 + 40) = 0;
          *(_QWORD *)(v17 + 64) = 0;
          *(_WORD *)(v17 + 72) = 0;
          *(_OWORD *)(v17 + 24) = 0;
          *(_OWORD *)(v17 + 48) = 0;
          ++a2[1];
          v75.m128i_i64[0] = *(_QWORD *)v15;
          *(__m128 *)v17 = _mm_loadh_ps((const double *)v75.m128i_i64);
          v18 = *((const void **)v15 + 1);
          if ( v18 && (v19 = strlen(*((const char **)v15 + 1)), (v20 = v19) != 0) )
          {
            v51 = *(void **)(v17 + 16);
            v52 = v19 + 1;
            if ( *(_QWORD *)(v17 + 32) < v19 + 1 )
            {
              v76 = v19 + 1;
              v53 = qvector_reserve();
              v52 = v76;
              *(_QWORD *)(v17 + 16) = v53;
              v51 = (void *)v53;
            }
            *(_QWORD *)(v17 + 24) = v52;
            memmove(v51, v18, v20);
            *(_BYTE *)(*(_QWORD *)(v17 + 16) + v20) = 0;
          }
          else
          {
            *(_QWORD *)(v17 + 24) = 0;
          }
          v21 = *((const void **)v15 + 2);
          if ( v21 && (v22 = strlen(*((const char **)v15 + 2)), (v23 = v22) != 0) )
          {
            v49 = *(void **)(v17 + 40);
            v50 = v22 + 1;
            if ( *(_QWORD *)(v17 + 56) < v22 + 1 )
            {
              v77[0].m128i_i64[0] = v22;
              v76 = v22 + 1;
              v54 = qvector_reserve();
              v23 = v77[0].m128i_i64[0];
              v50 = v76;
              *(_QWORD *)(v17 + 40) = v54;
              v49 = (void *)v54;
            }
            *(_QWORD *)(v17 + 48) = v50;
            v76 = v23;
            memmove(v49, v21, v23);
            *(_BYTE *)(*(_QWORD *)(v17 + 40) + v76) = 0;
          }
          else
          {
            *(_QWORD *)(v17 + 48) = 0;
          }
          v24 = *(_QWORD *)v17;
          *(_BYTE *)(v17 + 72) = 0;
          v15 += 32;
          *(_QWORD *)(v17 + 64) = v24 >> 4;
          *(_BYTE *)(v17 + 73) = *(v15 - 8);
          if ( v15 == (char *)&unk_71B60 )
            break;
          v16 = v75.m128i_i64[0];
        }
        v33 = a2[1];
        v34 = *a2;
        if ( a2[2] < (unsigned __int64)(v33 + 1) )
        {
          v74 = qvector_reserve();
          v33 = a2[1];
          *a2 = v74;
          v34 = v74;
        }
        v35 = v75.m128i_i64[0];
        a3.m128i_i64[0] = 0;
        v36 = v34 + 80 * v33;
        *(_OWORD *)v36 = 0;
        *(_QWORD *)(v36 + 16) = 0;
        *(_QWORD *)(v36 + 64) = 0;
        *(_OWORD *)(v36 + 24) = 0;
        *(_QWORD *)(v36 + 40) = 0;
        *(_WORD *)(v36 + 72) = 0;
        *(_OWORD *)(v36 + 48) = 0;
        ++a2[1];
        v37 = *(_DWORD **)(v36 + 16);
        *(_QWORD *)v36 = v35;
        v38 = *(_DWORD *)(a1 + 2740);
        *(_QWORD *)(v36 + 64) = v35 >> 4;
        v13 = *(_QWORD *)(v36 + 32) <= 7u;
        *(_QWORD *)(v36 + 8) = v38 << 20;
        if ( v13 )
        {
          v73 = qvector_reserve();
          *(_QWORD *)(v36 + 16) = v73;
          v37 = (_DWORD *)v73;
        }
        *(_QWORD *)(v36 + 24) = 8;
        *v37 = 1398360144;
        *(_DWORD *)((char *)v37 + 3) = 1296387411;
        *(_BYTE *)(*(_QWORD *)(v36 + 16) + 7LL) = 0;
        v13 = *(_QWORD *)(v36 + 56) <= 4u;
        *(_BYTE *)(v36 + 72) = 0;
        v39 = *(_DWORD **)(v36 + 40);
        if ( v13 )
        {
          v72 = qvector_reserve();
          *(_QWORD *)(v36 + 40) = v72;
          v39 = (_DWORD *)v72;
        }
        *(_QWORD *)(v36 + 48) = 5;
        *v39 = 1162104643;
        *(_BYTE *)(*(_QWORD *)(v36 + 40) + 4LL) = 0;
        *(_BYTE *)(v36 + 73) = 7;
      }
      sub_2CA70(a1, a2, *(_DWORD *)(a1 + 780), *(_QWORD *)(a1 + 748));
      sub_2CA70(a1, a2, *(_DWORD *)(a1 + 812), *(_QWORD *)(a1 + 652));
LABEL_46:
      if ( (unsigned __int8)sub_1FB60(*(_QWORD *)(a1 + 2616), a2) )
        return 4294967290LL;
      v40 = (__m128i *)*a2;
      v41 = 80 * a2[1];
      v42 = (__m128i *)(*a2 + v41);
      if ( (__m128i *)*a2 != v42 )
      {
        v43 = 0xCCCCCCCCCCCCCCCDLL * (v41 >> 4);
        if ( v43 )
        {
          _BitScanReverse64(&v44, v43);
          sub_2E170(*a2, (unsigned __int64)v42, 2LL * (int)v44);
          if ( v41 > 1280 )
          {
            v45 = v40 + 80;
            sub_2C0F0(v40, v40 + 80);
            do
            {
              v46 = (__int64)v45;
              v45 += 5;
              sub_2BEE0(v46);
            }
            while ( v42 != v45 );
            goto LABEL_52;
          }
        }
        else
        {
          sub_2E170(*a2, (unsigned __int64)v42, -2);
        }
        sub_2C0F0(v40, v42);
      }
LABEL_52:
      sub_1FCB0(*(_QWORD *)(a1 + 2616), a2);
      if ( (*(_DWORD *)debug & 0x10000) != 0 )
      {
        v47 = (const char **)*a2;
        if ( 80 * a2[1] )
        {
          do
          {
            v48 = *v47;
            v47 += 10;
            sub_EBD0(
              (__int64)"map: s=%a e=%a b=%a n=%s\n",
              *(double *)a3.m128i_i64,
              *(double *)a4.m128_u64,
              *(double *)a5.m128_u64,
              v48);
          }
          while ( v47 != (const char **)(*a2 + 80 * a2[1]) );
        }
      }
      return 1;
    }
LABEL_13:
    if ( (unsigned __int8)sub_2D0D0(a1, a2) )
      goto LABEL_46;
    goto LABEL_14;
  }
  if ( !v7 )
  {
    v8 = a2[1];
    v9 = *a2;
    if ( a2[2] < (unsigned __int64)(v8 + 1) )
    {
      v68 = qvector_reserve();
      v8 = a2[1];
      *a2 = v68;
      v9 = v68;
    }
    v10 = v9 + 80 * v8;
    *(_QWORD *)(v10 + 40) = 0;
    *(_WORD *)(v10 + 72) = 0;
    *(_OWORD *)(v10 + 48) = 0;
    *(_QWORD *)(v10 + 16) = 0;
    *(_QWORD *)(v10 + 64) = 0;
    *(_OWORD *)v10 = 0;
    *(_OWORD *)(v10 + 24) = 0;
    ++a2[1];
    v11 = *(_DWORD **)(v10 + 40);
    if ( *(_QWORD *)(v10 + 56) <= 4u )
    {
      v70 = qvector_reserve();
      *(_QWORD *)(v10 + 40) = v70;
      v11 = (_DWORD *)v70;
    }
    *(_QWORD *)(v10 + 48) = 5;
    *v11 = 1096040772;
    *(_BYTE *)(*(_QWORD *)(v10 + 40) + 4LL) = 0;
    v12 = *(_DWORD **)(v10 + 16);
    v13 = *(_QWORD *)(v10 + 32) <= 7u;
    *(_BYTE *)(v10 + 72) = *(_BYTE *)(a1 + 1188) + 1;
    if ( v13 )
    {
      v69 = qvector_reserve();
      *(_QWORD *)(v10 + 16) = v69;
      v12 = (_DWORD *)v69;
    }
    *(_QWORD *)(v10 + 24) = 8;
    *v12 = 1398360144;
    *(_DWORD *)((char *)v12 + 3) = 1296387411;
    *(_BYTE *)(*(_QWORD *)(v10 + 16) + 7LL) = 0;
    *(_QWORD *)v10 = 0;
    *(_QWORD *)(v10 + 8) = (int)(*(_DWORD *)(a1 + 2740) << 20);
    *(_BYTE *)(a1 + 2736) = 1;
    return 1;
  }
  return 4294967290LL;
}

