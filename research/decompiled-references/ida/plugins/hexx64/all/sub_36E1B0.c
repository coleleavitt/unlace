__int64 __fastcall sub_36E1B0(__int64 a1, double a2)
{
  __int64 result; // rax

  result = 1;
  if ( *(_DWORD *)(a1 + 72) != 128 && (*(_BYTE *)(a1 + 4) & 0x30) == 0 )
  {
    result = 0;
    if ( *(_QWORD *)(a1 + 440) )
    {
      if ( *(_DWORD *)(a1 + 464) )
        return *(_BYTE *)(sub_13D280((_QWORD *)a1, 0, a2) + 25) >> 7;
      else
        return *(_BYTE *)(*(_QWORD *)(a1 + 432) + 25LL) >> 7;
    }
  }
  return result;
}

