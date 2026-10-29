__int64 __fastcall sub_C5930(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // r13

  v4 = a1[3];
  if ( v4 )
  {
    xmmword_241500(v4);
    v7 = a1[3];
    v8 = a1[45];
    a1[44] = a2;
    a1[45] = a3;
    if ( v7 )
      xmmword_241510(v7, a2, v6);
  }
  else
  {
    v8 = a1[45];
    a1[44] = a2;
    a1[45] = a3;
  }
  return v8;
}
