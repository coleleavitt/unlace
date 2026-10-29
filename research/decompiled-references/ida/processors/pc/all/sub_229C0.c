__int64 __fastcall sub_229C0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // edx

  if ( *(_BYTE *)(a2 + 32) )
  {
    if ( *(_BYTE *)(a2 + 1) == 2 )
    {
      return 0xFFFFFFFFLL;
    }
    else
    {
      result = *(_BYTE *)(a2 + 33) & 7;
      if ( (*(_BYTE *)(a1 + 28) & 0x10) != 0 && (*(_BYTE *)(a1 + 33) & 1) != 0 )
        return *(_BYTE *)(a2 + 33) & 7 | 8u;
    }
  }
  else
  {
    result = *(unsigned __int16 *)(a2 + 6);
    v3 = *(_DWORD *)(a1 + 28) & 0x1018;
    if ( v3 == 4096 || v3 == 8 )
    {
      if ( (_WORD)result == 0xFFFF )
      {
        return 4;
      }
      else if ( (unsigned __int16)result > 7u )
      {
        sub_21470(a1);
        return sub_22A40();
      }
      else
      {
        return dword_94FA0[result];
      }
    }
  }
  return result;
}
