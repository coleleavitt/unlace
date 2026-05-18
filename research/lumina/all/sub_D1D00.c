__int64 __fastcall sub_D1D00(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi

  v4 = a1[3];
  if ( (int)a2 <= 0 )
  {
    if ( !v4 )
    {
      a1[44] = 0;
      a1[45] = 0;
      return 0;
    }
    xmmword_241500(v4);
    v4 = a1[3];
    a1[44] = 0;
    a1[45] = 0;
    if ( !v4 )
      return 0;
    goto LABEL_5;
  }
  if ( v4 )
  {
    xmmword_241500(v4);
    v4 = a1[3];
  }
  a1[45] = (int)a2;
  a1[44] = sub_162550;
  if ( v4 )
LABEL_5:
    xmmword_241510(v4, a2, a3);
  return 0;
}
