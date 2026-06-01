__int64 __fastcall sub_D870(__int64 a1)
{
  __int64 result; // rax
  __int16 word; // dx
  int dword; // eax

  if ( !(unsigned __int8)((__int64 (*)(void))is_loaded)() || !(unsigned __int8)is_loaded(a1 + 1) )
    return 0;
  word = get_word(a1);
  result = 2;
  if ( word && word != 146 )
  {
    if ( (a1 & 3) == 0 && (unsigned __int8)is_loaded(a1 + 3) )
    {
      dword = get_dword(a1);
      return 4 * (unsigned int)(dword == 9568402 || dword == 0);
    }
    return 0;
  }
  return result;
}
