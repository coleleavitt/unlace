__int64 __fastcall sub_D0820(_DWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 result; // rax
  int i; // ecx

  result = *(unsigned __int16 *)(a3 + 18);
  for ( i = 0; (result & 4) == 0; ++i )
  {
    if ( *a1 && (*(_BYTE *)(*(_QWORD *)a3 + 4LL) & 1) == 0 || (*a2 & *(_QWORD *)(a3 + 48)) != 0 )
      break;
    if ( i && (result & 0x400) != 0 )
    {
      BYTE1(result) |= 2u;
      *(_WORD *)(a3 + 18) = result;
      result = *(int *)(a3 + 24);
      if ( (int)result < 0 )
        return result;
    }
    else
    {
      *(_WORD *)(a3 + 18) = result | 4;
      result = *(int *)(a3 + 24);
      if ( (int)result < 0 )
        return result;
    }
    a3 = *(_QWORD *)(*(_QWORD *)(a3 + 8) + 32LL) + 56 * result;
    if ( (*(_BYTE *)(a3 + 22))-- != 1 )
      break;
    result = *(unsigned __int16 *)(a3 + 18);
  }
  return result;
}
