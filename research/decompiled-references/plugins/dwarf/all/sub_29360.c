void __fastcall sub_29360(void **a1)
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
      sub_29360(v1[3]);
      v3 = (_QWORD **)v1[8];
      v1 = (void **)v1[2];
      while ( v3 )
      {
        sub_29190(v3[3]);
        v4 = v3;
        v3 = (_QWORD **)v3[2];
        operator delete(v4, 0x40u);
      }
      operator delete(v2, 0x60u);
    }
    while ( v1 );
  }
}
