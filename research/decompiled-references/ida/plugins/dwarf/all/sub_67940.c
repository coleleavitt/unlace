void __fastcall sub_67940(_OWORD *a1)
{
  __int64 v2; // rdi

  *(_QWORD *)a1 = &off_C8AD0;
  a1[1] = 0;
  v2 = *((_QWORD *)a1 + 4);
  if ( v2 )
  {
    *((_QWORD *)a1 + 5) = 0;
    qfree(v2);
  }
  operator delete(a1, 0x40u);
}

