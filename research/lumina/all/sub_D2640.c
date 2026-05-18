__int64 __fastcall sub_D2640(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // r12d
  unsigned int v4; // eax
  __int64 v6; // rdi
  int v7; // edx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rbp
  __int64 v14; // rdx
  unsigned int v15; // [rsp+0h] [rbp-2Ch]
  unsigned int v16; // [rsp+0h] [rbp-2Ch]

  if ( a1 )
  {
    v2 = a1;
    if ( a2 )
    {
      if ( (unsigned __int64)a2 > 0x7FFFFEFF )
        return 0;
      v3 = ((__int64 (__fastcall *)(__int64))*(&xmmword_2414B0 + 1))(a1);
      v4 = xmmword_2414C0((unsigned int)a2);
      if ( v4 != v3 )
      {
        if ( !dword_241480 )
          return xmmword_2414B0(a1, v4);
        v6 = xmmword_2424A0;
        if ( (_QWORD)xmmword_2424A0 )
        {
          v15 = v4;
          xmmword_241500(xmmword_2424A0);
          v4 = v15;
        }
        if ( a2 > qword_242558 )
          qword_242558 = a2;
        v7 = v4 - v3;
        if ( (int)(v4 - v3) <= 0 )
          goto LABEL_12;
        v12 = qword_2424E0;
        v13 = v7;
        v14 = *((_QWORD *)&xmmword_2424A0 + 1) - v7;
        if ( v14 > qword_2424E0 )
          goto LABEL_12;
        if ( *((__int64 *)&xmmword_2424A0 + 1) > 0 )
        {
          v16 = v4;
          sub_C9180(v6, a2, v14);
          v4 = v16;
        }
        if ( (__int64)xmmword_2424B0 <= 0 || (__int64)xmmword_2424B0 - v13 > v12 )
        {
LABEL_12:
          v8 = v4;
          v9 = xmmword_2414B0(v2, v4);
          v2 = v9;
          if ( v9 )
          {
            v11 = qword_2424E0 + (int)(((__int64 (__fastcall *)(__int64))*(&xmmword_2414B0 + 1))(v9) - v3);
            qword_2424E0 = v11;
            if ( v11 > qword_242530 )
              qword_242530 = v11;
          }
          if ( (_QWORD)xmmword_2424A0 )
            xmmword_241510(xmmword_2424A0, v8, v10);
          return v2;
        }
        if ( (_QWORD)xmmword_2424A0 )
          xmmword_241510(xmmword_2424A0, a2, xmmword_2424B0 - v13);
        return 0;
      }
    }
    else
    {
      sub_C91C0(a1, 0);
      return 0;
    }
    return v2;
  }
  return sub_D1E10(a2, a2);
}
