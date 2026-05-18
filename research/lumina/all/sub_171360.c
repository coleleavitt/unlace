void __fastcall sub_171360(_QWORD *a1)
{
  void *v2; // rdi

  *a1 = &off_23C800;
  a1[8] = 0;
  a1[10] = 0;
  sub_1712A0(a1, -1);
  v2 = (void *)a1[5];
  if ( v2 )
  {
    a1[6] = 0;
    j__free(v2);
  }
  operator delete(a1, 0x68u);
}
