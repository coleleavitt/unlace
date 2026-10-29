__int64 __fastcall sub_240E40(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  int v3; // eax
  int v4; // ecx
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r13
  size_t v8; // r15
  __int64 v9; // rbx
  size_t v10; // r15
  void *v11; // rax
  void *v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // r13
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // r12
  unsigned __int64 v18; // rdi
  __int64 v19; // r13
  __int64 v20; // rbp
  _QWORD *v21; // rbx
  __int64 v23; // rax
  __int64 v24; // rbx
  _QWORD *v25; // r13
  size_t v26; // rbx
  size_t v27; // rbx
  __int64 v28; // r13
  void *v29; // rax
  void *v30; // rsi
  __int64 v31; // rbx
  void *v32; // rax
  void *v33; // rsi
  void *v34; // rax
  void *v35; // rsi
  int v36; // [rsp+4h] [rbp-18Ch]
  size_t v37; // [rsp+40h] [rbp-150h]
  size_t v38; // [rsp+40h] [rbp-150h]
  int v39; // [rsp+48h] [rbp-148h] BYREF
  __int64 v40; // [rsp+50h] [rbp-140h]
  void *src; // [rsp+58h] [rbp-138h]
  size_t n[2]; // [rsp+60h] [rbp-130h]
  void *v43; // [rsp+70h] [rbp-120h]
  size_t v44[2]; // [rsp+78h] [rbp-118h]
  __int64 v45; // [rsp+88h] [rbp-108h]
  __int64 v46; // [rsp+90h] [rbp-100h]
  int v47; // [rsp+98h] [rbp-F8h]
  void *v48; // [rsp+A8h] [rbp-E8h]
  __int128 v49; // [rsp+B0h] [rbp-E0h]
  void *v50; // [rsp+C0h] [rbp-D0h]
  __int128 v51; // [rsp+C8h] [rbp-C8h]
  __int64 v52; // [rsp+D8h] [rbp-B8h]
  int v53; // [rsp+E0h] [rbp-B0h]
  unsigned __int64 v54; // [rsp+E8h] [rbp-A8h]
  __int128 v55; // [rsp+F0h] [rbp-A0h]
  __int64 v56; // [rsp+100h] [rbp-90h]
  __int64 v57; // [rsp+108h] [rbp-88h]
  __int64 v58; // [rsp+110h] [rbp-80h]
  __int128 v59; // [rsp+118h] [rbp-78h]
  __int64 v60; // [rsp+128h] [rbp-68h]
  __int128 v61; // [rsp+130h] [rbp-60h]
  char v62; // [rsp+140h] [rbp-50h]
  unsigned __int64 v63; // [rsp+150h] [rbp-40h]

  v2 = a2;
  v63 = __readfsqword(0x28u);
  v54 = 0;
  v56 = 0;
  v57 = 0;
  v58 = 0;
  v60 = 0;
  v55 = 0;
  v59 = 0;
  v61 = 0;
  copy_tinfo_t();
  v3 = getinf();
  v4 = v3;
  if ( (v3 & 0xFFFFFF0F) != 0 || v3 == 192 )
    LOBYTE(v3) = -64;
  else
    v4 = 0;
  HIDWORD(v56) = v4;
  v62 = v3;
  if ( !a2 )
  {
    v23 = qalloc_or_throw();
    *(_QWORD *)v23 = 0;
    v2 = v23;
    *(_OWORD *)(v23 + 8) = 0;
    v5 = v55;
    *(_QWORD *)(v23 + 24) = 0;
    *(_DWORD *)(v23 + 32) = 0;
    if ( !v5 )
      goto LABEL_23;
    v39 = 0;
    v24 = 0;
    v6 = 0;
    v46 = 0;
    v40 = 0;
    src = nullptr;
    v43 = nullptr;
    v45 = 0;
    v36 = 0;
    *(_OWORD *)n = 0;
    *(_OWORD *)v44 = 0;
    goto LABEL_37;
  }
  v5 = v55;
  v36 = *(_QWORD *)(a2 + 8);
  v6 = v36;
  v7 = v55;
  if ( v36 != (_QWORD)v55 )
  {
    v46 = 0;
    v39 = 0;
    v40 = 0;
    src = nullptr;
    v43 = nullptr;
    v45 = 0;
    *(_OWORD *)n = 0;
    *(_OWORD *)v44 = 0;
    if ( v36 >= (unsigned __int64)v55 )
    {
      if ( (unsigned __int64)&v39 < v54 || (unsigned __int64)&v39 >= v54 + 80LL * *((_QWORD *)&v55 + 1) )
      {
        if ( *((_QWORD *)&v55 + 1) < (unsigned __int64)v36 )
        {
          v54 = qvector_reserve();
          v7 = v55;
        }
        if ( v7 < v36 )
        {
          do
          {
            v9 = v54 + 80 * v7;
            *(_DWORD *)v9 = 0;
            copy_argloc();
            *(_QWORD *)(v9 + 16) = 0;
            *(_OWORD *)(v9 + 24) = 0;
            v10 = n[0];
            if ( n[0] )
            {
              v11 = (void *)qalloc_or_throw();
              *(_QWORD *)(v9 + 16) = v11;
              v12 = src;
              *(_QWORD *)(v9 + 32) = v10;
              memcpy(v11, v12, v10);
              *(_QWORD *)(v9 + 24) = v10;
            }
            *(_QWORD *)(v9 + 40) = 0;
            *(_OWORD *)(v9 + 48) = 0;
            v8 = v44[0];
            if ( v44[0] )
            {
              v32 = (void *)qalloc_or_throw();
              *(_QWORD *)(v9 + 40) = v32;
              v33 = v43;
              *(_QWORD *)(v9 + 56) = v8;
              memcpy(v32, v33, v8);
              *(_QWORD *)(v9 + 48) = v8;
            }
            *(_QWORD *)(v9 + 64) = 0;
            copy_tinfo_t();
            ++v7;
            *(_DWORD *)(v9 + 72) = v46;
          }
          while ( v36 != v7 );
        }
        *(_QWORD *)&v55 = v36;
      }
      else
      {
        v47 = 0;
        copy_argloc();
        v26 = n[0];
        v48 = nullptr;
        v49 = 0;
        if ( n[0] )
        {
          v48 = (void *)qalloc_or_throw();
          *((_QWORD *)&v49 + 1) = v26;
          memcpy(v48, src, v26);
          *(_QWORD *)&v49 = v26;
        }
        v27 = v44[0];
        v50 = nullptr;
        v51 = 0;
        if ( v44[0] )
        {
          v50 = (void *)qalloc_or_throw();
          *((_QWORD *)&v51 + 1) = v27;
          memcpy(v50, v43, v27);
          *(_QWORD *)&v51 = v27;
        }
        v52 = 0;
        copy_tinfo_t();
        v53 = v46;
        if ( *((_QWORD *)&v55 + 1) < (unsigned __int64)v36 )
          v54 = qvector_reserve();
        v28 = v55;
        if ( (unsigned __int64)v55 < v36 )
        {
          do
          {
            v31 = v54 + 80 * v28;
            *(_DWORD *)v31 = 0;
            copy_argloc();
            *(_QWORD *)(v31 + 16) = 0;
            *(_OWORD *)(v31 + 24) = 0;
            if ( (_QWORD)v49 )
            {
              v37 = v49;
              v29 = (void *)qalloc_or_throw();
              *(_QWORD *)(v31 + 16) = v29;
              v30 = v48;
              *(_QWORD *)(v31 + 32) = v37;
              memcpy(v29, v30, v37);
              *(_QWORD *)(v31 + 24) = v37;
            }
            *(_QWORD *)(v31 + 40) = 0;
            *(_OWORD *)(v31 + 48) = 0;
            if ( (_QWORD)v51 )
            {
              v38 = v51;
              v34 = (void *)qalloc_or_throw();
              *(_QWORD *)(v31 + 40) = v34;
              v35 = v50;
              *(_QWORD *)(v31 + 56) = v38;
              memcpy(v34, v35, v38);
              *(_QWORD *)(v31 + 48) = v38;
            }
            *(_QWORD *)(v31 + 64) = 0;
            copy_tinfo_t();
            ++v28;
            *(_DWORD *)(v31 + 72) = v53;
          }
          while ( v36 != v28 );
        }
        *(_QWORD *)&v55 = v36;
        clear_tinfo_t();
        if ( v50 )
        {
          *(_QWORD *)&v51 = 0;
          qfree();
        }
        if ( v48 )
        {
          *(_QWORD *)&v49 = 0;
          qfree();
        }
        cleanup_argloc();
      }
LABEL_43:
      clear_tinfo_t();
      if ( v43 )
      {
        v44[0] = 0;
        qfree();
      }
      if ( src )
      {
        n[0] = 0;
        qfree();
      }
      cleanup_argloc();
      goto LABEL_18;
    }
    v24 = v36;
    do
    {
LABEL_37:
      v25 = (_QWORD *)(v54 + 80 * v6);
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
      ++v6;
      cleanup_argloc();
    }
    while ( v6 < v5 );
    *(_QWORD *)&v55 = v24;
    goto LABEL_43;
  }
LABEL_18:
  if ( v36 > 0 )
  {
    v13 = 0;
    v14 = 0;
    do
    {
      if ( !*(_BYTE *)(v14 + *(_QWORD *)v2 + 64) )
        copy_tinfo_t();
      copy_tinfo_t();
      v14 += 72;
      v13 += 80;
    }
    while ( 72LL * v36 != v14 );
  }
LABEL_23:
  create_tinfo();
  *(_DWORD *)(v2 + 32) |= 2u;
  v15 = sub_23DD70(0);
  v16 = j__qalloc_or_throw();
  *(_QWORD *)(v16 + 24) = v15;
  v17 = v16;
  *(_QWORD *)v16 = -1;
  *(_DWORD *)(v16 + 8) = 57;
  *(_QWORD *)(v16 + 12) = -1;
  *(_QWORD *)(v16 + 40) = 0;
  *(_QWORD *)(v16 + 48) = 0;
  *(_DWORD *)(v16 + 56) = 0;
  *(_QWORD *)(v16 + 32) = v2;
  copy_tinfo_t();
  if ( v60 )
  {
    *(_QWORD *)&v61 = 0;
    qfree();
  }
  cleanup_argloc();
  clear_tinfo_t();
  v18 = v54;
  if ( v54 )
  {
    v19 = v55;
    if ( (_QWORD)v55 )
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
        v18 = v54;
      }
      while ( v19 != v20 );
    }
    *(_QWORD *)&v55 = 0;
    qfree();
  }
  return v17;
}

