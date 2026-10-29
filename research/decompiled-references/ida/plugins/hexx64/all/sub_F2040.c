__int64 __fastcall sub_F2040(
        _QWORD *a1,
        __int64 a2,
        _DWORD a3,
        _DWORD a4,
        _DWORD a5,
        _DWORD a6,
        double a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        int a11)
{
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbp
  int v19; // ebp
  char v20; // r13
  char v21; // al
  int v22; // r13d
  __int64 v23; // r14
  unsigned __int64 v24; // rax
  __int64 v25; // rdi
  __int64 j; // r13
  _QWORD *v27; // rbp
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 v31; // r14
  __int64 i; // rbp
  __int64 v33; // rcx
  __int64 v34; // rbp
  __int64 v35; // r13
  const void *v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rcx
  void *v39; // rax
  void *v40; // rax
  size_t na; // [rsp+0h] [rbp-B8h]
  size_t n; // [rsp+0h] [rbp-B8h]
  __int64 v43; // [rsp+10h] [rbp-A8h]
  __int64 v44; // [rsp+18h] [rbp-A0h]
  void *v45; // [rsp+50h] [rbp-68h]

  v12 = *(_BYTE *)(a2 + 88) & 0xF0;
  if ( (*(_BYTE *)(a2 + 88) & 0xF0) == 0xC0 )
    v12 = *(_DWORD *)(a2 + 28);
  if ( v12 <= 0x10 )
    v12 = getinf();
  if ( v12 - 208 > 0x2F )
  {
    if ( !(unsigned __int8)calc_arglocs() )
    {
      if ( !under_debugger )
        sub_383060(0xCA0Bu, a7);
LABEL_45:
      BUG();
    }
    v15 = *(_QWORD *)(a2 + 8);
    v43 = 0;
    v44 = 0;
    if ( v15 )
    {
      v31 = 0;
      v43 = qalloc_or_throw(80 * v15, a2, v13, v14);
      for ( i = v43; ; i = v43 )
      {
        v34 = 80 * v31 + i;
        v35 = *(_QWORD *)a2 + 80 * v31;
        *(_DWORD *)v34 = 0;
        v36 = (const void *)v35;
        copy_argloc();
        *(_QWORD *)(v34 + 16) = 0;
        *(_OWORD *)(v34 + 24) = 0;
        v38 = *(_QWORD *)(v35 + 24);
        if ( v38 )
        {
          na = *(_QWORD *)(v35 + 24);
          v39 = (void *)qalloc_or_throw(na, v35, v37, v38);
          *(_QWORD *)(v34 + 16) = v39;
          *(_QWORD *)(v34 + 32) = na;
          v36 = *(const void **)(v35 + 16);
          memcpy(v39, v36, na);
          *(_QWORD *)(v34 + 24) = na;
        }
        *(_QWORD *)(v34 + 40) = 0;
        *(_OWORD *)(v34 + 48) = 0;
        v33 = *(_QWORD *)(v35 + 48);
        if ( v33 )
        {
          n = *(_QWORD *)(v35 + 48);
          v40 = (void *)qalloc_or_throw(n, (__int64)v36, v37, v33);
          *(_QWORD *)(v34 + 40) = v40;
          *(_QWORD *)(v34 + 56) = n;
          memcpy(v40, *(const void **)(v35 + 40), n);
          *(_QWORD *)(v34 + 48) = n;
        }
        *(_QWORD *)(v34 + 64) = 0;
        copy_tinfo_t();
        ++v31;
        *(_DWORD *)(v34 + 72) = *(_DWORD *)(v35 + 72);
        if ( v15 == v31 )
          break;
      }
      v44 = v15;
    }
    copy_tinfo_t();
    copy_argloc();
    v18 = *(_QWORD *)(a2 + 72);
    v45 = nullptr;
    if ( v18 )
    {
      v45 = (void *)qalloc_or_throw(8 * v18, a2 + 40, v16, v17);
      memcpy(v45, *(const void **)(a2 + 64), 8 * v18);
    }
    v19 = 0;
    v20 = 0;
    if ( *(_QWORD *)(a2 + 8) )
    {
      do
      {
        v21 = sub_F1880(a1, a2, v19++, 0.0);
        v20 |= v21;
      }
      while ( (unsigned __int64)v19 < *(_QWORD *)(a2 + 8) );
      if ( v20 )
      {
        calc_arglocs();
        if ( *(_QWORD *)(a2 + 8) )
        {
          v22 = 0;
          v23 = 0;
          do
          {
            if ( (get_tinfo_property() & 0xF) == 9 && (unsigned int)compare_arglocs() )
            {
              copy_tinfo_t();
              v24 = *(_QWORD *)(a2 + 8);
              if ( v24 - 1 == v23 )
                goto LABEL_16;
              calc_arglocs();
              if ( (unsigned int)compare_arglocs() )
              {
                if ( !under_debugger )
                  sub_383060(0xCB8Fu, 0.0);
                goto LABEL_45;
              }
            }
            v24 = *(_QWORD *)(a2 + 8);
LABEL_16:
            v23 = ++v22;
          }
          while ( v22 < v24 );
        }
      }
    }
    if ( v45 )
      qfree((__int64)v45);
    cleanup_argloc();
    clear_tinfo_t();
    v25 = v43;
    if ( v43 )
    {
      if ( v44 )
      {
        for ( j = 0; j != v44; ++j )
        {
          v27 = (_QWORD *)(v25 + 80 * j);
          clear_tinfo_t();
          v28 = v27[5];
          if ( v28 )
          {
            v27[6] = 0;
            qfree(v28);
          }
          v29 = v27[2];
          if ( v29 )
          {
            v27[3] = 0;
            qfree(v29);
          }
          cleanup_argloc();
          v25 = v43;
        }
      }
      qfree(v25);
    }
  }
  return create_tinfo();
}

