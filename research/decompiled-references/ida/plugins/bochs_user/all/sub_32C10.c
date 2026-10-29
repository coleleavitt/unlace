__int64 __fastcall sub_32C10(__int64 a1, double a2)
{
  __int64 v2; // r12
  __int64 v3; // rdx
  const char *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // eax
  _QWORD v16[5]; // [rsp+0h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 1200);
  v16[1] = __readfsqword(0x28u);
  if ( !v3 )
  {
    sub_14430((__int64)"Internal error: could not determine needed configuration values.\n");
    return 19;
  }
  v4 = nullptr;
  if ( !(unsigned __int8)callui(9, 0, v3 + 8240, v3 + 8232) )
  {
    if ( *(_BYTE *)(a1 + 2712) )
    {
      v11 = *(_QWORD *)(a1 + 1200);
      *(_QWORD *)(v11 + 8232) = get_name_ea();
      v2 = *(_QWORD *)(a1 + 1200);
      if ( *(_QWORD *)(v2 + 8232) == -1 )
      {
LABEL_14:
        *(_QWORD *)(v2 + 8240) = get_name_ea();
        goto LABEL_6;
      }
LABEL_29:
      *(_QWORD *)(v2 + 8232) = get_item_end();
      v2 = *(_QWORD *)(a1 + 1200);
      goto LABEL_14;
    }
    goto LABEL_17;
  }
  if ( *(_BYTE *)(a1 + 2713) )
  {
    v4 = "TITLE Change Bochs operation mode\n"
         "ICON WARNING\n"
         "AUTOHIDE DATABASE\n"
         "You have a selected area and trying to launch the Bochs Debugger in PE operation mode.\n"
         "\n"
         "Selections only work in IDB operation mode, do you want to temporarily switch to this mode?\n";
    v15 = sub_ECA0();
    if ( !v15 )
    {
      *(_WORD *)(a1 + 2712) = 1;
      goto LABEL_5;
    }
    if ( v15 == -1 )
      return 1;
    if ( *(_BYTE *)(a1 + 2712) )
      goto LABEL_5;
LABEL_17:
    if ( *(_BYTE *)(a1 + 2713) )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 1200) + 8232LL) = 0;
      return 0;
    }
    goto LABEL_27;
  }
  if ( !*(_BYTE *)(a1 + 2712) )
  {
LABEL_27:
    if ( under_debugger )
      BUG();
    interr();
    goto LABEL_29;
  }
LABEL_5:
  callui(10, v4, v5, v6);
LABEL_6:
  v9 = *(_QWORD *)(a1 + 1200);
  if ( *(_QWORD *)(v9 + 8240) == -1 )
  {
    callui(11, v16, v7, v8);
    *(_QWORD *)(v9 + 8240) = v16[0];
  }
  v10 = getseg();
  if ( *(_BYTE *)(a1 + 2714) )
  {
    if ( !v10 || *(_BYTE *)(v10 + 43) == 2 )
    {
      v13 = *(__int64 *)(*(_QWORD *)(a1 + 1200) + 8240LL) >> 47;
      if ( v13 == -1 || v13 == 0 )
        goto LABEL_23;
    }
  }
  else if ( !v10 || *(_BYTE *)(v10 + 43) == 1 )
  {
LABEL_23:
    sub_EBD0((__int64)"Starting emulation at %a", a2);
    v14 = *(_QWORD *)(a1 + 1200);
    if ( *(_QWORD *)(v14 + 8232) == -1 )
    {
      *(_QWORD *)(v14 + 8232) = 0;
      sub_EBD0((__int64)"\n");
    }
    else
    {
      sub_EBD0((__int64)" ending emulation at %a\n", a2);
    }
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 1200) + 8230LL) )
      sub_EBD0((__int64)"Bochs image is obsolete and will be recreated.\n");
    return 0;
  }
  sub_EB00((__int64)"AUTOHIDE NONE\n"
                    "Incorrect segment bitness.\n"
                    "Please select the correct emulation mode from the debugger settings");
  return 17;
}

