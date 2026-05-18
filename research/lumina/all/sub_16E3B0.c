__int64 (__fastcall **__fastcall sub_16E3B0(void *src))()
{
  _QWORD *v1; // rax
  __int64 v2; // rbp
  _QWORD *v3; // rbx
  __int64 v4; // rax
  _QWORD *v5; // rsi
  const char *v7; // rax

  if ( !(_BYTE)byte_242670 && __cxa_guard_acquire(&byte_242670) )
  {
    qword_242678 = (void *)sub_199C00(src, 1u);
    __cxa_guard_release(&byte_242670);
  }
  if ( !qword_242678 )
  {
    v7 = sub_2C700(-1);
    sub_2F260((__int64)"%s qsem: %s", (const char *)src, v7);
  }
  if ( !(unsigned __int8)sub_19A060(qword_242678, 0) )
    sub_2F260((__int64)"%s: another running copy has been detected, exiting...", (const char *)src);
  v1 = (_QWORD *)operator new(8u);
  v2 = qword_242680;
  v3 = v1;
  *v1 = &off_23DC18;
  sub_19A520(v2);
  v4 = xmmword_242690;
  v5 = ptr;
  if ( *((_QWORD *)&xmmword_242690 + 1) < (unsigned __int64)(xmmword_242690 + 1) )
  {
    ptr = (void *)sub_1987B0(&ptr, ptr, xmmword_242690 + 1, 8);
    v5 = ptr;
    v4 = xmmword_242690;
  }
  v5[v4] = v3;
  *(_QWORD *)&xmmword_242690 = xmmword_242690 + 1;
  sub_19A570(v2);
  *v3 = off_23C4C8;
  return off_23C4C8;
}
