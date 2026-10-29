void __fastcall sub_2CC0(void *a1)
{
  void *v1; // r12
  _QWORD *v2; // r13
  __int64 v3; // rbx
  _QWORD *v4; // rbp
  __int64 v5; // rdi

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = v1;
      sub_2CC0(*((void **)v1 + 3));
      v3 = *((_QWORD *)v1 + 9);
      v1 = *((void **)v1 + 2);
      while ( v3 )
      {
        v4 = (_QWORD *)v3;
        sub_2A00(*(_QWORD **)(v3 + 24));
        v5 = *(_QWORD *)(v3 + 32);
        v3 = *(_QWORD *)(v3 + 16);
        if ( v5 )
        {
          v4[5] = 0;
          qfree();
        }
        operator delete(v4, 0x40u);
      }
      if ( v2[4] )
      {
        v2[5] = 0;
        qfree();
      }
      operator delete(v2, 0x68u);
    }
    while ( v1 );
  }
}

