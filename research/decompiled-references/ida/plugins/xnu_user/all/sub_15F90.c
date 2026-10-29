unsigned __int64 __fastcall sub_15F90(__int64 a1)
{
  __int64 v2; // rdi
  const char *v4; // rsi
  const char *v5; // [rsp+0h] [rbp-50h] BYREF
  __int128 v6; // [rsp+8h] [rbp-48h]
  unsigned __int64 v7; // [rsp+18h] [rbp-38h]

  v7 = __readfsqword(0x28u);
  *(_QWORD *)a1 = &off_97108;
  *(_QWORD *)(a1 + 104) = off_97160;
  if ( (debug & 0x10000) != 0 )
  {
    v5 = nullptr;
    v6 = 0;
    get_dbctx_id();
    sub_15ED0((__int64 *)&v5);
    v4 = src;
    if ( (_QWORD)v6 )
      v4 = v5;
    sub_13DB0((__int64)"%s: dbg_plugmod_t deleting...\n", v4);
    if ( v5 )
    {
      *(_QWORD *)&v6 = 0;
      qfree();
    }
  }
  sub_1F760();
  if ( dbg == a1 + 120 )
    dbg = 0;
  clr_module_data();
  *(_QWORD *)(a1 + 2984) = &off_98F10;
  remove_event_listener();
  v2 = *(_QWORD *)(a1 + 2944);
  *(_QWORD *)(a1 + 2640) = &off_989F8;
  if ( v2 )
  {
    *(_QWORD *)(a1 + 2952) = 0;
    qfree();
  }
  sub_12D50(*(void **)(a1 + 2912));
  sub_63BB0(a1 + 2640);
  sub_155F0((_QWORD *)(a1 + 488));
  *(_QWORD *)(a1 + 224) = &off_989A8;
  sub_63D10(a1 + 224);
  sub_63BB0(a1 + 224);
  *(_QWORD *)a1 = &off_98F38;
  *(_QWORD *)(a1 + 104) = &off_98F10;
  remove_event_listener();
  return v7 - __readfsqword(0x28u);
}

