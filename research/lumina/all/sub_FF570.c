__int64 __fastcall sub_FF570(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 v5; // rdx

  v2 = sub_FEBD0(a1, a2);
  if ( v2 )
    return v2;
  if ( (_BYTE)word_241484 )
  {
    v3 = xmmword_2414F0(2);
    v4 = v3;
    if ( v3 )
    {
      xmmword_241500(v3);
      sub_C2130(a1);
      xmmword_241510(v4, a2, v5);
      return v2;
    }
  }
  sub_C2130(a1);
  return 0;
}
