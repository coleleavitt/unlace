__int64 __fastcall sub_16DBC0(_QWORD *a1)
{
  __int64 v2; // rbp
  char *v3; // rdi
  char *v4; // rdx

  *a1 = &off_23DC18;
  v2 = qword_242680;
  sub_19A520(qword_242680);
  v3 = (char *)ptr;
  v4 = (char *)ptr + 8 * xmmword_242690;
  if ( ptr != v4 )
  {
    while ( a1 != *(_QWORD **)v3 )
    {
      v3 += 8;
      if ( v4 == v3 )
        return sub_19A570(v2);
    }
    if ( v4 != v3 )
    {
      memmove(v3, v3 + 8, v4 - v3 - 8);
      *(_QWORD *)&xmmword_242690 = xmmword_242690 - 1;
    }
  }
  return sub_19A570(v2);
}
