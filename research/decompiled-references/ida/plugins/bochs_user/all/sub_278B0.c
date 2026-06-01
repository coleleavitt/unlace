void __fastcall sub_278B0(_QWORD *a1)
{
  void *v2; // rbx
  void *v3; // rbx
  __int64 v4; // rdi
  _QWORD *i; // rbx
  _QWORD *v6; // rdi

  if ( a1[7] )
  {
    qsem_free();
    a1[7] = 0;
  }
  if ( a1[8] )
  {
    qsem_free();
    a1[8] = 0;
  }
  if ( a1[16] )
  {
    qfclose();
    a1[16] = 0;
  }
  if ( !--dword_753E0 )
  {
    v2 = qword_753E8;
    if ( qword_753E8 )
    {
      sub_26540(*((void **)qword_753E8 + 2));
      operator delete(v2, 0x30u);
    }
    qword_753E8 = nullptr;
  }
  v3 = (void *)a1[1];
  if ( v3 )
  {
    sub_41710(a1[1]);
    operator delete(v3, 0x68u);
  }
  v4 = a1[13];
  a1[9] = 0;
  if ( v4 )
  {
    a1[14] = 0;
    qfree();
  }
  for ( i = (_QWORD *)a1[10]; a1 + 10 != i; --a1[12] )
  {
    v6 = i;
    i = (_QWORD *)*i;
    *(_QWORD *)v6[1] = i;
    i[1] = v6[1];
    qfree();
  }
  if ( a1[2] )
  {
    a1[3] = 0;
    qfree();
  }
}

