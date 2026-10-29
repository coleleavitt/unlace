__int64 __fastcall boost::beast::iequals(_BYTE *a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v6; // r8
  int v7; // ecx
  int v8; // esi

  v4 = a2;
  if ( a2 != a4 )
    return 0;
  while ( 1 )
  {
    if ( !v4 )
      return 1;
    if ( *a1 != *a3 )
      break;
    ++a3;
    ++a1;
    --v4;
  }
  v6 = 0;
  while ( 1 )
  {
    v7 = (char)a1[v6];
    if ( (unsigned int)(v7 - 65) < 0x1A )
      LOBYTE(v7) = v7 + 32;
    v8 = (char)a3[v6];
    if ( (unsigned int)(v8 - 65) < 0x1A )
      LOBYTE(v8) = v8 + 32;
    if ( (_BYTE)v8 != (_BYTE)v7 )
      break;
    if ( v4 == ++v6 )
      return 1;
  }
  return 0;
}

