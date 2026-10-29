__int64 __fastcall sub_36E7B0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v5; // eax
  unsigned __int64 v6; // r14
  int v7; // eax
  unsigned __int64 v8; // rbx
  void *v9; // r13
  __m128i v10; // xmm0
  char v11; // al
  unsigned int v12; // ebx
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // r12
  __int64 v18; // rdi
  __int64 v19; // r13
  __int64 v20; // r12
  _QWORD *v21; // rbp
  _QWORD *v22; // rdi
  __int64 v23; // r13
  __int64 v24; // r12
  _QWORD *v25; // rbp
  __int64 v27; // r12
  int v28; // r14d
  __int64 v29; // rax
  bool v30; // zf
  __int64 v31; // r12
  __int64 v32; // rax
  __int64 v33; // rdx
  int *v34; // r12
  __int64 v35; // rbx
  __int64 v36; // r12
  __int64 v37; // rbx
  __int64 v38; // rcx
  __int64 v39; // r15
  size_t v40; // r13
  size_t v41; // r13
  void *v42; // rax
  void *v43; // rax
  void *v44; // rax
  const void *v45; // rsi
  _QWORD *v46; // rbx
  __int64 v47; // r12
  size_t v48; // r13
  __int64 v49; // rcx
  __int64 v50; // r15
  size_t v51; // r13
  void *v52; // rax
  void *v53; // rax
  _QWORD *v54; // rdi
  __int64 v55; // r13
  __int64 v56; // rbx
  _QWORD *v57; // r12
  __m128i v58; // [rsp+0h] [rbp-168h] BYREF
  int *v59; // [rsp+10h] [rbp-158h]
  _QWORD *v60; // [rsp+18h] [rbp-150h]
  __int64 v61; // [rsp+20h] [rbp-148h]
  __int64 tinfo_size; // [rsp+28h] [rbp-140h]
  int v63; // [rsp+30h] [rbp-138h]
  int v64; // [rsp+34h] [rbp-134h]
  int *v65; // [rsp+38h] [rbp-130h]
  _BYTE v66[16]; // [rsp+40h] [rbp-128h] BYREF
  char v67; // [rsp+50h] [rbp-118h] BYREF
  _QWORD *v68; // [rsp+60h] [rbp-108h] BYREF
  __m128i v69; // [rsp+68h] [rbp-100h]
  __int64 v70; // [rsp+78h] [rbp-F0h]
  __int64 v71; // [rsp+80h] [rbp-E8h]
  __int64 v72; // [rsp+88h] [rbp-E0h]
  __int128 v73; // [rsp+90h] [rbp-D8h]
  void *v74; // [rsp+A0h] [rbp-C8h]
  __m128i v75; // [rsp+A8h] [rbp-C0h]
  char v76; // [rsp+B8h] [rbp-B0h]
  __int64 v77; // [rsp+C0h] [rbp-A8h] BYREF
  __int128 v78; // [rsp+C8h] [rbp-A0h]
  __int64 v79; // [rsp+D8h] [rbp-90h]
  __int64 v80; // [rsp+E0h] [rbp-88h]
  int v81; // [rsp+E8h] [rbp-80h] BYREF
  __int64 v82; // [rsp+F8h] [rbp-70h]
  void *v83; // [rsp+100h] [rbp-68h]
  __int128 v84; // [rsp+108h] [rbp-60h]
  char v85; // [rsp+118h] [rbp-50h]
  unsigned __int64 v86; // [rsp+128h] [rbp-40h]

  v61 = a1;
  v63 = a3;
  v59 = (int *)a4;
  v86 = __readfsqword(0x28u);
  v5 = *(_DWORD *)(a2 + 24);
  v69 = 0;
  v68 = nullptr;
  v70 = 0;
  v71 = 0;
  v72 = 0;
  v74 = nullptr;
  v76 = 16;
  v73 = 0;
  v75 = 0;
  if ( (v5 & 0x100) != 0 )
  {
    v60 = (_QWORD *)a2;
  }
  else
  {
    v60 = nullptr;
    v6 = *(_QWORD *)(a2 + 8);
    if ( v6 )
    {
      v60 = (_QWORD *)qalloc_or_throw();
      v46 = v60;
      v47 = 0;
      v58.m128i_i64[0] = (__int64)&v68;
      do
      {
        v49 = *(_QWORD *)a2 + 80 * v47;
        *(_DWORD *)v46 = 0;
        v50 = v49;
        copy_argloc();
        v46[2] = 0;
        *(_OWORD *)(v46 + 3) = 0;
        v51 = *(_QWORD *)(v50 + 24);
        if ( v51 )
        {
          v52 = (void *)qalloc_or_throw();
          v46[2] = v52;
          v46[4] = v51;
          memcpy(v52, *(const void **)(v50 + 16), v51);
          v46[3] = v51;
        }
        v46[5] = 0;
        *((_OWORD *)v46 + 3) = 0;
        v48 = *(_QWORD *)(v50 + 48);
        if ( v48 )
        {
          v53 = (void *)qalloc_or_throw();
          v46[5] = v53;
          v46[7] = v48;
          memcpy(v53, *(const void **)(v50 + 40), v48);
          v46[6] = v48;
        }
        v46[8] = 0;
        copy_tinfo_t();
        ++v47;
        v46 += 10;
        *((_DWORD *)v46 - 2) = *(_DWORD *)(v50 + 72);
      }
      while ( v47 != v6 );
      v54 = v68;
      if ( v68 )
      {
        v55 = v69.m128i_i64[0];
        if ( v69.m128i_i64[0] )
        {
          v56 = 0;
          do
          {
            v57 = &v54[10 * v56];
            clear_tinfo_t();
            if ( v57[5] )
            {
              v57[6] = 0;
              qfree();
            }
            if ( v57[2] )
            {
              v57[3] = 0;
              qfree();
            }
            ++v56;
            cleanup_argloc();
            v54 = v68;
          }
          while ( v55 != v56 );
        }
        v69.m128i_i64[0] = 0;
        qfree();
      }
      v5 = *(_DWORD *)(a2 + 24);
    }
    LODWORD(v70) = v5;
    v7 = *(_DWORD *)(a2 + 28);
    v68 = v60;
    HIDWORD(v70) = v7;
    v69 = _mm_unpacklo_epi64((__m128i)v6, (__m128i)v6);
    copy_tinfo_t();
    copy_argloc();
    v8 = *(_QWORD *)(a2 + 72);
    v9 = nullptr;
    *((_QWORD *)&v73 + 1) = *(_QWORD *)(a2 + 56);
    if ( v8 )
    {
      v9 = (void *)qalloc_or_throw();
      memcpy(v9, *(const void **)(a2 + 64), 8 * v8);
    }
    v10 = _mm_unpacklo_epi64((__m128i)v8, (__m128i)v8);
    if ( v74 )
    {
      v58 = v10;
      v75.m128i_i64[0] = 0;
      qfree();
      v10 = _mm_load_si128(&v58);
    }
    v74 = v9;
    v11 = *(_BYTE *)(a2 + 88);
    v75 = v10;
    v76 = v11;
    v12 = sub_364CE0((__int64)&v68);
    if ( !(_BYTE)v12 )
      goto LABEL_26;
    v60 = &v68;
  }
  v13 = *(_QWORD *)(a2 + 8);
  v77 = 0;
  v78 = 0;
  if ( v13 )
  {
    v77 = qalloc_or_throw();
    v35 = v77;
    v36 = 0;
    *((_QWORD *)&v78 + 1) = v13;
    v58.m128i_i64[0] = (__int64)&v68;
    while ( 1 )
    {
      v37 = 80 * v36 + v35;
      v38 = *(_QWORD *)a2 + 80 * v36;
      *(_DWORD *)v37 = 0;
      v39 = v38;
      copy_argloc();
      *(_QWORD *)(v37 + 16) = 0;
      *(_OWORD *)(v37 + 24) = 0;
      v40 = *(_QWORD *)(v39 + 24);
      if ( v40 )
      {
        v43 = (void *)qalloc_or_throw();
        *(_QWORD *)(v37 + 16) = v43;
        *(_QWORD *)(v37 + 32) = v40;
        memcpy(v43, *(const void **)(v39 + 16), v40);
        *(_QWORD *)(v37 + 24) = v40;
      }
      *(_QWORD *)(v37 + 40) = 0;
      *(_OWORD *)(v37 + 48) = 0;
      v41 = *(_QWORD *)(v39 + 48);
      if ( v41 )
      {
        v42 = (void *)qalloc_or_throw();
        *(_QWORD *)(v37 + 40) = v42;
        *(_QWORD *)(v37 + 56) = v41;
        memcpy(v42, *(const void **)(v39 + 40), v41);
        *(_QWORD *)(v37 + 48) = v41;
      }
      *(_QWORD *)(v37 + 64) = 0;
      copy_tinfo_t();
      ++v36;
      *(_DWORD *)(v37 + 72) = *(_DWORD *)(v39 + 72);
      if ( v13 == v36 )
        break;
      v35 = v77;
    }
    *(_QWORD *)&v78 = v13;
  }
  v14 = *(_QWORD *)(a2 + 24);
  v80 = 0;
  v79 = v14;
  copy_tinfo_t();
  v81 = 0;
  v58.m128i_i64[0] = (__int64)&v81;
  copy_argloc();
  v15 = *(_QWORD *)(a2 + 56);
  v16 = *(_QWORD *)(a2 + 72);
  v83 = nullptr;
  v84 = 0;
  v82 = v15;
  if ( v16 )
  {
    v44 = (void *)qalloc_or_throw();
    v45 = *(const void **)(a2 + 64);
    v83 = v44;
    *((_QWORD *)&v84 + 1) = v16;
    memcpy(v44, v45, 8 * v16);
    *(_QWORD *)&v84 = v16;
  }
  v85 = *(_BYTE *)(a2 + 88);
  v17 = 80LL * v63;
  copy_tinfo_t();
  v12 = sub_364CE0((__int64)&v77);
  if ( !(_BYTE)v12 )
    goto LABEL_14;
  v27 = v77 + v17;
  tinfo_size = get_tinfo_size();
  v59 = (int *)get_tinfo_size();
  v28 = compare_arglocs();
  if ( v28 )
    goto LABEL_14;
  v64 = (int)v59;
  if ( (int)v59 > (int)tinfo_size )
  {
    v65 = (int *)v66;
    sub_1C1C50((__int64)v66, v61, v27, (int)v59);
    v29 = 0;
    v30 = *(_QWORD *)(a2 + 8) == 0;
    v59 = (int *)&v67;
    if ( v30 )
    {
LABEL_46:
      cleanup_argloc();
      goto LABEL_15;
    }
    while ( 1 )
    {
      if ( v63 != v28 )
      {
        v31 = 80 * v29 + v77;
        if ( (unsigned int)compare_arglocs() )
          goto LABEL_72;
        v32 = get_tinfo_size();
        v33 = v31;
        v34 = v59;
        tinfo_size = v32;
        sub_1C1C50((__int64)v59, v61, v33, v32);
        if ( (unsigned __int8)sub_1C0720(v34, (int)tinfo_size, v65, v64) )
        {
          cleanup_argloc();
LABEL_72:
          cleanup_argloc();
LABEL_14:
          v12 = 0;
          break;
        }
        cleanup_argloc();
      }
      v29 = ++v28;
      if ( (unsigned __int64)v28 >= *(_QWORD *)(a2 + 8) )
        goto LABEL_46;
    }
  }
LABEL_15:
  if ( v83 )
  {
    *(_QWORD *)&v84 = 0;
    qfree();
  }
  cleanup_argloc();
  clear_tinfo_t();
  v18 = v77;
  if ( v77 )
  {
    v19 = v78;
    if ( (_QWORD)v78 )
    {
      v20 = 0;
      do
      {
        v21 = (_QWORD *)(v18 + 80 * v20);
        clear_tinfo_t();
        if ( v21[5] )
        {
          v21[6] = 0;
          qfree();
        }
        if ( v21[2] )
        {
          v21[3] = 0;
          qfree();
        }
        ++v20;
        cleanup_argloc();
        v18 = v77;
      }
      while ( v19 != v20 );
    }
    *(_QWORD *)&v78 = 0;
    qfree();
  }
LABEL_26:
  if ( v74 )
  {
    v75.m128i_i64[0] = 0;
    qfree();
  }
  cleanup_argloc();
  clear_tinfo_t();
  v22 = v68;
  if ( v68 )
  {
    v23 = v69.m128i_i64[0];
    if ( v69.m128i_i64[0] )
    {
      v24 = 0;
      do
      {
        v25 = &v22[10 * v24];
        clear_tinfo_t();
        if ( v25[5] )
        {
          v25[6] = 0;
          qfree();
        }
        if ( v25[2] )
        {
          v25[3] = 0;
          qfree();
        }
        ++v24;
        cleanup_argloc();
        v22 = v68;
      }
      while ( v23 != v24 );
    }
    v69.m128i_i64[0] = 0;
    qfree();
  }
  return v12;
}

