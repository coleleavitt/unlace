unsigned __int64 __fastcall sub_3A6C20(_QWORD *a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // r12
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r14
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // r14
  int v12; // r15d
  int v13; // r12d
  const char *v14; // r13
  __int64 v15; // rax
  _BYTE *v16; // rax
  size_t v18; // r15
  __int64 v19; // rax
  const char *v20; // rsi
  int v21; // eax
  __int64 i; // rdx
  __int64 v23; // rsi
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r13
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // r15
  __int64 v30; // rax
  __int64 v31; // rdx
  int v32; // r12d
  int v33; // r14d
  __int64 v34; // r15
  char *v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rax
  _DWORD *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r15
  _QWORD *v42; // rdi
  __int64 v43; // r12
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rsi
  bool v47; // cf
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rsi
  _QWORD *v51; // rdi
  __int64 v52; // r12
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // [rsp+10h] [rbp-B0h]
  _QWORD *v56; // [rsp+20h] [rbp-A0h]
  __int64 v57; // [rsp+28h] [rbp-98h]
  __int64 v58; // [rsp+30h] [rbp-90h] BYREF
  __int128 v59; // [rsp+38h] [rbp-88h]
  void *v60; // [rsp+50h] [rbp-70h] BYREF
  __int128 v61; // [rsp+58h] [rbp-68h]
  __int64 v62; // [rsp+70h] [rbp-50h] BYREF
  __int64 v63; // [rsp+78h] [rbp-48h]
  unsigned __int64 v64; // [rsp+88h] [rbp-38h]

  v1 = a1[2];
  v2 = a1[4];
  v64 = __readfsqword(0x28u);
  v57 = *(_QWORD *)(v1 + 64);
  v56 = *(_QWORD **)(v57 + 8);
  v55 = v56[58];
  v4 = (int)v55 + 1;
  if ( v4 != v2 )
  {
    LODWORD(v63) = 0;
    v62 = 0xFFFFFFFFLL;
    if ( v4 >= v2 )
    {
      v25 = a1[3];
      v26 = a1[5];
      if ( (unsigned __int64)&v62 < v25 || (unsigned __int64)&v62 >= v25 + 12 * v26 )
      {
        if ( v26 < v4 )
        {
          v39 = qvector_reserve();
          v40 = a1[4];
          v41 = a1[5];
          a1[5] = v26;
          v42 = (_QWORD *)a1[3];
          v43 = v39;
          v44 = v40 - 1;
          if ( v44 >= 0 )
          {
            v45 = v39;
            do
            {
              v46 = *v42;
              v45 += 12;
              v42 = (_QWORD *)((char *)v42 + 12);
              *(_QWORD *)(v45 - 12) = v46;
              *(_DWORD *)(v45 - 4) = *((_DWORD *)v42 - 1);
              v47 = v44-- == 0;
            }
            while ( !v47 );
          }
          qfree();
          a1[3] = v43;
          v2 = a1[4];
          a1[5] = v41;
        }
        v30 = 12 * v2;
        if ( v2 < v4 )
        {
          do
          {
            v31 = a1[3];
            ++v2;
            *(_QWORD *)(v31 + v30) = v62;
            *(_DWORD *)(v31 + v30 + 8) = v63;
            v30 += 12;
          }
          while ( v4 != v2 );
        }
      }
      else
      {
        if ( v26 < v4 )
        {
          v48 = qvector_reserve();
          v49 = a1[4];
          v50 = a1[5];
          a1[5] = v26;
          v51 = (_QWORD *)a1[3];
          v52 = v48;
          v53 = v49 - 1;
          if ( v53 >= 0 )
          {
            do
            {
              v54 = *v51;
              v48 += 12;
              v51 = (_QWORD *)((char *)v51 + 12);
              *(_QWORD *)(v48 - 12) = v54;
              *(_DWORD *)(v48 - 4) = *((_DWORD *)v51 - 1);
              v47 = v53-- == 0;
            }
            while ( !v47 );
          }
          qfree();
          a1[3] = v52;
          v2 = a1[4];
          a1[5] = v50;
        }
        v27 = 12 * v2;
        if ( v2 < v4 )
        {
          do
          {
            ++v2;
            v28 = v27 + a1[3];
            v27 += 12;
            *(_QWORD *)v28 = 0xFFFFFFFFLL;
            *(_DWORD *)(v28 + 8) = 0;
          }
          while ( v4 != v2 );
        }
      }
    }
    a1[4] = v4;
    v2 = (int)v55 + 1;
  }
  v5 = a1[7];
  if ( v5 != v2 )
  {
    v60 = nullptr;
    if ( v2 < v5 )
    {
      v8 = v2;
      do
      {
        ++v8;
        clear_tinfo_t();
      }
      while ( v8 < v5 );
      a1[7] = v2;
    }
    else
    {
      v6 = a1[6];
      v7 = a1[8];
      if ( (unsigned __int64)&v60 < v6 || (unsigned __int64)&v60 >= v6 + 8 * v7 )
      {
        if ( v7 < v2 )
        {
          a1[6] = qvector_reserve();
          v5 = a1[7];
        }
        while ( v5 < v2 )
        {
          *(_QWORD *)(a1[6] + 8 * v5) = 0;
          copy_tinfo_t();
          ++v5;
        }
        a1[7] = v2;
      }
      else
      {
        v62 = 0;
        copy_tinfo_t();
        if ( a1[8] < v2 )
          a1[6] = qvector_reserve();
        v29 = a1[7];
        if ( v29 < v2 )
        {
          do
          {
            *(_QWORD *)(a1[6] + 8 * v29) = 0;
            copy_tinfo_t();
            ++v29;
          }
          while ( v29 != v2 );
        }
        a1[7] = v2;
        clear_tinfo_t();
      }
    }
    clear_tinfo_t();
  }
  sub_3676A0(&v62, (__int64)v56, 0);
  copy_tinfo_t();
  v9 = 0;
  clear_tinfo_t();
  if ( (int)v55 <= 0 )
  {
    if ( *(int *)(v57 + 152) > 0 )
      goto LABEL_19;
    if ( !(_DWORD)v55 )
    {
      v13 = 0;
LABEL_26:
      *(_DWORD *)a1[3] = v13;
      return v64 - __readfsqword(0x28u);
    }
LABEL_82:
    v60 = nullptr;
    v13 = 0;
    v59 = 0;
    v20 = s1;
    v58 = 0;
    v61 = 0;
    goto LABEL_34;
  }
  do
  {
    sub_1386C0(v56, v9);
    copy_tinfo_t();
    v10 = v9++;
  }
  while ( v10 != (_DWORD)v55 - 1 );
  if ( *(int *)(v57 + 152) <= 0 )
    goto LABEL_82;
LABEL_19:
  v11 = 0;
  while ( 1 )
  {
    v12 = v11;
    v13 = v11;
    v14 = s1;
    v15 = *(_QWORD *)(v57 + 128) + 32 * v11;
    if ( *(_QWORD *)(v15 + 8) )
      v14 = *(const char **)v15;
    v16 = (_BYTE *)tag_skipcodes();
    if ( *v16 != 47 || v16[1] != 47 )
      break;
    if ( *(_DWORD *)(v57 + 152) <= (int)++v11 )
    {
      v13 = v12 + 1;
      break;
    }
  }
  if ( !(_DWORD)v55 )
    goto LABEL_26;
  v60 = nullptr;
  v58 = 0;
  v59 = 0;
  v61 = 0;
  if ( v14 )
  {
    v18 = strlen(v14);
    v60 = (void *)qvector_reserve();
    *(_QWORD *)&v61 = v18 + 1;
    memmove(v60, v14, v18);
    *((_BYTE *)v60 + v18) = 0;
    v19 = v61;
    if ( (unsigned __int64)v61 > 1 )
    {
      tag_remove();
      v19 = v61;
    }
    v20 = s1;
    if ( v19 )
      v20 = (const char *)v60;
  }
  else
  {
    v20 = s1;
  }
LABEL_34:
  sub_3841C0(&v58, v20);
  if ( (_QWORD)v59 )
  {
    v21 = 0;
    for ( i = 0; (unsigned __int64)v21 < a1[4]; i = v21 )
    {
      v23 = 12 * i;
      *(_DWORD *)(a1[3] + 12 * i) = v13;
      if ( v21 > 0 )
      {
        v24 = (unsigned int)(v21 - 1);
        if ( v24 < (unsigned __int64)v59 )
          *(_DWORD *)(a1[3] + v23 + 4) = *(_DWORD *)(v58 + 4 * v24);
      }
      ++v21;
    }
  }
  else
  {
    *(_DWORD *)a1[3] = v13;
    v32 = v13 + 1;
    if ( *(_DWORD *)(v57 + 152) > v32 && (int)v55 > 0 )
    {
      v33 = 0;
      v34 = 32LL * v32;
      do
      {
        LODWORD(v62) = 0;
        v35 = (char *)s1;
        v36 = v34 + *(_QWORD *)(v57 + 128);
        if ( *(_QWORD *)(v36 + 8) )
          v35 = *(char **)v36;
        sub_384710(v57, v35, 0, 0, (__int64)&v62, 0, 0);
        if ( (_DWORD)v62 == 2 )
        {
          v37 = sub_1386C0(v56, v33);
          if ( v63 == v37 )
          {
            v38 = (_DWORD *)(a1[3] + 12LL * ++v33);
            *v38 = v32;
            v38[1] = 8;
          }
        }
        ++v32;
        v34 += 32;
      }
      while ( *(_DWORD *)(v57 + 152) > v32 && v33 < (int)v55 );
    }
  }
  if ( v60 )
  {
    *(_QWORD *)&v61 = 0;
    qfree();
  }
  if ( v58 )
  {
    *(_QWORD *)&v59 = 0;
    qfree();
  }
  return v64 - __readfsqword(0x28u);
}

