void __fastcall sub_CBC10(_QWORD *a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 v4; // rbp
  __int64 v5; // rdx
  bool v6; // sf
  bool v7; // of

  if ( a1 )
  {
    if ( qword_242208 > (unsigned __int64)a1 || qword_242210 <= (unsigned __int64)a1 )
    {
      v3 = (*((__int64 (__fastcall **)(_QWORD *))&xmmword_2414B0 + 1))(a1);
      v4 = v3;
      if ( qword_242218 )
      {
        xmmword_241500(qword_242218);
        qword_2424F0 -= v4;
        if ( qword_242218 )
          xmmword_241510(qword_242218, a2, v5);
      }
      else
      {
        qword_2424F0 -= v3;
      }
      sub_C91C0((__int64)a1, a2);
    }
    else
    {
      if ( qword_242218 )
        xmmword_241500(qword_242218);
      --qword_2424E8;
      *a1 = qword_242220;
      qword_242220 = (__int64)a1;
      v7 = __OFSUB__(qword_242228 + 1, dword_242204);
      v6 = (int)qword_242228 + 1 - dword_242204 < 0;
      LODWORD(qword_242228) = qword_242228 + 1;
      HIDWORD(qword_242228) = v6 ^ v7;
      if ( qword_242218 )
        xmmword_241510(qword_242218, a2, a3);
    }
  }
}
