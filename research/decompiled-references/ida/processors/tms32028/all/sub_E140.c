__int64 __fastcall sub_E140(unsigned __int8 *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = sub_CD30(a1, a2, a3);
  if ( (_DWORD)result )
  {
    result = 0;
    if ( (a1[251] & 0xBF) == 0x87 )
      return *(unsigned __int16 *)(a2 + 26);
  }
  return result;
}

