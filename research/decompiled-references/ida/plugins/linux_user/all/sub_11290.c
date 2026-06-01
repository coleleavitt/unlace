void __fastcall sub_11290(char *a1)
{
  _QWORD *v2; // rbx
  void *v3; // rdi
  char *v4; // rdi

  v2 = *((_QWORD **)a1 + 7);
  *(_QWORD *)a1 = &unk_45540;
  while ( v2 )
  {
    v3 = v2;
    v2 = (_QWORD *)*v2;
    operator delete(v3, 0x18u);
  }
  memset(*((void **)a1 + 5), 0, 8LL * *((_QWORD *)a1 + 6));
  v4 = *((char **)a1 + 5);
  *((_QWORD *)a1 + 8) = 0;
  *((_QWORD *)a1 + 7) = 0;
  if ( v4 != a1 + 88 )
    operator delete(v4, 8LL * *((_QWORD *)a1 + 6));
  if ( *((_QWORD *)a1 + 2) )
  {
    *((_QWORD *)a1 + 3) = 0;
    qfree();
  }
  operator delete(a1, 0xDE0u);
}

