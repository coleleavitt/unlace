__int64 __fastcall sub_3E7920(__int64 a1, __int64 a2, double a3)
{
  unsigned int v3; // r12d
  __int64 v5; // r13
  __int64 v6; // [rsp+8h] [rbp-40h] BYREF
  __int64 v7; // [rsp+10h] [rbp-38h]
  unsigned __int64 v8; // [rsp+18h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 68) != *(_DWORD *)(a1 + 84) )
    return 0;
  if ( *(_BYTE *)(a2 + 32) != 1 )
    return 0;
  if ( **(_DWORD **)(a1 + 536) != *(_DWORD *)(a2 + 40) )
    return 0;
  if ( *(_BYTE *)(a2 + 48) != 4 )
    return 0;
  v5 = *(_QWORD *)(a2 + 56);
  if ( (unsigned int)(*(_DWORD *)v5 - 12) > 1 )
    return 0;
  if ( *(_BYTE *)(v5 + 32) != 10 )
    return 0;
  if ( **(_BYTE **)(v5 + 40) != 6 )
    return 0;
  v3 = sub_11B1C0((char *)(v5 + 48), &v6, 0);
  if ( !(_BYTE)v3 )
    return 0;
  if ( *(_DWORD *)v5 == 12 )
    v6 = sub_325150(-v6, *(_DWORD *)(a1 + 84), 0);
  if ( *(_DWORD *)(get_ph() + 4) != 55 )
  {
    if ( !under_debugger )
      sub_37CFE0(0x291Cu, a3);
    BUG();
  }
  v7 = -1;
  sub_CB3B0();
  if ( v7 != -1 && v6 == v7 )
  {
    *(_DWORD *)a2 = 4;
    sub_117E50((char *)(a2 + 32), (char *)(v5 + 32));
    sub_1181E0(a2 + 48);
  }
  else
  {
    return 0;
  }
  return v3;
}

