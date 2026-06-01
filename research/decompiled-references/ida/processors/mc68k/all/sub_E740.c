__int64 __fastcall sub_E740(__int64 a1)
{
  if ( (a1 & 3) == 2 && (unsigned __int16)get_word(a1) == 20081 )
    return 2;
  else
    return (unsigned __int8)get_byte(a1) == 0;
}

