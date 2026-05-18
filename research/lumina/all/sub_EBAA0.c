__int64 __fastcall sub_EBAA0(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // rbp
  int v3; // r12d
  unsigned __int16 v4; // si
  int v5; // r13d
  __int64 v6; // r14
  __int64 v7; // rbx
  __int16 v8; // si
  int v9; // ecx
  int v11; // [rsp+8h] [rbp-40h]
  int v12; // [rsp+Ch] [rbp-3Ch]

  v1 = *(unsigned __int16 *)(a1 + 18);
  v2 = *(_QWORD *)(a1 + 80);
  v12 = v1 + 2 * *(unsigned __int16 *)(a1 + 24);
  v3 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 56LL);
  v11 = v3 - 5;
  if ( *(_BYTE *)(a1 + 8) )
    v11 = v3 - 4;
  if ( !*(_WORD *)(a1 + 24) )
    return 0;
  v4 = __ROL2__(*(_WORD *)(v2 + *(unsigned __int16 *)(a1 + 18)), 8);
  v5 = v4;
  if ( v12 > v4 || v11 < v4 )
  {
LABEL_14:
    v9 = 68770;
  }
  else
  {
    v6 = 0;
    v7 = v2 + v1 + 2;
    while ( v5 + (*(unsigned __int16 (__fastcall **)(__int64, __int64))(a1 + 120))(a1, v2 + v4) <= v3 )
    {
      if ( *(unsigned __int16 *)(a1 + 24) <= (int)v6 + 1 )
        return 0;
      v8 = *(_WORD *)(v7 + 2 * v6++);
      v4 = __ROL2__(v8, 8);
      v5 = v4;
      if ( v12 > v4 || v11 < v4 )
        goto LABEL_14;
    }
    v9 = 68775;
  }
  sub_E8BB0(
    0xBu,
    "%s at line %d of [%.10s]",
    "database corruption",
    v9,
    "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
  return 11;
}
