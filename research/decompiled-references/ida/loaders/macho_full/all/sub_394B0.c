unsigned __int64 __fastcall sub_394B0(_BYTE *a1, __int64 a2, __int64 (*a3)(), __int64 (*a4)())
{
  __int64 (*v5)(); // rdx
  __int64 (*v6)(); // rcx
  int v7; // eax
  unsigned int *v8; // rax
  unsigned int *v9; // rdx
  size_t v10; // rbx
  void *v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rbp
  __int64 v19; // rdx
  __int64 v20; // rbp
  __int64 v21; // rbx
  _QWORD *v22; // rax
  int v24; // r12d
  size_t v25; // r15
  void *v26; // r14
  __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rdx
  unsigned int *v31; // rcx
  unsigned int *v32; // rsi
  unsigned int *v33; // rdx
  size_t v34; // r14
  void *v35; // rbp
  __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // r14
  __int64 v40; // rbp
  const char *v41; // r12
  __int64 (__fastcall **v42)(); // rax
  __int64 v43; // rax
  __int64 v44; // rsi
  unsigned __int64 v45; // rdi
  __int64 (__fastcall **v46)(); // rbp
  __m128i v47; // xmm0
  __int64 v48; // r14
  __int64 v49; // rax
  void *v50; // rsi
  __m128i v51; // xmm0
  __int64 v52; // rax
  unsigned __int64 v53; // rcx
  char *v54; // rax
  const char *v55; // r12
  unsigned int v56; // edx
  unsigned int v57; // eax
  __int64 v58; // rsi
  _DWORD *v59; // rax
  __int64 v60; // rax
  __int64 v61; // rsi
  unsigned __int64 v62; // rdx
  __int64 (__fastcall **v63)(); // rbp
  __m128i v64; // xmm0
  __int64 v65; // rbx
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rsi
  unsigned __int64 v70; // rdx
  __int64 (__fastcall **v71)(); // rbp
  __m128i v72; // xmm0
  __int64 v73; // rbx
  __int64 v74; // rax
  __m128i v75; // xmm0
  __int64 v76; // rax
  __m128i v77; // xmm0
  __int64 v78; // rax
  __int64 v79; // rax
  __m128i v80; // [rsp+0h] [rbp-D0h] BYREF
  __int128 v81; // [rsp+10h] [rbp-C0h]
  void *src; // [rsp+28h] [rbp-A8h] BYREF
  size_t n[3]; // [rsp+30h] [rbp-A0h]
  unsigned int *v84; // [rsp+48h] [rbp-88h] BYREF
  __int128 v85; // [rsp+50h] [rbp-80h]
  __int64 (__fastcall **v86)(); // [rsp+68h] [rbp-68h] BYREF
  __m128i v87; // [rsp+70h] [rbp-60h] BYREF
  __int16 v88; // [rsp+80h] [rbp-50h]
  unsigned __int64 v89; // [rsp+90h] [rbp-40h]

  v89 = __readfsqword(0x28u);
  v80.m128i_i64[1] = 0;
  v86 = off_633A8;
  src = nullptr;
  v84 = nullptr;
  v87.m128i_i64[1] = (__int64)&v84;
  v88 = 256;
  v87.m128i_i64[0] = a2;
  v81 = 0;
  *(_OWORD *)n = 0;
  v85 = 0;
  sub_27280(a2, (__m128i *)&v86, a3, a4);
  v7 = *(_DWORD *)(a2 + 176);
  if ( v7 == 2 )
  {
    v87.m128i_i8[0] = 0;
    v86 = off_62C28;
    sub_27280(a2, (__m128i *)&v86, v5, v6);
    if ( v87.m128i_i8[0] )
      goto LABEL_3;
    v7 = *(_DWORD *)(a2 + 176);
  }
  if ( v7 == 11
    || (v7 == 2 || v7 == 12)
    && (v87.m128i_i8[0] = 0, v86 = off_62D68, sub_27280(a2, (__m128i *)&v86, v5, v6), v87.m128i_i8[0]) )
  {
LABEL_3:
    v8 = v84;
    v9 = &v84[4 * v85];
    if ( v84 == v9 )
      goto LABEL_10;
    while ( *v8 != 1 || !v8[1] )
    {
      v8 += 4;
      if ( v9 == v8 )
        goto LABEL_10;
    }
    if ( a1[13692] && *(_DWORD *)(*(_QWORD *)a1 + 4LL) == 13 )
    {
      v50 = src;
      if ( n[1] <= 0xB )
      {
        src = (void *)qvector_reserve();
        v50 = src;
      }
      n[0] = 12;
      qmemcpy(v50, "xnu_7195_m1", 11);
      *((_BYTE *)src + 11) = 0;
    }
    else
    {
LABEL_10:
      if ( !(unsigned int)sub_22C20((__int64)a1, (__int64)&v84) )
        sub_22BB0((__int64)a1, (__int64)&v84);
      sub_35470((__int64 *)&src);
    }
    v10 = n[0];
    v11 = nullptr;
    if ( n[0] )
    {
      v11 = (void *)qalloc_or_throw();
      memcpy(v11, src, v10);
    }
    v12 = v81;
    v13 = v80.m128i_i64[1];
    if ( *((_QWORD *)&v81 + 1) < (unsigned __int64)(v81 + 1) )
    {
      v80.m128i_i64[1] = qvector_reserve();
      v12 = v81;
      v13 = v80.m128i_i64[1];
    }
    v14 = 3 * v12;
    goto LABEL_18;
  }
  v24 = *(_DWORD *)(*(_QWORD *)a1 + 4LL);
  if ( v24 == 15 )
  {
    sub_35470((__int64 *)&src);
    v34 = n[0];
    v35 = nullptr;
    if ( n[0] )
    {
      v35 = (void *)qalloc_or_throw();
      memcpy(v35, src, v34);
    }
    v36 = v81;
    v37 = v80.m128i_i64[1];
    if ( *((_QWORD *)&v81 + 1) < (unsigned __int64)(v81 + 1) )
    {
      v80.m128i_i64[1] = qvector_reserve();
      v37 = v80.m128i_i64[1];
      v36 = v81;
    }
    v38 = v37 + 24 * v36;
    *(_QWORD *)v38 = v35;
    *(__m128i *)(v38 + 8) = _mm_unpacklo_epi64((__m128i)v34, (__m128i)v34);
    *(_QWORD *)&v81 = v81 + 1;
    if ( a1[13692] )
    {
      v39 = 9;
      v86 = nullptr;
      v40 = 8;
      v87 = 0;
      v41 = "gnuunx64";
    }
    else
    {
      v39 = 7;
      v86 = nullptr;
      v40 = 6;
      v87 = 0;
      v41 = "gnuunx";
    }
    v42 = (__int64 (__fastcall **)())qvector_reserve();
    v86 = v42;
    v87.m128i_i64[0] = v39;
    if ( (unsigned int)v40 >= 8 )
    {
      v53 = (unsigned __int64)(v42 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      *v42 = *(__int64 (__fastcall **)())v41;
      *(__int64 (__fastcall **)())((char *)v42 + v40 - 8) = *(__int64 (__fastcall **)())&v41[v40 - 8];
      v54 = (char *)v42 - v53;
      v55 = (const char *)(v41 - v54);
      if ( (((_DWORD)v40 + (_DWORD)v54) & 0xFFFFFFF8) >= 8 )
      {
        v56 = (v40 + (_DWORD)v54) & 0xFFFFFFF8;
        v57 = 0;
        do
        {
          v58 = v57;
          v57 += 8;
          *(_QWORD *)(v53 + v58) = *(_QWORD *)&v55[v58];
        }
        while ( v57 < v56 );
      }
    }
    else
    {
      *(_DWORD *)v42 = *(_DWORD *)v41;
      *(_DWORD *)((char *)v42 + (unsigned int)v40 - 4) = *(_DWORD *)&v41[(unsigned int)v40 - 4];
    }
    *((_BYTE *)v86 + v40) = 0;
    v43 = v81;
    v44 = v80.m128i_i64[1];
    v45 = v81 + 1;
    if ( (unsigned __int64)&v86 < v80.m128i_i64[1]
      || (unsigned __int64)&v86 >= v80.m128i_i64[1] + 24LL * *((_QWORD *)&v81 + 1) )
    {
      if ( *((_QWORD *)&v81 + 1) < v45 )
      {
        v80.m128i_i64[1] = qvector_reserve();
        v44 = v80.m128i_i64[1];
        v43 = v81;
      }
      v51 = _mm_loadu_si128(&v87);
      v52 = v44 + 24 * v43;
      *(_QWORD *)v52 = v86;
      *(__m128i *)(v52 + 8) = v51;
      *(_QWORD *)&v81 = v81 + 1;
    }
    else
    {
      v46 = v86;
      v47 = _mm_loadl_epi64(&v87);
      v86 = nullptr;
      v48 = v87.m128i_i64[1];
      v87 = 0;
      if ( *((_QWORD *)&v81 + 1) < v45 )
      {
        v80.m128i_i64[0] = v47.m128i_i64[0];
        v80.m128i_i64[1] = qvector_reserve();
        v44 = v80.m128i_i64[1];
        v47 = _mm_loadl_epi64(&v80);
        v43 = v81;
      }
      v49 = v44 + 24 * v43;
      *(_QWORD *)v49 = v46;
      *(__m128i *)(v49 + 8) = _mm_unpacklo_epi64(v47, (__m128i)(unsigned __int64)v48);
      *(_QWORD *)&v81 = v81 + 1;
      if ( v86 )
      {
        v87.m128i_i64[0] = 0;
        qfree();
      }
    }
    if ( !a1[13692] )
    {
      v87 = 0;
      v86 = nullptr;
      v59 = (_DWORD *)qvector_reserve();
      v86 = (__int64 (__fastcall **)())v59;
      v87.m128i_i64[0] = 8;
      *v59 = 1970828143;
      *(_DWORD *)((char *)v59 + 3) = 2020175477;
      *((_BYTE *)v86 + 7) = 0;
      v60 = v81;
      v61 = v80.m128i_i64[1];
      v62 = v81 + 1;
      if ( (unsigned __int64)&v86 < v80.m128i_i64[1]
        || (unsigned __int64)&v86 >= v80.m128i_i64[1] + 24LL * *((_QWORD *)&v81 + 1) )
      {
        if ( *((_QWORD *)&v81 + 1) < v62 )
        {
          v80.m128i_i64[1] = qvector_reserve();
          v61 = v80.m128i_i64[1];
          v60 = v81;
        }
        v75 = _mm_loadu_si128(&v87);
        v76 = v61 + 24 * v60;
        *(_QWORD *)v76 = v86;
        *(__m128i *)(v76 + 8) = v75;
        *(_QWORD *)&v81 = v81 + 1;
      }
      else
      {
        v63 = v86;
        v64 = _mm_loadl_epi64(&v87);
        v86 = nullptr;
        v65 = v87.m128i_i64[1];
        v87 = 0;
        if ( *((_QWORD *)&v81 + 1) < v62 )
        {
          v80.m128i_i64[0] = v64.m128i_i64[0];
          v80.m128i_i64[1] = qvector_reserve();
          v61 = v80.m128i_i64[1];
          v64 = _mm_loadl_epi64(&v80);
          v60 = v81;
        }
        v66 = v61 + 24 * v60;
        *(_QWORD *)v66 = v63;
        *(__m128i *)(v66 + 8) = _mm_unpacklo_epi64(v64, (__m128i)(unsigned __int64)v65);
        *(_QWORD *)&v81 = v81 + 1;
        if ( v86 )
        {
          v87.m128i_i64[0] = 0;
          qfree();
        }
      }
      v87 = 0;
      v86 = nullptr;
      v67 = qvector_reserve();
      v86 = (__int64 (__fastcall **)())v67;
      v87.m128i_i64[0] = 7;
      *(_DWORD *)v67 = 1651663203;
      *(_WORD *)(v67 + 4) = 28271;
      *((_BYTE *)v86 + 6) = 0;
      v68 = v81;
      v69 = v80.m128i_i64[1];
      v70 = v81 + 1;
      if ( (unsigned __int64)&v86 < v80.m128i_i64[1]
        || (unsigned __int64)&v86 >= v80.m128i_i64[1] + 24LL * *((_QWORD *)&v81 + 1) )
      {
        if ( *((_QWORD *)&v81 + 1) < v70 )
        {
          v80.m128i_i64[1] = qvector_reserve();
          v69 = v80.m128i_i64[1];
          v68 = v81;
        }
        v77 = _mm_loadu_si128(&v87);
        v78 = v69 + 24 * v68;
        *(_QWORD *)v78 = v86;
        *(__m128i *)(v78 + 8) = v77;
        v16 = v81 + 1;
        *(_QWORD *)&v81 = v81 + 1;
        goto LABEL_19;
      }
      v71 = v86;
      v72 = _mm_loadl_epi64(&v87);
      v86 = nullptr;
      v73 = v87.m128i_i64[1];
      v87 = 0;
      if ( *((_QWORD *)&v81 + 1) < v70 )
      {
        v80.m128i_i64[0] = v72.m128i_i64[0];
        v80.m128i_i64[1] = qvector_reserve();
        v69 = v80.m128i_i64[1];
        v72 = _mm_loadl_epi64(&v80);
        v68 = v81;
      }
      v74 = v69 + 24 * v68;
      *(_QWORD *)v74 = v71;
      *(__m128i *)(v74 + 8) = _mm_unpacklo_epi64(v72, (__m128i)(unsigned __int64)v73);
      v16 = v81 + 1;
      *(_QWORD *)&v81 = v81 + 1;
      if ( !v86 )
        goto LABEL_19;
      v87.m128i_i64[0] = 0;
      qfree();
    }
    v16 = v81;
    goto LABEL_19;
  }
  sub_22D40((__int64)a1, &v84);
  sub_35470((__int64 *)&src);
  v25 = n[0];
  v26 = nullptr;
  if ( n[0] )
  {
    v26 = (void *)qalloc_or_throw();
    memcpy(v26, src, v25);
  }
  v27 = v81;
  v28 = v80.m128i_i64[1];
  if ( *((_QWORD *)&v81 + 1) < (unsigned __int64)(v81 + 1) )
  {
    v80.m128i_i64[1] = qvector_reserve();
    v27 = v81;
    v28 = v80.m128i_i64[1];
  }
  v29 = v28 + 24 * v27;
  *(_QWORD *)v29 = v26;
  *(__m128i *)(v29 + 8) = _mm_unpacklo_epi64((__m128i)v25, (__m128i)v25);
  v30 = *(_QWORD *)a1;
  v16 = v81 + 1;
  *(_QWORD *)&v81 = v81 + 1;
  if ( *(_DWORD *)(v30 + 4) != 13 )
    goto LABEL_19;
  v31 = v84;
  v32 = &v84[4 * v85];
  if ( v84 == v32 )
  {
LABEL_100:
    sub_22F40((__int64)a1, (__int64)&v84);
    sub_35470((__int64 *)&src);
    v10 = n[0];
    v11 = nullptr;
    if ( n[0] )
    {
      v11 = (void *)qalloc_or_throw();
      memcpy(v11, src, v10);
    }
    v79 = v81;
    v13 = v80.m128i_i64[1];
    if ( *((_QWORD *)&v81 + 1) < (unsigned __int64)(v81 + 1) )
    {
      v80.m128i_i64[1] = qvector_reserve();
      v13 = v80.m128i_i64[1];
      v79 = v81;
    }
    v14 = 3 * v79;
LABEL_18:
    v15 = v13 + 8 * v14;
    *(_QWORD *)v15 = v11;
    *(__m128i *)(v15 + 8) = _mm_unpacklo_epi64((__m128i)v10, (__m128i)v10);
    v16 = v81 + 1;
    *(_QWORD *)&v81 = v81 + 1;
    goto LABEL_19;
  }
  v33 = v84;
  while ( *v33 != 1 || !v33[1] )
  {
    v33 += 4;
    if ( v32 == v33 )
    {
      while ( *v31 != 10 || !v31[1] )
      {
        v31 += 4;
        if ( v32 == v31 )
          goto LABEL_100;
      }
      break;
    }
  }
LABEL_19:
  v17 = v80.m128i_i64[1];
  v18 = v80.m128i_i64[1] + 24 * v16;
  if ( v80.m128i_i64[1] != v18 )
  {
    do
    {
      add_til();
      v17 += 24;
    }
    while ( v18 != v17 );
  }
  if ( v84 )
  {
    *(_QWORD *)&v85 = 0;
    qfree();
  }
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  v19 = v80.m128i_i64[1];
  if ( v80.m128i_i64[1] )
  {
    v20 = v81;
    if ( (_QWORD)v81 )
    {
      v21 = 0;
      do
      {
        v22 = (_QWORD *)(v19 + 24 * v21);
        if ( *v22 )
        {
          v22[1] = 0;
          qfree();
          v19 = v80.m128i_i64[1];
        }
        ++v21;
      }
      while ( v20 != v21 );
    }
    *(_QWORD *)&v81 = 0;
    qfree();
  }
  return v89 - __readfsqword(0x28u);
}

