__int64 __fastcall sub_C5A80(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // rdi

  v4 = a1[3];
  if ( v4 )
  {
    xmmword_241500(v4);
    v7 = a1[3];
    a1[46] = 0;
    a1[47] = a3;
    a1[48] = a2;
    if ( v7 )
      xmmword_241510(v7, a2, v6);
  }
  else
  {
    a1[46] = 0;
    a1[47] = a3;
    a1[48] = a2;
  }
  return 0;
}
