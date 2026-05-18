void __fastcall sub_D6150(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rdx

  if ( (_BYTE)word_241484 && (v2 = xmmword_2414F0(2), (v3 = v2) != 0) )
  {
    xmmword_241500(v2);
    sub_C91C0(qword_242188, a2);
    qword_242188 = 0;
    dword_242180 = 0;
    xmmword_241510(v3, a2, v4);
  }
  else
  {
    sub_C91C0(qword_242188, a2);
    qword_242188 = 0;
    dword_242180 = 0;
  }
}
