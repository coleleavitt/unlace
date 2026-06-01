_QWORD *__fastcall sub_336290(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v3; // r14
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // rbp
  __int64 *v8; // rsi
  __int64 v9; // rbp
  __int64 v10; // rcx
  void *v11; // rax
  __int64 v12; // r14
  __int64 v13; // r13
  __int64 v14; // rbp
  unsigned __int64 v15; // r15
  size_t v16; // r8
  const void *v17; // r9
  void *v18; // rax
  char v19; // al
  int v20; // edx
  char v21; // al
  int v22; // eax
  const void *v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  void *v26; // r13
  __int64 v27; // rdi
  void *v28; // rbp
  void *v29; // r13
  __int64 *v30; // rbx
  __int64 v31; // rdi
  __int64 v32; // rdi
  __int64 v33; // rdi
  __int64 v34; // r13
  __int64 v35; // rbp
  _QWORD *v36; // rbx
  __int64 v37; // rdi
  __int64 v38; // rdi
  void *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rbp
  void *v43; // r14
  size_t v44; // r15
  __int64 v45; // rbp
  __int64 v46; // rcx
  size_t v47; // r15
  void *v48; // rax
  void *v49; // rax
  size_t na; // [rsp+0h] [rbp-118h]
  size_t n; // [rsp+0h] [rbp-118h]
  const void *v52; // [rsp+10h] [rbp-108h]
  const void **v53; // [rsp+18h] [rbp-100h]
  __int64 v54; // [rsp+18h] [rbp-100h]
  __int64 v55; // [rsp+20h] [rbp-F8h] BYREF
  void *src[2]; // [rsp+28h] [rbp-F0h]
  __int128 v57; // [rsp+38h] [rbp-E0h]
  void *v58; // [rsp+48h] [rbp-D0h]
  __int128 v59; // [rsp+50h] [rbp-C8h]
  __int64 v60; // [rsp+60h] [rbp-B8h]
  __int64 v61; // [rsp+68h] [rbp-B0h]
  __int64 v62; // [rsp+70h] [rbp-A8h] BYREF
  __int128 v63; // [rsp+78h] [rbp-A0h]
  __int64 v64; // [rsp+88h] [rbp-90h]
  __int64 v65; // [rsp+90h] [rbp-88h]
  __int64 v66; // [rsp+98h] [rbp-80h]
  __int128 v67; // [rsp+A0h] [rbp-78h]
  __int64 v68; // [rsp+B0h] [rbp-68h]
  __int128 v69; // [rsp+B8h] [rbp-60h]
  char v70; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v71; // [rsp+D8h] [rbp-40h]

  v3 = *(int *)(a2 + 8);
  v71 = __readfsqword(0x28u);
  v70 = 16;
  v62 = 0;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  v68 = 0;
  v63 = 0;
  v67 = 0;
  v69 = 0;
  if ( v3 )
  {
    v61 = 0;
    LODWORD(v55) = 0;
    src[0] = nullptr;
    src[1] = nullptr;
    v58 = nullptr;
    v60 = 0;
    v57 = 0;
    v59 = 0;
    v5 = qvector_reserve((__int64)&v62, 0, v3, 80);
    v6 = v63;
    v62 = v5;
    v7 = v5;
    if ( (unsigned __int64)v63 < v3 )
    {
      while ( 1 )
      {
        v8 = &v55;
        v9 = 80 * v6 + v7;
        *(_DWORD *)v9 = 0;
        copy_argloc();
        *(_QWORD *)(v9 + 16) = 0;
        *(_OWORD *)(v9 + 24) = 0;
        if ( (_QWORD)v57 )
        {
          na = v57;
          v11 = (void *)qalloc_or_throw(v57, (__int64)&v55, v57, v10);
          *(_QWORD *)(v9 + 16) = v11;
          *(_QWORD *)(v9 + 32) = na;
          v8 = (__int64 *)src[1];
          memcpy(v11, src[1], na);
          *(_QWORD *)(v9 + 24) = na;
        }
        *(_QWORD *)(v9 + 40) = 0;
        *(_OWORD *)(v9 + 48) = 0;
        if ( (_QWORD)v59 )
        {
          n = v59;
          v40 = (void *)qalloc_or_throw(v59, (__int64)v8, v59, v10);
          *(_QWORD *)(v9 + 40) = v40;
          *(_QWORD *)(v9 + 56) = n;
          memcpy(v40, v58, n);
          *(_QWORD *)(v9 + 48) = n;
        }
        *(_QWORD *)(v9 + 64) = 0;
        copy_tinfo_t();
        ++v6;
        *(_DWORD *)(v9 + 72) = v61;
        if ( v3 == v6 )
          break;
        v7 = v62;
      }
    }
    *(_QWORD *)&v63 = v3;
    clear_tinfo_t();
    if ( v58 )
    {
      *(_QWORD *)&v59 = 0;
      qfree((__int64)v58);
    }
    if ( src[1] )
    {
      *(_QWORD *)&v57 = 0;
      qfree((__int64)src[1]);
    }
    cleanup_argloc();
    if ( *(int *)(a2 + 8) > 0 )
    {
      v12 = 0;
      do
      {
        v13 = 80 * v12 + *(_QWORD *)(a2 + 24);
        v14 = v62 + 80 * v12;
        copy_tinfo_t();
        copy_argloc();
        if ( v14 + 16 != v13 + 32 )
        {
          v15 = *(_QWORD *)(v13 + 40);
          if ( !v15 || (v16 = v15 - 1, v15 == 1) )
          {
            *(_QWORD *)(v14 + 24) = 0;
          }
          else
          {
            v17 = *(const void **)(v13 + 32);
            v18 = *(void **)(v14 + 16);
            if ( *(_QWORD *)(v14 + 32) < v15 )
            {
              v52 = *(const void **)(v13 + 32);
              v18 = (void *)qvector_reserve(v14 + 16, *(_QWORD *)(v14 + 16), *(_QWORD *)(v13 + 40), 1);
              v17 = v52;
              v16 = v15 - 1;
              *(_QWORD *)(v14 + 16) = v18;
            }
            *(_QWORD *)(v14 + 24) = v15;
            memmove(v18, v17, v16);
            *(_BYTE *)(*(_QWORD *)(v14 + 16) + v15 - 1) = 0;
          }
        }
        ++v12;
        *(_DWORD *)(v14 + 72) = *(_DWORD *)(v13 + 72);
      }
      while ( *(_DWORD *)(a2 + 8) > (int)v12 );
    }
    v19 = v70 & 0xF;
  }
  else
  {
    v19 = 0;
  }
  v20 = *(_DWORD *)(a2 + 20);
  if ( (v20 & 0xFFFFFF0F) != 0 || v20 == 192 )
  {
    v21 = v19 | 0xC0;
  }
  else
  {
    v21 = v20 | v19;
    v20 = 0;
  }
  v70 = v21;
  HIDWORD(v64) = v20;
  copy_tinfo_t();
  copy_argloc();
  v22 = *(_DWORD *)(a2 + 280);
  if ( (v22 & 0x10) != 0 )
    LODWORD(v64) = v64 | 4;
  if ( (v22 & 8) != 0 )
    LODWORD(v64) = v64 | 2;
  if ( (v22 & 0x400) != 0 )
    LODWORD(v64) = v64 | 0x200;
  *a1 = 0;
  v23 = byte_9 + 3;
  create_tinfo();
  v26 = *(void **)(a2 + 296);
  v55 = 0;
  *(_OWORD *)src = 0;
  if ( v26 )
  {
    v55 = qalloc_or_throw(48LL * (_QWORD)v26, 12, v24, v25);
    v42 = v55;
    v43 = nullptr;
    src[1] = v26;
    while ( 1 )
    {
      v45 = 48LL * (_QWORD)v43 + v42;
      v46 = *(_QWORD *)(a2 + 288) + 48LL * (_QWORD)v43;
      *(_QWORD *)v45 = 0;
      *(_OWORD *)(v45 + 8) = 0;
      v47 = *(_QWORD *)(v46 + 8);
      if ( v47 )
      {
        v53 = (const void **)v46;
        v48 = (void *)qalloc_or_throw(*(_QWORD *)(v46 + 8), (__int64)v23, v41, v46);
        *(_QWORD *)v45 = v48;
        *(_QWORD *)(v45 + 16) = v47;
        v23 = *v53;
        memcpy(v48, *v53, v47);
        *(_QWORD *)(v45 + 8) = v47;
        v46 = (__int64)v53;
      }
      *(_QWORD *)(v45 + 24) = 0;
      *(_OWORD *)(v45 + 32) = 0;
      v44 = *(_QWORD *)(v46 + 32);
      if ( v44 )
      {
        v54 = v46;
        v49 = (void *)qalloc_or_throw(*(_QWORD *)(v46 + 32), (__int64)v23, v41, v46);
        *(_QWORD *)(v45 + 24) = v49;
        *(_QWORD *)(v45 + 40) = v44;
        v43 = (char *)v43 + 1;
        v23 = *(const void **)(v54 + 24);
        memcpy(v49, v23, v44);
        *(_QWORD *)(v45 + 32) = v44;
        if ( v26 == v43 )
        {
LABEL_66:
          src[0] = v26;
          break;
        }
      }
      else
      {
        v43 = (char *)v43 + 1;
        if ( v26 == v43 )
          goto LABEL_66;
      }
      v42 = v55;
    }
  }
  set_tinfo_attrs();
  if ( (unsigned int)verify_tinfo() )
  {
    if ( !under_debugger )
      sub_383060(0xC5E1u, 0.0);
    BUG();
  }
  v27 = v55;
  if ( v55 )
  {
    v28 = src[0];
    if ( src[0] )
    {
      v29 = nullptr;
      do
      {
        v30 = (__int64 *)(v27 + 48LL * (_QWORD)v29);
        v31 = v30[3];
        if ( v31 )
        {
          v30[4] = 0;
          qfree(v31);
        }
        v32 = *v30;
        if ( *v30 )
        {
          v30[1] = 0;
          qfree(v32);
        }
        v29 = (char *)v29 + 1;
        v27 = v55;
      }
      while ( v28 != v29 );
    }
    src[0] = nullptr;
    qfree(v27);
  }
  if ( v68 )
  {
    *(_QWORD *)&v69 = 0;
    qfree(v68);
  }
  cleanup_argloc();
  clear_tinfo_t();
  v33 = v62;
  if ( v62 )
  {
    v34 = v63;
    if ( (_QWORD)v63 )
    {
      v35 = 0;
      do
      {
        v36 = (_QWORD *)(v33 + 80 * v35);
        clear_tinfo_t();
        v37 = v36[5];
        if ( v37 )
        {
          v36[6] = 0;
          qfree(v37);
        }
        v38 = v36[2];
        if ( v38 )
        {
          v36[3] = 0;
          qfree(v38);
        }
        ++v35;
        cleanup_argloc();
        v33 = v62;
      }
      while ( v34 != v35 );
    }
    *(_QWORD *)&v63 = 0;
    qfree(v33);
  }
  return a1;
}

