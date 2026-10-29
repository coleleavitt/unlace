__int64 *__fastcall sub_C3110(__int64 a1)
{
  __int64 *result; // rax

  result = *(__int64 **)(a1 + 24);
  --*((_DWORD *)result + 6);
  if ( (*(_WORD *)(a1 + 54))-- == 1 )
  {
    if ( (*(_BYTE *)(a1 + 52) & 1) != 0 )
    {
      result = *(__int64 **)(a1 + 24);
      if ( *((_BYTE *)result + 44) )
        return (__int64 *)xmmword_241568(result[8], *(_QWORD *)a1, 0);
    }
    else
    {
      return sub_C2FA0(a1, 3);
    }
  }
  return result;
}
