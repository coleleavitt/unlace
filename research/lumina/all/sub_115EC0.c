__int64 __fastcall sub_115EC0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_BYTE *)a1 == 2 )
    *(_BYTE *)a1 = 0;
  else
    *(_DWORD *)(a1 + 4) = 0;
  result = sub_115E20(a1, a2);
  if ( !(_DWORD)result )
  {
    if ( *(char *)(a1 + 84) >= 0 )
    {
      sub_CCD80(a1);
      result = 0;
    }
    *(_BYTE *)a1 = 3;
  }
  *(_BYTE *)(a1 + 1) &= 0xF1u;
  return result;
}
