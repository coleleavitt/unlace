__int64 __fastcall sub_3ABE40(__int64 a1, unsigned __int64 a2, char a3)
{
  _QWORD *v5; // r15
  __int64 v6; // rbp
  _QWORD *v7; // rbx
  __int64 *v9; // rdx
  __int64 *v10; // rsi
  unsigned __int64 v11; // rax
  _QWORD *v12; // rdx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // rsi
  _QWORD *v17; // rdi
  _QWORD *v18; // r12
  _QWORD *v19; // r15
  _QWORD *v20; // rbx
  unsigned __int64 v21; // rax
  _QWORD *v22; // rdx
  bool v23; // al
  _QWORD *i; // rax
  __int64 v25; // rsi
  __int64 v26; // rcx
  void *v27; // rax
  char v28; // [rsp+7h] [rbp-41h]
  unsigned __int64 v29[8]; // [rsp+8h] [rbp-40h] BYREF

  v5 = *(_QWORD **)a1;
  v29[0] = a2;
  if ( !v5 )
    goto LABEL_35;
  v6 = *(_QWORD *)(a1 + 8);
  if ( !v6 )
    goto LABEL_36;
  v7 = (_QWORD *)v5[1];
  if ( v5 == v7 )
  {
LABEL_35:
    v6 = 0;
    goto LABEL_36;
  }
  v28 = 0;
  v6 = 0;
  do
  {
    while ( 1 )
    {
LABEL_5:
      v9 = (__int64 *)v7[6];
      if ( v9 )
      {
        v10 = (__int64 *)(*v9 & 0xFFFFFFFFFFFFFFFCLL);
        if ( !v10 )
          goto LABEL_20;
        if ( (*(_BYTE *)(*v9 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
        {
          do
          {
            v11 = v10[3];
            if ( a2 >= v11 )
            {
              if ( v11 >= a2 )
              {
                if ( v9 != v10 )
                {
LABEL_20:
                  if ( a3 || !*(_BYTE *)(a1 + 65) )
                  {
                    ++v6;
                    sub_3ABBF0((unsigned __int64 **)v7 + 6, v10);
                  }
                  else
                  {
                    v28 = *(_BYTE *)(a1 + 65);
                  }
                }
                break;
              }
              v10 = (__int64 *)v10[2];
            }
            else
            {
              v10 = (__int64 *)v10[1];
            }
          }
          while ( (*(_BYTE *)v10 & 2) == 0 );
        }
      }
      if ( (*v7 & 2) != 0 )
        goto LABEL_15;
      v12 = (_QWORD *)v7[2];
      if ( (*(_BYTE *)v12 & 2) != 0 )
        break;
      while ( (*(_BYTE *)v12[1] & 2) == 0 )
        v12 = (_QWORD *)v12[1];
      v7 = v12;
LABEL_15:
      if ( v5 == v7 )
        goto LABEL_16;
    }
    v14 = (_QWORD *)(*v7 & 0xFFFFFFFFFFFFFFFCLL);
    v15 = *v14;
    if ( (*v14 & 2) == 0 )
    {
      while ( (_QWORD *)v14[2] == v7 )
      {
        v7 = v14;
        v16 = v15 & 0xFFFFFFFFFFFFFFFCLL;
        v15 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v15 & 2) != 0 )
        {
          v7 = (_QWORD *)v16;
          if ( v5 != (_QWORD *)v16 )
            goto LABEL_5;
          goto LABEL_16;
        }
        v14 = (_QWORD *)v16;
      }
    }
    v7 = v14;
  }
  while ( v5 != v14 );
LABEL_16:
  if ( v28 )
  {
    sub_175140((_QWORD *)(a1 + 16), v29);
    return v6;
  }
LABEL_36:
  v17 = *(_QWORD **)(a1 + 32);
  v18 = (_QWORD *)(a1 + 24);
  v19 = (_QWORD *)(a1 + 24);
  if ( v17 )
  {
    v20 = *(_QWORD **)(a1 + 32);
    while ( 1 )
    {
      while ( 1 )
      {
        v21 = v20[4];
        if ( v21 >= a2 )
          break;
        v20 = (_QWORD *)v20[3];
        if ( !v20 )
          goto LABEL_42;
      }
      v22 = (_QWORD *)v20[2];
      if ( a2 >= v21 )
        break;
      v19 = v20;
      v20 = (_QWORD *)v20[2];
      if ( !v22 )
      {
LABEL_42:
        v23 = v19 == v18;
        goto LABEL_43;
      }
    }
    for ( i = (_QWORD *)v20[3]; i; i = (_QWORD *)i[3] )
    {
      while ( 1 )
      {
        v25 = i[2];
        if ( a2 >= i[4] )
          break;
        v19 = i;
        i = (_QWORD *)i[2];
        if ( !v25 )
          goto LABEL_50;
      }
    }
LABEL_50:
    while ( v22 )
    {
      while ( 1 )
      {
        v26 = v22[2];
        if ( v22[4] < a2 )
          break;
        v20 = v22;
        v22 = (_QWORD *)v22[2];
        if ( !v26 )
          goto LABEL_53;
      }
      v22 = (_QWORD *)v22[3];
    }
LABEL_53:
    if ( *(_QWORD **)(a1 + 40) == v20 && v18 == v19 )
      goto LABEL_45;
    while ( v20 != v19 )
    {
      v20 = (_QWORD *)std::_Rb_tree_increment();
      v27 = (void *)std::_Rb_tree_rebalance_for_erase();
      operator delete(v27, 0x28u);
      --*(_QWORD *)(a1 + 56);
    }
  }
  else
  {
    v23 = 1;
LABEL_43:
    if ( *(_QWORD **)(a1 + 40) == v19 && v23 )
    {
LABEL_45:
      sub_3A5030(v17);
      *(_QWORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 40) = v18;
      *(_QWORD *)(a1 + 48) = v18;
      *(_QWORD *)(a1 + 56) = 0;
    }
  }
  return v6;
}

