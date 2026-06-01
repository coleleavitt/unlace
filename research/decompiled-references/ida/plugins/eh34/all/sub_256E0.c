__int64 __fastcall sub_256E0(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r12
  int v3; // ebp
  __int64 v5; // r8
  __int64 (__fastcall *v6)(__int64); // rax
  __int64 result; // rax
  unsigned __int64 v8; // r14
  _QWORD *v9; // rax
  _QWORD *v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r15
  unsigned __int8 (__fastcall *hexdsp)(__int64, __int64, _QWORD); // rax
  _QWORD *v15; // rdi
  _QWORD *v16; // r13
  _QWORD *v17; // r15
  unsigned __int64 v18; // rax
  _QWORD *v19; // rdx
  bool v20; // al
  _QWORD *i; // rax
  __int64 v22; // r9
  __int64 v23; // rsi
  _QWORD *v24; // rdi
  void *v25; // rax

  v2 = a2 + 1;
  v3 = 0;
  v5 = *(_QWORD *)(a1 + 8);
  while ( 1 )
  {
    v6 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 56LL);
    if ( v6 != sub_B840 )
      break;
    result = *(unsigned int *)(v5 + 80);
    if ( v3 >= (int)result )
      return result;
LABEL_4:
    v5 = *(_QWORD *)(a1 + 8);
    v8 = *(_QWORD *)(*(_QWORD *)(v5 + 72) + ((__int64)v3 << 6));
    v9 = (_QWORD *)a2[2];
    if ( !v9 )
      goto LABEL_13;
    v10 = v2;
    do
    {
      while ( 1 )
      {
        v11 = v9[2];
        v12 = v9[3];
        if ( v9[4] < v8 )
          break;
        v10 = v9;
        v9 = (_QWORD *)v9[2];
        if ( !v11 )
          goto LABEL_9;
      }
      v9 = (_QWORD *)v9[3];
    }
    while ( v12 );
LABEL_9:
    if ( v2 == v10 || v8 < v10[4] )
    {
LABEL_13:
      ++v3;
    }
    else
    {
      v13 = *(_QWORD *)(a1 + 16);
      hexdsp = (unsigned __int8 (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(v10, v11);
      if ( !hexdsp(213, v13, (unsigned int)v3) )
      {
        v5 = *(_QWORD *)(a1 + 8);
        goto LABEL_13;
      }
      v15 = (_QWORD *)a2[2];
      v16 = v2;
      if ( !v15 )
      {
        v20 = 1;
LABEL_21:
        if ( (_QWORD *)a2[3] == v16 && v20 )
        {
LABEL_23:
          sub_24E90(v15);
          a2[2] = 0;
          a2[3] = v2;
          a2[4] = v2;
          a2[5] = 0;
        }
LABEL_24:
        v5 = *(_QWORD *)(a1 + 8);
        goto LABEL_25;
      }
      v17 = (_QWORD *)a2[2];
      while ( 1 )
      {
        while ( 1 )
        {
          v18 = v17[4];
          if ( v18 >= v8 )
            break;
          v17 = (_QWORD *)v17[3];
          if ( !v17 )
            goto LABEL_20;
        }
        v19 = (_QWORD *)v17[2];
        if ( v8 >= v18 )
          break;
        v16 = v17;
        v17 = (_QWORD *)v17[2];
        if ( !v19 )
        {
LABEL_20:
          v20 = v2 == v16;
          goto LABEL_21;
        }
      }
      for ( i = (_QWORD *)v17[3]; i; i = (_QWORD *)i[3] )
      {
        while ( 1 )
        {
          v22 = i[2];
          if ( v8 >= i[4] )
            break;
          v16 = i;
          i = (_QWORD *)i[2];
          if ( !v22 )
            goto LABEL_32;
        }
      }
LABEL_32:
      while ( v19 )
      {
        while ( 1 )
        {
          v23 = v19[2];
          if ( v19[4] < v8 )
            break;
          v17 = v19;
          v19 = (_QWORD *)v19[2];
          if ( !v23 )
            goto LABEL_35;
        }
        v19 = (_QWORD *)v19[3];
      }
LABEL_35:
      if ( (_QWORD *)a2[3] == v17 )
      {
        if ( v2 == v16 )
          goto LABEL_23;
        if ( v16 != v17 )
          goto LABEL_38;
        goto LABEL_24;
      }
      while ( v16 != v17 )
      {
LABEL_38:
        v24 = v17;
        v17 = (_QWORD *)std::_Rb_tree_increment(v17);
        v25 = (void *)std::_Rb_tree_rebalance_for_erase(v24, v2);
        operator delete(v25, 0x28u);
        --a2[5];
      }
      v5 = *(_QWORD *)(a1 + 8);
LABEL_25:
      ++v3;
    }
  }
  result = v6(v5);
  if ( v3 < (int)result )
    goto LABEL_4;
  return result;
}

