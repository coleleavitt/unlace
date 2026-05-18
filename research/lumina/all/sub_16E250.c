__int64 __fastcall sub_16E250(_QWORD *a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  _QWORD *v3; // rsi

  *a1 = &off_23DC18;
  v1 = qword_242680;
  sub_19A520(qword_242680);
  v2 = xmmword_242690;
  v3 = ptr;
  if ( *((_QWORD *)&xmmword_242690 + 1) < (unsigned __int64)(xmmword_242690 + 1) )
  {
    ptr = (void *)sub_1987B0(&ptr, ptr, xmmword_242690 + 1, 8);
    v3 = ptr;
    v2 = xmmword_242690;
  }
  v3[v2] = a1;
  *(_QWORD *)&xmmword_242690 = xmmword_242690 + 1;
  return sub_19A570(v1);
}
