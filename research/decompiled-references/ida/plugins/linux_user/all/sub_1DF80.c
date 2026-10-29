unsigned __int64 __fastcall sub_1DF80(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 *a4, const char *a5, int a6)
{
  unsigned __int64 *v10; // rdi
  unsigned __int64 *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  size_t v14; // r8
  unsigned __int64 v15; // r15
  __int64 v16; // rax
  __m128i v17; // xmm1
  size_t v18; // rax
  bool v19; // zf
  size_t v20; // r15
  size_t v21; // rax
  size_t v22; // r15
  size_t v23; // r13
  unsigned __int64 v24; // rax
  int *v25; // rax
  int *v26; // rdx
  int *v27; // rcx
  int *v28; // rdx
  int *v29; // rcx
  size_t v30; // rbp
  size_t v31; // rbp
  _QWORD *v32; // rdi
  _QWORD *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdx
  _QWORD *v36; // rbp
  _QWORD *v37; // r12
  __int64 v38; // rdi
  _QWORD *v39; // rbx
  _QWORD *v40; // rbp
  __int64 v41; // rdi
  __int64 v43; // rdi
  struct _Unwind_Exception *v44; // rbx
  size_t v46; // [rsp+8h] [rbp-210h]
  size_t v47; // [rsp+8h] [rbp-210h]
  unsigned __int64 *v48; // [rsp+10h] [rbp-208h]
  size_t v49; // [rsp+18h] [rbp-200h]
  __m128 v50; // [rsp+30h] [rbp-1E8h] BYREF
  void *v51; // [rsp+40h] [rbp-1D8h]
  size_t v52[2]; // [rsp+48h] [rbp-1D0h]
  void *v53; // [rsp+58h] [rbp-1C0h]
  size_t v54[3]; // [rsp+60h] [rbp-1B8h]
  int v55; // [rsp+78h] [rbp-1A0h] BYREF
  void *v56; // [rsp+80h] [rbp-198h]
  int *v57; // [rsp+88h] [rbp-190h]
  int *v58; // [rsp+90h] [rbp-188h]
  __int64 v59; // [rsp+98h] [rbp-180h]
  void *v60; // [rsp+A0h] [rbp-178h]
  size_t v61[2]; // [rsp+A8h] [rbp-170h]
  void *src; // [rsp+B8h] [rbp-160h]
  size_t n[2]; // [rsp+C0h] [rbp-158h]
  int v64; // [rsp+D0h] [rbp-148h]
  void *v65; // [rsp+E0h] [rbp-138h] BYREF
  size_t v66[2]; // [rsp+E8h] [rbp-130h]
  void *v67; // [rsp+F8h] [rbp-120h]
  __int128 v68; // [rsp+100h] [rbp-118h]
  void *v69; // [rsp+110h] [rbp-108h]
  __int128 v70; // [rsp+118h] [rbp-100h]
  int v71; // [rsp+130h] [rbp-E8h] BYREF
  void *v72; // [rsp+138h] [rbp-E0h]
  int *v73; // [rsp+140h] [rbp-D8h]
  int *v74; // [rsp+148h] [rbp-D0h]
  __int64 v75; // [rsp+150h] [rbp-C8h]
  void *v76; // [rsp+158h] [rbp-C0h]
  __int128 v77; // [rsp+160h] [rbp-B8h]
  void *v78; // [rsp+170h] [rbp-A8h]
  __int128 v79; // [rsp+178h] [rbp-A0h]
  int v80; // [rsp+188h] [rbp-90h]
  unsigned __int64 v81; // [rsp+190h] [rbp-88h] BYREF
  __int64 v82; // [rsp+198h] [rbp-80h]
  __int64 v83; // [rsp+1A0h] [rbp-78h]
  void *dest[2]; // [rsp+1A8h] [rbp-70h]
  __int128 v85; // [rsp+1B8h] [rbp-60h]
  __int128 v86; // [rsp+1C8h] [rbp-50h] BYREF
  unsigned __int64 v87; // [rsp+1D8h] [rbp-40h]

  v87 = __readfsqword(0x28u);
  sub_32190(a1, (unsigned int)"%a: new dll %s (soname=%s)\n", a2, (_DWORD)a4, (_DWORD)a5, a6);
  v10 = &v81;
  v11 = (_QWORD *)&byte_8;
  *(_OWORD *)dest = 0;
  v81 = 0xFFFFFFFFLL;
  v82 = -1;
  v83 = 0;
  v85 = 0;
  v86 = 0;
  set_debug_event_code();
  v15 = HIDWORD(v83) & 0xFFFFFFF;
  if ( (unsigned int)v15 > 0xB || (v16 = 2306, !_bittest64(&v16, v15)) )
  {
LABEL_81:
    v44 = (struct _Unwind_Exception *)sub_10240(v10, v11, v12, v13, v14);
    if ( v76 )
    {
      *(_QWORD *)&v77 = 0;
      qfree();
    }
    sub_122F0(v72);
    if ( v69 )
    {
      *(_QWORD *)&v70 = 0;
      qfree();
    }
    if ( v67 )
    {
      *(_QWORD *)&v68 = 0;
      qfree();
    }
    sub_158C0(&v50);
    free_debug_event();
    _Unwind_Resume(v44);
  }
  v17 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 1340));
  v82 = a2;
  LOBYTE(v83) = 1;
  v81 = _mm_shuffle_epi32(v17, 224).m128i_u64[0];
  if ( a4 && (v10 = a4, v18 = strlen((const char *)a4), (v14 = v18) != 0) )
  {
    v10 = (unsigned __int64 *)dest[0];
    v15 = v18 + 1;
    if ( (unsigned __int64)v85 < v18 + 1 )
    {
      v47 = v18;
      dest[0] = (void *)qvector_reserve();
      v14 = v47;
      v10 = (unsigned __int64 *)dest[0];
    }
    v11 = a4;
    v46 = v14;
    dest[1] = (void *)v15;
    memmove(v10, a4, v14);
    v14 = v46;
    *((_BYTE *)dest[0] + v46) = 0;
    LODWORD(v15) = HIDWORD(v83) & 0xFFFFFFF;
  }
  else
  {
    dest[1] = nullptr;
  }
  v19 = *(_BYTE *)(a1 + 861) == 0;
  *((_QWORD *)&v85 + 1) = a2;
  *((_QWORD *)&v86 + 1) = -1;
  *(_QWORD *)&v86 = a3;
  if ( v19 )
    goto LABEL_7;
  v10 = (unsigned __int64 *)s;
  if ( *(_QWORD *)(a1 + 592) )
    v10 = *(unsigned __int64 **)(a1 + 584);
  v11 = a4;
  if ( strcmp((const char *)v10, (const char *)a4) )
  {
LABEL_7:
    if ( !(_DWORD)v15 )
      goto LABEL_8;
  }
  else
  {
    *((_QWORD *)&v86 + 1) = a2;
    if ( !(_DWORD)v15 )
      goto LABEL_8;
  }
  v43 = *(_QWORD *)(a1 + 136);
  if ( v43 == *(_QWORD *)(a1 + 144) )
  {
    v10 = (unsigned __int64 *)(a1 + 120);
    v11 = &v81;
    sub_1D6F0((_QWORD *)(a1 + 120));
  }
  else
  {
    *(_BYTE *)(v43 - 56) = 0;
    v11 = &v81;
    v10 = (unsigned __int64 *)(v43 - 72);
    v10[1] = -1;
    *v10 = 0xFFFFFFFFLL;
    *((_DWORD *)v10 + 5) = 0;
    copy_debug_event();
    *(_QWORD *)(a1 + 136) -= 72LL;
  }
  *(_BYTE *)(a1 + 1412) = 0;
LABEL_8:
  v65 = nullptr;
  *(_OWORD *)v66 = 0;
  if ( a5 )
  {
    v20 = strlen(a5);
    v10 = (unsigned __int64 *)qvector_reserve();
    v11 = (unsigned __int64 *)a5;
    v65 = v10;
    v66[0] = v20 + 1;
    memmove(v10, a5, v20);
    *((_BYTE *)v10 + v20) = 0;
  }
  v48 = nullptr;
  v49 = 0;
  if ( a4 )
  {
    v21 = strlen((const char *)a4);
    v22 = v21 + 1;
    v23 = v21;
    v10 = (unsigned __int64 *)qvector_reserve();
    v11 = a4;
    v48 = v10;
    v49 = v22;
    memmove(v10, a4, v23);
    *((_BYTE *)v10 + v23) = 0;
  }
  v24 = HIDWORD(v83) & 0xFFFFFFF;
  if ( (unsigned int)v24 > 0xB || (v12 = 2306, !_bittest64(&v12, v24)) )
  {
    sub_10240(v10, v11, v12, v13, v14);
    goto LABEL_81;
  }
  v51 = nullptr;
  v50 = _mm_loadh_ps((const double *)&v86);
  *(_OWORD *)v52 = 0;
  if ( v49 )
  {
    v51 = (void *)qalloc_or_throw();
    v52[1] = v49;
    memcpy(v51, v48, v49);
    v52[0] = v49;
  }
  v53 = nullptr;
  *(_OWORD *)v54 = 0;
  if ( v66[0] )
  {
    v53 = (void *)qalloc_or_throw();
    v54[1] = v66[0];
    memcpy(v53, v65, v66[0]);
    v54[0] = v66[0];
  }
  v55 = 0;
  v56 = nullptr;
  v57 = &v55;
  v58 = &v55;
  v59 = 0;
  v60 = nullptr;
  src = nullptr;
  v64 = 0;
  *(_OWORD *)v61 = 0;
  *(_OWORD *)n = 0;
  if ( v48 )
    qfree();
  if ( v65 )
  {
    v66[0] = 0;
    qfree();
  }
  v67 = nullptr;
  v68 = 0;
  v65 = (void *)v50.m128_u64[0];
  *(__m128 *)v66 = v50;
  if ( v52[0] )
  {
    v67 = (void *)qalloc_or_throw();
    *((_QWORD *)&v68 + 1) = v52[0];
    memcpy(v67, v51, v52[0]);
    *(_QWORD *)&v68 = v52[0];
  }
  v69 = nullptr;
  v70 = 0;
  if ( v54[0] )
  {
    v69 = (void *)qalloc_or_throw();
    *((_QWORD *)&v70 + 1) = v54[0];
    memcpy(v69, v53, v54[0]);
    *(_QWORD *)&v70 = v54[0];
  }
  v71 = 0;
  v72 = nullptr;
  v73 = &v71;
  v74 = &v71;
  v75 = 0;
  if ( v56 )
  {
    v25 = (int *)sub_125B0((int *)v56, (__int64)&v71);
    v26 = v25;
    do
    {
      v27 = v26;
      v26 = *((int **)v26 + 2);
    }
    while ( v26 );
    v73 = v27;
    v28 = v25;
    do
    {
      v29 = v28;
      v28 = *((int **)v28 + 3);
    }
    while ( v28 );
    v74 = v29;
    v72 = v25;
    v75 = v59;
  }
  v30 = v61[0];
  v76 = nullptr;
  v77 = 0;
  if ( v61[0] )
  {
    v76 = (void *)qalloc_or_throw();
    *((_QWORD *)&v77 + 1) = v30;
    memcpy(v76, v60, v30);
    *(_QWORD *)&v77 = v30;
  }
  v31 = n[0];
  v78 = nullptr;
  v79 = 0;
  if ( n[0] )
  {
    v78 = (void *)qalloc_or_throw();
    *((_QWORD *)&v79 + 1) = v31;
    memcpy(v78, src, v31);
    *(_QWORD *)&v79 = v31;
  }
  v32 = (_QWORD *)(a1 + 1168);
  v80 = v64;
  v33 = *(_QWORD **)(a1 + 1176);
  if ( !v33 )
    goto LABEL_68;
  do
  {
    while ( 1 )
    {
      v34 = v33[2];
      v35 = v33[3];
      if ( v33[4] < (unsigned __int64)v65 )
        break;
      v32 = v33;
      v33 = (_QWORD *)v33[2];
      if ( !v34 )
        goto LABEL_41;
    }
    v33 = (_QWORD *)v33[3];
  }
  while ( v35 );
LABEL_41:
  if ( (_QWORD *)(a1 + 1168) == v32 || (unsigned __int64)v65 < v32[4] )
LABEL_68:
    sub_1D170((_QWORD *)(a1 + 1160), v32, (__int64)&v65);
  if ( v78 )
  {
    *(_QWORD *)&v79 = 0;
    qfree();
  }
  if ( v76 )
  {
    *(_QWORD *)&v77 = 0;
    qfree();
  }
  v36 = v72;
  if ( v72 )
  {
    do
    {
      v37 = v36;
      sub_122F0((_QWORD *)v36[3]);
      v38 = v36[5];
      v36 = (_QWORD *)v36[2];
      if ( v38 )
      {
        v37[6] = 0;
        qfree();
      }
      operator delete(v37, 0x40u);
    }
    while ( v36 );
  }
  if ( v69 )
  {
    *(_QWORD *)&v70 = 0;
    qfree();
  }
  if ( v67 )
  {
    *(_QWORD *)&v68 = 0;
    qfree();
  }
  sub_1CC80((_QWORD *)(a1 + 1112), (unsigned __int64 *)&v50);
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  if ( v60 )
  {
    v61[0] = 0;
    qfree();
  }
  v39 = v56;
  if ( v56 )
  {
    do
    {
      v40 = v39;
      sub_122F0((_QWORD *)v39[3]);
      v41 = v39[5];
      v39 = (_QWORD *)v39[2];
      if ( v41 )
      {
        v40[6] = 0;
        qfree();
      }
      operator delete(v40, 0x40u);
    }
    while ( v39 );
  }
  if ( v53 )
  {
    v54[0] = 0;
    qfree();
  }
  if ( v51 )
  {
    v52[0] = 0;
    qfree();
  }
  free_debug_event();
  return v87 - __readfsqword(0x28u);
}

