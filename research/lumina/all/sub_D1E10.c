__int64 __fastcall sub_D1E10(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  unsigned int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  unsigned int v11; // [rsp+Ch] [rbp-Ch]

  if ( (unsigned __int64)(a1 - 1) <= 0x7FFFFEFE )
  {
    if ( !dword_241480 )
      return xmmword_2414A0(a1);
    if ( (_QWORD)xmmword_2424A0 )
      xmmword_241500(xmmword_2424A0);
    v4 = xmmword_2414C0((unsigned int)a1);
    if ( a1 > qword_242558 )
      qword_242558 = a1;
    if ( *((__int64 *)&xmmword_2424A0 + 1) > 0 )
    {
      v9 = (int)v4;
      v10 = *((_QWORD *)&xmmword_2424A0 + 1) - (int)v4;
      if ( qword_2424E0 < v10 )
      {
        DWORD2(xmmword_2424B0) = 0;
      }
      else
      {
        DWORD2(xmmword_2424B0) = 1;
        if ( *((__int64 *)&xmmword_2424A0 + 1) > 0 )
        {
          v11 = v4;
          sub_C9180((unsigned int)a1, a2, v10);
          v4 = v11;
        }
        if ( (_QWORD)xmmword_2424B0 )
        {
          v6 = xmmword_2424B0 - v9;
          if ( qword_2424E0 >= (__int64)xmmword_2424B0 - v9 )
            goto LABEL_23;
        }
      }
    }
    v5 = xmmword_2414A0(v4);
    v3 = v5;
    if ( v5 )
    {
      v7 = qword_2424E0 + (*((int (__fastcall **)(__int64))&xmmword_2414B0 + 1))(v5);
      qword_2424E0 = v7;
      if ( v7 > qword_242530 )
        qword_242530 = v7;
      v8 = ++qword_242528;
      if ( qword_242528 > qword_242578 )
        qword_242578 = v8;
      goto LABEL_16;
    }
LABEL_23:
    v3 = 0;
LABEL_16:
    if ( (_QWORD)xmmword_2424A0 )
      xmmword_241510(xmmword_2424A0, a2, v6);
    return v3;
  }
  return 0;
}
