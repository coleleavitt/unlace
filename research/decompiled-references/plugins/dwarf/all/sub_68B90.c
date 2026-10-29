void __fastcall sub_68B90(_QWORD *a1)
{
  __int64 v2; // rdi
  char *v3; // rbx
  char *v4; // rbp

  *a1 = &off_C7230;
  v2 = a1[7];
  if ( v2 )
  {
    a1[8] = 0;
    qfree(v2);
  }
  v3 = (char *)a1[3];
  while ( v3 )
  {
    v4 = v3;
    sub_688E0(*((_QWORD **)v3 + 3));
    v3 = *((char **)v3 + 2);
    clear_tinfo_t(v4 + 48);
    operator delete(v4, 0x38u);
  }
  operator delete(a1, 0x58u);
}
