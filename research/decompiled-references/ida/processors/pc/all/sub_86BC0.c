__int64 __fastcall sub_86BC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v6; // bp
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // [rsp+0h] [rbp-38h]
  __int64 v15; // [rsp+8h] [rbp-30h]
  __int64 v16; // [rsp+10h] [rbp-28h]
  __int64 v17; // [rsp+18h] [rbp-20h]

  v6 = 0;
  ((void (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64))callui)(25, a2, a3, a4, a5, a6);
  v7 = 112;
  v10 = netnode_supfirst();
  if ( v10 != -1 )
  {
    while ( !(unsigned __int8)callui(27, v7, v8, v9, v11, v12, v14, v15, v16, v17) )
    {
      if ( !v6 )
        sub_496E0((__int64)"Postponed purged byte analysis");
      node2ea();
      show_auto();
      netnode_charval();
      v6 = 1;
      set_purged();
      v7 = v10;
      v10 = netnode_supnext();
      if ( v10 == -1 )
        goto LABEL_9;
    }
    if ( !v6 )
      goto LABEL_8;
LABEL_9:
    callui(24, 10, 0, &callui, v11, v12, v14, v15, v16, v17);
    netnode_supdel_all();
  }
LABEL_8:
  netnode_supset();
  return v15 - __readfsqword(0x28u);
}
