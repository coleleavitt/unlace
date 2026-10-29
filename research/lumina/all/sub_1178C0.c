__int64 __fastcall sub_1178C0(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 result; // rax
  unsigned int v5; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 72);
  v3 = *(_QWORD *)(a1 + 40);
  v6 = __readfsqword(0x28u);
  result = sub_117600(v3, v2, 0, (int *)&v5);
  if ( !(_DWORD)result )
  {
    result = v5;
    if ( v5 )
    {
      sub_E8BB0(
        0xBu,
        "%s at line %d of [%.10s]",
        "database corruption",
        84070,
        "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
      return 11;
    }
    else
    {
      *(_BYTE *)(a1 + 3) = 0;
      *(_DWORD *)(a1 + 24) = 0;
    }
  }
  return result;
}
