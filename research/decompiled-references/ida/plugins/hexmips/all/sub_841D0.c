__int64 __fastcall sub_841D0(__int64 a1, __int64 a2)
{
  unsigned __int8 *v2; // rdx
  unsigned int v3; // eax
  char v4; // r12
  __int64 v5; // r12
  __int64 v6; // r12

  v2 = *(unsigned __int8 **)a2;
  if ( *(_QWORD *)a2 >= *(_QWORD *)(a2 + 8) )
    sub_762F0(a1);
  v3 = *v2;
  *(_QWORD *)a2 = v2 + 1;
  *(_DWORD *)a1 = v3;
  if ( v3 > 0x48 )
  {
    if ( !under_debugger )
      sub_37E160(50590);
    BUG();
  }
  v4 = byte_4071E0[v3];
  if ( (v4 & 1) != 0 && !(unsigned __int8)sub_83790(a1 + 32, a2) )
    return 0;
  if ( (v4 & 2) != 0 && !(unsigned __int8)sub_83790(a1 + 48, a2) )
    return 0;
  if ( (v4 & 4) != 0 && !(unsigned __int8)sub_83790(a1 + 64, a2) )
    return 0;
  *(_DWORD *)(a1 + 4) = sub_78B20((_QWORD *)a2);
  v5 = *(_QWORD *)(a2 + 32);
  if ( *(_DWORD *)(a2 + 48) <= 3u )
    v6 = sub_78CC0((_QWORD *)a2) + v5;
  else
    v6 = sub_78D00((_QWORD *)a2) + v5;
  *(_QWORD *)(a1 + 24) = v6;
  return 1;
}

