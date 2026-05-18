void __fastcall sub_C91C0(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rdx

  if ( a1 )
  {
    if ( dword_241480 )
    {
      if ( (_QWORD)xmmword_2424A0 )
        xmmword_241500(xmmword_2424A0);
      v2 = (*((__int64 (__fastcall **)(__int64))&xmmword_2414B0 + 1))(a1);
      --qword_242528;
      qword_2424E0 -= v2;
      (*((void (__fastcall **)(__int64))&xmmword_2414A0 + 1))(a1);
      if ( (_QWORD)xmmword_2424A0 )
        xmmword_241510(xmmword_2424A0, a2, v3);
    }
    else
    {
      (*((void (__fastcall **)(__int64))&xmmword_2414A0 + 1))(a1);
    }
  }
}
