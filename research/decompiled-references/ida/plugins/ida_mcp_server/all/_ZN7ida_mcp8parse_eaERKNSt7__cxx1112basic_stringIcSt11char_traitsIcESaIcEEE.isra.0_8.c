__int64 __fastcall ida_mcp::parse_ea(_BYTE *a1, unsigned __int64 a2)
{
  _BYTE *v2; // rbx
  int *v3; // rax
  int *v4; // rbp
  __int64 v5; // rdx
  _BYTE *v7; // [rsp+18h] [rbp-40h]

  v2 = a1;
  if ( a2 > 2 && *a1 == 48 && (a1[1] & 0xDF) == 0x58 )
    v2 = a1 + 2;
  v3 = __errno_location();
  *v3 = 0;
  v4 = v3;
  v5 = __isoc23_strtoull();
  if ( v2 == v7 || *v7 || *v4 == 34 && v5 == -1 )
    return 0;
  else
    return v5;
}

