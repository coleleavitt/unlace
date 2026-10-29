unsigned __int64 __fastcall sub_365000(_QWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rax
  _QWORD *v6; // r13
  _QWORD *v7; // r12
  __int64 v8; // rdi
  __int64 v9; // rdx
  unsigned __int64 v10; // r15
  __int64 v11; // rbx
  void *v12; // rax
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 i; // rbx
  __int64 v17; // r15
  __int64 v18; // rdx
  _QWORD **v19; // rbx
  void *v20; // rdi
  __int64 v22; // [rsp+8h] [rbp-90h]
  _BYTE v23[8]; // [rsp+20h] [rbp-78h] BYREF
  int v24; // [rsp+28h] [rbp-70h] BYREF
  void *v25; // [rsp+30h] [rbp-68h]
  int *v26; // [rsp+38h] [rbp-60h]
  int *v27; // [rsp+40h] [rbp-58h]
  __int64 v28; // [rsp+48h] [rbp-50h]
  unsigned __int64 v29; // [rsp+58h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  if ( a1 )
  {
    v4 = (_QWORD *)a1[2];
    v22 = a3 - a2;
    v6 = a1 + 1;
    v24 = 0;
    v25 = nullptr;
    v26 = &v24;
    v27 = &v24;
    v28 = 0;
    if ( v4 )
    {
      v7 = a1 + 1;
      do
      {
        while ( 1 )
        {
          v8 = v4[2];
          v9 = v4[3];
          if ( v4[4] < a2 )
            break;
          v7 = v4;
          v4 = (_QWORD *)v4[2];
          if ( !v8 )
            goto LABEL_7;
        }
        v4 = (_QWORD *)v4[3];
      }
      while ( v9 );
LABEL_7:
      if ( v6 != v7 )
      {
        v10 = a4 + a2;
        while ( 1 )
        {
          v13 = v7[4];
          if ( v13 >= v10 )
            break;
          v14 = v22 + v13;
          sub_362680((__int64)v23, v14);
          if ( v15 )
          {
            *(_QWORD *)(operator new(0x28u) + 32) = v14;
            std::_Rb_tree_insert_and_rebalance();
            ++v28;
          }
          v11 = std::_Rb_tree_increment();
          v12 = (void *)std::_Rb_tree_rebalance_for_erase();
          operator delete(v12, 0x28u);
          --a1[5];
          if ( v6 == (_QWORD *)v11 )
            break;
          v7 = (_QWORD *)v11;
        }
        for ( i = (__int64)v26; (int *)i != &v24; i = std::_Rb_tree_increment() )
        {
          if ( !a1[5] || (v17 = a1[4], *(_QWORD *)(v17 + 32) >= *(_QWORD *)(i + 32)) )
          {
            sub_362680((__int64)a1, *(_QWORD *)(i + 32));
            v17 = v18;
          }
          if ( v17 )
          {
            *(_QWORD *)(operator new(0x28u) + 32) = *(_QWORD *)(i + 32);
            std::_Rb_tree_insert_and_rebalance();
            ++a1[5];
          }
        }
        v19 = (_QWORD **)v25;
        if ( v25 )
        {
          do
          {
            sub_364350(v19[3]);
            v20 = v19;
            v19 = (_QWORD **)v19[2];
            operator delete(v20, 0x28u);
          }
          while ( v19 );
        }
      }
    }
  }
  return v29 - __readfsqword(0x28u);
}

