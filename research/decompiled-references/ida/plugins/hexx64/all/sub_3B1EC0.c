__int64 __fastcall sub_3B1EC0(__int64 a1, unsigned __int64 a2, char a3, double a4)
{
  _QWORD *v6; // r15
  __int64 v7; // rbp
  _QWORD *v8; // rbx
  __int64 *v10; // rdx
  __int64 *v11; // rsi
  unsigned __int64 v12; // rax
  _QWORD *v13; // rdx
  _QWORD *v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // rsi
  _QWORD *v18; // rdi
  _QWORD *v19; // r12
  _QWORD *v20; // r15
  _QWORD *v21; // rbx
  unsigned __int64 v22; // rax
  _QWORD *v23; // rdx
  bool v24; // al
  _QWORD *i; // rax
  __int64 v26; // rsi
  __int64 v27; // rcx
  void *v28; // rax
  char v29; // [rsp+7h] [rbp-41h]
  unsigned __int64 v30[8]; // [rsp+8h] [rbp-40h] BYREF

  v6 = *(_QWORD **)a1;
  v30[0] = a2;
  if ( !v6 )
    goto LABEL_35;
  v7 = *(_QWORD *)(a1 + 8);
  if ( !v7 )
    goto LABEL_36;
  v8 = (_QWORD *)v6[1];
  if ( v6 == v8 )
  {
LABEL_35:
    v7 = 0;
    goto LABEL_36;
  }
  v29 = 0;
  v7 = 0;
  do
  {
    while ( 1 )
    {
LABEL_5:
      v10 = (__int64 *)v8[6];
      if ( v10 )
      {
        v11 = (__int64 *)(*v10 & 0xFFFFFFFFFFFFFFFCLL);
        if ( !v11 )
          goto LABEL_20;
        if ( (*(_BYTE *)(*v10 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
        {
          do
          {
            v12 = v11[3];
            if ( a2 >= v12 )
            {
              if ( v12 >= a2 )
              {
                if ( v10 != v11 )
                {
LABEL_20:
                  if ( a3 || !*(_BYTE *)(a1 + 65) )
                  {
                    ++v7;
                    sub_3B1C70((unsigned __int64 **)v8 + 6, v11, a4);
                  }
                  else
                  {
                    v29 = *(_BYTE *)(a1 + 65);
                  }
                }
                break;
              }
              v11 = (__int64 *)v11[2];
            }
            else
            {
              v11 = (__int64 *)v11[1];
            }
          }
          while ( (*(_BYTE *)v11 & 2) == 0 );
        }
      }
      if ( (*v8 & 2) != 0 )
        goto LABEL_15;
      v13 = (_QWORD *)v8[2];
      if ( (*(_BYTE *)v13 & 2) != 0 )
        break;
      while ( (*(_BYTE *)v13[1] & 2) == 0 )
        v13 = (_QWORD *)v13[1];
      v8 = v13;
LABEL_15:
      if ( v6 == v8 )
        goto LABEL_16;
    }
    v15 = (_QWORD *)(*v8 & 0xFFFFFFFFFFFFFFFCLL);
    v16 = *v15;
    if ( (*v15 & 2) == 0 )
    {
      while ( (_QWORD *)v15[2] == v8 )
      {
        v8 = v15;
        v17 = v16 & 0xFFFFFFFFFFFFFFFCLL;
        v16 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v16 & 2) != 0 )
        {
          v8 = (_QWORD *)v17;
          if ( v6 != (_QWORD *)v17 )
            goto LABEL_5;
          goto LABEL_16;
        }
        v15 = (_QWORD *)v17;
      }
    }
    v8 = v15;
  }
  while ( v6 != v15 );
LABEL_16:
  if ( v29 )
  {
    sub_179D00((_QWORD *)(a1 + 16), v30);
    return v7;
  }
LABEL_36:
  v18 = *(_QWORD **)(a1 + 32);
  v19 = (_QWORD *)(a1 + 24);
  v20 = (_QWORD *)(a1 + 24);
  if ( v18 )
  {
    v21 = *(_QWORD **)(a1 + 32);
    while ( 1 )
    {
      while ( 1 )
      {
        v22 = v21[4];
        if ( v22 >= a2 )
          break;
        v21 = (_QWORD *)v21[3];
        if ( !v21 )
          goto LABEL_42;
      }
      v23 = (_QWORD *)v21[2];
      if ( a2 >= v22 )
        break;
      v20 = v21;
      v21 = (_QWORD *)v21[2];
      if ( !v23 )
      {
LABEL_42:
        v24 = v20 == v19;
        goto LABEL_43;
      }
    }
    for ( i = (_QWORD *)v21[3]; i; i = (_QWORD *)i[3] )
    {
      while ( 1 )
      {
        v26 = i[2];
        if ( a2 >= i[4] )
          break;
        v20 = i;
        i = (_QWORD *)i[2];
        if ( !v26 )
          goto LABEL_50;
      }
    }
LABEL_50:
    while ( v23 )
    {
      while ( 1 )
      {
        v27 = v23[2];
        if ( v23[4] < a2 )
          break;
        v21 = v23;
        v23 = (_QWORD *)v23[2];
        if ( !v27 )
          goto LABEL_53;
      }
      v23 = (_QWORD *)v23[3];
    }
LABEL_53:
    if ( *(_QWORD **)(a1 + 40) == v21 && v19 == v20 )
      goto LABEL_45;
    while ( v21 != v20 )
    {
      v21 = (_QWORD *)std::_Rb_tree_increment();
      v28 = (void *)std::_Rb_tree_rebalance_for_erase();
      operator delete(v28, 0x28u);
      --*(_QWORD *)(a1 + 56);
    }
  }
  else
  {
    v24 = 1;
LABEL_43:
    if ( *(_QWORD **)(a1 + 40) == v20 && v24 )
    {
LABEL_45:
      sub_3AB0B0(v18);
      *(_QWORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 40) = v19;
      *(_QWORD *)(a1 + 48) = v19;
      *(_QWORD *)(a1 + 56) = 0;
    }
  }
  return v7;
}

