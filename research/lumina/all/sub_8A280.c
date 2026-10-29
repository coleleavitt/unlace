void __fastcall sub_8A280(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi

  *a1 = &off_237C18;
  a1[4] = &off_2365F0;
  v2 = (void *)a1[26];
  if ( v2 )
  {
    a1[27] = 0;
    j__free(v2);
  }
  v3 = (void *)a1[22];
  a1[4] = &off_2365A8;
  if ( v3 )
  {
    a1[23] = 0;
    j__free(v3);
  }
  v4 = (void *)a1[19];
  if ( v4 )
  {
    a1[20] = 0;
    j__free(v4);
  }
  v5 = (void *)a1[15];
  if ( v5 )
  {
    a1[16] = 0;
    j__free(v5);
  }
  v6 = (void *)a1[12];
  if ( v6 )
  {
    a1[13] = 0;
    j__free(v6);
  }
  v7 = (void *)a1[9];
  if ( v7 )
  {
    a1[10] = 0;
    j__free(v7);
  }
  v8 = (void *)a1[5];
  if ( v8 )
  {
    a1[6] = 0;
    j__free(v8);
  }
  operator delete(a1, 0xE8u);
}
