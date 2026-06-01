__int64 __fastcall sub_ED8C0(__int64 a1, __m128i *a2, __int64 a3, double a4)
{
  int v6; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int32 v10; // r13d
  __int64 v12; // r14
  __m128i *v13; // r8
  __int64 v14; // rdi
  __int64 v15; // r12
  __int64 v16; // rbp
  _QWORD *v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rdi
  __m128i *v20; // rsi
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __m128i v24; // xmm3
  bool v25; // zf
  __int64 v26; // rbp
  _QWORD *v27; // r14
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 v30; // rdi
  __m128i si128; // xmm4
  __int64 v32; // rax
  __int64 v33; // rcx
  void *v34; // r14
  __int64 v35; // r8
  __m128i v36; // xmm0
  __int64 v37; // rdi
  __m128i v38; // xmm0
  int v39; // ecx
  __int8 v40; // al
  __int64 v41; // rdx
  _QWORD *v42; // rbp
  __int64 v43; // rdi
  __int64 v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rbp
  __int64 v47; // rdx
  int v48; // eax
  const void *v49; // r11
  const void *v50; // rsi
  const void *v51; // r14
  __int64 v52; // rcx
  __int64 v53; // rdx
  void *v54; // rax
  size_t v55; // rdx
  void *v56; // rax
  size_t v57; // rdx
  __m128i v58; // [rsp+0h] [rbp-E8h] BYREF
  __m128i *v59; // [rsp+10h] [rbp-D8h]
  int v60; // [rsp+1Ch] [rbp-CCh]
  size_t n[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v62; // [rsp+30h] [rbp-B8h]
  size_t v63; // [rsp+38h] [rbp-B0h]
  __int64 v64; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v65; // [rsp+48h] [rbp-A0h]
  __int64 v66; // [rsp+58h] [rbp-90h]
  _BYTE v67[16]; // [rsp+68h] [rbp-80h] BYREF
  __int64 v68; // [rsp+78h] [rbp-70h]
  void *src; // [rsp+80h] [rbp-68h]
  __int64 v70; // [rsp+88h] [rbp-60h]
  __int8 v71; // [rsp+98h] [rbp-50h]
  unsigned __int64 v72; // [rsp+A8h] [rbp-40h]

  v6 = *(_DWORD *)(a1 + 360);
  v72 = __readfsqword(0x28u);
  if ( (v6 & 0xFFFFFFF0) != 0xD0 && (v6 & 0xFFFFFFF0) != 0x40 )
  {
    if ( *(_QWORD *)(a1 + 320) == *(_QWORD *)(*(_QWORD *)(a1 + 8) + 40LL)
      || (v6 & 0xFFFFFFBF) != 0x30
      || a2->m128i_i64[1] <= 1uLL
      || get_tinfo_size() != 1
      || *(_DWORD *)(a2->m128i_i64[0] + 80 * a2->m128i_i64[1] - 80) != 1
      || !*(_BYTE *)(a1 + 366) )
    {
      return *(unsigned int *)(a1 + 348);
    }
    v59 = (__m128i *)&v64;
    sub_E8500((__int64)&v64, (__int64)a2, v8, v9);
    HIDWORD(v66) = 0;
    v71 = v71 & 0xF | 0x40;
    if ( v65 )
    {
      --v65;
      v42 = (_QWORD *)(v64 + 80 * v65);
      clear_tinfo_t();
      v43 = v42[5];
      if ( v43 )
      {
        v42[6] = 0;
        qfree(v43);
      }
      v44 = v42[2];
      if ( v44 )
      {
        v42[3] = 0;
        qfree(v44);
      }
      cleanup_argloc();
    }
    if ( (unsigned __int8)calc_arglocs() )
    {
      v58.m128i_i64[0] = v65;
      v60 = v65;
      if ( (int)v65 <= 0 )
      {
LABEL_30:
        v20 = v59;
        *(_DWORD *)(a1 + 348) = v58.m128i_i32[0];
        v10 = sub_EC750((_QWORD *)a1, v20, a4);
        if ( v10 == -1
          || v58.m128i_i32[0] + 1 >= v10
          || (v21 = a2->m128i_i64[0] + 80 * a2->m128i_i64[1] - 80, (unsigned int)compare_arglocs()) )
        {
          v45 = a2->m128i_i64[1];
          v13 = (__m128i *)v67;
          *(_DWORD *)(a1 + 348) = v45;
          v10 = v45;
        }
        else
        {
          v62 = 0;
          n[0] = v65;
          if ( v65 )
          {
            v62 = qalloc_or_throw(80 * v65, v21, v22, v23);
            v46 = v62;
            v58.m128i_i64[0] = 0;
            do
            {
              v49 = (const void *)(v64 + 80 * v58.m128i_i64[0]);
              *(_DWORD *)v46 = 0;
              v50 = v49;
              v51 = v49;
              copy_argloc();
              *(_QWORD *)(v46 + 16) = 0;
              *(_OWORD *)(v46 + 24) = 0;
              v53 = *((_QWORD *)v51 + 3);
              if ( v53 )
              {
                v63 = *((_QWORD *)v51 + 3);
                v54 = (void *)qalloc_or_throw(v63, (__int64)v50, v53, v52);
                v55 = v63;
                *(_QWORD *)(v46 + 16) = v54;
                *(_QWORD *)(v46 + 32) = v55;
                v50 = *((const void **)v51 + 2);
                memcpy(v54, v50, v55);
                *(_QWORD *)(v46 + 24) = v63;
              }
              *(_QWORD *)(v46 + 40) = 0;
              *(_OWORD *)(v46 + 48) = 0;
              v47 = *((_QWORD *)v51 + 6);
              if ( v47 )
              {
                v63 = *((_QWORD *)v51 + 6);
                v56 = (void *)qalloc_or_throw(v63, (__int64)v50, v47, v52);
                v57 = v63;
                *(_QWORD *)(v46 + 40) = v56;
                *(_QWORD *)(v46 + 56) = v57;
                memcpy(v56, *((const void **)v51 + 5), v57);
                *(_QWORD *)(v46 + 48) = v63;
              }
              *(_QWORD *)(v46 + 64) = 0;
              copy_tinfo_t();
              v48 = *((_DWORD *)v51 + 18);
              ++v58.m128i_i64[0];
              v46 += 80;
              *(_DWORD *)(v46 - 8) = v48;
            }
            while ( n[0] != v58.m128i_i64[0] );
          }
          v24 = _mm_loadl_epi64((const __m128i *)n);
          v25 = a2->m128i_i64[0] == 0;
          *(__m128i *)n = _mm_unpacklo_epi64(v24, v24);
          if ( !v25 )
          {
            v26 = 0;
            v58.m128i_i64[0] = a2->m128i_i64[1];
            if ( v58.m128i_i64[0] )
            {
              do
              {
                v27 = (_QWORD *)(a2->m128i_i64[0] + 80 * v26);
                clear_tinfo_t();
                v28 = v27[5];
                if ( v28 )
                {
                  v27[6] = 0;
                  qfree(v28);
                }
                v29 = v27[2];
                if ( v29 )
                {
                  v27[3] = 0;
                  qfree(v29);
                }
                ++v26;
                cleanup_argloc();
              }
              while ( v58.m128i_i64[0] != v26 );
            }
            v30 = a2->m128i_i64[0];
            a2->m128i_i64[1] = 0;
            qfree(v30);
          }
          si128 = _mm_load_si128((const __m128i *)n);
          a2->m128i_i64[0] = v62;
          v32 = v66;
          *(__m128i *)((char *)a2 + 8) = si128;
          a2[1].m128i_i64[1] = v32;
          copy_tinfo_t();
          n[0] = (size_t)v67;
          copy_argloc();
          v34 = nullptr;
          v35 = n[0];
          a2[3].m128i_i64[1] = v68;
          v58.m128i_i64[0] = v70;
          if ( v70 )
          {
            v62 = v35;
            n[0] = 8 * v70;
            v34 = (void *)qalloc_or_throw(8 * v70, (__int64)v67, 8 * v70, v33);
            memcpy(v34, src, n[0]);
            v35 = v62;
          }
          v36 = _mm_loadl_epi64(&v58);
          v37 = a2[4].m128i_i64[0];
          v38 = _mm_unpacklo_epi64(v36, v36);
          if ( v37 )
          {
            n[0] = v35;
            a2[4].m128i_i64[1] = 0;
            v58 = v38;
            qfree(v37);
            v35 = n[0];
            v38 = _mm_load_si128(&v58);
          }
          a2[4].m128i_i64[0] = (__int64)v34;
          v39 = v60;
          v40 = v71;
          v41 = (__int64)v59;
          *(__m128i *)((char *)a2 + 72) = v38;
          v58.m128i_i64[0] = v35;
          a2[5].m128i_i8[8] = v40;
          sub_F3650((_DWORD *)a1, a3, v41, v39);
          v13 = (__m128i *)v58.m128i_i64[0];
        }
        goto LABEL_19;
      }
      v12 = 0;
      while ( !(unsigned int)compare_arglocs() )
      {
        v12 += 80;
        if ( 16 * (5LL * (unsigned int)(v58.m128i_i32[0] - 1) + 5) == v12 )
          goto LABEL_30;
      }
    }
    v10 = *(_DWORD *)(a1 + 348);
    v13 = (__m128i *)v67;
LABEL_19:
    if ( src )
    {
      v59 = v13;
      v70 = 0;
      qfree((__int64)src);
    }
    cleanup_argloc();
    clear_tinfo_t();
    v14 = v64;
    if ( v64 )
    {
      v15 = v65;
      if ( v65 )
      {
        v16 = 0;
        do
        {
          v17 = (_QWORD *)(v14 + 80 * v16);
          clear_tinfo_t();
          v18 = v17[5];
          if ( v18 )
          {
            v17[6] = 0;
            qfree(v18);
          }
          v19 = v17[2];
          if ( v19 )
          {
            v17[3] = 0;
            qfree(v19);
          }
          ++v16;
          cleanup_argloc();
          v14 = v64;
        }
        while ( v15 != v16 );
      }
      v65 = 0;
      qfree(v14);
    }
    return (unsigned int)v10;
  }
  return sub_EC750((_QWORD *)a1, a2, a4);
}

