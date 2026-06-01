__int64 __fastcall sub_388E80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  unsigned __int64 v5; // r15
  int v6; // ebp
  unsigned __int64 v7; // r14
  __int64 i; // r12
  __int64 v9; // rcx
  __int64 v10; // r12
  __int64 v11; // r13
  const void *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  void *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r12
  unsigned int v18; // r12d
  __int64 v19; // rdi
  __int64 j; // rbp
  _QWORD *v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // rdi
  int v25; // r15d
  void *v26; // rax
  char v27; // al
  size_t nb; // [rsp+8h] [rbp-C0h]
  int n; // [rsp+8h] [rbp-C0h]
  size_t na; // [rsp+8h] [rbp-C0h]
  __int64 v31; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v32; // [rsp+28h] [rbp-A0h]
  void *v33; // [rsp+60h] [rbp-68h]

  if ( (unsigned int)(a2 - 208) <= 0x2F )
  {
    if ( !under_debugger )
      sub_383060(0xCD6Eu, a5);
    BUG();
  }
  v5 = *(_QWORD *)(a1 + 8);
  v6 = a2;
  if ( (a2 & 0xFFFFFFF0) == 0x40 )
  {
    if ( !v5 )
      return 0;
  }
  else
  {
    v31 = 0;
    v32 = 0;
    if ( !v5 )
      goto LABEL_12;
  }
  v7 = 0;
  v31 = qalloc_or_throw(80 * v5, a2, a3, a4);
  for ( i = v31; ; i = v31 )
  {
    v10 = 80 * v7 + i;
    v11 = *(_QWORD *)a1 + 80 * v7;
    *(_DWORD *)v10 = 0;
    v12 = (const void *)v11;
    copy_argloc();
    *(_QWORD *)(v10 + 16) = 0;
    *(_OWORD *)(v10 + 24) = 0;
    v14 = *(_QWORD *)(v11 + 24);
    if ( v14 )
    {
      nb = *(_QWORD *)(v11 + 24);
      v15 = (void *)qalloc_or_throw(nb, v11, v13, v14);
      *(_QWORD *)(v10 + 16) = v15;
      *(_QWORD *)(v10 + 32) = nb;
      v12 = *(const void **)(v11 + 16);
      memcpy(v15, v12, nb);
      *(_QWORD *)(v10 + 24) = nb;
    }
    *(_QWORD *)(v10 + 40) = 0;
    *(_OWORD *)(v10 + 48) = 0;
    v9 = *(_QWORD *)(v11 + 48);
    if ( v9 )
    {
      na = *(_QWORD *)(v11 + 48);
      v26 = (void *)qalloc_or_throw(na, (__int64)v12, v13, v9);
      *(_QWORD *)(v10 + 40) = v26;
      *(_QWORD *)(v10 + 56) = na;
      memcpy(v26, *(const void **)(v11 + 40), na);
      *(_QWORD *)(v10 + 48) = na;
    }
    *(_QWORD *)(v10 + 64) = 0;
    copy_tinfo_t();
    ++v7;
    *(_DWORD *)(v10 + 72) = *(_DWORD *)(v11 + 72);
    if ( v7 >= v5 )
      break;
  }
  v32 = v5;
LABEL_12:
  copy_tinfo_t();
  copy_argloc();
  v17 = *(_QWORD *)(a1 + 72);
  v33 = nullptr;
  if ( v17 )
  {
    v33 = (void *)qalloc_or_throw(8 * v17, a1 + 40, 8 * v17, v16);
    memcpy(v33, *(const void **)(a1 + 64), 8 * v17);
  }
  if ( v6 != 192 && (v6 & 0xFFFFFF0F) == 0 )
    n = 0;
  else
    n = v6;
  v18 = calc_arglocs();
  if ( (_BYTE)v18 )
  {
    v25 = compare_arglocs();
    if ( !v25 )
    {
      if ( !v32 )
      {
LABEL_39:
        v27 = v6 | *(_BYTE *)(a1 + 88) & 0xF;
        if ( v6 == 192 || (v6 & 0xFFFFFF0F) != 0 )
          v27 = *(_BYTE *)(a1 + 88) & 0xF | 0xC0;
        *(_DWORD *)(a1 + 24) &= ~0x200u;
        *(_DWORD *)(a1 + 28) = n;
        *(_BYTE *)(a1 + 88) = v27;
        goto LABEL_18;
      }
      while ( !(unsigned int)compare_arglocs() )
      {
        if ( ++v25 >= v32 )
          goto LABEL_39;
      }
    }
  }
  v18 = 0;
LABEL_18:
  if ( v33 )
    qfree((__int64)v33);
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
        v22 = v21[5];
        if ( v22 )
        {
          v21[6] = 0;
          qfree(v22);
        }
        v23 = v21[2];
        if ( v23 )
        {
          v21[3] = 0;
          qfree(v23);
        }
        cleanup_argloc();
        v19 = v31;
      }
    }
    qfree(v19);
  }
  return v18;
}

