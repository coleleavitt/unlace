__int64 __fastcall sub_167C0(__int64 a1, _BYTE *a2, _DWORD *a3)
{
  __int64 result; // rax

  if ( *a2 != 73 )
    return 0xFFFFFFFFLL;
  if ( a2[1] != 80 )
    return 0xFFFFFFFFLL;
  result = (unsigned __int8)a2[2];
  if ( a2[2] )
    return 0xFFFFFFFFLL;
  if ( a3 )
    *a3 = 1;
  return result;
}

