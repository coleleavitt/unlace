__int64 __fastcall sub_384D00(__int64 a1, int a2, double a3)
{
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // r14
  __int64 i; // r12
  __int64 v6; // r12
  __int64 v7; // r13
  void *v8; // rax
  __int64 v9; // r12
  unsigned int v10; // r12d
  __int64 v11; // rdi
  __int64 j; // rbp
  _QWORD *v13; // rbx
  int v15; // r15d
  void *v16; // rax
  char v17; // al
  size_t nb; // [rsp+8h] [rbp-C0h]
  int n; // [rsp+8h] [rbp-C0h]
  size_t na; // [rsp+8h] [rbp-C0h]
  __int64 v21; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v22; // [rsp+28h] [rbp-A0h]
  void *v23; // [rsp+60h] [rbp-68h]

  if ( (unsigned int)(a2 - 208) <= 0x2F )
  {
    if ( !under_debugger )
      sub_37EEE0(0xCD6Eu, a3);
    BUG();
  }
  v3 = *(_QWORD *)(a1 + 8);
  if ( (a2 & 0xFFFFFFF0) == 0x40 )
  {
    if ( !v3 )
      return 0;
  }
  else
  {
    v21 = 0;
    v22 = 0;
    if ( !v3 )
      goto LABEL_12;
  }
  v4 = 0;
  v21 = qalloc_or_throw();
  for ( i = v21; ; i = v21 )
  {
    v6 = 80 * v4 + i;
    v7 = *(_QWORD *)a1 + 80 * v4;
    *(_DWORD *)v6 = 0;
    copy_argloc();
    *(_QWORD *)(v6 + 16) = 0;
    *(_OWORD *)(v6 + 24) = 0;
    if ( *(_QWORD *)(v7 + 24) )
    {
      nb = *(_QWORD *)(v7 + 24);
      v8 = (void *)qalloc_or_throw();
      *(_QWORD *)(v6 + 16) = v8;
      *(_QWORD *)(v6 + 32) = nb;
      memcpy(v8, *(const void **)(v7 + 16), nb);
      *(_QWORD *)(v6 + 24) = nb;
    }
    *(_QWORD *)(v6 + 40) = 0;
    *(_OWORD *)(v6 + 48) = 0;
    if ( *(_QWORD *)(v7 + 48) )
    {
      na = *(_QWORD *)(v7 + 48);
      v16 = (void *)qalloc_or_throw();
      *(_QWORD *)(v6 + 40) = v16;
      *(_QWORD *)(v6 + 56) = na;
      memcpy(v16, *(const void **)(v7 + 40), na);
      *(_QWORD *)(v6 + 48) = na;
    }
    *(_QWORD *)(v6 + 64) = 0;
    copy_tinfo_t();
    ++v4;
    *(_DWORD *)(v6 + 72) = *(_DWORD *)(v7 + 72);
    if ( v4 >= v3 )
      break;
  }
  v22 = v3;
LABEL_12:
  copy_tinfo_t();
  copy_argloc();
  v9 = *(_QWORD *)(a1 + 72);
  v23 = nullptr;
  if ( v9 )
  {
    v23 = (void *)qalloc_or_throw();
    memcpy(v23, *(const void **)(a1 + 64), 8 * v9);
  }
  if ( a2 != 192 && (a2 & 0xFFFFFF0F) == 0 )
    n = 0;
  else
    n = a2;
  v10 = calc_arglocs();
  if ( (_BYTE)v10 )
  {
    v15 = compare_arglocs();
    if ( !v15 )
    {
      if ( !v22 )
      {
LABEL_39:
        v17 = a2 | *(_BYTE *)(a1 + 88) & 0xF;
        if ( a2 == 192 || (a2 & 0xFFFFFF0F) != 0 )
          v17 = *(_BYTE *)(a1 + 88) & 0xF | 0xC0;
        *(_DWORD *)(a1 + 24) &= ~0x200u;
        *(_DWORD *)(a1 + 28) = n;
        *(_BYTE *)(a1 + 88) = v17;
        goto LABEL_18;
      }
      while ( !(unsigned int)compare_arglocs() )
      {
        if ( ++v15 >= v22 )
          goto LABEL_39;
      }
    }
  }
  v10 = 0;
LABEL_18:
  if ( v23 )
    qfree();
  cleanup_argloc();
  clear_tinfo_t();
  v11 = v21;
  if ( v21 )
  {
    if ( v22 )
    {
      for ( j = 0; j != v22; ++j )
      {
        v13 = (_QWORD *)(v11 + 80 * j);
        clear_tinfo_t();
        if ( v13[5] )
        {
          v13[6] = 0;
          qfree();
        }
        if ( v13[2] )
        {
          v13[3] = 0;
          qfree();
        }
        cleanup_argloc();
        v11 = v21;
      }
    }
    qfree();
  }
  return v10;
}

