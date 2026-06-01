__int64 __fastcall sub_2B69E0(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rax
  int v4; // ebp
  int v6; // [rsp+40h] [rbp-48h]

  sub_2B61B0(*(_QWORD *)(a2 + 1496), *(_QWORD *)(a2 + 40), 0);
  v3 = netnode_supval();
  if ( v3 == -1 )
    return 0;
  if ( v3 != 8 )
  {
    if ( !under_debugger )
      sub_383060(0xC7DCu, a3);
LABEL_14:
    BUG();
  }
  v4 = v6 - 1;
  if ( !v6 )
    return 0;
  if ( (v4 & 0x40000000) != 0 )
  {
    if ( !under_debugger )
      sub_383060(0xC73Cu, a3);
    goto LABEL_14;
  }
  sub_CFF70();
  if ( v4 < 0 )
  {
    *(_DWORD *)a1 = -1;
    *(_DWORD *)(a1 + 4) = -1;
    *(_QWORD *)(a1 + 8) = -1;
  }
  else
  {
    *(_DWORD *)(a1 + 4) = -1;
    *(_QWORD *)(a1 + 8) = v4;
    *(_DWORD *)a1 = 0;
  }
  return 1;
}

