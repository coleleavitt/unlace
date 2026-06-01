void __fastcall sub_59BA0(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v4; // rbp
  _QWORD *v5; // rbx
  __int64 v6; // r14
  _QWORD *v7; // rdx
  unsigned __int64 v8; // rdi
  _QWORD *v9; // r8
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // r15
  __int64 v13; // r14
  __int64 v14; // rax
  unsigned __int64 v15; // rdi
  _QWORD *v16; // rax
  _QWORD *v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned __int64 *v20; // rsi
  __int64 (*v21)(); // rax

  v4 = a1 + 176;
  v5 = a2 + 1;
  v6 = a2[3];
  if ( a2 + 1 != (_QWORD *)v6 )
  {
    do
    {
      v7 = (_QWORD *)a1[177];
      v8 = *(_QWORD *)(v6 + 40);
      if ( !v7 )
        goto LABEL_9;
      v9 = v4;
      do
      {
        while ( 1 )
        {
          v10 = v7[2];
          v11 = v7[3];
          if ( v7[4] < v8 )
            break;
          v9 = v7;
          v7 = (_QWORD *)v7[2];
          if ( !v10 )
            goto LABEL_7;
        }
        v7 = (_QWORD *)v7[3];
      }
      while ( v11 );
LABEL_7:
      if ( v9 == v4 || v8 < v9[4] )
LABEL_9:
        sub_59020(a1, v6 + 40);
      v6 = std::_Rb_tree_increment();
    }
    while ( v5 != (_QWORD *)v6 );
  }
  v12 = a1[178];
  while ( (_QWORD *)v12 != v4 )
  {
    while ( 1 )
    {
      v13 = v12;
      v14 = std::_Rb_tree_increment();
      v15 = *(_QWORD *)(v12 + 40);
      v12 = v14;
      v16 = (_QWORD *)a2[2];
      if ( v16 )
      {
        v17 = v5;
        do
        {
          while ( 1 )
          {
            v18 = v16[2];
            v19 = v16[3];
            if ( v16[4] < v15 )
              break;
            v17 = v16;
            v16 = (_QWORD *)v16[2];
            if ( !v18 )
              goto LABEL_18;
          }
          v16 = (_QWORD *)v16[3];
        }
        while ( v19 );
LABEL_18:
        if ( v5 != v17 && v15 >= v17[4] )
          break;
      }
      v20 = (unsigned __int64 *)(v13 + 40);
      v21 = *(__int64 (**)())(*a1 + 768LL);
      if ( v21 != sub_18B50 )
      {
        v20 = (unsigned __int64 *)(v13 + 40);
        if ( !((unsigned __int8 (__fastcall *)(_QWORD *))v21)(a1) )
          break;
      }
      sub_598E0((__int64)a1, v20);
      if ( (_QWORD *)v12 == v4 )
        return;
    }
  }
}

