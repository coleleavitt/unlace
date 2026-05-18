__int64 __fastcall sub_15FC20(__int64 a1, unsigned __int8 *a2, __int64 a3, unsigned __int8 *a4, int a5)
{
  char v8; // al
  __int64 result; // rax

  sub_E3CE0((_QWORD *)a1, a3);
  if ( !a4 )
    return 7;
  if ( (unsigned int)sub_CA590(a4, "CREATE ", 7) )
  {
    sub_E8BB0(
      0xBu,
      "%s at line %d of [%.10s]",
      "database corruption",
      110898,
      "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
    return 11;
  }
  else
  {
    v8 = 1;
    if ( !a5 )
      v8 = sub_CA320(a3, a2);
    *(_BYTE *)(a3 + 196) = v8;
    *(_BYTE *)(a1 + 292) = 2;
    *(_QWORD *)a1 = a3;
    *(_DWORD *)(a1 + 200) = 1;
    result = sub_1565D0(a1, a4);
    if ( *(_BYTE *)(a3 + 103) )
    {
      result = 7;
    }
    else if ( !(_DWORD)result && !*(_QWORD *)(a1 + 336) && !*(_QWORD *)(a1 + 344) && !*(_QWORD *)(a1 + 352) )
    {
      sub_E8BB0(
        0xBu,
        "%s at line %d of [%.10s]",
        "database corruption",
        110909,
        "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
      result = 11;
    }
    *(_BYTE *)(a3 + 196) = 0;
  }
  return result;
}
