void __fastcall sub_41800(void **a1)
{
  void **v1; // rbp
  void **v2; // r12
  _QWORD **v3; // rbx
  void *v4; // rdi

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = v1;
      sub_41800(v1[3]);
      v3 = (_QWORD **)v1[7];
      v1 = (void **)v1[2];
      while ( v3 )
      {
        sub_41630(v3[3]);
        v4 = v3;
        v3 = (_QWORD **)v3[2];
        operator delete(v4, 0x28u);
      }
      operator delete(v2, 0x58u);
    }
    while ( v1 );
  }
}
