void __fastcall sub_3BF30(void *a1)
{
  void *v1; // r12
  _QWORD *v2; // rbp
  __int64 v3; // rbx
  void *v4; // rdi

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = v1;
      sub_3BF30(*((void **)v1 + 3));
      v3 = *((_QWORD *)v1 + 19);
      v1 = (void *)*((_QWORD *)v1 + 2);
      v2[15] = off_16C2E0;
      while ( v3 )
      {
        sub_3BC40(*(_QWORD **)(v3 + 24));
        v4 = (void *)v3;
        v3 = *(_QWORD *)(v3 + 16);
        operator delete(v4, 0x30u);
      }
      if ( v2[8] )
      {
        v2[9] = 0;
        qfree();
      }
      if ( v2[5] )
      {
        v2[6] = 0;
        qfree();
      }
      operator delete(v2, 0xE0u);
    }
    while ( v1 );
  }
}
