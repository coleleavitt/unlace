void __fastcall sub_262F0(_BYTE *a1)
{
  bool v1; // zf

  v1 = a1[48] == 0;
  *(_QWORD *)a1 = &unk_8D328;
  if ( !v1 )
    close_linput();
  if ( *((_QWORD *)a1 + 1) )
  {
    *((_QWORD *)a1 + 2) = 0;
    qfree();
  }
  operator delete(a1, 0x38u);
}

