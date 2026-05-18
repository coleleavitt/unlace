__int64 *__fastcall sub_D2D70(int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 *v5; // rbp
  bool v6; // sf
  bool v7; // of
  __int64 v8; // rax
  __int64 v10; // rax
  int v11; // eax
  int v12; // r12d

  v3 = a1;
  if ( (int)qword_2421FC >= a1 )
  {
    v4 = qword_242218;
    if ( qword_242218 )
    {
      xmmword_241500(qword_242218);
      v5 = (__int64 *)qword_242220;
      v4 = qword_242218;
      if ( qword_242220 )
      {
LABEL_4:
        qword_242220 = *v5;
        v7 = __OFSUB__(qword_242228 - 1, dword_242204);
        v6 = (int)qword_242228 - 1 - dword_242204 < 0;
        LODWORD(qword_242228) = qword_242228 - 1;
        HIDWORD(qword_242228) = v6 ^ v7;
        if ( v3 > qword_242568 )
          qword_242568 = v3;
        v8 = ++qword_2424E8;
        if ( qword_2424E8 > qword_242538 )
          qword_242538 = v8;
        goto LABEL_8;
      }
      if ( qword_242218 )
        xmmword_241510(qword_242218, a2, a3);
    }
    else
    {
      v5 = (__int64 *)qword_242220;
      if ( qword_242220 )
        goto LABEL_4;
    }
  }
  v10 = sub_D1E10(v3, a2);
  v5 = (__int64 *)v10;
  if ( !v10 )
    return v5;
  v11 = ((__int64 (__fastcall *)(__int64))*(&xmmword_2414B0 + 1))(v10);
  v4 = qword_242218;
  v12 = v11;
  if ( qword_242218 )
  {
    xmmword_241500(qword_242218);
    v4 = qword_242218;
  }
  if ( v3 > qword_242568 )
    qword_242568 = v3;
  qword_2424F0 += v12;
  if ( qword_2424F0 > qword_242540 )
    qword_242540 = qword_2424F0;
LABEL_8:
  if ( v4 )
    xmmword_241510(v4, a2, a3);
  return v5;
}
