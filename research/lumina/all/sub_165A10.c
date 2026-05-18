void __fastcall sub_165A10(_QWORD *a1)
{
  void *v2; // rdi

  *a1 = &unk_23DB00;
  sub_1672A0(a1 + 17, 0xFFFFFFFFLL);
  v2 = (void *)a1[18];
  if ( v2 )
  {
    a1[19] = 0;
    j__free(v2);
  }
}
