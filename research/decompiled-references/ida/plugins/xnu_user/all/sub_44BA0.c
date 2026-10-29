void __fastcall sub_44BA0(__int64 a1)
{
  unsigned __int8 *v1; // rbp
  unsigned __int8 *v3; // rax
  unsigned __int8 v4; // dl
  unsigned __int8 *v5; // rcx
  __int64 v6; // r14
  char *v7; // rcx
  unsigned __int8 v8; // al
  char *v9; // rax
  char *v10; // rbp
  char v11; // dl
  char *v12; // r12
  char *v13; // rax
  _BYTE *v14; // rdx
  bool v15; // si
  char *v16; // rcx
  __int64 v17; // rsi
  unsigned __int8 *v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // r13
  _BYTE *v21; // r12
  __int64 v22; // rax
  __int64 v23; // rdx
  void *v24; // rdi
  _BYTE *v25; // rbp
  unsigned __int64 v26; // rdi
  _BYTE *v27; // rax
  int v28; // ecx
  char *v29; // rdx
  int v30; // eax
  char v31; // di
  __int64 v32; // rcx
  unsigned __int8 v33; // al
  char *v34; // rbp
  char v35; // al
  void **v36; // rax
  void **v37; // rbp
  void **v38; // r12
  void *v39; // rdi
  __int64 v40; // rsi
  const void *v41; // r13
  char v42; // al
  _BYTE *v43; // rax
  int v44; // esi
  int v45; // esi
  unsigned int v46; // r14d
  unsigned __int64 v47; // r15
  _BYTE *v48; // rax
  _BYTE *v49; // r12
  _BYTE *v50; // rcx
  void *v51; // rdi
  unsigned __int64 v52; // xmm0_8
  _BYTE *v53; // rax
  int v54; // ecx
  char *v55; // rdx
  int v56; // eax
  char v57; // di
  __int64 v58; // rcx
  const void *v59; // r15
  unsigned __int8 v60; // dl
  unsigned __int8 *v61; // rax
  int v62; // ebp
  unsigned __int64 v63; // r13
  unsigned __int64 v64; // xmm7_8
  _BYTE *v65; // rax
  _BYTE *v66; // r12
  void *v67; // rdi
  __int64 i; // rax
  int v69; // ecx
  int v70; // ebp
  void *v71; // rbp
  _BYTE *v72; // rax
  unsigned __int64 v73; // r14
  unsigned __int64 v74; // r15
  char *v75; // r13
  void *v76; // rdi
  _BYTE *v77; // rax
  int v78; // ecx
  char *v79; // rdx
  int v80; // eax
  char v81; // di
  __int64 v82; // rcx
  _BYTE *v83; // [rsp+8h] [rbp-70h]
  _BYTE *v84; // [rsp+10h] [rbp-68h] BYREF
  unsigned __int64 v85; // [rsp+18h] [rbp-60h]
  void *v86; // [rsp+20h] [rbp-58h] BYREF
  signed int v87; // [rsp+2Ch] [rbp-4Ch]
  unsigned __int64 v88; // [rsp+38h] [rbp-40h]

  v88 = __readfsqword(0x28u);
  v1 = *(unsigned __int8 **)(a1 + 16);
  if ( !*v1 )
    return;
  if ( *v1 == 60 )
    goto LABEL_9;
  v3 = v1 + 1;
  while ( 1 )
  {
    *(_QWORD *)(a1 + 16) = v3;
    v4 = *v3;
    v5 = v3++;
    if ( v4 == 60 )
      break;
    if ( !v4 )
      return;
  }
  v6 = v5 - v1;
  if ( v5 - v1 > 0 )
  {
    if ( v6 > 2 )
    {
      if ( v1 )
      {
        v20 = (int)v6;
        v85 = _mm_shuffle_epi32(_mm_cvtsi32_si128((int)v6 + 1), 224).m128i_u64[0];
        v21 = (_BYTE *)operator new[]((int)v6 + 1);
        if ( (int)v6 <= 0 )
        {
LABEL_34:
          v21[v20] = 0;
LABEL_35:
          v84 = v21;
          sub_435C0((__int64)&v86, a1, (__int64)&v84);
          v24 = *(void **)(a1 + 48);
          v25 = v86;
          if ( v24 )
            operator delete[](v24);
          v26 = v87;
          *(_QWORD *)(a1 + 56) = _mm_shuffle_epi32(_mm_cvtsi32_si128(v87), 224).m128i_u64[0];
          v27 = (_BYTE *)operator new[](v26);
          v28 = *(_DWORD *)(a1 + 60);
          *(_QWORD *)(a1 + 48) = v27;
          if ( v28 > 0 )
          {
            *v27 = *v25;
            v29 = v25 + 1;
            if ( v28 != 1 )
            {
              v30 = 1;
              do
              {
                v31 = *v29;
                v32 = v30;
                ++v29;
                ++v30;
                *(_BYTE *)(*(_QWORD *)(a1 + 48) + v32) = v31;
              }
              while ( v30 < *(_DWORD *)(a1 + 60) );
            }
          }
          if ( v25 )
            operator delete[](v25);
          *(_DWORD *)(a1 + 36) = 3;
          if ( v21 )
            operator delete[](v21);
          return;
        }
LABEL_32:
        v22 = 0;
        do
        {
          v21[v22] = v1[v22];
          v23 = v22++;
        }
        while ( (_DWORD)v6 - 1 != v23 );
        goto LABEL_34;
      }
    }
    else
    {
      if ( v5 == v1 )
        goto LABEL_8;
      v17 = 0x100002600LL;
      v18 = v1;
      while ( 1 )
      {
        v19 = *v18;
        if ( (unsigned __int8)v19 > 0x20u || !_bittest64(&v17, v19) )
          break;
        if ( v5 == ++v18 )
          goto LABEL_8;
      }
      if ( v5 == v18 )
        goto LABEL_8;
      if ( v1 )
      {
        v20 = (int)v6;
        v85 = _mm_shuffle_epi32(_mm_cvtsi32_si128((int)v6 + 1), 224).m128i_u64[0];
        v21 = (_BYTE *)operator new[]((int)v6 + 1);
        goto LABEL_32;
      }
    }
    v85 = 0;
    v21 = nullptr;
    goto LABEL_35;
  }
LABEL_8:
  v1 = v5;
LABEL_9:
  v7 = (char *)(v1 + 1);
  *(_QWORD *)(a1 + 16) = v1 + 1;
  v8 = v1[1];
  switch ( v8 )
  {
    case '/':
      v36 = *(void ***)(a1 + 112);
      *(_DWORD *)(a1 + 36) = 2;
      *(_BYTE *)(a1 + 80) = 0;
      if ( v36 )
      {
        v37 = &v36[4 * (_QWORD)*(v36 - 1)];
        if ( v36 == v37 )
        {
          v40 = 0;
        }
        else
        {
          do
          {
            v38 = v37;
            v39 = *(v37 - 2);
            v37 -= 4;
            if ( v39 )
              operator delete[](v39);
            if ( *v37 )
              operator delete[](*v37);
          }
          while ( *(void ***)(a1 + 112) != v37 );
          v40 = 32LL * (_QWORD)*(v38 - 5);
        }
        operator delete[](v37 - 1, v40 + 8);
        v7 = *(char **)(a1 + 16);
      }
      v41 = v7 + 1;
      *(_QWORD *)(a1 + 112) = 0;
      *(_QWORD *)(a1 + 120) = 0;
      *(_BYTE *)(a1 + 129) = 1;
      *(_QWORD *)(a1 + 16) = v7 + 1;
      v42 = v7[1];
      if ( v42 == 62 )
      {
        v47 = 1;
        v46 = 1;
        v49 = (_BYTE *)operator new[](1u);
        v50 = v49;
      }
      else
      {
        if ( !v42 )
          return;
        v43 = v7 + 1;
        while ( 1 )
        {
          v44 = (int)v43++;
          *(_QWORD *)(a1 + 16) = v43;
          if ( *v43 == 62 )
            break;
          if ( !*v43 )
            return;
        }
        v45 = v44 - (_DWORD)v7;
        v46 = v45 + 1;
        v47 = v45 + 1;
        v48 = (_BYTE *)operator new[](v47);
        v49 = v48;
        v50 = &v48[v45];
        if ( v45 > 0 )
        {
          v83 = &v48[v45];
          memcpy(v48, v41, (unsigned int)(v45 - 1) + 1LL);
          v50 = v83;
        }
      }
      v51 = *(void **)(a1 + 48);
      *v50 = 0;
      v52 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v46), 224).m128i_u64[0];
      if ( v51 )
      {
        v83 = (_BYTE *)v52;
        operator delete[](v51);
      }
      *(_QWORD *)(a1 + 56) = v52;
      v53 = (_BYTE *)operator new[](v47);
      v54 = *(_DWORD *)(a1 + 60);
      *(_QWORD *)(a1 + 48) = v53;
      if ( v54 > 0 )
      {
        *v53 = *v49;
        v55 = v49 + 1;
        if ( v54 != 1 )
        {
          v56 = 1;
          do
          {
            v57 = *v55;
            v58 = v56;
            ++v55;
            ++v56;
            *(_BYTE *)(*(_QWORD *)(a1 + 48) + v58) = v57;
          }
          while ( v56 < *(_DWORD *)(a1 + 60) );
        }
      }
      if ( v49 )
        operator delete[](v49);
      ++*(_QWORD *)(a1 + 16);
      break;
    case '?':
      *(_DWORD *)(a1 + 36) = 6;
      v33 = v1[1];
      if ( v33 != 62 )
      {
        if ( !v33 )
          return;
        v34 = (char *)(v1 + 2);
        while ( 1 )
        {
          *(_QWORD *)(a1 + 16) = v34;
          v35 = *v34;
          v7 = v34++;
          if ( v35 == 62 )
            break;
          if ( !v35 )
            return;
        }
      }
      *(_QWORD *)(a1 + 16) = v7 + 1;
      return;
    case '!':
      if ( v1[2] == 91 )
      {
        *(_DWORD *)(a1 + 36) = 5;
        if ( v1[1] )
        {
          v9 = (char *)(v1 + 2);
          v10 = (char *)(v1 + 10);
          while ( 1 )
          {
            *(_QWORD *)(a1 + 16) = v9;
            v11 = *v9;
            v12 = v9;
            if ( !*v9 )
              break;
            if ( v10 == ++v9 )
            {
              v13 = v12 - 2;
              do
              {
                v15 = 1;
                v16 = nullptr;
                if ( v11 == 62 )
                {
                  v16 = v13;
                  if ( v13[1] == 93 && *v13 == 93 )
                    v15 = v13 == nullptr;
                  else
                    v16 = nullptr;
                }
                v14 = v13 + 3;
                ++v13;
                *(_QWORD *)(a1 + 16) = v14;
                v11 = v13[2];
              }
              while ( v11 && v15 );
              if ( v16 && (v69 = (_DWORD)v16 - (_DWORD)v12, v70 = v69, v69 > 0) )
              {
                v73 = v69 + 1;
                v74 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v69 + 1), 224).m128i_u64[0];
                v75 = (char *)operator new[](v73);
                memcpy(v75, v12, (unsigned int)(v70 - 1) + 1LL);
                v76 = *(void **)(a1 + 48);
                v75[v70] = 0;
                if ( v76 )
                  operator delete[](v76);
                *(_QWORD *)(a1 + 56) = v74;
                v77 = (_BYTE *)operator new[](v73);
                v78 = *(_DWORD *)(a1 + 60);
                *(_QWORD *)(a1 + 48) = v77;
                if ( v78 > 0 )
                {
                  *v77 = *v75;
                  v79 = v75 + 1;
                  if ( v78 != 1 )
                  {
                    v80 = 1;
                    do
                    {
                      v81 = *v79;
                      v82 = v80;
                      ++v79;
                      ++v80;
                      *(_BYTE *)(*(_QWORD *)(a1 + 48) + v82) = v81;
                    }
                    while ( v80 < *(_DWORD *)(a1 + 60) );
                  }
                }
                if ( v75 )
                  operator delete[](v75);
              }
              else
              {
                v71 = *(void **)(a1 + 48);
                if ( v71 != &unk_7D386 )
                {
                  *(_QWORD *)(a1 + 56) = 0x100000001LL;
                  v72 = (_BYTE *)operator new[](1u);
                  *(_QWORD *)(a1 + 48) = v72;
                  *v72 = 0;
                  if ( v71 )
                    operator delete[](v71);
                }
              }
              return;
            }
          }
        }
      }
      else
      {
        *(_QWORD *)(a1 + 16) = v1 + 2;
        if ( v1[2] == 45 && v1[3] == 45 )
        {
          v59 = v1 + 4;
          *(_DWORD *)(a1 + 36) = 4;
          *(_QWORD *)(a1 + 16) = v1 + 4;
          v60 = v1[4];
          if ( v60 )
          {
            v61 = v1 + 4;
            while ( v60 != 45 || v61[1] != 45 || v61[2] != 62 )
            {
              *(_QWORD *)(a1 + 16) = ++v61;
              v60 = *v61;
              if ( !*v61 )
                return;
            }
            v62 = (_DWORD)v61 - (_DWORD)v59;
            v63 = (int)v61 - (int)v59 + 1;
            v64 = _mm_shuffle_epi32(_mm_cvtsi32_si128((int)v61 - (int)v59 + 1), 224).m128i_u64[0];
            v65 = (_BYTE *)operator new[](v63);
            v66 = v65;
            if ( v62 > 0 )
              memcpy(v65, v59, (unsigned int)(v62 - 1) + 1LL);
            v67 = *(void **)(a1 + 48);
            v66[v62] = 0;
            if ( v67 )
              operator delete[](v67);
            *(_QWORD *)(a1 + 56) = v64;
            *(_QWORD *)(a1 + 48) = operator new[](v63);
            for ( i = 0; *(_DWORD *)(a1 + 60) > (int)i; ++i )
              *(_BYTE *)(*(_QWORD *)(a1 + 48) + i) = v66[i];
            if ( v66 )
              operator delete[](v66);
            *(_QWORD *)(a1 + 16) += 3LL;
          }
        }
      }
      break;
    default:
      sub_44140(a1);
      break;
  }
}

