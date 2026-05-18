void __fastcall sub_16E670(_QWORD *a1)
{
  __int64 v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi

  *a1 = &unk_23DC40;
  v2 = a1[21];
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    a1[21] = 0;
  }
  v3 = (void *)a1[23];
  a1[20] = 0;
  if ( v3 )
  {
    a1[24] = 0;
    j__free(v3);
  }
  v4 = (void *)a1[17];
  if ( v4 )
  {
    a1[18] = 0;
    j__free(v4);
  }
  v5 = (void *)a1[14];
  if ( v5 )
  {
    a1[15] = 0;
    j__free(v5);
  }
  sub_166440(a1);
}
