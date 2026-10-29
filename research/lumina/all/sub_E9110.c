__int64 __fastcall sub_E9110(__int64 a1, _BOOL8 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r9
  __int64 i; // rax
  __int64 result; // rax

  v5 = *(_QWORD *)(a1 + 8);
  if ( (unsigned int)a2 <= 1 )
  {
    if ( !a2 )
    {
      sub_E8BB0(
        0xBu,
        "%s at line %d of [%.10s]",
        "database corruption",
        (unsigned int)&stru_11650,
        "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
      return 11;
    }
    a2 = *(_DWORD *)(v5 + 64) != 0;
  }
  *(_DWORD *)(a5 + 80) = a2;
  *(_BYTE *)(a5 + 84) = -1;
  *(_QWORD *)(a5 + 128) = a4;
  *(_QWORD *)(a5 + 8) = a1;
  *(_QWORD *)(a5 + 32) = v5;
  *(_BYTE *)(a5 + 1) = 0;
  for ( i = *(_QWORD *)(v5 + 16); i; i = *(_QWORD *)(i + 40) )
  {
    if ( *(_DWORD *)(i + 80) == a2 )
    {
      *(_BYTE *)(i + 1) |= 0x20u;
      *(_BYTE *)(a5 + 1) = 32;
    }
  }
  *(_BYTE *)a5 = 1;
  *(_QWORD *)(a5 + 40) = *(_QWORD *)(v5 + 16);
  *(_QWORD *)(v5 + 16) = a5;
  if ( (_DWORD)a3 )
  {
    *(_BYTE *)(a5 + 1) |= 1u;
    *(_BYTE *)(a5 + 2) = 0;
    result = 0;
    if ( !*(_QWORD *)(v5 + 136) )
      return sub_D3620(v5, a2, a3);
  }
  else
  {
    *(_BYTE *)(a5 + 2) = 2;
    return 0;
  }
  return result;
}
