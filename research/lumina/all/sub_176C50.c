void __fastcall sub_176C50(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  const char *v6; // r14
  const char *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rbp
  size_t v12; // r15
  void *v13; // rax
  const char *v14; // rsi
  unsigned int v15; // [rsp+4h] [rbp-44h]

  if ( a3 != a2 )
  {
    v5 = a2;
    v6 = (const char *)(a1 + 1);
    while ( 1 )
    {
      v7 = sub_172AE0(a1, v6, v5 + 32, a4, a5);
      v9 = v8;
      if ( v8 )
        break;
LABEL_4:
      v5 = std::_Rb_tree_increment(v5);
      if ( v5 == a3 )
        return;
    }
    LOBYTE(v15) = v6 == (const char *)v8 || v7 != nullptr;
    if ( (_BYTE)v15 )
    {
LABEL_7:
      v10 = operator new(0x58u);
      *(_QWORD *)(v10 + 32) = 0;
      v11 = v10;
      *(_OWORD *)(v10 + 40) = 0;
      v12 = *(_QWORD *)(v5 + 40);
      if ( v12 )
      {
        v13 = (void *)sub_198760(*(_QWORD *)(v5 + 40));
        *(_QWORD *)(v11 + 32) = v13;
        *(_QWORD *)(v11 + 48) = v12;
        memcpy(v13, *(const void **)(v5 + 32), v12);
        *(_QWORD *)(v11 + 40) = v12;
      }
      *(_BYTE *)(v11 + 56) = 2;
      *(_QWORD *)(v11 + 80) = 0;
      *(_OWORD *)(v11 + 64) = 0;
      sub_176730((unsigned __int8 *)(v11 + 56), (unsigned __int8 *)(v5 + 56));
      std::_Rb_tree_insert_and_rebalance((unsigned __int8)v15, v11, v9, v6);
      ++a1[5];
      goto LABEL_4;
    }
    v14 = s1;
    if ( *(_QWORD *)(v8 + 40) )
    {
      v14 = *(const char **)(v8 + 32);
      if ( !*(_QWORD *)(v5 + 40) )
        goto LABEL_12;
    }
    else if ( !*(_QWORD *)(v5 + 40) )
    {
LABEL_12:
      v15 = (unsigned int)strcmp(s1, v14) >> 31;
      goto LABEL_7;
    }
    v15 = (unsigned int)strcmp(*(const char **)(v5 + 32), v14) >> 31;
    goto LABEL_7;
  }
}
