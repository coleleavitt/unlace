__int64 __fastcall sub_2A420(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rsi

  result = get_flags_ex();
  if ( (result & 0xF00000) == 0 && (result & 0x600) == 0x400 )
  {
    result = (unsigned int)result & 0xF0000000;
    if ( result == 0x20000000 )
    {
      v6 = 2;
      result = (unsigned int)get_dword();
    }
    else
    {
      if ( result != 805306368 )
        return result;
      result = get_qword();
      v6 = 9;
    }
    if ( a3 == -1 || *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) == a3 || result == a3 )
      return sub_22510(a2, v6, 0);
  }
  return result;
}

