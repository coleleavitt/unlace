void __fastcall sub_13620(_BYTE *a1)
{
  bool v1; // zf

  v1 = a1[48] == 0;
  *(_QWORD *)a1 = &unk_65D18;
  if ( !v1 )
    close_linput();
  if ( *((_QWORD *)a1 + 1) )
  {
    *((_QWORD *)a1 + 2) = 0;
    qfree();
  }
  operator delete(a1, 0x38u);
}

