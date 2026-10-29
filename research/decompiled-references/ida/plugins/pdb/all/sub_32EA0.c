__int64 __fastcall sub_32EA0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  _QWORD *v4; // rsi
  _QWORD *v5; // rcx
  _QWORD *v6; // rdx
  unsigned __int64 tinfo_size; // r14
  int tinfo_property; // eax
  bool v10; // zf
  __int64 *v11; // rax
  __int8 v12; // r12
  __m128i v13; // xmm0
  size_t v14; // r13
  __m128i *v15; // rbx
  size_t v16; // r13
  __m128i v17; // xmm0
  __int64 *v18; // rsi
  __m128i v19; // xmm0
  char *v20; // r8
  __m128i v21; // xmm0
  __int64 v22; // rax
  __int64 v23; // rax
  __m128i v24; // xmm0
  __int64 v25; // rax
  __m128i v26; // xmm1
  __int64 v27; // rax
  __m128i v28; // xmm0
  __int64 v29; // rax
  __int64 *v30; // rbx
  __int64 *i; // rbp
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __m128i v35; // [rsp+10h] [rbp-168h] BYREF
  void *v36; // [rsp+20h] [rbp-158h] BYREF
  size_t v37[2]; // [rsp+28h] [rbp-150h]
  void *src; // [rsp+38h] [rbp-140h]
  size_t n[2]; // [rsp+40h] [rbp-138h]
  __int128 v40; // [rsp+50h] [rbp-128h] BYREF
  __m128i v41; // [rsp+68h] [rbp-110h] BYREF
  __m128i v42; // [rsp+78h] [rbp-100h] BYREF
  __int64 v43; // [rsp+88h] [rbp-F0h]
  __int64 v44; // [rsp+90h] [rbp-E8h]
  __int8 v45; // [rsp+98h] [rbp-E0h]
  __int32 v46; // [rsp+9Ch] [rbp-DCh]
  __m128i v47; // [rsp+A0h] [rbp-D8h] BYREF
  void *v48; // [rsp+B0h] [rbp-C8h]
  __m128i v49; // [rsp+B8h] [rbp-C0h] BYREF
  void *v50; // [rsp+C8h] [rbp-B0h]
  __m128i v51; // [rsp+D0h] [rbp-A8h] BYREF
  __int64 v52; // [rsp+E0h] [rbp-98h] BYREF
  __m128i v53; // [rsp+E8h] [rbp-90h] BYREF
  __m128i v54; // [rsp+F8h] [rbp-80h] BYREF
  __m128i v55; // [rsp+108h] [rbp-70h] BYREF
  __int64 v56; // [rsp+118h] [rbp-60h]
  __int64 v57; // [rsp+120h] [rbp-58h]
  __int8 v58; // [rsp+128h] [rbp-50h]
  __int32 v59; // [rsp+12Ch] [rbp-4Ch]
  unsigned __int64 v60; // [rsp+138h] [rbp-40h]

  v60 = __readfsqword(0x28u);
  v2 = a2[1];
  if ( v2 )
  {
    v4 = (_QWORD *)*a2;
    v5 = &v4[18 * v2];
    if ( v4 == v5 )
    {
LABEL_7:
      if ( *v4 )
      {
        tinfo_size = get_tinfo_size(0, v4[8], 0);
        if ( tinfo_size < a2[3] )
          tinfo_size = a2[3];
        tinfo_property = get_tinfo_property(*(_QWORD *)(*a2 + 64), 3);
        v36 = nullptr;
        v10 = tinfo_property == 2;
        v11 = (__int64 *)*a2;
        v35 = 0;
        src = nullptr;
        v12 = v10;
        v42.m128i_i64[1] = 1;
        LODWORD(v43) = -1;
        v44 = 0;
        v45 = 0;
        v46 = 0;
        *(_OWORD *)v37 = 0;
        *(_OWORD *)n = 0;
        v40 = 0;
        v35.m128i_i64[1] = *v11;
        v36 = (void *)qvector_reserve(&v36, 0, 5, 1);
        v37[0] = 5;
        strcpy((char *)v36, "gap0");
        v13 = _mm_load_si128(&v35);
        v14 = v37[0];
        v15 = (__m128i *)*a2;
        v48 = nullptr;
        v47 = v13;
        v49 = 0;
        if ( v37[0] )
        {
          v48 = (void *)qalloc_or_throw(v37[0]);
          v49.m128i_i64[1] = v14;
          memcpy(v48, v36, v14);
          v49.m128i_i64[0] = v14;
        }
        v16 = n[0];
        v50 = nullptr;
        v51 = 0;
        if ( n[0] )
        {
          v50 = (void *)qalloc_or_throw(n[0]);
          v51.m128i_i64[1] = v16;
          memcpy(v50, src, v16);
          v51.m128i_i64[0] = v16;
        }
        v52 = 0;
        copy_tinfo_t(&v52, &v40);
        v17 = _mm_loadu_si128((const __m128i *)((char *)&v40 + 8));
        v18 = (__int64 *)*a2;
        v56 = v43;
        v53 = v17;
        v19 = _mm_loadu_si128(&v41);
        v20 = (char *)((char *)v15 - (char *)v18);
        v57 = v44;
        v54 = v19;
        v21 = _mm_loadu_si128(&v42);
        v58 = v45;
        v55 = v21;
        v59 = v46;
        v22 = a2[1];
        if ( a2[2] < (unsigned __int64)(v22 + 1) )
        {
          v34 = qvector_reserve(a2, v18, v22 + 1, 144);
          v20 = (char *)((char *)v15 - (char *)v18);
          *a2 = v34;
          v15 = (__m128i *)(v34 + (char *)v15 - (char *)v18);
          v22 = a2[1];
        }
        memmove(&v15[9], v15, 144 * v22 - (_QWORD)v20);
        *v15 = _mm_load_si128(&v47);
        v23 = (__int64)v48;
        v24 = _mm_loadu_si128(&v49);
        v48 = nullptr;
        *(__m128i *)((char *)v15 + 24) = v24;
        v15[1].m128i_i64[0] = v23;
        v25 = (__int64)v50;
        v26 = _mm_load_si128(&v51);
        v49 = 0;
        v50 = nullptr;
        v51 = 0;
        v15[2].m128i_i64[1] = v25;
        v15[4].m128i_i64[0] = 0;
        v15[3] = v26;
        copy_tinfo_t(&v15[4], &v52);
        v27 = v56;
        *(__m128i *)((char *)v15 + 72) = _mm_loadu_si128(&v53);
        v28 = _mm_loadu_si128(&v54);
        v15[7].m128i_i64[1] = v27;
        *(__m128i *)((char *)v15 + 88) = v28;
        *(__m128i *)((char *)v15 + 104) = _mm_loadu_si128(&v55);
        v15[8].m128i_i64[0] = v57;
        v15[8].m128i_i8[8] = v58;
        v15[8].m128i_i32[3] = v59;
        ++a2[1];
        clear_tinfo_t(&v52);
        if ( v50 )
        {
          v51.m128i_i64[0] = 0;
          qfree(v50);
        }
        if ( v48 )
        {
          v49.m128i_i64[0] = 0;
          qfree(v48);
        }
        v29 = a2[1];
        v30 = (__int64 *)*a2;
        a2[3] = tinfo_size;
        for ( i = &v30[18 * v29]; i != v30; *((_DWORD *)v30 - 1) = v33 )
        {
          v32 = v30[1];
          v47.m128i_i8[0] = tinfo_size;
          v47.m128i_i8[1] = v32;
          v47.m128i_i8[2] = v12;
          create_tinfo(v30 + 8, 14, 14, &v47);
          v33 = *v30;
          v30 += 18;
        }
        clear_tinfo_t(&v40);
        if ( src )
        {
          n[0] = 0;
          qfree(src);
        }
        if ( v36 )
        {
          v37[0] = 0;
          qfree(v36);
        }
      }
    }
    else
    {
      v6 = v4;
      while ( (v6[8] & 0xF) == 0xE )
      {
        v6 += 18;
        if ( v5 == v6 )
          goto LABEL_7;
      }
    }
  }
  return 1;
}

