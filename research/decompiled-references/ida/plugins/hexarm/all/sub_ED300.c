__int64 __fastcall sub_ED300(__int64 a1, __m128i *a2, __int64 a3)
{
  int v4; // eax
  __int32 v6; // r13d
  __int64 v8; // r14
  __m128i *v9; // r8
  __int64 v10; // rdi
  __int64 v11; // r12
  __int64 v12; // rbp
  _QWORD *v13; // rbx
  __m128i *v14; // rsi
  __m128i v15; // xmm3
  bool v16; // zf
  __int64 v17; // rbp
  _QWORD *v18; // r14
  __m128i si128; // xmm4
  __int64 v20; // rax
  void *v21; // r14
  __int64 v22; // r8
  __m128i v23; // xmm0
  __m128i v24; // xmm0
  __int64 v25; // rcx
  __int8 v26; // al
  __m128i *v27; // rdx
  _QWORD *v28; // rbp
  __int64 v29; // rax
  __int64 v30; // rbp
  int v31; // eax
  __int64 v32; // r11
  __int64 v33; // r14
  void *v34; // rax
  size_t v35; // rdx
  void *v36; // rax
  size_t v37; // rdx
  __m128i v38; // [rsp+0h] [rbp-E8h] BYREF
  __m128i *v39; // [rsp+10h] [rbp-D8h]
  unsigned int v40; // [rsp+1Ch] [rbp-CCh]
  size_t n[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v42; // [rsp+30h] [rbp-B8h]
  size_t v43; // [rsp+38h] [rbp-B0h]
  __int64 v44; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v45; // [rsp+48h] [rbp-A0h]
  __int64 v46; // [rsp+58h] [rbp-90h]
  _BYTE v47[16]; // [rsp+68h] [rbp-80h] BYREF
  __int64 v48; // [rsp+78h] [rbp-70h]
  void *src; // [rsp+80h] [rbp-68h]
  __int64 v50; // [rsp+88h] [rbp-60h]
  __int8 v51; // [rsp+98h] [rbp-50h]
  unsigned __int64 v52; // [rsp+A8h] [rbp-40h]

  v4 = *(_DWORD *)(a1 + 360);
  v52 = __readfsqword(0x28u);
  if ( (v4 & 0xFFFFFFF0) != 0xD0 && (v4 & 0xFFFFFFF0) != 0x40 )
  {
    if ( *(_QWORD *)(a1 + 320) == *(_QWORD *)(*(_QWORD *)(a1 + 8) + 40LL)
      || (v4 & 0xFFFFFFBF) != 0x30
      || a2->m128i_i64[1] <= 1uLL
      || get_tinfo_size() != 1
      || *(_DWORD *)(a2->m128i_i64[0] + 80 * a2->m128i_i64[1] - 80) != 1
      || !*(_BYTE *)(a1 + 366) )
    {
      return *(unsigned int *)(a1 + 348);
    }
    v39 = (__m128i *)&v44;
    sub_E7F40((__int64)&v44, (__int64)a2);
    HIDWORD(v46) = 0;
    v51 = v51 & 0xF | 0x40;
    if ( v45 )
    {
      --v45;
      v28 = (_QWORD *)(v44 + 80 * v45);
      clear_tinfo_t();
      if ( v28[5] )
      {
        v28[6] = 0;
        qfree();
      }
      if ( v28[2] )
      {
        v28[3] = 0;
        qfree();
      }
      cleanup_argloc();
    }
    if ( (unsigned __int8)calc_arglocs() )
    {
      v38.m128i_i64[0] = v45;
      v40 = v45;
      if ( (int)v45 <= 0 )
      {
LABEL_30:
        v14 = v39;
        *(_DWORD *)(a1 + 348) = v38.m128i_i32[0];
        v6 = sub_EC190((_QWORD *)a1, v14);
        if ( v6 == -1 || v38.m128i_i32[0] + 1 >= v6 || (unsigned int)compare_arglocs() )
        {
          v29 = a2->m128i_i64[1];
          v9 = (__m128i *)v47;
          *(_DWORD *)(a1 + 348) = v29;
          v6 = v29;
        }
        else
        {
          v42 = 0;
          n[0] = v45;
          if ( v45 )
          {
            v42 = qalloc_or_throw();
            v30 = v42;
            v38.m128i_i64[0] = 0;
            do
            {
              v32 = v44 + 80 * v38.m128i_i64[0];
              *(_DWORD *)v30 = 0;
              v33 = v32;
              copy_argloc();
              *(_QWORD *)(v30 + 16) = 0;
              *(_OWORD *)(v30 + 24) = 0;
              if ( *(_QWORD *)(v33 + 24) )
              {
                v43 = *(_QWORD *)(v33 + 24);
                v34 = (void *)qalloc_or_throw();
                v35 = v43;
                *(_QWORD *)(v30 + 16) = v34;
                *(_QWORD *)(v30 + 32) = v35;
                memcpy(v34, *(const void **)(v33 + 16), v35);
                *(_QWORD *)(v30 + 24) = v43;
              }
              *(_QWORD *)(v30 + 40) = 0;
              *(_OWORD *)(v30 + 48) = 0;
              if ( *(_QWORD *)(v33 + 48) )
              {
                v43 = *(_QWORD *)(v33 + 48);
                v36 = (void *)qalloc_or_throw();
                v37 = v43;
                *(_QWORD *)(v30 + 40) = v36;
                *(_QWORD *)(v30 + 56) = v37;
                memcpy(v36, *(const void **)(v33 + 40), v37);
                *(_QWORD *)(v30 + 48) = v43;
              }
              *(_QWORD *)(v30 + 64) = 0;
              copy_tinfo_t();
              v31 = *(_DWORD *)(v33 + 72);
              ++v38.m128i_i64[0];
              v30 += 80;
              *(_DWORD *)(v30 - 8) = v31;
            }
            while ( n[0] != v38.m128i_i64[0] );
          }
          v15 = _mm_loadl_epi64((const __m128i *)n);
          v16 = a2->m128i_i64[0] == 0;
          *(__m128i *)n = _mm_unpacklo_epi64(v15, v15);
          if ( !v16 )
          {
            v17 = 0;
            v38.m128i_i64[0] = a2->m128i_i64[1];
            if ( v38.m128i_i64[0] )
            {
              do
              {
                v18 = (_QWORD *)(a2->m128i_i64[0] + 80 * v17);
                clear_tinfo_t();
                if ( v18[5] )
                {
                  v18[6] = 0;
                  qfree();
                }
                if ( v18[2] )
                {
                  v18[3] = 0;
                  qfree();
                }
                ++v17;
                cleanup_argloc();
              }
              while ( v38.m128i_i64[0] != v17 );
            }
            a2->m128i_i64[1] = 0;
            qfree();
          }
          si128 = _mm_load_si128((const __m128i *)n);
          a2->m128i_i64[0] = v42;
          v20 = v46;
          *(__m128i *)((char *)a2 + 8) = si128;
          a2[1].m128i_i64[1] = v20;
          copy_tinfo_t();
          n[0] = (size_t)v47;
          copy_argloc();
          v21 = nullptr;
          v22 = n[0];
          a2[3].m128i_i64[1] = v48;
          v38.m128i_i64[0] = v50;
          if ( v50 )
          {
            v42 = v22;
            n[0] = 8 * v50;
            v21 = (void *)qalloc_or_throw();
            memcpy(v21, src, n[0]);
            v22 = v42;
          }
          v23 = _mm_loadl_epi64(&v38);
          v24 = _mm_unpacklo_epi64(v23, v23);
          if ( a2[4].m128i_i64[0] )
          {
            n[0] = v22;
            a2[4].m128i_i64[1] = 0;
            v38 = v24;
            qfree();
            v22 = n[0];
            v24 = _mm_load_si128(&v38);
          }
          a2[4].m128i_i64[0] = (__int64)v21;
          v25 = v40;
          v26 = v51;
          v27 = v39;
          *(__m128i *)((char *)a2 + 72) = v24;
          v38.m128i_i64[0] = v22;
          a2[5].m128i_i8[8] = v26;
          sub_F3090(a1, a3, v27, v25);
          v9 = (__m128i *)v38.m128i_i64[0];
        }
        goto LABEL_19;
      }
      v8 = 0;
      while ( !(unsigned int)compare_arglocs() )
      {
        v8 += 80;
        if ( 16 * (5LL * (unsigned int)(v38.m128i_i32[0] - 1) + 5) == v8 )
          goto LABEL_30;
      }
    }
    v6 = *(_DWORD *)(a1 + 348);
    v9 = (__m128i *)v47;
LABEL_19:
    if ( src )
    {
      v39 = v9;
      v50 = 0;
      qfree();
    }
    cleanup_argloc();
    clear_tinfo_t();
    v10 = v44;
    if ( v44 )
    {
      v11 = v45;
      if ( v45 )
      {
        v12 = 0;
        do
        {
          v13 = (_QWORD *)(v10 + 80 * v12);
          clear_tinfo_t();
          if ( v13[5] )
          {
            v13[6] = 0;
            qfree();
          }
          if ( v13[2] )
          {
            v13[3] = 0;
            qfree();
          }
          ++v12;
          cleanup_argloc();
          v10 = v44;
        }
        while ( v11 != v12 );
      }
      v45 = 0;
      qfree();
    }
    return (unsigned int)v6;
  }
  return sub_EC190((_QWORD *)a1, a2);
}

