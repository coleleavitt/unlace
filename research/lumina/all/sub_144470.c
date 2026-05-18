__int64 __fastcall sub_144470(__int64 *a1, char a2, __int64 a3, double a4)
{
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // r11
  __int64 v8; // r9
  char v9; // r10

  if ( !*(_QWORD *)a3 )
    return sub_144100((__int64)a1, a2, *(unsigned __int8 **)(a3 + 16), *(_BYTE **)(a3 + 8), a4);
  v5 = sub_CFB20(*a1, *(_QWORD *)a3);
  return sub_144100(v8, v9, *(unsigned __int8 **)(v6 + 16), *(_BYTE **)(*(_QWORD *)(v7 + 32) + 32LL * v5), a4);
}
