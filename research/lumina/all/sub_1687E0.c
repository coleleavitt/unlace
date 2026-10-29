unsigned __int64 __fastcall sub_1687E0(_QWORD *a1, unsigned __int8 *a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int8 *v5; // r12
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  int *v8; // r14
  int v9; // r13d
  int *v10; // rax
  bool v11; // r15
  __int64 v12; // rax
  unsigned __int8 v13; // r13
  __int64 v14; // r15
  __int64 v15; // r14
  unsigned __int8 *v16; // rax
  _QWORD **v17; // rbx
  void *v18; // rdi
  __int64 v20; // rax
  int v22; // [rsp+28h] [rbp-70h] BYREF
  void *v23; // [rsp+30h] [rbp-68h]
  int *v24; // [rsp+38h] [rbp-60h]
  int *v25; // [rsp+40h] [rbp-58h]
  __int64 v26; // [rsp+48h] [rbp-50h]
  unsigned __int64 v27; // [rsp+58h] [rbp-40h]

  v5 = a2;
  v6 = a1[10] + a3;
  v27 = __readfsqword(0x28u);
  v22 = 0;
  v24 = &v22;
  v25 = &v22;
  v23 = nullptr;
  v26 = 0;
  if ( a1[11] < v6 )
  {
    a2 = (unsigned __int8 *)a1[9];
    a1[9] = sub_1987B0(a1 + 9, a2, v6, 24);
    if ( a3 )
      goto LABEL_3;
LABEL_20:
    v17 = (_QWORD **)v23;
    if ( v23 )
    {
      do
      {
        sub_1685C0(v17[3]);
        v18 = v17;
        v17 = (_QWORD **)v17[2];
        operator delete(v18, 0x28u);
      }
      while ( v17 );
    }
  }
  else if ( a3 )
  {
LABEL_3:
    v7 = 0;
    while ( 1 )
    {
      if ( !*((_QWORD *)v5 + 1) )
      {
        if ( !unk_2439A0 )
          sub_198E10(1619);
LABEL_31:
        BUG();
      }
      v8 = (int *)v23;
      v9 = *v5;
      if ( v23 )
        break;
      v8 = &v22;
      if ( v24 != &v22 )
        goto LABEL_24;
      v8 = &v22;
      v11 = 1;
LABEL_17:
      v12 = operator new(0x28u);
      *(_DWORD *)(v12 + 32) = v9;
      std::_Rb_tree_insert_and_rebalance(v11, v12, v8, &v22);
      v6 = a1[10];
      ++v26;
      v13 = *v5;
      v14 = *((_QWORD *)v5 + 1);
      v15 = *((_QWORD *)v5 + 2);
      a2 = (unsigned __int8 *)a1[9];
      if ( a1[11] < v6 + 1 )
      {
        v20 = sub_1987B0(a1 + 9, a2, v6 + 1, 24);
        a1[9] = v20;
        v6 = a1[10];
        a2 = (unsigned __int8 *)v20;
      }
      ++v7;
      v5 += 24;
      v16 = &a2[24 * v6];
      *v16 = v13;
      *((_QWORD *)v16 + 1) = v14;
      *((_QWORD *)v16 + 2) = v15;
      ++a1[10];
      if ( v7 >= a3 )
        goto LABEL_20;
    }
    while ( 1 )
    {
      v6 = (unsigned int)v8[8];
      v10 = *((int **)v8 + 3);
      if ( v9 < (int)v6 )
        v10 = *((int **)v8 + 2);
      LOBYTE(a2) = v9 < (int)v6;
      if ( !v10 )
        break;
      v8 = v10;
    }
    if ( v9 < (int)v6 )
    {
      if ( v24 == v8 )
      {
LABEL_15:
        v11 = 1;
        if ( v8 != &v22 )
          v11 = v9 < v8[8];
        goto LABEL_17;
      }
LABEL_24:
      LODWORD(v6) = *(_DWORD *)(std::_Rb_tree_decrement(v8, a2, v6, a4, a5) + 32);
    }
    if ( v9 <= (int)v6 )
    {
      if ( !unk_2439A0 )
        sub_198E10(1620);
      goto LABEL_31;
    }
    goto LABEL_15;
  }
  return v27 - __readfsqword(0x28u);
}
