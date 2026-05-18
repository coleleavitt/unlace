__int64 __fastcall sub_314A0(__int64 a1, __int64 (__fastcall ***a2)(_QWORD, __int64), char a3)
{
  char v3; // r13
  unsigned int v4; // ebp
  _QWORD *v5; // rbx
  _QWORD *v6; // r14
  __int64 v7; // r15
  bool v8; // bl
  __int64 v9; // rbx
  __int64 v10; // rbp
  char v12; // [rsp+Fh] [rbp-49h]
  _QWORD *v13; // [rsp+18h] [rbp-40h]

  v3 = a3 ^ 1;
  v4 = 0;
  v5 = *(_QWORD **)(*(_QWORD *)(a1 + 304) + 88LL);
  v13 = v5;
  v6 = v5 + 2;
  (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
  v7 = v5[4];
  if ( (_QWORD *)v7 != v5 + 2 )
  {
    do
    {
      v9 = *(_QWORD *)(v7 + 32);
      if ( (a1 != v9 || v3)
        && (v10 = *(_QWORD *)(v9 + 504), sub_19A520(v10), v12 = *(_BYTE *)(v9 + 512), sub_19A570(v10), v12) )
      {
        v4 = (**a2)(a2, v9);
        v8 = v4 == 0;
        v7 = std::_Rb_tree_increment(v7);
        if ( (_QWORD *)v7 == v6 )
          break;
      }
      else
      {
        v8 = 1;
        v4 = 0;
        v7 = std::_Rb_tree_increment(v7);
        if ( (_QWORD *)v7 == v6 )
          break;
      }
    }
    while ( v8 );
  }
  (*(void (__fastcall **)(_QWORD *))(*v13 + 24LL))(v13);
  return v4;
}
