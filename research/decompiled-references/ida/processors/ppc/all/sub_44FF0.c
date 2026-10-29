__int64 __fastcall sub_44FF0(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // r13
  __int64 *v5; // rsi
  unsigned __int64 v6; // rbx
  size_t v7; // r13
  size_t v8; // r13
  __int64 v9; // rbx
  __int64 *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 *v14; // rdi
  __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  __int64 v17; // rsi
  unsigned __int64 *v18; // rsi
  __int64 v19; // rdx
  unsigned int v20; // r12d
  __int64 v21; // rdx
  unsigned __int64 v22; // rdi
  __int64 v23; // r13
  __int64 v24; // rbp
  _QWORD *v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v30; // rax
  size_t v31; // rbx
  size_t v32; // rbx
  unsigned __int64 v33; // rbx
  __int64 v34; // rdx
  void *v35; // rax
  void *v36; // rsi
  void *v37; // rax
  void *v38; // rsi
  void *v39; // rax
  void *v40; // rax
  size_t v43; // [rsp+18h] [rbp-150h]
  size_t v44; // [rsp+18h] [rbp-150h]
  int v45; // [rsp+20h] [rbp-148h] BYREF
  __int64 v46; // [rsp+28h] [rbp-140h]
  void *v47; // [rsp+30h] [rbp-138h]
  size_t v48[2]; // [rsp+38h] [rbp-130h]
  void *src; // [rsp+48h] [rbp-120h]
  size_t n[2]; // [rsp+50h] [rbp-118h]
  __int64 v51; // [rsp+60h] [rbp-108h] BYREF
  __int64 v52; // [rsp+68h] [rbp-100h]
  _QWORD v53[2]; // [rsp+70h] [rbp-F8h] BYREF
  void *v54; // [rsp+80h] [rbp-E8h]
  __int128 v55; // [rsp+88h] [rbp-E0h]
  void *v56; // [rsp+98h] [rbp-D0h]
  __int128 v57; // [rsp+A0h] [rbp-C8h]
  __int64 v58; // [rsp+B0h] [rbp-B8h] BYREF
  int v59; // [rsp+B8h] [rbp-B0h]
  unsigned __int64 v60; // [rsp+C0h] [rbp-A8h] BYREF
  __int128 v61; // [rsp+C8h] [rbp-A0h]
  __int64 v62; // [rsp+D8h] [rbp-90h]
  __int64 v63; // [rsp+E0h] [rbp-88h] BYREF
  __int64 v64; // [rsp+E8h] [rbp-80h] BYREF
  __int128 v65; // [rsp+F0h] [rbp-78h]
  __int64 v66; // [rsp+100h] [rbp-68h]
  __int128 v67; // [rsp+108h] [rbp-60h]
  char v68; // [rsp+118h] [rbp-50h]
  unsigned __int64 v69; // [rsp+128h] [rbp-40h]

  v69 = __readfsqword(0x28u);
  v68 = 16;
  v60 = 0;
  v62 = 0;
  v63 = 0;
  v64 = 0;
  v66 = 0;
  v53[0] = 1;
  v61 = 0;
  v65 = 0;
  v67 = 0;
  copy_tinfo_t(&v63, v53);
  clear_tinfo_t(v53);
  v4 = v61;
  if ( (_QWORD)v61 == 1 )
    goto LABEL_23;
  v5 = (__int64 *)v60;
  v52 = 0;
  v45 = 0;
  v46 = 0;
  v6 = v60;
  v47 = nullptr;
  src = nullptr;
  v51 = 0;
  *(_OWORD *)v48 = 0;
  *(_OWORD *)n = 0;
  if ( (unsigned __int64)v61 > 1 )
  {
    v9 = 1;
    while ( 1 )
    {
      v10 = &v5[10 * v9];
      clear_tinfo_t(v10 + 8);
      v12 = v10[5];
      if ( v12 )
      {
        v10[6] = 0;
        qfree(v12, v5, v11, 0.0);
      }
      v13 = v10[2];
      if ( v13 )
      {
        v10[3] = 0;
        qfree(v13, v5, v11, 0.0);
      }
      v14 = &v5[10 * v9++];
      cleanup_argloc(v14);
      if ( v4 == v9 )
        break;
      v5 = (__int64 *)v60;
    }
  }
  else
  {
    if ( (unsigned __int64)&v45 >= v60 && (unsigned __int64)&v45 < v60 + 80LL * *((_QWORD *)&v61 + 1) )
    {
      LODWORD(v53[0]) = 0;
      copy_argloc(v53, &v45);
      v31 = v48[0];
      v54 = nullptr;
      v55 = 0;
      if ( v48[0] )
      {
        v54 = (void *)qalloc_or_throw(v48[0]);
        *((_QWORD *)&v55 + 1) = v31;
        memcpy(v54, v47, v31);
        *(_QWORD *)&v55 = v31;
      }
      v32 = n[0];
      v56 = nullptr;
      v57 = 0;
      if ( n[0] )
      {
        v56 = (void *)qalloc_or_throw(n[0]);
        *((_QWORD *)&v57 + 1) = v32;
        memcpy(v56, src, v32);
        *(_QWORD *)&v57 = v32;
      }
      v58 = 0;
      v5 = &v51;
      copy_tinfo_t(&v58, &v51);
      v59 = v52;
      if ( !*((_QWORD *)&v61 + 1) )
      {
        v5 = (__int64 *)v60;
        v60 = qvector_reserve(&v60, v60, 1, 80);
      }
      if ( !(_QWORD)v61 )
      {
        v33 = v60;
        *(_DWORD *)v60 = 0;
        copy_argloc(v33, v53);
        *(_QWORD *)(v33 + 16) = 0;
        *(_OWORD *)(v33 + 24) = 0;
        if ( (_QWORD)v55 )
        {
          v44 = v55;
          v40 = (void *)qalloc_or_throw(v55);
          *(_QWORD *)(v33 + 16) = v40;
          *(_QWORD *)(v33 + 32) = v44;
          memcpy(v40, v54, v44);
          *(_QWORD *)(v33 + 24) = v44;
        }
        *(_QWORD *)(v33 + 40) = 0;
        *(_OWORD *)(v33 + 48) = 0;
        if ( (_QWORD)v57 )
        {
          v43 = v57;
          v39 = (void *)qalloc_or_throw(v57);
          *(_QWORD *)(v33 + 40) = v39;
          *(_QWORD *)(v33 + 56) = v43;
          memcpy(v39, v56, v43);
          *(_QWORD *)(v33 + 48) = v43;
        }
        *(_QWORD *)(v33 + 64) = 0;
        v5 = &v58;
        copy_tinfo_t(v33 + 64, &v58);
        *(_DWORD *)(v33 + 72) = v59;
      }
      *(_QWORD *)&v61 = 1;
      clear_tinfo_t(&v58);
      if ( v56 )
      {
        *(_QWORD *)&v57 = 0;
        qfree(v56, v5, v34, 0.0);
      }
      if ( v54 )
      {
        *(_QWORD *)&v55 = 0;
        qfree(v54, v5, v34, 0.0);
      }
      cleanup_argloc(v53);
      goto LABEL_18;
    }
    if ( *((_QWORD *)&v61 + 1) || (v60 = qvector_reserve(&v60, v60, 1, 80), v6 = v60, !(_QWORD)v61) )
    {
      *(_DWORD *)v6 = 0;
      copy_argloc(v6, &v45);
      *(_QWORD *)(v6 + 16) = 0;
      *(_OWORD *)(v6 + 24) = 0;
      v7 = v48[0];
      if ( v48[0] )
      {
        v37 = (void *)qalloc_or_throw(v48[0]);
        *(_QWORD *)(v6 + 16) = v37;
        v38 = v47;
        *(_QWORD *)(v6 + 32) = v7;
        memcpy(v37, v38, v7);
        *(_QWORD *)(v6 + 24) = v7;
      }
      *(_QWORD *)(v6 + 40) = 0;
      *(_OWORD *)(v6 + 48) = 0;
      v8 = n[0];
      if ( n[0] )
      {
        v35 = (void *)qalloc_or_throw(n[0]);
        *(_QWORD *)(v6 + 40) = v35;
        v36 = src;
        *(_QWORD *)(v6 + 56) = v8;
        memcpy(v35, v36, v8);
        *(_QWORD *)(v6 + 48) = v8;
      }
      *(_QWORD *)(v6 + 64) = 0;
      v5 = &v51;
      copy_tinfo_t(v6 + 64, &v51);
      *(_DWORD *)(v6 + 72) = v52;
    }
  }
  *(_QWORD *)&v61 = 1;
LABEL_18:
  clear_tinfo_t(&v51);
  if ( src )
  {
    n[0] = 0;
    qfree(src, v5, v15, 0.0);
  }
  if ( v47 )
  {
    v48[0] = 0;
    qfree(v47, v5, v15, 0.0);
  }
  cleanup_argloc(&v45);
LABEL_23:
  v16 = v60;
  v17 = *(_QWORD *)(v60 + 16);
  if ( *(_QWORD *)(v60 + 32) <= 6u )
  {
    v30 = qvector_reserve(v60 + 16, v17, 7, 1);
    *(_QWORD *)(v16 + 16) = v30;
    v17 = v30;
  }
  *(_QWORD *)(v16 + 24) = 7;
  *(_WORD *)(v17 + 4) = 25455;
  *(_DWORD *)v17 = 1819567474;
  *(_BYTE *)(*(_QWORD *)(v16 + 16) + 6LL) = 0;
  copy_tinfo_t(v16 + 64, a2);
  if ( !(unsigned __int8)getinf_flag(3, 4) )
  {
    if ( under_debugger )
      BUG();
    interr(10300);
  }
  v18 = &v60;
  v20 = -1;
  if ( (unsigned __int8)sub_458E0(a1, &v60, v53) )
  {
    if ( a3 )
      copy_argloc(a3, v16);
    v18 = (_QWORD *)(&dword_0 + 2);
    v20 = 0;
    if ( (get_tinfo_property(*a2, 2) & 0x2F) == 0xD && !LOBYTE(v53[0]) )
      v20 = (unsigned int)(*(_DWORD *)v16 - 3) > 1;
  }
  if ( v66 )
  {
    *(_QWORD *)&v67 = 0;
    qfree(v66, v18, v19, 0.0);
  }
  cleanup_argloc(&v64);
  clear_tinfo_t(&v63);
  v22 = v60;
  if ( v60 )
  {
    v23 = v61;
    if ( (_QWORD)v61 )
    {
      v24 = 0;
      do
      {
        v25 = (_QWORD *)(v22 + 80 * v24);
        clear_tinfo_t(v25 + 8);
        v27 = v25[5];
        if ( v27 )
        {
          v25[6] = 0;
          qfree(v27, v18, v26, 0.0);
        }
        v28 = v25[2];
        if ( v28 )
        {
          v25[3] = 0;
          qfree(v28, v18, v26, 0.0);
        }
        ++v24;
        cleanup_argloc(v25);
        v22 = v60;
      }
      while ( v23 != v24 );
    }
    *(_QWORD *)&v61 = 0;
    qfree(v22, v18, v21, 0.0);
  }
  return v20;
}

