unsigned __int64 __fastcall sub_49340(__int64 a1)
{
  void **v1; // rax
  void **v3; // rbx
  void **v4; // rbp
  void *v5; // rdi
  __int64 v6; // rsi
  unsigned __int8 *v7; // rax
  unsigned __int8 *v8; // rbx
  unsigned __int64 v9; // rax
  unsigned __int8 *v10; // rbp
  bool v11; // cc
  int v12; // eax
  int v13; // ebp
  signed int v14; // r12d
  unsigned __int64 v15; // r13
  _BYTE *v16; // rax
  _BYTE *v17; // rbx
  void *v18; // rdi
  void *v19; // xmm0_8
  _BYTE *v20; // rax
  int v21; // esi
  char *v22; // rdx
  int v23; // eax
  char v24; // di
  __int64 v25; // rcx
  __int64 v27; // rsi
  unsigned __int8 *v28; // r14
  unsigned __int8 *v29; // rdx
  unsigned __int8 *v30; // r8
  unsigned __int8 v31; // al
  unsigned __int8 *v32; // r13
  unsigned __int8 *v33; // rdx
  unsigned __int8 v34; // si
  char *v35; // rdx
  _BYTE *v36; // r12
  _BYTE *v37; // rax
  _BYTE *v38; // rax
  int v39; // r10d
  _BYTE *v40; // r14
  __m128i v41; // xmm5
  bool v42; // zf
  int v43; // r12d
  _BYTE *v44; // rbp
  __int64 v45; // rax
  __int64 v46; // rdx
  void *v47; // r12
  int v48; // r14d
  void *v49; // rax
  char *v50; // r13
  unsigned int v51; // eax
  __int64 v52; // r12
  unsigned __int64 v53; // rdi
  _BYTE *v54; // rax
  int v55; // ecx
  _BYTE *v56; // rcx
  char *v57; // rdx
  int v58; // eax
  char v59; // di
  __int64 v60; // rcx
  void *v61; // rdi
  void *v62; // rdi
  char *v63; // rax
  int v64; // edx
  char *v65; // rdx
  int v66; // eax
  char v67; // di
  __int64 v68; // rcx
  _BYTE *v69; // rax
  void *v70; // r12
  void *v71; // rax
  int v72; // edx
  int v73; // ecx
  int v74; // r8d
  int v75; // r9d
  _BYTE *v76; // r12
  __int64 v77; // r14
  int v78; // edx
  __int64 v79; // r14
  unsigned __int64 v80; // rdi
  _BYTE *v81; // rax
  char *v82; // rcx
  char *v83; // rdx
  int v84; // eax
  char v85; // di
  __int64 v86; // rcx
  void *v87; // rdi
  void *v88; // rdi
  _BYTE *v89; // rax
  int v90; // esi
  char *v91; // rdx
  int v92; // eax
  char v93; // di
  __int64 v94; // rcx
  void *src; // [rsp+0h] [rbp-F8h]
  unsigned __int8 *v96; // [rsp+8h] [rbp-F0h]
  __int64 v97; // [rsp+10h] [rbp-E8h]
  _BYTE *n_4; // [rsp+18h] [rbp-E0h]
  unsigned __int64 v99; // [rsp+20h] [rbp-D8h]
  unsigned __int64 v100; // [rsp+28h] [rbp-D0h]
  int v101[2]; // [rsp+30h] [rbp-C8h]
  void *v102; // [rsp+38h] [rbp-C0h]
  unsigned __int64 v103; // [rsp+40h] [rbp-B8h]
  void *dest; // [rsp+48h] [rbp-B0h]
  void **v105; // [rsp+50h] [rbp-A8h]
  void *v106; // [rsp+58h] [rbp-A0h]
  _QWORD v107[2]; // [rsp+60h] [rbp-98h] BYREF
  _BYTE *v108; // [rsp+70h] [rbp-88h]
  __int64 v109; // [rsp+78h] [rbp-80h]
  void *v110; // [rsp+80h] [rbp-78h]
  __int64 v111; // [rsp+88h] [rbp-70h]
  void *v112; // [rsp+90h] [rbp-68h] BYREF
  __int64 v113; // [rsp+98h] [rbp-60h]
  void *v114; // [rsp+A0h] [rbp-58h]
  __int64 v115; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v116; // [rsp+B8h] [rbp-40h]

  v1 = *(void ***)(a1 + 112);
  v116 = __readfsqword(0x28u);
  *(_DWORD *)(a1 + 36) = 1;
  *(_BYTE *)(a1 + 80) = 0;
  if ( v1 )
  {
    v3 = &v1[4 * (_QWORD)*(v1 - 1)];
    if ( v1 == v3 )
    {
      v6 = 0;
    }
    else
    {
      do
      {
        v4 = v3;
        v5 = *(v3 - 2);
        v3 -= 4;
        if ( v5 )
          operator delete[](v5);
        if ( *v3 )
          operator delete[](*v3);
      }
      while ( *(void ***)(a1 + 112) != v3 );
      v6 = 32LL * (_QWORD)*(v4 - 5);
    }
    operator delete[](v3 - 1, v6 + 8);
  }
  v7 = *(unsigned __int8 **)(a1 + 16);
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_BYTE *)(a1 + 129) = 1;
  v8 = v7;
  src = v7;
  while ( 1 )
  {
    v9 = *v8;
    if ( (_BYTE)v9 == 32 )
      break;
    if ( (char)v9 > 32 )
    {
      if ( (_BYTE)v9 == 62 )
        break;
      goto LABEL_43;
    }
    if ( (char)v9 > 10 )
    {
      if ( (_BYTE)v9 == 13 )
        break;
LABEL_43:
      ++v8;
      goto LABEL_44;
    }
    if ( (char)v9 > 8 )
      break;
    ++v8;
    if ( !(_BYTE)v9 )
      return v116 - __readfsqword(0x28u);
LABEL_44:
    *(_QWORD *)(a1 + 16) = v8;
  }
  v96 = v8;
  v10 = v8;
  *(_QWORD *)v101 = a1 + 112;
  v11 = (char)v9 <= 47;
  while ( v11 )
  {
    if ( (_BYTE)v9 != 13 )
    {
      if ( (char)v9 > 13 )
      {
        if ( (_BYTE)v9 != 32 )
          goto LABEL_48;
      }
      else if ( (unsigned __int8)(v9 - 9) > 1u )
      {
        goto LABEL_48;
      }
    }
    *(_QWORD *)(a1 + 16) = ++v10;
LABEL_21:
    v9 = *v10;
    v11 = (char)v9 <= 47;
    if ( (_BYTE)v9 == 47 )
    {
      *(_BYTE *)(a1 + 80) = 1;
      *(_QWORD *)(a1 + 16) = v10 + 1;
      if ( src >= v8 )
        goto LABEL_23;
LABEL_39:
      if ( *(v8 - 1) == 47 )
      {
        *(_BYTE *)(a1 + 80) = 1;
        v96 = v8 - 1;
        v12 = (int)src;
        if ( src )
          goto LABEL_24;
        goto LABEL_41;
      }
LABEL_23:
      v12 = (int)src;
      if ( src )
      {
LABEL_24:
        v13 = (_DWORD)v96 - v12;
        v14 = (_DWORD)v96 - v12 + 1;
        v15 = v14;
        v16 = (_BYTE *)operator new[](v14);
        v17 = v16;
        if ( v13 > 0 )
          memcpy(v16, src, (unsigned int)(v13 - 1) + 1LL);
        v17[v13] = 0;
        goto LABEL_27;
      }
LABEL_41:
      v17 = 0;
      v15 = 0;
      v14 = 0;
LABEL_27:
      v18 = *(void **)(a1 + 48);
      v19 = (void *)_mm_shuffle_epi32(_mm_cvtsi32_si128(v14), 224).m128i_u64[0];
      if ( v18 )
      {
        src = v19;
        operator delete[](v18);
      }
      *(_QWORD *)(a1 + 56) = v19;
      v20 = (_BYTE *)operator new[](v15);
      v21 = *(_DWORD *)(a1 + 60);
      *(_QWORD *)(a1 + 48) = v20;
      if ( v21 > 0 )
      {
        *v20 = *v17;
        v22 = v17 + 1;
        if ( v21 != 1 )
        {
          v23 = 1;
          do
          {
            v24 = *v22;
            v25 = v23;
            ++v22;
            ++v23;
            *(_BYTE *)(*(_QWORD *)(a1 + 48) + v25) = v24;
          }
          while ( v23 < *(_DWORD *)(a1 + 60) );
        }
      }
      if ( v17 )
        operator delete[](v17);
      ++*(_QWORD *)(a1 + 16);
      return v116 - __readfsqword(0x28u);
    }
  }
  if ( (_BYTE)v9 == 62 )
  {
    if ( src >= v8 )
      goto LABEL_23;
    goto LABEL_39;
  }
LABEL_48:
  v27 = 0x100002600LL;
  v28 = v10;
  while ( (unsigned __int8)v9 > 0x20u )
  {
    v30 = v28 + 1;
    v29 = v28 + 1;
    if ( (_BYTE)v9 == 61 )
      goto LABEL_55;
LABEL_52:
    *(_QWORD *)(a1 + 16) = v29;
    v9 = *v29;
    v28 = v29;
  }
  if ( !_bittest64(&v27, v9) )
  {
    if ( !(_BYTE)v9 )
      return v116 - __readfsqword(0x28u);
    v29 = v28 + 1;
    goto LABEL_52;
  }
  if ( !(_BYTE)v9 )
    return v116 - __readfsqword(0x28u);
  v30 = v28 + 1;
LABEL_55:
  *(_QWORD *)(a1 + 16) = v30;
  v31 = v28[1];
  v32 = v30;
  if ( v31 == 34 || v31 == 39 )
  {
LABEL_61:
    *(_QWORD *)(a1 + 16) = v32 + 1;
    v34 = v32[1];
    v103 = (unsigned __int64)(v32 + 1);
    if ( v34 != v31 )
    {
      v35 = (char *)(v32 + 2);
      while ( v34 )
      {
        *(_QWORD *)(a1 + 16) = v35;
        v36 = v35;
        v34 = *v35++;
        if ( v34 == v31 )
          goto LABEL_65;
      }
      return v116 - __readfsqword(0x28u);
    }
    v36 = (_BYTE *)v103;
LABEL_65:
    *(_QWORD *)(a1 + 16) = v36 + 1;
    v109 = 0x100000001LL;
    v37 = (_BYTE *)operator new[](1u);
    *v37 = 0;
    n_4 = v37;
    v108 = v37;
    v111 = 0x100000001LL;
    v102 = (void *)operator new[](1u);
    v110 = v102;
    *(_BYTE *)v102 = 0;
    if ( v10 )
    {
      v100 = v28 - v10;
      HIDWORD(v97) = (_DWORD)v28 - (_DWORD)v10 + 1;
      v99 = SHIDWORD(v97);
      v38 = (_BYTE *)operator new[](SHIDWORD(v97));
      v39 = v100;
      v40 = v38;
      if ( (int)v100 > 0 )
      {
        memcpy(v38, v10, (unsigned int)(v100 - 1) + 1LL);
        v39 = v100;
      }
      v41 = _mm_cvtsi32_si128(HIDWORD(v97));
      v42 = n_4 == 0;
      v40[v39] = 0;
      v100 = _mm_shuffle_epi32(v41, 224).m128i_u64[0];
      if ( !v42 )
        operator delete[](n_4);
      v109 = v100;
      n_4 = (_BYTE *)operator new[](v99);
      v108 = n_4;
      if ( SHIDWORD(v97) > 0 )
        memcpy(n_4, v40, HIDWORD(v97));
      if ( v40 )
        operator delete[](v40);
    }
    else
    {
      if ( n_4 )
        operator delete[](n_4);
      v109 = 0;
      n_4 = (_BYTE *)operator new[](0);
      v108 = n_4;
      v99 = 0;
      v100 = 0;
      HIDWORD(v97) = 0;
    }
    v43 = (_DWORD)v36 - v103;
    v107[1] = _mm_shuffle_epi32(_mm_cvtsi32_si128(v43 + 1), 224).m128i_u64[0];
    v44 = (_BYTE *)operator new[](v43 + 1);
    v45 = 0;
    if ( v43 > 0 )
    {
      do
      {
        v44[v45] = v32[v45 + 1];
        v46 = v45++;
      }
      while ( v43 - 1 != v46 );
    }
    v107[0] = v44;
    v44[v43] = 0;
    v105 = &v112;
    sub_487C0((__int64)&v112, a1, (__int64)v107);
    v47 = v112;
    if ( v102 )
      operator delete[](v102);
    v48 = HIDWORD(v113);
    v102 = (void *)SHIDWORD(v113);
    v103 = _mm_shuffle_epi32(_mm_cvtsi32_si128(HIDWORD(v113)), 224).m128i_u64[0];
    v111 = v103;
    v49 = (void *)operator new[](SHIDWORD(v113));
    v110 = v49;
    v50 = (char *)v49;
    if ( v48 > 0 )
      memcpy(v49, v47, (unsigned int)v48);
    if ( v47 )
      operator delete[](v47);
    v51 = *(_DWORD *)(a1 + 124);
    if ( *(_DWORD *)(a1 + 120) < v51 + 1 )
    {
      v113 = 0x100000001LL;
      v69 = (_BYTE *)operator new[](1u);
      *v69 = 0;
      v70 = v69;
      v112 = v69;
      v115 = 0x100000001LL;
      v106 = (void *)operator new[](1u);
      v114 = v106;
      *(_BYTE *)v106 = 0;
      if ( v70 )
        operator delete[](v70);
      v113 = v100;
      dest = (void *)operator new[](v99);
      v112 = dest;
      if ( SHIDWORD(v97) > 0 )
        memcpy(dest, n_4, HIDWORD(v97));
      if ( v106 )
        operator delete[](v106);
      v115 = v103;
      v71 = (void *)operator new[]((unsigned __int64)v102);
      v114 = v71;
      v76 = v71;
      if ( v48 > 0 )
        memcpy(v71, v50, (unsigned int)v48);
      sub_49040(v101[0], 2 * *(_DWORD *)(a1 + 124) + 1, v72, v73, v74, v75, (unsigned __int64)src, v96, v97);
      v77 = *(unsigned int *)(a1 + 124);
      v78 = v77 + 1;
      v79 = *(_QWORD *)(a1 + 112) + 32 * v77;
      *(_DWORD *)(a1 + 124) = v78;
      if ( *(_QWORD *)v79 )
        operator delete[](*(void **)v79);
      v80 = v99;
      *(_QWORD *)(v79 + 8) = v100;
      v81 = (_BYTE *)operator new[](v80);
      LODWORD(v80) = *(_DWORD *)(v79 + 12);
      *(_QWORD *)v79 = v81;
      if ( (int)v80 > 0 )
      {
        v82 = (char *)dest;
        *v81 = *(_BYTE *)dest;
        v83 = v82 + 1;
        if ( *(int *)(v79 + 12) > 1 )
        {
          v84 = 1;
          do
          {
            v85 = *v83;
            v86 = v84;
            ++v83;
            ++v84;
            *(_BYTE *)(*(_QWORD *)v79 + v86) = v85;
          }
          while ( v84 < *(_DWORD *)(v79 + 12) );
        }
      }
      v87 = *(void **)(v79 + 16);
      if ( v87 )
        operator delete[](v87);
      v88 = v102;
      *(_QWORD *)(v79 + 24) = v103;
      v89 = (_BYTE *)operator new[]((unsigned __int64)v88);
      v90 = *(_DWORD *)(v79 + 28);
      *(_QWORD *)(v79 + 16) = v89;
      if ( v90 > 0 )
      {
        *v89 = *v76;
        v91 = v76 + 1;
        if ( *(int *)(v79 + 28) > 1 )
        {
          v92 = 1;
          do
          {
            v93 = *v91;
            v94 = v92;
            ++v91;
            ++v92;
            *(_BYTE *)(*(_QWORD *)(v79 + 16) + v94) = v93;
          }
          while ( v92 < *(_DWORD *)(v79 + 28) );
        }
      }
      *(_BYTE *)(a1 + 129) = 0;
      if ( v76 )
        operator delete[](v76);
      if ( dest )
        operator delete[](dest);
    }
    else
    {
      *(_DWORD *)(a1 + 124) = v51 + 1;
      v52 = *(_QWORD *)(a1 + 112) + 32LL * v51;
      if ( *(_QWORD *)v52 )
        operator delete[](*(void **)v52);
      v53 = v99;
      *(_QWORD *)(v52 + 8) = v100;
      v54 = (_BYTE *)operator new[](v53);
      v55 = *(_DWORD *)(v52 + 12);
      *(_QWORD *)v52 = v54;
      if ( v55 > 0 )
      {
        v56 = n_4;
        *v54 = *n_4;
        v57 = v56 + 1;
        if ( *(int *)(v52 + 12) > 1 )
        {
          v58 = 1;
          do
          {
            v59 = *v57;
            v60 = v58;
            ++v57;
            ++v58;
            *(_BYTE *)(*(_QWORD *)v52 + v60) = v59;
          }
          while ( v58 < *(_DWORD *)(v52 + 12) );
        }
      }
      v61 = *(void **)(v52 + 16);
      if ( v61 )
        operator delete[](v61);
      v62 = v102;
      *(_QWORD *)(v52 + 24) = v103;
      v63 = (char *)operator new[]((unsigned __int64)v62);
      v64 = *(_DWORD *)(v52 + 28);
      *(_QWORD *)(v52 + 16) = v63;
      if ( v64 > 0 )
      {
        *v63 = *v50;
        v65 = v50 + 1;
        if ( *(int *)(v52 + 28) > 1 )
        {
          v66 = 1;
          do
          {
            v67 = *v65;
            v68 = v66;
            ++v65;
            ++v66;
            *(_BYTE *)(*(_QWORD *)(v52 + 16) + v68) = v67;
          }
          while ( v66 < *(_DWORD *)(v52 + 28) );
        }
      }
      *(_BYTE *)(a1 + 129) = 0;
    }
    if ( v44 )
      operator delete[](v44);
    if ( v50 )
      operator delete[](v50);
    if ( n_4 )
      operator delete[](n_4);
    v10 = *(unsigned __int8 **)(a1 + 16);
    goto LABEL_21;
  }
  v33 = v28 + 2;
  while ( v31 )
  {
    *(_QWORD *)(a1 + 16) = v33;
    v31 = *v33;
    v32 = v33++;
    if ( v31 == 34 || v31 == 39 )
      goto LABEL_61;
  }
  return v116 - __readfsqword(0x28u);
}
