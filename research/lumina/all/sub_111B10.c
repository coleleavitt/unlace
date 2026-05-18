unsigned __int64 __fastcall sub_111B10(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3, int *a4)
{
  _DWORD v7[5]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int16 v8; // [rsp+14h] [rbp-34h]
  unsigned __int16 v9; // [rsp+16h] [rbp-32h]
  unsigned __int64 v10; // [rsp+18h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  if ( !*a4 )
  {
    (*(void (__fastcall **)(__int64, unsigned __int64, _DWORD *))(a1 + 128))(a1, a3, v7);
    if ( (unsigned int)v8 < v7[4] )
    {
      if ( a3 <= *a2 && *a2 < a3 + v8 )
      {
        sub_E8BB0(
          0xBu,
          "%s at line %d of [%.10s]",
          "database corruption",
          68171,
          "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
        *a4 = 11;
      }
      else
      {
        sub_111970(*(_QWORD *)(a1 + 72), _byteswap_ulong(*(_DWORD *)(a3 + v9 - 4)), 3, *(_DWORD *)(a1 + 4), a4);
      }
    }
  }
  return __readfsqword(0x28u) ^ v10;
}
