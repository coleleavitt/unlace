unsigned __int64 __fastcall sub_31ED0(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 i; // rax
  __int64 v3; // r15
  __int64 j; // rbp
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbp
  void *v16; // rax
  __int64 v18; // [rsp+18h] [rbp-470h]
  __int64 v19; // [rsp+18h] [rbp-470h]
  char s[1032]; // [rsp+40h] [rbp-448h] BYREF
  unsigned __int64 v21; // [rsp+448h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  v1 = (__int64 *)sub_20BD0(*(_QWORD *)(a1 + 2616));
  for ( i = *(_QWORD *)(a1 + 2704); *(_QWORD *)(i + 304); i = *(_QWORD *)(a1 + 2704) )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(i + 288) + 40LL);
    qsnprintf();
    qstrlwr();
    strlen(s);
    for ( j = *(_QWORD *)(v3 + 684); j != v3 + 668; j = std::_Rb_tree_increment() )
    {
      if ( *(_QWORD *)(j + 40) && **(_BYTE **)(j + 32) == 35 )
        qsnprintf();
      else
        qstrncpy();
      v5 = qstrdup();
      v6 = v1[3];
      v7 = v5;
      v8 = v1[4];
      if ( v1[5] < (unsigned __int64)(v8 + 1) )
      {
        v19 = v7;
        v14 = qvector_reserve();
        v7 = v19;
        v1[3] = v14;
        v6 = v14;
        v8 = v1[4];
      }
      *(_QWORD *)(v6 + 8 * v8) = v7;
      v9 = v1[1];
      v10 = v1[2];
      ++v1[4];
      v11 = *(_QWORD *)(v3 + 820) + *(unsigned int *)(j + 80);
      v12 = *v1;
      if ( v10 < v9 + 1 )
      {
        v18 = *(_QWORD *)(v3 + 820) + *(unsigned int *)(j + 80);
        v13 = qvector_reserve();
        v11 = v18;
        *v1 = v13;
        v12 = v13;
        v9 = v1[1];
      }
      *(_QWORD *)(v12 + 8 * v9) = v11;
      ++v1[1];
    }
    v15 = *(_QWORD *)(a1 + 2704);
    v16 = (void *)std::_Rb_tree_rebalance_for_erase();
    operator delete(v16, 0x30u);
    --*(_QWORD *)(v15 + 304);
  }
  return v21 - __readfsqword(0x28u);
}

