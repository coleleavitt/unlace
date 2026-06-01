unsigned __int64 __fastcall sub_F7D0(__int64 a1)
{
  __int64 v2; // rdi
  const char *v4; // rsi
  const char *v5; // [rsp+0h] [rbp-50h] BYREF
  __int128 v6; // [rsp+8h] [rbp-48h]
  unsigned __int64 v7; // [rsp+18h] [rbp-38h]

  v7 = __readfsqword(0x28u);
  *(_QWORD *)a1 = &off_68508;
  *(_QWORD *)(a1 + 104) = off_68560;
  if ( (debug & 0x10000) != 0 )
  {
    v5 = nullptr;
    v6 = 0;
    get_dbctx_id();
    sub_F710((__int64 *)&v5);
    v4 = s;
    if ( (_QWORD)v6 )
      v4 = v5;
    sub_D8A0((__int64)"%s: dbg_plugmod_t deleting...\n", v4);
    if ( v5 )
    {
      *(_QWORD *)&v6 = 0;
      qfree();
    }
  }
  sub_14510();
  if ( dbg == a1 + 120 )
    dbg = 0;
  clr_module_data();
  *(_QWORD *)(a1 + 2536) = &off_692D0;
  remove_event_listener();
  v2 = *(_QWORD *)(a1 + 2496);
  *(_QWORD *)(a1 + 2192) = &off_68D18;
  if ( v2 )
  {
    *(_QWORD *)(a1 + 2504) = 0;
    qfree();
  }
  sub_CE20(*(void **)(a1 + 2464));
  sub_380E0(a1 + 2192);
  *(_QWORD *)(a1 + 488) = off_69378;
  sub_28510(a1 + 488);
  *(_QWORD *)(a1 + 224) = &off_68CC8;
  sub_38240(a1 + 224);
  sub_380E0(a1 + 224);
  *(_QWORD *)a1 = &off_692F8;
  *(_QWORD *)(a1 + 104) = &off_692D0;
  remove_event_listener();
  return v7 - __readfsqword(0x28u);
}

