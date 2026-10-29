_QWORD *__fastcall sub_AC80(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // r14
  _QWORD *result; // rax
  __int64 v5; // rbx
  size_t v6; // r15
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 v9; // rax
  size_t v10; // r15
  __int64 v11; // rbp
  void *v12; // rax
  const char *v13; // rsi
  void *v14; // rax
  const void *v15; // rsi
  const char *v16; // rsi
  unsigned int v17; // [rsp+4h] [rbp-44h]
  _QWORD *v18; // [rsp+8h] [rbp-40h]

  v3 = a1 + 1;
  result = &a2[6 * a3];
  *((_DWORD *)a1 + 2) = 0;
  a1[2] = 0;
  a1[3] = a1 + 1;
  a1[4] = a1 + 1;
  a1[5] = 0;
  v18 = result;
  if ( result != a2 )
  {
    v5 = (__int64)a2;
    while ( 1 )
    {
      result = sub_AAC0(a1, v3, v5);
      v8 = v7;
      if ( v7 )
        break;
LABEL_6:
      v5 += 48;
      if ( v18 == (_QWORD *)v5 )
        return result;
    }
    LOBYTE(v17) = v3 == (_QWORD *)v7 || result != nullptr;
    if ( (_BYTE)v17 )
    {
LABEL_9:
      v9 = operator new(0x50u);
      v10 = *(_QWORD *)(v5 + 8);
      *(_QWORD *)(v9 + 32) = 0;
      v11 = v9;
      *(_OWORD *)(v9 + 40) = 0;
      if ( v10 )
      {
        v12 = (void *)qalloc_or_throw(v10);
        *(_QWORD *)(v11 + 32) = v12;
        v13 = *(const char **)v5;
        *(_QWORD *)(v11 + 48) = v10;
        memcpy(v12, v13, v10);
        *(_QWORD *)(v11 + 40) = v10;
      }
      v6 = *(_QWORD *)(v5 + 32);
      *(_QWORD *)(v11 + 56) = 0;
      *(_OWORD *)(v11 + 64) = 0;
      if ( v6 )
      {
        v14 = (void *)qalloc_or_throw(v6);
        *(_QWORD *)(v11 + 56) = v14;
        v15 = *(const void **)(v5 + 24);
        *(_QWORD *)(v11 + 72) = v6;
        memcpy(v14, v15, v6);
        *(_QWORD *)(v11 + 64) = v6;
      }
      result = (_QWORD *)std::_Rb_tree_insert_and_rebalance((unsigned __int8)v17, v11, v8, v3);
      ++a1[5];
      goto LABEL_6;
    }
    v16 = s1;
    if ( *(_QWORD *)(v7 + 40) )
    {
      v16 = *(const char **)(v7 + 32);
      if ( !*(_QWORD *)(v5 + 8) )
        goto LABEL_14;
    }
    else if ( !*(_QWORD *)(v5 + 8) )
    {
LABEL_14:
      v17 = (unsigned int)strcmp(s1, v16) >> 31;
      goto LABEL_9;
    }
    v17 = (unsigned int)strcmp(*(const char **)v5, v16) >> 31;
    goto LABEL_9;
  }
  return result;
}

