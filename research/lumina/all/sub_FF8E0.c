__int64 __fastcall sub_FF8E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rbp
  __int64 v6; // [rsp+8h] [rbp-30h] BYREF
  __int64 v7[5]; // [rsp+10h] [rbp-28h] BYREF

  v2 = a1;
  v7[1] = __readfsqword(0x28u);
  if ( (unsigned int)sub_FEBD0(a1, a2) )
    return -1;
  if ( !(_QWORD)xmmword_2424A0 )
  {
    v4 = *((_QWORD *)&xmmword_2424A0 + 1);
    if ( a1 < 0 )
      return v4;
    goto LABEL_4;
  }
  xmmword_241500(xmmword_2424A0);
  v4 = *((_QWORD *)&xmmword_2424A0 + 1);
  if ( a1 >= 0 )
  {
LABEL_4:
    if ( (__int64)xmmword_2424B0 > 0 && ((__int64)xmmword_2424B0 < a1 || !a1) )
      v2 = xmmword_2424B0;
    *((_QWORD *)&xmmword_2424A0 + 1) = v2;
    DWORD2(xmmword_2424B0) = v2 <= qword_2424E0[0] && v2 > 0;
    if ( (_QWORD)xmmword_2424A0 )
    {
      LOBYTE(v3) = v2 <= qword_2424E0[0];
      xmmword_241510(xmmword_2424A0, a2, v3);
    }
    sub_E8C70(0, &v6, v7, 0);
    return v4;
  }
  if ( (_QWORD)xmmword_2424A0 )
    xmmword_241510(xmmword_2424A0, a2, v3);
  return v4;
}
