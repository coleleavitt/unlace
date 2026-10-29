_QWORD *__fastcall sub_696A0(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v6; // rsi
  _QWORD *v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // r15
  __int64 v16; // rax
  _BOOL8 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // r14
  __int64 i; // r13
  __int64 v22; // r12
  __int64 v23; // rdx
  __int64 v24; // r15
  __int64 j; // rbx
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 v31; // rax
  _QWORD *v32; // [rsp+8h] [rbp-40h]

  v6 = a3 + 1;
  v7 = (_QWORD *)operator new(0x318u);
  v7[4] = *a3;
  sub_68A40((__int64)(v7 + 5), (__int64)(a3 + 1), v8, v9, v10);
  v14 = v7[4];
  if ( a1 + 1 == a2 )
  {
    if ( a1[5] )
    {
      v11 = a1[4];
      a2 = nullptr;
      if ( *(_QWORD *)(v11 + 32) < v14 )
        goto LABEL_6;
    }
LABEL_5:
    a2 = sub_64D80((__int64)a1, v14, v11, v12, v13);
    goto LABEL_6;
  }
  v15 = a2[4];
  if ( v14 < v15 )
  {
    v11 = (unsigned __int64)a2;
    if ( (_QWORD *)a1[3] == a2 )
      goto LABEL_6;
    v16 = std::_Rb_tree_decrement(a2, v6, a2, v12, v13);
    v11 = v16;
    if ( *(_QWORD *)(v16 + 32) >= v14 )
      goto LABEL_5;
    if ( *(_QWORD *)(v16 + 24) )
      v11 = (unsigned __int64)a2;
    else
      a2 = nullptr;
LABEL_6:
    if ( v11 )
    {
      if ( a1 + 1 == (_QWORD *)v11 || a2 )
      {
        v17 = 1;
LABEL_10:
        std::_Rb_tree_insert_and_rebalance(v17, v7, v11, a1 + 1);
        ++a1[5];
        return v7;
      }
      goto LABEL_43;
    }
    goto LABEL_12;
  }
  if ( v15 >= v14 )
    goto LABEL_12;
  if ( (_QWORD *)a1[4] != a2 )
  {
    v31 = std::_Rb_tree_increment(a2);
    v11 = v31;
    if ( v14 < *(_QWORD *)(v31 + 32) )
    {
      if ( !a2[3] )
      {
        v11 = (unsigned __int64)a2;
        if ( a2 )
          goto LABEL_44;
        goto LABEL_12;
      }
      a2 = (_QWORD *)v31;
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v11 = (unsigned __int64)a2;
  if ( a2 )
  {
LABEL_43:
    v15 = *(_QWORD *)(v11 + 32);
LABEL_44:
    v17 = v14 < v15;
    goto LABEL_10;
  }
LABEL_12:
  v32 = a2;
  if ( v7 )
  {
    qfree(v7[97]);
    sub_E270((__int64)(v7 + 42));
    v18 = v7[31];
    if ( v18 )
    {
      v7[32] = 0;
      qfree(v18);
    }
    v19 = v7[28];
    if ( v19 )
    {
      v20 = v7[29];
      if ( v20 )
      {
        for ( i = 0; i != v20; ++i )
        {
          v22 = v19 + 40 * i;
          v23 = *(_QWORD *)(v22 + 16);
          if ( v23 )
          {
            v24 = *(_QWORD *)(v22 + 24);
            if ( v24 )
            {
              for ( j = 0; j != v24; ++j )
              {
                v26 = v23 + 72 * j;
                v27 = *(_QWORD *)(v26 + 32);
                if ( v27 )
                {
                  *(_QWORD *)(v26 + 40) = 0;
                  qfree(v27);
                  v23 = *(_QWORD *)(v22 + 16);
                }
              }
            }
            *(_QWORD *)(v22 + 24) = 0;
            qfree(v23);
            v19 = v7[28];
          }
        }
      }
      v7[29] = 0;
      qfree(v19);
    }
    v28 = v7[25];
    if ( v28 )
    {
      v7[26] = 0;
      qfree(v28);
    }
    v29 = v7[11];
    if ( v29 )
    {
      v7[12] = 0;
      qfree(v29);
    }
    operator delete(v7, 0x318u);
  }
  return v32;
}
