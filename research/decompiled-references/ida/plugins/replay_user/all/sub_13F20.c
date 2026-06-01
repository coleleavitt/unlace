void __fastcall sub_13F20(void **a1)
{
  void **v1; // rbx
  void **v2; // rbp

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = v1;
      sub_13F20(v1[3]);
      v1 = (void **)v1[2];
      if ( *((int *)v2 + 10) >= -1 )
      {
        if ( v2[6] )
        {
          v2[7] = nullptr;
          qfree();
        }
      }
      operator delete(v2, 0x48u);
    }
    while ( v1 );
  }
}

