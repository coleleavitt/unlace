void __fastcall sub_7B90(void *a1)
{
  void *v1; // rbp
  _QWORD *v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rdi

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = v1;
      sub_7B90(*((void **)v1 + 3));
      v3 = *((_QWORD *)v1 + 11);
      v1 = *((void **)v1 + 2);
      if ( v3 )
      {
        v2[12] = 0;
        qfree(v3);
      }
      clear_tinfo_t(v2 + 10);
      v4 = v2[4];
      if ( v4 )
      {
        v2[5] = 0;
        qfree(v4);
      }
      operator delete(v2, 0x88u);
    }
    while ( v1 );
  }
}
