void __fastcall sub_80180(_BYTE *a1)
{
  bool v1; // zf
  __int64 v3; // rdi

  v1 = a1[48] == 0;
  *(_QWORD *)a1 = &unk_C9C88;
  if ( !v1 )
    close_linput(*((_QWORD *)a1 + 4));
  v3 = *((_QWORD *)a1 + 1);
  if ( v3 )
  {
    *((_QWORD *)a1 + 2) = 0;
    qfree(v3);
  }
  operator delete(a1, 0x38u);
}
