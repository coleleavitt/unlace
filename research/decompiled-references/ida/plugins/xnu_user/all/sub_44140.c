unsigned __int64 __fastcall sub_44140(__int64 a1)
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
  __int64 v56; // rcx
  char *v57; // rdx
  int v58; // eax
  char v59; // di
  __int64 v60; // rcx
  void *v61; // rdi
  void *v62; // rdi
  _BYTE *v63; // rax
  int v64; // edx
  char *v65; // rdx
  int v66; // eax
  char v67; // di
  __int64 v68; // rcx
  _BYTE *v69; // rax
  void *v70; // r12
  void *v71; // rax
  _BYTE *v72; // r12
  __int64 v73; // r14
  int v74; // edx
  __int64 v75; // r14
  unsigned __int64 v76; // rdi
  _BYTE *v77; // rax
  char *v78; // rcx
  char *v79; // rdx
  int v80; // eax
  char v81; // di
  __int64 v82; // rcx
  void *v83; // rdi
  void *v84; // rdi
  _BYTE *v85; // rax
  int v86; // esi
  char *v87; // rdx
  int v88; // eax
  char v89; // di
  __int64 v90; // rcx
  void *src; // [rsp+0h] [rbp-F8h]
  unsigned __int8 *v92; // [rsp+8h] [rbp-F0h]
  unsigned int n[3]; // [rsp+14h] [rbp-E4h]
  unsigned __int64 v94; // [rsp+20h] [rbp-D8h]
  unsigned __int64 v95; // [rsp+28h] [rbp-D0h]
  int v96[2]; // [rsp+30h] [rbp-C8h]
  void *v97; // [rsp+38h] [rbp-C0h]
  unsigned __int64 v98; // [rsp+40h] [rbp-B8h]
  void *dest; // [rsp+48h] [rbp-B0h]
  void **v100; // [rsp+50h] [rbp-A8h]
  void *v101; // [rsp+58h] [rbp-A0h]
  _QWORD v102[2]; // [rsp+60h] [rbp-98h] BYREF
  _BYTE *v103; // [rsp+70h] [rbp-88h]
  __int64 v104; // [rsp+78h] [rbp-80h]
  void *v105; // [rsp+80h] [rbp-78h]
  __int64 v106; // [rsp+88h] [rbp-70h]
  void *v107; // [rsp+90h] [rbp-68h] BYREF
  __int64 v108; // [rsp+98h] [rbp-60h]
  void *v109; // [rsp+A0h] [rbp-58h]
  __int64 v110; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v111; // [rsp+B8h] [rbp-40h]

  v1 = *(void ***)(a1 + 112);
  v111 = __readfsqword(0x28u);
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
      return v111 - __readfsqword(0x28u);
LABEL_44:
    *(_QWORD *)(a1 + 16) = v8;
  }
  v92 = v8;
  v10 = v8;
  *(_QWORD *)v96 = a1 + 112;
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
        v92 = v8 - 1;
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
        v13 = (_DWORD)v92 - v12;
        v14 = (_DWORD)v92 - v12 + 1;
        v15 = v14;
        v16 = (_BYTE *)operator new[](v14);
        v17 = v16;
        if ( v13 > 0 )
          memcpy(v16, src, (unsigned int)(v13 - 1) + 1LL);
        v17[v13] = 0;
        goto LABEL_27;
      }
LABEL_41:
      v17 = nullptr;
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
      return v111 - __readfsqword(0x28u);
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
      return v111 - __readfsqword(0x28u);
    v29 = v28 + 1;
    goto LABEL_52;
  }
  if ( !(_BYTE)v9 )
    return v111 - __readfsqword(0x28u);
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
    v98 = (unsigned __int64)(v32 + 1);
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
      return v111 - __readfsqword(0x28u);
    }
    v36 = (_BYTE *)v98;
LABEL_65:
    *(_QWORD *)(a1 + 16) = v36 + 1;
    v104 = 0x100000001LL;
    v37 = (_BYTE *)operator new[](1u);
    *v37 = 0;
    *(_QWORD *)&n[1] = v37;
    v103 = v37;
    v106 = 0x100000001LL;
    v97 = (void *)operator new[](1u);
    v105 = v97;
    *(_BYTE *)v97 = 0;
    if ( v10 )
    {
      v95 = v28 - v10;
      n[0] = (_DWORD)v28 - (_DWORD)v10 + 1;
      v94 = (int)n[0];
      v38 = (_BYTE *)operator new[]((int)n[0]);
      v39 = v95;
      v40 = v38;
      if ( (int)v95 > 0 )
      {
        memcpy(v38, v10, (unsigned int)(v95 - 1) + 1LL);
        v39 = v95;
      }
      v41 = _mm_cvtsi32_si128(n[0]);
      v42 = *(_QWORD *)&n[1] == 0;
      v40[v39] = 0;
      v95 = _mm_shuffle_epi32(v41, 224).m128i_u64[0];
      if ( !v42 )
        operator delete[](*(void **)&n[1]);
      v104 = v95;
      *(_QWORD *)&n[1] = operator new[](v94);
      v103 = *(_BYTE **)&n[1];
      if ( (int)n[0] > 0 )
        memcpy(*(void **)&n[1], v40, n[0]);
      if ( v40 )
        operator delete[](v40);
    }
    else
    {
      if ( *(_QWORD *)&n[1] )
        operator delete[](*(void **)&n[1]);
      v104 = 0;
      *(_QWORD *)&n[1] = operator new[](0);
      v103 = *(_BYTE **)&n[1];
      v94 = 0;
      v95 = 0;
      n[0] = 0;
    }
    v43 = (_DWORD)v36 - v98;
    v102[1] = _mm_shuffle_epi32(_mm_cvtsi32_si128(v43 + 1), 224).m128i_u64[0];
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
    v102[0] = v44;
    v44[v43] = 0;
    v100 = &v107;
    sub_435C0((__int64)&v107, a1, (__int64)v102);
    v47 = v107;
    if ( v97 )
      operator delete[](v97);
    v48 = HIDWORD(v108);
    v97 = (void *)SHIDWORD(v108);
    v98 = _mm_shuffle_epi32(_mm_cvtsi32_si128(HIDWORD(v108)), 224).m128i_u64[0];
    v106 = v98;
    v49 = (void *)operator new[](SHIDWORD(v108));
    v105 = v49;
    v50 = (char *)v49;
    if ( v48 > 0 )
      memcpy(v49, v47, (unsigned int)v48);
    if ( v47 )
      operator delete[](v47);
    v51 = *(_DWORD *)(a1 + 124);
    if ( *(_DWORD *)(a1 + 120) < v51 + 1 )
    {
      v108 = 0x100000001LL;
      v69 = (_BYTE *)operator new[](1u);
      *v69 = 0;
      v70 = v69;
      v107 = v69;
      v110 = 0x100000001LL;
      v101 = (void *)operator new[](1u);
      v109 = v101;
      *(_BYTE *)v101 = 0;
      if ( v70 )
        operator delete[](v70);
      v108 = v95;
      dest = (void *)operator new[](v94);
      v107 = dest;
      if ( (int)n[0] > 0 )
        memcpy(dest, *(const void **)&n[1], n[0]);
      if ( v101 )
        operator delete[](v101);
      v110 = v98;
      v71 = (void *)operator new[]((unsigned __int64)v97);
      v109 = v71;
      v72 = v71;
      if ( v48 > 0 )
        memcpy(v71, v50, (unsigned int)v48);
      sub_43E40(*(__int64 *)v96, 2 * *(_DWORD *)(a1 + 124) + 1);
      v73 = *(unsigned int *)(a1 + 124);
      v74 = v73 + 1;
      v75 = *(_QWORD *)(a1 + 112) + 32 * v73;
      *(_DWORD *)(a1 + 124) = v74;
      if ( *(_QWORD *)v75 )
        operator delete[](*(void **)v75);
      v76 = v94;
      *(_QWORD *)(v75 + 8) = v95;
      v77 = (_BYTE *)operator new[](v76);
      LODWORD(v76) = *(_DWORD *)(v75 + 12);
      *(_QWORD *)v75 = v77;
      if ( (int)v76 > 0 )
      {
        v78 = (char *)dest;
        *v77 = *(_BYTE *)dest;
        v79 = v78 + 1;
        if ( *(int *)(v75 + 12) > 1 )
        {
          v80 = 1;
          do
          {
            v81 = *v79;
            v82 = v80;
            ++v79;
            ++v80;
            *(_BYTE *)(*(_QWORD *)v75 + v82) = v81;
          }
          while ( v80 < *(_DWORD *)(v75 + 12) );
        }
      }
      v83 = *(void **)(v75 + 16);
      if ( v83 )
        operator delete[](v83);
      v84 = v97;
      *(_QWORD *)(v75 + 24) = v98;
      v85 = (_BYTE *)operator new[]((unsigned __int64)v84);
      v86 = *(_DWORD *)(v75 + 28);
      *(_QWORD *)(v75 + 16) = v85;
      if ( v86 > 0 )
      {
        *v85 = *v72;
        v87 = v72 + 1;
        if ( *(int *)(v75 + 28) > 1 )
        {
          v88 = 1;
          do
          {
            v89 = *v87;
            v90 = v88;
            ++v87;
            ++v88;
            *(_BYTE *)(*(_QWORD *)(v75 + 16) + v90) = v89;
          }
          while ( v88 < *(_DWORD *)(v75 + 28) );
        }
      }
      *(_BYTE *)(a1 + 129) = 0;
      if ( v72 )
        operator delete[](v72);
      if ( dest )
        operator delete[](dest);
    }
    else
    {
      *(_DWORD *)(a1 + 124) = v51 + 1;
      v52 = *(_QWORD *)(a1 + 112) + 32LL * v51;
      if ( *(_QWORD *)v52 )
        operator delete[](*(void **)v52);
      v53 = v94;
      *(_QWORD *)(v52 + 8) = v95;
      v54 = (_BYTE *)operator new[](v53);
      v55 = *(_DWORD *)(v52 + 12);
      *(_QWORD *)v52 = v54;
      if ( v55 > 0 )
      {
        v56 = *(_QWORD *)&n[1];
        *v54 = **(_BYTE **)&n[1];
        v57 = (char *)(v56 + 1);
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
      v62 = v97;
      *(_QWORD *)(v52 + 24) = v98;
      v63 = (_BYTE *)operator new[]((unsigned __int64)v62);
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
    if ( *(_QWORD *)&n[1] )
      operator delete[](*(void **)&n[1]);
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
  return v111 - __readfsqword(0x28u);
}

