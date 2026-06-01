__int64 __fastcall sub_4ABA0(__int64 a1, void *a2)
{
  __int64 v3; // rbx
  size_t v4; // r12
  char *v5; // rax
  __int64 v6; // r12
  unsigned int v7; // ebx
  char *v9; // rsi
  size_t v10; // rbp
  char *v11; // rbx
  __int64 v12; // rbx
  size_t v13; // r12
  _QWORD *v14; // rbp
  _BYTE *v15; // rax
  _BYTE *v16; // rax
  __int64 v17; // rax
  __int64 (__fastcall *v18)(__int64); // rax
  __int64 v19; // rdx
  char *v20; // r14
  __int64 v21; // rdx
  __int64 (__fastcall *v22)(_QWORD *, void *, int); // rax
  __int64 v23; // r8
  unsigned __int64 v24; // r8
  __int64 v25; // r15
  int v26; // ecx
  size_t v27; // r8
  int v28; // eax
  char *v29; // r9
  size_t v30; // rax
  _QWORD *v31; // r13
  void (__fastcall *v32)(void *, char *); // rax
  void *v33; // rdi
  void **v34; // rax
  void **v35; // rbp
  void **v36; // r12
  void *v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rbp
  __int64 v41; // r12
  void *v42; // rdi
  __int64 v43; // rsi
  void *v44; // rdi
  void *v45; // rdi
  size_t v46; // rdx
  size_t v47; // rcx
  size_t v48; // rax
  size_t v49; // r12
  size_t v50; // r14
  unsigned __int64 v51; // rax
  int v52; // ecx
  int v53; // r15d
  __int64 v54; // rdx
  unsigned __int64 v55; // rax
  unsigned __int64 *v56; // rdx
  __int64 v57; // rax
  char *v58; // rdx
  void *v59; // rax
  int v60; // edx
  int v61; // ecx
  unsigned __int64 v62; // rdi
  unsigned __int64 v63; // rdi
  __int64 v64; // rdx
  int v65; // eax
  unsigned int v66; // edx
  unsigned __int64 v67; // rax
  int v68; // ecx
  __int64 v69; // rdx
  __int16 v70; // ax
  __int16 *v71; // rdx
  __int64 v72; // rdx
  unsigned __int64 v73; // rax
  int v74; // ecx
  __int64 v75; // rdx
  char *v76; // rdx
  unsigned __int64 v77; // rax
  int v78; // ecx
  __int64 v79; // rdx
  __int64 v80; // rdx
  unsigned __int64 v81; // rax
  unsigned __int64 *v82; // rdx
  __int16 v83; // ax
  __int16 *v84; // rdx
  __int64 v85; // [rsp+8h] [rbp-130h]
  char *v86; // [rsp+8h] [rbp-130h]
  int v87; // [rsp+8h] [rbp-130h]
  int v88; // [rsp+8h] [rbp-130h]
  __int64 v89; // [rsp+8h] [rbp-130h]
  char *v90; // [rsp+8h] [rbp-130h]
  __int64 v91; // [rsp+8h] [rbp-130h]
  int v92; // [rsp+14h] [rbp-124h]
  char *v93; // [rsp+18h] [rbp-120h]
  unsigned int v94; // [rsp+2Ch] [rbp-10Ch] BYREF
  char *s; // [rsp+30h] [rbp-108h]
  size_t n[3]; // [rsp+38h] [rbp-100h]
  void *v97[2]; // [rsp+50h] [rbp-E8h] BYREF
  unsigned int *v98; // [rsp+60h] [rbp-D8h]
  __int64 v99; // [rsp+68h] [rbp-D0h]
  __int128 v100; // [rsp+70h] [rbp-C8h]
  __int64 v101; // [rsp+80h] [rbp-B8h]
  __int128 v102; // [rsp+88h] [rbp-B0h]
  __m128i v103[2]; // [rsp+A0h] [rbp-98h] BYREF
  __int64 v104; // [rsp+C8h] [rbp-70h]
  unsigned int v105; // [rsp+D0h] [rbp-68h]
  unsigned __int64 v106; // [rsp+F8h] [rbp-40h]

  v106 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_290B0(a1, "__PRELINK_INFO", "__info", v103)
    && !(unsigned __int8)sub_290B0(a1, "__PRELINK", "__info", v103) )
  {
    return (unsigned int)-1;
  }
  v3 = v104;
  if ( !v104 )
    return (unsigned int)-1;
  s = nullptr;
  *(_OWORD *)n = 0;
  v4 = v104 + 1;
  if ( v104 == -1 )
  {
    v5 = nullptr;
  }
  else
  {
    v5 = (char *)qvector_reserve();
    v46 = n[0];
    s = v5;
    if ( n[0] < v4 )
    {
      do
      {
        v47 = v46;
        v5[v46++] = 0;
        v5 = s;
      }
      while ( v3 != v47 );
    }
    n[0] = v3 + 1;
  }
  v5[v3] = 0;
  v6 = *(_QWORD *)(a1 + 120) + v105;
  if ( qlseek() == v6 )
  {
    v9 = s;
    if ( qlread() == v3 )
    {
      v10 = n[0];
      v11 = s;
      if ( !n[0] )
      {
        if ( !s )
          return (unsigned int)-1;
        goto LABEL_15;
      }
      v48 = strlen(s);
      v49 = v48;
      if ( !v48 )
      {
        if ( !s )
        {
LABEL_16:
          if ( v10 > 1 )
            goto LABEL_17;
          return (unsigned int)-1;
        }
LABEL_15:
        n[0] = 0;
        qfree();
        s = nullptr;
        v10 = 0;
        n[1] = 0;
        goto LABEL_16;
      }
      v50 = v48 + 1;
      if ( n[0] < v48 + 1 )
      {
        if ( n[1] < v50 )
        {
          s = (char *)qvector_reserve();
          v10 = n[0];
          v11 = s;
        }
        v9 = nullptr;
        memset(&v11[v10], 0, v50 - v10);
        n[0] = v50;
        v11 = s;
      }
      else if ( n[0] != v48 + 1 )
      {
        n[0] = v48 + 1;
      }
      v11[v49] = 0;
      if ( n[0] > 1 )
      {
LABEL_17:
        v94 = 0;
        v12 = operator new(0x88u);
        v13 = n[0];
        v14 = (_QWORD *)operator new(0x28u);
        *v14 = &off_640A0;
        v14[1] = 0;
        *((_OWORD *)v14 + 1) = 0;
        if ( v13 )
        {
          v59 = (void *)qalloc_or_throw();
          v14[1] = v59;
          v9 = s;
          v14[3] = v13;
          memcpy(v59, v9, v13);
          v14[2] = v13;
        }
        v14[4] = 0;
        *(_QWORD *)v12 = &off_640D0;
        *(_QWORD *)(v12 + 8) = 0;
        *(_QWORD *)(v12 + 16) = 0;
        *(_QWORD *)(v12 + 24) = 0;
        *(_QWORD *)(v12 + 48) = 0;
        *(_QWORD *)(v12 + 56) = 0x100000001LL;
        *(_OWORD *)(v12 + 32) = 0;
        v15 = (_BYTE *)operator new[](1u);
        *(_QWORD *)(v12 + 48) = v15;
        *v15 = 0;
        *(_QWORD *)(v12 + 64) = 0;
        *(_QWORD *)(v12 + 72) = 0x100000001LL;
        v16 = (_BYTE *)operator new[](1u);
        *(_QWORD *)(v12 + 64) = v16;
        *v16 = 0;
        *(_QWORD *)(v12 + 88) = 0;
        *(_QWORD *)(v12 + 96) = 0;
        *(_WORD *)(v12 + 104) = 257;
        *(_QWORD *)(v12 + 112) = 0;
        *(_QWORD *)(v12 + 120) = 0;
        *(_WORD *)(v12 + 128) = 257;
        if ( !v14 )
        {
LABEL_36:
          v97[0] = (void *)v12;
          v97[1] = a2;
          v98 = &v94;
          v99 = 0;
          v101 = 0;
          v100 = 0;
          v102 = 0;
          while ( 1 )
          {
            v7 = v94;
            if ( v94 )
              break;
            if ( !(unsigned __int8)sub_4A690((__int64)v97) )
            {
              v7 = v94;
              break;
            }
          }
          v31 = v97[0];
          if ( v97[0] )
          {
            v32 = *(void (__fastcall **)(void *, char *))(*(_QWORD *)v97[0] + 8LL);
            if ( (char *)v32 == (char *)sub_13790 )
            {
              v33 = *((void **)v97[0] + 1);
              *(_QWORD *)v97[0] = &off_640D0;
              if ( v33 )
                operator delete[](v33);
              if ( *((_BYTE *)v31 + 128) )
              {
                v34 = (void **)v31[14];
                if ( v34 )
                {
                  v35 = &v34[4 * (_QWORD)*(v34 - 1)];
                  if ( v34 == v35 )
                  {
                    v38 = 0;
                  }
                  else
                  {
                    do
                    {
                      v36 = v35;
                      v37 = *(v35 - 2);
                      v35 -= 4;
                      if ( v37 )
                        operator delete[](v37);
                      if ( *v35 )
                        operator delete[](*v35);
                    }
                    while ( (void **)v31[14] != v35 );
                    v38 = 32LL * (_QWORD)*(v36 - 5);
                  }
                  operator delete[](v35 - 1, v38 + 8);
                }
              }
              if ( *((_BYTE *)v31 + 104) )
              {
                v39 = v31[11];
                if ( v39 )
                {
                  v40 = v39 + 16LL * *(_QWORD *)(v39 - 8);
                  if ( v39 == v40 )
                  {
                    v43 = 0;
                  }
                  else
                  {
                    do
                    {
                      v41 = v40;
                      v42 = *(void **)(v40 - 16);
                      v40 -= 16;
                      if ( v42 )
                        operator delete[](v42);
                    }
                    while ( v31[11] != v40 );
                    v43 = 16LL * *(_QWORD *)(v41 - 24);
                  }
                  operator delete[]((void *)(v40 - 8), v43 + 8);
                }
              }
              v44 = (void *)v31[8];
              if ( v44 )
                operator delete[](v44);
              v45 = (void *)v31[6];
              if ( v45 )
                operator delete[](v45);
              operator delete(v31, 0x88u);
            }
            else
            {
              v32(v97[0], v9);
            }
          }
          v98 = nullptr;
          if ( v101 )
          {
            *(_QWORD *)&v102 = 0;
            qfree();
          }
          if ( v99 )
          {
            *(_QWORD *)&v100 = 0;
            qfree();
          }
          goto LABEL_7;
        }
        v17 = *v14;
        *(_DWORD *)(v12 + 44) = 1;
        v18 = *(__int64 (__fastcall **)(__int64))(v17 + 24);
        if ( v18 == sub_10F60 )
        {
          v19 = v14[2];
          if ( !v19 )
          {
            v20 = (char *)operator new[](4u);
            v21 = 0;
            v22 = *(__int64 (__fastcall **)(_QWORD *, void *, int))(*v14 + 16LL);
            if ( v22 == sub_11130 )
            {
              v23 = v14[2];
              v9 = (char *)v14[4];
              if ( v23 )
              {
                v24 = v23 - 1;
                if ( v24 >= (unsigned __int64)v9 )
                  goto LABEL_89;
                v25 = 0;
                v26 = 4;
LABEL_26:
                v27 = (unsigned int)(v24 - (_DWORD)v9);
                v28 = v27;
                if ( (int)v27 > 0 )
                {
                  v29 = &v9[v27];
                  v30 = v27;
                  v23 = v21;
                  goto LABEL_28;
                }
                goto LABEL_113;
              }
              if ( !v9 )
                goto LABEL_89;
              v25 = 0;
              v26 = 4;
LABEL_111:
              v66 = -(int)v9;
              v28 = -(int)v9;
              if ( -(int)v9 >= 0 && (_DWORD)v9 != 0 )
              {
                v30 = v66;
                v29 = &v9[v66];
                goto LABEL_28;
              }
LABEL_113:
              v14[4] = &v9[v28];
LABEL_105:
              if ( v28 )
              {
                v20[(int)v25 + 3] = 0;
                v20[(int)v25 + 2] = 0;
                v20[(int)v25 + 1] = 0;
                v20[v25] = 0;
                if ( v26 <= 3 )
                {
                  if ( v26 <= 1 )
                    goto LABEL_34;
LABEL_32:
                  if ( *(_WORD *)v20 == 0xFFFE )
                  {
                    v67 = *(unsigned int *)(v12 + 44);
                    v68 = v26 >> 1;
                    *(_DWORD *)(v12 + 40) = 2;
                    v53 = v68;
                    if ( (unsigned int)v67 <= 5 )
                    {
                      v69 = 43;
                      if ( _bittest64(&v69, v67) )
                      {
                        v70 = *((_WORD *)v20 + 1);
                        v71 = (__int16 *)(v20 + 2);
                        if ( v70 )
                        {
                          do
                          {
                            *v71++ = __ROL2__(v70, 8);
                            v70 = *v71;
                          }
                          while ( *v71 );
                        }
                      }
                    }
                    v89 = v68;
                    v57 = operator new[](v68);
                    *(_QWORD *)(v12 + 8) = v57;
                    v72 = 0;
                    do
                    {
                      v9 = (char *)*(unsigned __int16 *)&v20[2 * v72 + 2];
                      *(_BYTE *)(v57 + v72++) = (_BYTE)v9;
                      v57 = *(_QWORD *)(v12 + 8);
                    }
                    while ( v89 != v72 );
                  }
                  else
                  {
                    if ( *(_WORD *)v20 != 0xFEFF )
                      goto LABEL_34;
                    v77 = *(unsigned int *)(v12 + 44);
                    v78 = v26 >> 1;
                    *(_DWORD *)(v12 + 40) = 3;
                    v53 = v78;
                    if ( (unsigned int)v77 > 5 || (v79 = 43, !_bittest64(&v79, v77)) )
                    {
                      v83 = *((_WORD *)v20 + 1);
                      v84 = (__int16 *)(v20 + 2);
                      if ( v83 )
                      {
                        do
                        {
                          *v84++ = __ROL2__(v83, 8);
                          v83 = *v84;
                        }
                        while ( *v84 );
                      }
                    }
                    v91 = v78;
                    v57 = operator new[](v78);
                    *(_QWORD *)(v12 + 8) = v57;
                    v80 = 0;
                    do
                    {
                      v9 = (char *)*(unsigned __int16 *)&v20[2 * v80 + 2];
                      *(_BYTE *)(v57 + v80++) = (_BYTE)v9;
                      v57 = *(_QWORD *)(v12 + 8);
                    }
                    while ( v91 != v80 );
                  }
                  goto LABEL_88;
                }
LABEL_30:
                if ( *(_QWORD *)v20 == -131072 )
                {
                  v51 = *(unsigned int *)(v12 + 44);
                  v52 = v26 >> 2;
                  *(_DWORD *)(v12 + 40) = 4;
                  v53 = v52;
                  if ( (unsigned int)v51 <= 5 )
                  {
                    v54 = 43;
                    if ( _bittest64(&v54, v51) )
                    {
                      v55 = *((_QWORD *)v20 + 1);
                      v56 = (unsigned __int64 *)(v20 + 8);
                      if ( v55 )
                      {
                        do
                        {
                          *v56++ = (v55 >> 8) | (v55 << 8);
                          v55 = *v56;
                        }
                        while ( *v56 );
                      }
                    }
                  }
                  v86 = (char *)v52;
                  v57 = operator new[](v52);
                  *(_QWORD *)(v12 + 8) = v57;
                  v9 = v86;
                  v58 = nullptr;
                  do
                  {
                    v58[v57] = *(_QWORD *)&v20[8 * (_QWORD)v58 + 8];
                    ++v58;
                    v57 = *(_QWORD *)(v12 + 8);
                  }
                  while ( v58 != v86 );
                }
                else
                {
                  if ( *(_QWORD *)v20 != 65279 )
                    goto LABEL_32;
                  v73 = *(unsigned int *)(v12 + 44);
                  v74 = v26 >> 2;
                  *(_DWORD *)(v12 + 40) = 5;
                  v53 = v74;
                  if ( (unsigned int)v73 > 5 || (v75 = 43, !_bittest64(&v75, v73)) )
                  {
                    v81 = *((_QWORD *)v20 + 1);
                    v82 = (unsigned __int64 *)(v20 + 8);
                    if ( v81 )
                    {
                      do
                      {
                        *v82++ = (v81 >> 8) | (v81 << 8);
                        v81 = *v82;
                      }
                      while ( *v82 );
                    }
                  }
                  v90 = (char *)v74;
                  v57 = operator new[](v74);
                  *(_QWORD *)(v12 + 8) = v57;
                  v9 = v90;
                  v76 = nullptr;
                  do
                  {
                    v76[v57] = *(_QWORD *)&v20[8 * (_QWORD)v76 + 8];
                    ++v76;
                    v57 = *(_QWORD *)(v12 + 8);
                  }
                  while ( v90 != v76 );
                }
LABEL_88:
                *(_QWORD *)(v12 + 24) = v57;
                *(_DWORD *)(v12 + 32) = v53;
                goto LABEL_89;
              }
              goto LABEL_89;
            }
            v26 = 4;
            v25 = 0;
            goto LABEL_104;
          }
          v60 = v19 - 1;
          v61 = v60 + 4;
          v25 = v60;
          v62 = v60 + 4;
        }
        else
        {
          v65 = ((__int64 (__fastcall *)(_QWORD *, char *))v18)(v14, v9);
          v25 = v65;
          v61 = v65 + 4;
          v62 = v65 + 4;
        }
        v87 = v61;
        v20 = (char *)operator new[](v62);
        v26 = v87;
        v22 = *(__int64 (__fastcall **)(_QWORD *, void *, int))(*v14 + 16LL);
        if ( v22 == sub_11130 )
        {
          if ( (int)v25 < 0 )
            goto LABEL_89;
          v29 = (char *)v14[4];
          v30 = (int)v25;
          v63 = (unsigned __int64)&v29[(int)v25];
          if ( __CFADD__((int)v25, v29) )
            goto LABEL_89;
          v64 = v14[2];
          if ( v64 )
          {
            LODWORD(v24) = v64 - 1;
            if ( v64 - 1 < v63 )
            {
              v21 = (int)v25;
              v9 = (char *)v14[4];
              goto LABEL_26;
            }
            if ( (_DWORD)v25 )
            {
              v9 = (char *)v14[4];
              v23 = (int)v25;
              v29 += (int)v25;
              goto LABEL_28;
            }
          }
          else
          {
            if ( v63 )
            {
              v23 = (int)v25;
              v9 = (char *)v14[4];
              goto LABEL_111;
            }
            if ( (_DWORD)v25 )
            {
              v23 = (int)v25;
              if ( !v29 )
              {
                v9 = (char *)&unk_66C09;
LABEL_29:
                v93 = v29;
                v92 = v26;
                v85 = v23;
                memcpy(v20, v9, v30);
                v26 = v92;
                v14[4] = v93;
                v20[(int)v25 + 3] = 0;
                v20[(int)v25 + 2] = 0;
                v20[(int)v25 + 1] = 0;
                v20[v85] = 0;
                if ( v92 <= 3 )
                {
LABEL_34:
                  *(_DWORD *)(v12 + 40) = 0;
                  *(_QWORD *)(v12 + 24) = v20;
                  *(_QWORD *)(v12 + 8) = v20;
                  *(_DWORD *)(v12 + 32) = v26;
LABEL_35:
                  (*(void (__fastcall **)(_QWORD *))(*v14 + 8LL))(v14);
                  sub_42A40(v12);
                  *(_QWORD *)(v12 + 16) = *(_QWORD *)(v12 + 24);
                  goto LABEL_36;
                }
                goto LABEL_30;
              }
              v9 = (char *)v14[4];
              v29 = nullptr;
LABEL_28:
              v9 += v14[1];
              goto LABEL_29;
            }
          }
LABEL_89:
          if ( v20 )
            operator delete[](v20);
          goto LABEL_35;
        }
LABEL_104:
        v88 = v26;
        v9 = v20;
        v28 = v22(v14, v20, v25);
        v26 = v88;
        goto LABEL_105;
      }
    }
  }
  v7 = -1;
LABEL_7:
  if ( s )
  {
    n[0] = 0;
    qfree();
  }
  return v7;
}

