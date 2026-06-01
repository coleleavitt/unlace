__int64 __fastcall sub_ED480(
        _QWORD *a1,
        __int64 a2,
        _DWORD a3,
        _DWORD a4,
        _DWORD a5,
        _DWORD a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10)
{
  unsigned int v10; // eax
  __int64 v11; // r15
  __int64 v12; // rbp
  int v13; // ebp
  char v14; // r13
  char v15; // al
  int v16; // r13d
  __int64 v17; // r14
  unsigned __int64 v18; // rax
  __int64 v19; // rdi
  __int64 j; // r13
  _QWORD *v21; // rbp
  __int64 v23; // r14
  __int64 i; // rbp
  __int64 v25; // rbp
  __int64 v26; // r13
  void *v27; // rax
  void *v28; // rax
  size_t na; // [rsp+0h] [rbp-B8h]
  size_t n; // [rsp+0h] [rbp-B8h]
  __int64 v31; // [rsp+10h] [rbp-A8h]
  __int64 v32; // [rsp+18h] [rbp-A0h]
  void *v33; // [rsp+50h] [rbp-68h]

  v10 = *(_BYTE *)(a2 + 88) & 0xF0;
  if ( (*(_BYTE *)(a2 + 88) & 0xF0) == 0xC0 )
    v10 = *(_DWORD *)(a2 + 28);
  if ( v10 <= 0x10 )
    v10 = getinf();
  if ( v10 - 208 > 0x2F )
  {
    if ( !(unsigned __int8)calc_arglocs() )
    {
      if ( !under_debugger )
        sub_37CFE0(51723);
LABEL_45:
      BUG();
    }
    v11 = *(_QWORD *)(a2 + 8);
    v31 = 0;
    v32 = 0;
    if ( v11 )
    {
      v23 = 0;
      v31 = qalloc_or_throw();
      for ( i = v31; ; i = v31 )
      {
        v25 = 80 * v23 + i;
        v26 = *(_QWORD *)a2 + 80 * v23;
        *(_DWORD *)v25 = 0;
        copy_argloc();
        *(_QWORD *)(v25 + 16) = 0;
        *(_OWORD *)(v25 + 24) = 0;
        if ( *(_QWORD *)(v26 + 24) )
        {
          na = *(_QWORD *)(v26 + 24);
          v27 = (void *)qalloc_or_throw();
          *(_QWORD *)(v25 + 16) = v27;
          *(_QWORD *)(v25 + 32) = na;
          memcpy(v27, *(const void **)(v26 + 16), na);
          *(_QWORD *)(v25 + 24) = na;
        }
        *(_QWORD *)(v25 + 40) = 0;
        *(_OWORD *)(v25 + 48) = 0;
        if ( *(_QWORD *)(v26 + 48) )
        {
          n = *(_QWORD *)(v26 + 48);
          v28 = (void *)qalloc_or_throw();
          *(_QWORD *)(v25 + 40) = v28;
          *(_QWORD *)(v25 + 56) = n;
          memcpy(v28, *(const void **)(v26 + 40), n);
          *(_QWORD *)(v25 + 48) = n;
        }
        *(_QWORD *)(v25 + 64) = 0;
        copy_tinfo_t();
        ++v23;
        *(_DWORD *)(v25 + 72) = *(_DWORD *)(v26 + 72);
        if ( v11 == v23 )
          break;
      }
      v32 = v11;
    }
    copy_tinfo_t();
    copy_argloc();
    v12 = *(_QWORD *)(a2 + 72);
    v33 = nullptr;
    if ( v12 )
    {
      v33 = (void *)qalloc_or_throw();
      memcpy(v33, *(const void **)(a2 + 64), 8 * v12);
    }
    v13 = 0;
    v14 = 0;
    if ( *(_QWORD *)(a2 + 8) )
    {
      do
      {
        v15 = sub_ECCC0(a1, a2, v13++);
        v14 |= v15;
      }
      while ( (unsigned __int64)v13 < *(_QWORD *)(a2 + 8) );
      if ( v14 )
      {
        calc_arglocs();
        if ( *(_QWORD *)(a2 + 8) )
        {
          v16 = 0;
          v17 = 0;
          do
          {
            if ( (get_tinfo_property() & 0xF) == 9 && (unsigned int)compare_arglocs() )
            {
              copy_tinfo_t();
              v18 = *(_QWORD *)(a2 + 8);
              if ( v18 - 1 == v17 )
                goto LABEL_16;
              calc_arglocs();
              if ( (unsigned int)compare_arglocs() )
              {
                if ( !under_debugger )
                  sub_37CFE0(52111);
                goto LABEL_45;
              }
            }
            v18 = *(_QWORD *)(a2 + 8);
LABEL_16:
            v17 = ++v16;
          }
          while ( v16 < v18 );
        }
      }
    }
    if ( v33 )
      qfree();
    cleanup_argloc();
    clear_tinfo_t();
    v19 = v31;
    if ( v31 )
    {
      if ( v32 )
      {
        for ( j = 0; j != v32; ++j )
        {
          v21 = (_QWORD *)(v19 + 80 * j);
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
          cleanup_argloc();
          v19 = v31;
        }
      }
      qfree();
    }
  }
  return create_tinfo();
}

