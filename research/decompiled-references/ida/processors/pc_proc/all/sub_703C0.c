__int64 __fastcall sub_703C0(__int64 a1, __int64 *a2, _QWORD *a3, unsigned int a4)
{
  _QWORD *v5; // rbx
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // rax
  int v10; // ecx
  __int64 v11; // r8
  __int64 v12; // rdx
  int v13; // ebp
  unsigned __int64 v14; // rax
  __int64 v15; // r8
  unsigned __int64 v16; // r15
  __int64 v17; // r11
  __m128i v18; // xmm0
  __m128i v19; // xmm2
  __m128i v20; // xmm1
  unsigned int v21; // r10d
  __m128i v22; // xmm3
  __int64 v23; // rsi
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // rsi
  size_t v31; // rcx
  __int64 v32; // r9
  __int64 v33; // r15
  __m128i v34; // xmm0
  void *v35; // rdi
  void *v36; // rax
  void *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // r8
  __int64 *v44; // r15
  __int64 v45; // rcx
  __int64 v46; // r11
  __m128i v47; // xmm1
  __m128i v48; // xmm0
  __m128i v49; // xmm3
  unsigned int v50; // r10d
  __m128i v51; // xmm2
  __int64 v52; // r12
  __int64 v53; // rbp
  __int64 *v54; // rbx
  unsigned int v55; // r15d
  __int64 v56; // rsi
  __m128i v57; // xmm1
  __m128i v58; // xmm1
  size_t v60; // r15
  void *n; // [rsp+8h] [rbp-E0h]
  size_t nb; // [rsp+8h] [rbp-E0h]
  __int64 na; // [rsp+8h] [rbp-E0h]
  __m128i v64; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v65; // [rsp+20h] [rbp-C8h]
  __int64 v66; // [rsp+28h] [rbp-C0h]
  __int64 v67; // [rsp+30h] [rbp-B8h]
  __int64 v68; // [rsp+38h] [rbp-B0h]
  __int64 v69; // [rsp+40h] [rbp-A8h]
  unsigned int v70; // [rsp+48h] [rbp-A0h]
  int v71; // [rsp+4Ch] [rbp-9Ch]
  unsigned int v72; // [rsp+50h] [rbp-98h]
  unsigned int v73; // [rsp+54h] [rbp-94h]
  _QWORD *v74; // [rsp+58h] [rbp-90h]
  unsigned int v75[2]; // [rsp+68h] [rbp-80h] BYREF
  void *src; // [rsp+70h] [rbp-78h] BYREF
  __int128 v77; // [rsp+78h] [rbp-70h]
  __int64 v78; // [rsp+88h] [rbp-60h]
  __int128 v79; // [rsp+90h] [rbp-58h] BYREF
  unsigned int v80; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v81; // [rsp+A8h] [rbp-40h]

  v5 = (_QWORD *)a1;
  v81 = __readfsqword(0x28u);
  if ( a3 )
    *a3 = 0;
  if ( !a2 )
    return 0;
  v7 = *(_QWORD *)(a1 + 40);
  if ( *(_QWORD *)(a1 + 16) != v7 || *(_QWORD *)(a1 + 64) != v7 )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  v8 = *a2;
  v9 = sub_313C0(*(_QWORD *)a1, v75, a2);
  if ( v9 == -1 )
    return 0;
  v10 = 0x7FFFFFFF;
  if ( *(_QWORD *)(a1 + 40) )
    v10 = **(_DWORD **)(a1 + 32);
  v11 = *(_QWORD *)(a1 + 64);
  if ( v11 )
  {
    v12 = 0;
    v13 = 0;
    while ( v8 != *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v12) )
    {
      if ( v10 > *(_DWORD *)(*(_QWORD *)(a1 + 32) + 4 * v12) )
      {
        v13 = v12;
        v10 = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 4 * v12);
      }
      if ( ++v12 == v11 )
        goto LABEL_16;
    }
    v13 = v12;
    if ( (_BYTE)a4 )
    {
      ++*(_DWORD *)(*(_QWORD *)(a1 + 32) + 4 * v12);
      if ( a3 )
        *a3 = *(_QWORD *)(a1 + 56) + 56 * v12;
      return a4;
    }
  }
  else
  {
    v13 = 0;
  }
LABEL_16:
  v77 = 0;
  src = nullptr;
  v78 = -1;
  v80 = 0;
  v79 = 0;
  a4 = sub_70180((__int64 *)&src, v9, v75[0]);
  if ( (_BYTE)a4 )
  {
    v14 = *(_QWORD *)(a1 + 64);
    v15 = v77;
    if ( v14 <= 9 )
    {
      n = nullptr;
      v13 = *(_QWORD *)(a1 + 64);
      if ( (_QWORD)v77 )
      {
        v65 = v77;
        v60 = 12 * v77;
        n = (void *)qalloc_or_throw();
        memcpy(n, src, v60);
        v14 = *(_QWORD *)(a1 + 64);
        v15 = v65;
      }
      v16 = *(_QWORD *)(a1 + 72);
      v17 = v78;
      v18 = _mm_cvtsi32_si128(v79);
      v19 = _mm_cvtsi32_si128(DWORD1(v79));
      v20 = _mm_cvtsi32_si128(DWORD2(v79));
      v21 = v80;
      v22 = _mm_cvtsi32_si128(HIDWORD(v79));
      if ( v16 < v14 + 1 )
      {
        LODWORD(v69) = v80;
        v67 = v78;
        v64.m128i_i64[0] = v15;
        v71 = _mm_cvtsi128_si32(v19);
        v70 = _mm_cvtsi128_si32(v22);
        LODWORD(v68) = _mm_cvtsi128_si32(v18);
        LODWORD(v66) = _mm_cvtsi128_si32(v20);
        v40 = qvector_reserve();
        v41 = *(_QWORD *)(a1 + 64);
        v23 = v40;
        v42 = *(_QWORD *)(a1 + 72);
        *(_QWORD *)(a1 + 72) = v16;
        v43 = v64.m128i_i64[0];
        v44 = *(__int64 **)(a1 + 56);
        v45 = v41 - 1;
        v65 = v42;
        v46 = v67;
        v47 = _mm_cvtsi32_si128(v66);
        v48 = _mm_cvtsi32_si128(v68);
        v49 = _mm_cvtsi32_si128(v70);
        v50 = v69;
        v51 = _mm_cvtsi32_si128(v71);
        if ( v45 >= 0 )
        {
          v67 = v23;
          v68 = v64.m128i_i64[0];
          v69 = v46;
          v64.m128i_i64[0] = v8;
          v52 = v23;
          LODWORD(v66) = v13;
          v53 = v45;
          v74 = (_QWORD *)a1;
          v54 = v44;
          v55 = v50;
          v70 = _mm_cvtsi128_si32(v47);
          v71 = _mm_cvtsi128_si32(v48);
          v72 = _mm_cvtsi128_si32(v49);
          v73 = _mm_cvtsi128_si32(v51);
          do
          {
            v56 = *v54;
            v57 = _mm_loadu_si128((const __m128i *)(v54 + 1));
            *v54 = 0;
            v54[2] = 0;
            *(_QWORD *)v52 = v56;
            *(__m128i *)(v52 + 8) = v57;
            v58 = _mm_loadu_si128((const __m128i *)((char *)v54 + 36));
            *(_QWORD *)(v52 + 24) = v54[3];
            LODWORD(v56) = *((_DWORD *)v54 + 8);
            *(__m128i *)(v52 + 36) = v58;
            *(_DWORD *)(v52 + 32) = v56;
            if ( *v54 )
            {
              v54[1] = 0;
              qfree();
            }
            v54 += 7;
            v52 += 56;
          }
          while ( v53-- != 0 );
          v5 = v74;
          v50 = v55;
          v8 = v64.m128i_i64[0];
          v13 = v66;
          v23 = v67;
          v43 = v68;
          v47 = _mm_cvtsi32_si128(v70);
          v46 = v69;
          v48 = _mm_cvtsi32_si128(v71);
          v49 = _mm_cvtsi32_si128(v72);
          v51 = _mm_cvtsi32_si128(v73);
        }
        v71 = v50;
        v68 = v46;
        v66 = v43;
        v64.m128i_i64[0] = v23;
        v72 = _mm_cvtsi128_si32(v51);
        LODWORD(v69) = _mm_cvtsi128_si32(v49);
        v70 = _mm_cvtsi128_si32(v48);
        LODWORD(v67) = _mm_cvtsi128_si32(v47);
        qfree();
        v19 = _mm_cvtsi32_si128(v72);
        v21 = v71;
        v22 = _mm_cvtsi32_si128(v69);
        v18 = _mm_cvtsi32_si128(v70);
        v5[9] = v65;
        v17 = v68;
        v14 = v5[8];
        v5[7] = v23;
        v20 = _mm_cvtsi32_si128(v67);
        v15 = v66;
      }
      else
      {
        v23 = *(_QWORD *)(a1 + 56);
      }
      v24 = v23 + 56 * v14;
      *(_QWORD *)v24 = n;
      *(_QWORD *)(v24 + 24) = v17;
      *(_DWORD *)(v24 + 48) = v21;
      *(__m128i *)(v24 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v15, (__m128i)(unsigned __int64)v15);
      *(__m128i *)(v24 + 32) = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v18, v19), _mm_unpacklo_epi32(v20, v22));
      v25 = v5[2];
      v26 = v5[1];
      ++v5[8];
      if ( v5[3] < (unsigned __int64)(v25 + 1) )
      {
        v39 = qvector_reserve();
        v5[1] = v39;
        v26 = v39;
        v25 = v5[2];
      }
      *(_QWORD *)(v26 + 8 * v25) = v8;
      v27 = v5[5];
      v28 = v5[6];
      v29 = v5[4];
      v75[1] = 0;
      ++v5[2];
      if ( v28 < v27 + 1 )
      {
        v38 = qvector_reserve();
        v5[4] = v38;
        v29 = v38;
        v27 = v5[5];
      }
      *(_DWORD *)(v29 + 4 * v27) = 0;
      ++v5[5];
      if ( !a3 )
        goto LABEL_27;
LABEL_36:
      v35 = src;
      *a3 = v5[7] + 56LL * v13;
      if ( !v35 )
        return a4;
      goto LABEL_28;
    }
    v31 = v13;
    v32 = 0;
    v33 = *(_QWORD *)(a1 + 56) + 56LL * v13;
    if ( (_QWORD)v77 )
    {
      v64.m128i_i64[0] = v13;
      v65 = v77;
      na = 12 * v77;
      v36 = (void *)qalloc_or_throw();
      v37 = memcpy(v36, src, na);
      v31 = v13;
      v15 = v65;
      v32 = (__int64)v37;
    }
    v34 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v15, (__m128i)(unsigned __int64)v15);
    if ( *(_QWORD *)v33 )
    {
      *(_QWORD *)(v33 + 8) = 0;
      v65 = v32;
      nb = v31;
      v64 = v34;
      qfree();
      v34 = _mm_load_si128(&v64);
      v32 = v65;
      v31 = nb;
    }
    *(_QWORD *)v33 = v32;
    *(__m128i *)(v33 + 8) = v34;
    *(_QWORD *)(v33 + 24) = v78;
    *(_DWORD *)(v33 + 32) = v79;
    *(__m128i *)(v33 + 36) = _mm_loadu_si128((const __m128i *)((char *)&v79 + 4));
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v31) = v8;
    *(_DWORD *)(*(_QWORD *)(a1 + 32) + 4 * v31) = 0;
    if ( a3 )
      goto LABEL_36;
  }
LABEL_27:
  if ( src )
  {
LABEL_28:
    *(_QWORD *)&v77 = 0;
    qfree();
  }
  return a4;
}

