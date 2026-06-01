const char *__fastcall sub_86E0(unsigned __int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rax
  _QWORD *v3; // rax

  if ( !a1 || a1 >= (unsigned __int64)xmmword_14578 )
    sub_86C0(a1);
  v1 = qword_14570 + 38 * a1;
  if ( !(*(_BYTE *)(v1 + 36) >> 5) )
    return "abs";
  v2 = *(_QWORD *)v1;
  if ( !v2 || v2 >= (unsigned __int64)xmmword_14598 )
    sub_52E0("illegal name index");
  v3 = (_QWORD *)(qword_14590 + 32 * v2);
  if ( v3[1] )
    return (const char *)*v3;
  else
    return src;
}

