__int64 __fastcall sub_3E73E0(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // r12
  __int64 result; // rax
  int v5; // edx
  _BYTE v6[8]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v7; // [rsp+28h] [rbp-50h]
  unsigned __int64 v8; // [rsp+38h] [rbp-40h]

  v8 = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 != 4 )
    return 0;
  v3 = *(_QWORD *)(a2 + 8);
  if ( (unsigned int)(*(_DWORD *)v3 - 12) > 1 )
    return 0;
  result = 0;
  if ( *(_DWORD *)(v3 + 68) == *(_DWORD *)(a1 + 84)
    && *(_BYTE *)(v3 + 32) == 4
    && **(_DWORD **)(v3 + 40) == 12
    && *(_BYTE *)(v3 + 48) == 2 )
  {
    sub_11EE80((__int64)v6, (unsigned __int8 *)(v3 + 32));
    v5 = **(_DWORD **)(a1 + 536);
    if ( *(_BYTE *)(v7 + 32) == 1 && v5 == *(_DWORD *)(v7 + 40)
      || *(_BYTE *)(v7 + 48) == 1 && v5 == *(_DWORD *)(v7 + 56) )
    {
      if ( *(_DWORD *)(get_ph() + 4) != 55 )
      {
        if ( !under_debugger )
          sub_37CFE0(0x291Cu, a3);
        BUG();
      }
      sub_CB3B0();
    }
    sub_1181E0((__int64)v6);
    return 0;
  }
  return result;
}

