void __fastcall sub_58050(_QWORD *a1)
{
  void *v2; // rdi

  *a1 = &unk_8C9B0;
  qfree(a1[10]);
  qfree(a1[6]);
  v2 = (void *)a1[2];
  if ( v2 )
    operator delete(v2, a1[4] - (_QWORD)v2);
}

