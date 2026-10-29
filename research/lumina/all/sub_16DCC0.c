void __fastcall sub_16DCC0(_QWORD *a1)
{
  __int64 v2; // rbp
  void **v3; // rdi
  void **v4; // rdx

  *a1 = &off_23DC18;
  v2 = qword_242680;
  sub_19A520(qword_242680);
  v3 = (void **)ptr;
  v4 = (void **)((char *)ptr + 8 * xmmword_242690);
  if ( ptr != v4 )
  {
    while ( a1 != *v3 )
    {
      if ( v4 == ++v3 )
        goto LABEL_7;
    }
    if ( v4 != v3 )
    {
      memmove(v3, v3 + 1, (char *)v4 - (char *)v3 - 8);
      *(_QWORD *)&xmmword_242690 = xmmword_242690 - 1;
    }
  }
LABEL_7:
  sub_19A570(v2);
  operator delete(a1, 8u);
}
