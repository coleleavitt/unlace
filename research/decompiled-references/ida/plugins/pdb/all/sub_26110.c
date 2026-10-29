void __fastcall sub_26110(char *a1)
{
  char *v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi

  v2 = a1 + 80;
  *((_QWORD *)v2 - 10) = off_A9E18;
  clear_tinfo_t(v2);
  v3 = *((_QWORD *)a1 + 7);
  if ( v3 )
  {
    *((_QWORD *)a1 + 8) = 0;
    qfree(v3);
  }
  v4 = *((_QWORD *)a1 + 4);
  if ( v4 )
  {
    *((_QWORD *)a1 + 5) = 0;
    qfree(v4);
  }
  cleanup_argloc(a1 + 16);
  operator delete(a1, 0x70u);
}

