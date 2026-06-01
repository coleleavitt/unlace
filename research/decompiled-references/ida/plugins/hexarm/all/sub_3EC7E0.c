__int64 __fastcall sub_3EC7E0(__int64 a1, double a2)
{
  const char *v2; // rax
  __int16 v3; // dx
  unsigned __int16 v4; // cx

  *(_DWORD *)(a1 + 48) |= 0x800u;
  if ( *(_DWORD *)(a1 + 80) == 8 )
    sub_3EC590((_QWORD *)a1, a2);
  sub_1D2470(*(_QWORD *)(a1 + 96));
  netnode_check();
  sub_151110(a1, a1 + 696);
  sub_33E3B0((__int64)sub_3EA9C0, 0);
  hook_event_listener();
  v2 = (const char *)&unk_42E382;
  v3 = 1;
  do
  {
    v4 = v3;
    v3 = *(_WORD *)v2;
    if ( v4 >= *(_WORD *)v2 )
    {
      if ( !under_debugger )
        sub_3835A0(0xC82Cu, a2);
      BUG();
    }
    v2 += 2;
  }
  while ( v2 != "bhsdq" );
  sub_33F540(*(_QWORD *)(a1 + 96));
  return 1;
}

