__int64 __fastcall sub_23F460(_QWORD *a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rdi

  v2 = a1 + 8;
  *(v2 - 8) = off_4DA118;
  sub_2559F0(v2);
  clear_tinfo_t();
  v3 = a1[5];
  *a1 = off_4D63B8;
  if ( v3 )
  {
    a1[6] = 0;
    qfree();
  }
  if ( a1[2] )
  {
    a1[3] = 0;
    qfree();
  }
  return j__qfree();
}

