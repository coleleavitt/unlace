__int64 (__fastcall *__fastcall sub_10F340(__int64 a1, __int64 a2, __int64 a3, __int64 a4))()
{
  unsigned __int8 v4; // al

  v4 = *(_BYTE *)(a1 + 21);
  if ( v4 != 6 && v4 )
  {
    if ( v4 <= 1u )
    {
      if ( !*(_BYTE *)(a1 + 8) )
      {
        a2 = 0;
        sub_D66C0(a1, 0, 0);
      }
    }
    else
    {
      if ( qword_2424C0 )
        qword_2424C0(a1, a2, a3, a4);
      sub_10F210(a1);
      if ( qword_2424C8 )
        qword_2424C8();
    }
  }
  return sub_CC460(a1, a2);
}
