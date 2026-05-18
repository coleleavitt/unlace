__int64 __fastcall sub_FFA10(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 v5; // rbp

  if ( (unsigned int)sub_FEBD0(a1, a2) )
    return -1;
  v4 = xmmword_2424A0;
  if ( !(_QWORD)xmmword_2424A0 )
  {
    v5 = xmmword_2424B0;
    if ( a1 < 0 )
      return v5;
    goto LABEL_4;
  }
  xmmword_241500(xmmword_2424A0);
  v5 = xmmword_2424B0;
  v4 = xmmword_2424A0;
  if ( a1 >= 0 )
  {
LABEL_4:
    *(_QWORD *)&xmmword_2424B0 = a1;
    if ( !*((_QWORD *)&xmmword_2424A0 + 1) || *((__int64 *)&xmmword_2424A0 + 1) > a1 )
      *((_QWORD *)&xmmword_2424A0 + 1) = a1;
  }
  if ( v4 )
    xmmword_241510(v4, a2, v3);
  return v5;
}
