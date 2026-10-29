void __fastcall sub_2DA90(void *a1)
{
  void *v1; // rbx
  _QWORD *v2; // rbp
  void *v3; // rdi

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = v1;
      sub_2DA90(*((void **)v1 + 3));
      v3 = *((void **)v1 + 4);
      v1 = *((void **)v1 + 2);
      if ( v3 )
      {
        v2[5] = 0;
        j__free(v3);
      }
      operator delete(v2, 0x40u);
    }
    while ( v1 );
  }
}
