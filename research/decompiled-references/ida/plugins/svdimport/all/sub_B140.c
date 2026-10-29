void __fastcall sub_B140(_BYTE *a1)
{
  bool v1; // zf

  v1 = a1[20] == 0;
  *(_QWORD *)a1 = &off_1BBC0;
  if ( !v1 && *((_QWORD *)a1 + 1) )
    qfclose();
  operator delete(a1, 0x18u);
}

