unsigned __int64 __fastcall sub_3ACCA0(_QWORD *a1, double a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r14
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // r14
  int v13; // r15d
  int v14; // r12d
  const char *v15; // r13
  __int64 v16; // rax
  _BYTE *v17; // rax
  size_t v19; // r15
  __int64 v20; // rax
  const char *v21; // rsi
  int v22; // eax
  __int64 i; // rdx
  __int64 v24; // rsi
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r13
  _QWORD *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rdx
  unsigned __int64 v31; // r15
  __int64 v32; // rax
  __int64 v33; // rdx
  int v34; // r12d
  int v35; // r14d
  __int64 v36; // r15
  char *v37; // rsi
  __int64 v38; // rax
  unsigned __int64 v39; // rax
  _DWORD *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // r15
  _QWORD *v44; // rdi
  __int64 v45; // r12
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rsi
  bool v49; // cf
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rsi
  _QWORD *v53; // rdi
  __int64 v54; // r12
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // [rsp+10h] [rbp-B0h]
  _QWORD *v58; // [rsp+20h] [rbp-A0h]
  __int64 v59; // [rsp+28h] [rbp-98h]
  __int64 v60; // [rsp+30h] [rbp-90h] BYREF
  __int128 v61; // [rsp+38h] [rbp-88h]
  void *v62; // [rsp+50h] [rbp-70h] BYREF
  __int128 v63; // [rsp+58h] [rbp-68h]
  __int64 v64; // [rsp+70h] [rbp-50h] BYREF
  __int64 v65; // [rsp+78h] [rbp-48h]
  unsigned __int64 v66; // [rsp+88h] [rbp-38h]

  v2 = a1[2];
  v3 = a1[4];
  v66 = __readfsqword(0x28u);
  v59 = *(_QWORD *)(v2 + 64);
  v58 = *(_QWORD **)(v59 + 8);
  v57 = v58[58];
  v5 = (int)v57 + 1;
  if ( v5 != v3 )
  {
    LODWORD(v65) = 0;
    v64 = 0xFFFFFFFFLL;
    if ( v5 >= v3 )
    {
      v26 = a1[3];
      v27 = a1[5];
      v28 = a1 + 3;
      if ( (unsigned __int64)&v64 < v26 || (unsigned __int64)&v64 >= v26 + 12 * v27 )
      {
        if ( v27 < v5 )
        {
          v41 = qvector_reserve((__int64)v28, 0, (int)v57 + 1, 12);
          v42 = a1[4];
          v43 = a1[5];
          a1[5] = v27;
          v44 = (_QWORD *)a1[3];
          v45 = v41;
          v46 = v42 - 1;
          if ( v46 >= 0 )
          {
            v47 = v41;
            do
            {
              v48 = *v44;
              v47 += 12;
              v44 = (_QWORD *)((char *)v44 + 12);
              *(_QWORD *)(v47 - 12) = v48;
              *(_DWORD *)(v47 - 4) = *((_DWORD *)v44 - 1);
              v49 = v46-- == 0;
            }
            while ( !v49 );
            v44 = (_QWORD *)a1[3];
          }
          qfree((__int64)v44);
          a1[3] = v45;
          v3 = a1[4];
          a1[5] = v43;
        }
        v32 = 12 * v3;
        if ( v3 < v5 )
        {
          do
          {
            v33 = a1[3];
            ++v3;
            *(_QWORD *)(v33 + v32) = v64;
            *(_DWORD *)(v33 + v32 + 8) = v65;
            v32 += 12;
          }
          while ( v5 != v3 );
        }
      }
      else
      {
        if ( v27 < v5 )
        {
          v50 = qvector_reserve((__int64)v28, 0, (int)v57 + 1, 12);
          v51 = a1[4];
          v52 = a1[5];
          a1[5] = v27;
          v53 = (_QWORD *)a1[3];
          v54 = v50;
          v55 = v51 - 1;
          if ( v55 >= 0 )
          {
            do
            {
              v56 = *v53;
              v50 += 12;
              v53 = (_QWORD *)((char *)v53 + 12);
              *(_QWORD *)(v50 - 12) = v56;
              *(_DWORD *)(v50 - 4) = *((_DWORD *)v53 - 1);
              v49 = v55-- == 0;
            }
            while ( !v49 );
            v53 = (_QWORD *)a1[3];
          }
          qfree((__int64)v53);
          a1[3] = v54;
          v3 = a1[4];
          a1[5] = v52;
        }
        v29 = 12 * v3;
        if ( v3 < v5 )
        {
          do
          {
            ++v3;
            v30 = v29 + a1[3];
            v29 += 12;
            *(_QWORD *)v30 = 0xFFFFFFFFLL;
            *(_DWORD *)(v30 + 8) = 0;
          }
          while ( v5 != v3 );
        }
      }
    }
    a1[4] = v5;
    v3 = (int)v57 + 1;
  }
  v6 = a1[7];
  if ( v6 != v3 )
  {
    v62 = nullptr;
    if ( v3 < v6 )
    {
      v9 = v3;
      do
      {
        ++v9;
        clear_tinfo_t();
      }
      while ( v9 < v6 );
      a1[7] = v3;
    }
    else
    {
      v7 = a1[6];
      v8 = a1[8];
      if ( (unsigned __int64)&v62 < v7 || (unsigned __int64)&v62 >= v7 + 8 * v8 )
      {
        if ( v8 < v3 )
        {
          a1[6] = qvector_reserve((__int64)(a1 + 6), v7, v3, 8);
          v6 = a1[7];
        }
        while ( v6 < v3 )
        {
          *(_QWORD *)(a1[6] + 8 * v6) = 0;
          copy_tinfo_t();
          ++v6;
        }
        a1[7] = v3;
      }
      else
      {
        v64 = 0;
        copy_tinfo_t();
        if ( a1[8] < v3 )
          a1[6] = qvector_reserve((__int64)(a1 + 6), a1[6], v3, 8);
        v31 = a1[7];
        if ( v31 < v3 )
        {
          do
          {
            *(_QWORD *)(a1[6] + 8 * v31) = 0;
            copy_tinfo_t();
            ++v31;
          }
          while ( v31 != v3 );
        }
        a1[7] = v3;
        clear_tinfo_t();
      }
    }
    clear_tinfo_t();
  }
  sub_36D720(&v64, (__int64)v58, 0, a2);
  copy_tinfo_t();
  v10 = 0;
  clear_tinfo_t();
  if ( (int)v57 <= 0 )
  {
    if ( *(int *)(v59 + 152) > 0 )
      goto LABEL_19;
    if ( !(_DWORD)v57 )
    {
      v14 = 0;
LABEL_26:
      *(_DWORD *)a1[3] = v14;
      return v66 - __readfsqword(0x28u);
    }
LABEL_84:
    v62 = nullptr;
    v14 = 0;
    v61 = 0;
    v21 = s1;
    v60 = 0;
    v63 = 0;
    goto LABEL_34;
  }
  do
  {
    sub_13D280(v58, v10, a2);
    copy_tinfo_t();
    v11 = v10++;
  }
  while ( v11 != (_DWORD)v57 - 1 );
  if ( *(int *)(v59 + 152) <= 0 )
    goto LABEL_84;
LABEL_19:
  v12 = 0;
  while ( 1 )
  {
    v13 = v12;
    v14 = v12;
    v15 = s1;
    v16 = *(_QWORD *)(v59 + 128) + 32 * v12;
    if ( *(_QWORD *)(v16 + 8) )
      v15 = *(const char **)v16;
    v17 = (_BYTE *)tag_skipcodes();
    if ( *v17 != 47 || v17[1] != 47 )
      break;
    if ( *(_DWORD *)(v59 + 152) <= (int)++v12 )
    {
      v14 = v13 + 1;
      break;
    }
  }
  if ( !(_DWORD)v57 )
    goto LABEL_26;
  v62 = nullptr;
  v60 = 0;
  v61 = 0;
  v63 = 0;
  if ( v15 )
  {
    v19 = strlen(v15);
    v62 = (void *)qvector_reserve((__int64)&v62, 0, v19 + 1, 1);
    *(_QWORD *)&v63 = v19 + 1;
    memmove(v62, v15, v19);
    *((_BYTE *)v62 + v19) = 0;
    v20 = v63;
    if ( (unsigned __int64)v63 > 1 )
    {
      tag_remove();
      v20 = v63;
    }
    v21 = s1;
    if ( v20 )
      v21 = (const char *)v62;
  }
  else
  {
    v21 = s1;
  }
LABEL_34:
  sub_38A240(&v60, v21);
  if ( (_QWORD)v61 )
  {
    v22 = 0;
    for ( i = 0; (unsigned __int64)v22 < a1[4]; i = v22 )
    {
      v24 = 12 * i;
      *(_DWORD *)(a1[3] + 12 * i) = v14;
      if ( v22 > 0 )
      {
        v25 = (unsigned int)(v22 - 1);
        if ( v25 < (unsigned __int64)v61 )
          *(_DWORD *)(a1[3] + v24 + 4) = *(_DWORD *)(v60 + 4 * v25);
      }
      ++v22;
    }
  }
  else
  {
    *(_DWORD *)a1[3] = v14;
    v34 = v14 + 1;
    if ( *(_DWORD *)(v59 + 152) > v34 && (int)v57 > 0 )
    {
      v35 = 0;
      v36 = 32LL * v34;
      do
      {
        LODWORD(v64) = 0;
        v37 = (char *)s1;
        v38 = v36 + *(_QWORD *)(v59 + 128);
        if ( *(_QWORD *)(v38 + 8) )
          v37 = *(char **)v38;
        sub_38A790(v59, v37, 0, 0, (__int64)&v64, 0, 0);
        if ( (_DWORD)v64 == 2 )
        {
          v39 = sub_13D280(v58, v35, 0.0);
          if ( v65 == v39 )
          {
            v40 = (_DWORD *)(a1[3] + 12LL * ++v35);
            *v40 = v34;
            v40[1] = 8;
          }
        }
        ++v34;
        v36 += 32;
      }
      while ( *(_DWORD *)(v59 + 152) > v34 && v35 < (int)v57 );
    }
  }
  if ( v62 )
  {
    *(_QWORD *)&v63 = 0;
    qfree((__int64)v62);
  }
  if ( v60 )
  {
    *(_QWORD *)&v61 = 0;
    qfree(v60);
  }
  return v66 - __readfsqword(0x28u);
}

