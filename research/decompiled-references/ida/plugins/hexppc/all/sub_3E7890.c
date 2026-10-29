__int64 __fastcall sub_3E7890(_QWORD *a1)
{
  void *v2; // rdi
  void (*v3)(void); // rax
  __int64 v4; // rdi
  __int64 v5; // rdi

  *a1 = off_4D9AE8;
  v2 = (void *)a1[564];
  if ( v2 )
  {
    v3 = *(void (**)(void))(*(_QWORD *)v2 + 8LL);
    if ( (char *)v3 == (char *)sub_3E6020 )
      operator delete(v2, 0x10u);
    else
      v3();
  }
  v4 = a1[557];
  a1[564] = 0;
  if ( v4 )
  {
    a1[558] = 0;
    qfree();
  }
  v5 = a1[41];
  *a1 = off_4D9030;
  if ( v5 )
  {
    a1[42] = 0;
    qfree();
  }
  if ( a1[38] )
  {
    a1[39] = 0;
    qfree();
  }
  if ( a1[35] )
  {
    a1[36] = 0;
    qfree();
  }
  qfree();
  if ( a1[30] )
  {
    a1[31] = 0;
    qfree();
  }
  qfree();
  if ( a1[25] )
  {
    a1[26] = 0;
    qfree();
  }
  qfree();
  if ( a1[20] )
  {
    a1[21] = 0;
    qfree();
  }
  qfree();
  if ( a1[15] )
  {
    a1[16] = 0;
    qfree();
  }
  return qfree();
}

