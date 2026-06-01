void __fastcall sub_1EF30(char *a1)
{
  char *v2; // rdi
  __int64 v3; // rdi

  v2 = a1 + 968;
  *((_QWORD *)v2 - 121) = off_39990;
  *((_QWORD *)v2 - 13) = &off_396C0;
  free_debug_event();
  v3 = *((_QWORD *)a1 + 117);
  *((_QWORD *)a1 + 108) = &unk_39CE8;
  if ( v3 )
  {
    *((_QWORD *)a1 + 118) = 0;
    qfree();
  }
  if ( *((_QWORD *)a1 + 110) )
  {
    *((_QWORD *)a1 + 111) = 0;
    qfree();
  }
  sub_B760((__int64)a1);
  operator delete(a1, 0x420u);
}

