__int64 __fastcall sub_F8C40(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rbp
  int v4; // ebx
  unsigned __int64 v5; // r14
  _QWORD *v6; // rdx
  __int64 v7; // r12
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // eax
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // rsi
  _QWORD *v17; // rbx
  _QWORD *v18; // r12
  _QWORD *v19; // rsi
  _QWORD *v20; // rax
  unsigned __int64 v21; // rdx
  char v22; // cl
  _QWORD *v23; // rax
  __int64 v24; // rax
  _QWORD v25[9]; // [rsp+0h] [rbp-48h] BYREF

  v25[1] = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 != 8 )
    return 0;
  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_DWORD *)(v3 + 280) & 4;
  if ( v4 )
    return 0;
  if ( (*(_DWORD *)(v3 + 20) & 0xFFFFFFF0) == 64 || (*(_DWORD *)(v3 + 20) & 0xFFFFFFF0) == 208 )
    return 0;
  v5 = *(_QWORD *)v3;
  if ( *(_QWORD *)v3 == -1 )
    return 0;
  v6 = **(_QWORD ***)(a1 + 48);
  if ( !v6 )
    return 0;
  v7 = 24;
  v8 = *v6 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v8 )
  {
LABEL_16:
    if ( *(int *)(v7 + 32) < 0 )
    {
      if ( !under_debugger )
        sub_383060(0xC9DDu, a3);
      BUG();
    }
    v13 = *(int *)(v7 + 32);
    v14 = *(_QWORD *)(v3 + 32);
    if ( v13 < v14 )
    {
      sub_82440((__int64 *)(v3 + 24), v13);
      v14 = *(_QWORD *)(v3 + 32);
    }
    v15 = 0;
    if ( *(_QWORD *)(v7 + 16) )
    {
      do
      {
        while ( 1 )
        {
          v16 = *(int *)(*(_QWORD *)(v7 + 8) + 4 * v15);
          if ( v16 < v14 )
            break;
          v15 = ++v4;
          if ( (unsigned __int64)v4 >= *(_QWORD *)(v7 + 16) )
            goto LABEL_24;
        }
        ++v4;
        sub_F8B40(v3, v16, a3);
        v14 = *(_QWORD *)(v3 + 32);
        v15 = v4;
      }
      while ( (unsigned __int64)v4 < *(_QWORD *)(v7 + 16) );
    }
LABEL_24:
    if ( v14 < *(int *)(v3 + 8) )
      *(_DWORD *)(v3 + 8) = v14;
    if ( *(_DWORD *)(v3 + 20) == 128 )
    {
      if ( v14 )
      {
        v24 = *(_QWORD *)(v7 + 16);
        if ( v24 && !*(_DWORD *)(*(_QWORD *)(v7 + 8) + 4 * v24 - 4) )
          *(_DWORD *)(v3 + 20) = 80;
      }
      else
      {
        *(_DWORD *)(v3 + 20) = 32;
      }
    }
    v17 = *(_QWORD **)(a1 + 72);
    v18 = (_QWORD *)(a1 + 64);
    if ( v17 )
    {
      v19 = (_QWORD *)(a1 + 64);
      v20 = *(_QWORD **)(a1 + 72);
      do
      {
        if ( v20[4] >= v5 )
        {
          v19 = v20;
          v20 = (_QWORD *)v20[2];
        }
        else
        {
          v20 = (_QWORD *)v20[3];
        }
      }
      while ( v20 );
      if ( v18 != v19 && v5 >= v19[4] )
      {
LABEL_13:
        v10 = *(_QWORD *)(a1 + 16);
        v11 = *(_DWORD *)(v10 + 24);
        BYTE1(v11) &= ~2u;
        LOBYTE(v11) = v11 | 0x80;
        *(_DWORD *)(v10 + 24) = v11;
        return 0;
      }
      while ( 1 )
      {
        v21 = v17[4];
        v22 = 0;
        v23 = (_QWORD *)v17[3];
        if ( v5 < v21 )
        {
          v23 = (_QWORD *)v17[2];
          v22 = 1;
        }
        if ( !v23 )
          break;
        v17 = v23;
      }
      if ( !v22 )
      {
LABEL_38:
        if ( v21 >= v5 )
          goto LABEL_40;
        goto LABEL_39;
      }
      if ( *(_QWORD **)(a1 + 80) != v17 )
      {
        v21 = *(_QWORD *)(std::_Rb_tree_decrement() + 32);
        goto LABEL_38;
      }
    }
    else if ( v18 != *(_QWORD **)(a1 + 80) && *(_QWORD *)(std::_Rb_tree_decrement() + 32) >= v5 )
    {
LABEL_40:
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 757LL) & 1) == 0 )
      {
        sub_336290(v25, v3);
        if ( (unsigned __int8)sub_F34C0(*(_QWORD *)(a1 + 8), v5, v25, 0, a3) )
          *(_BYTE *)(a1 + 104) = 1;
        clear_tinfo_t();
      }
      goto LABEL_13;
    }
LABEL_39:
    *(_QWORD *)(operator new(0x28u) + 32) = v5;
    std::_Rb_tree_insert_and_rebalance();
    ++*(_QWORD *)(a1 + 96);
    goto LABEL_40;
  }
  while ( (*(_BYTE *)v8 & 2) == 0 )
  {
    v9 = *(_QWORD *)(v8 + 24);
    v7 = v8 + 24;
    if ( v5 < v9 )
    {
      v8 = *(_QWORD *)(v8 + 8);
    }
    else
    {
      if ( v9 >= v5 )
      {
        if ( v6 == (_QWORD *)v8 )
          return 0;
        goto LABEL_16;
      }
      v8 = *(_QWORD *)(v8 + 16);
    }
  }
  return 0;
}

