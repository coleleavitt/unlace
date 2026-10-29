void __fastcall sub_A1DD0(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi
  void *v11; // rdi

  *a1 = &off_238AB8;
  v2 = (void *)a1[33];
  if ( v2 )
  {
    a1[34] = 0;
    j__free(v2);
  }
  v3 = (void *)a1[30];
  if ( v3 )
  {
    a1[31] = 0;
    j__free(v3);
  }
  v4 = (void *)a1[27];
  if ( v4 )
  {
    a1[28] = 0;
    j__free(v4);
  }
  v5 = (void *)a1[23];
  if ( v5 )
  {
    a1[24] = 0;
    j__free(v5);
  }
  v6 = (void *)a1[20];
  if ( v6 )
  {
    a1[21] = 0;
    j__free(v6);
  }
  v7 = (void *)a1[17];
  if ( v7 )
  {
    a1[18] = 0;
    j__free(v7);
  }
  v8 = (void *)a1[14];
  if ( v8 )
  {
    a1[15] = 0;
    j__free(v8);
  }
  v9 = (void *)a1[8];
  if ( v9 )
  {
    a1[9] = 0;
    j__free(v9);
  }
  v10 = (void *)a1[5];
  if ( v10 )
  {
    a1[6] = 0;
    j__free(v10);
  }
  v11 = (void *)a1[2];
  if ( v11 )
  {
    a1[3] = 0;
    j__free(v11);
  }
  operator delete(a1, 0x130u);
}
