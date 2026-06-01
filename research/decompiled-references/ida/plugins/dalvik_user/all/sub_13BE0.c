unsigned __int64 __fastcall sub_13BE0(_QWORD *a1)
{
  const char *v2; // rsi
  const char *v3; // [rsp+0h] [rbp-50h] BYREF
  __int128 v4; // [rsp+8h] [rbp-48h]
  unsigned __int64 v5; // [rsp+18h] [rbp-38h]

  v5 = __readfsqword(0x28u);
  *a1 = &off_7D2C8;
  a1[13] = off_7D320;
  if ( (debug & 0x10000) == 0 )
    goto LABEL_13;
  v3 = nullptr;
  v4 = 0;
  get_dbctx_id();
  sub_13B20((__int64 *)&v3);
  v2 = nptr;
  if ( (_QWORD)v4 )
    v2 = v3;
  sub_111A0((__int64)"%s: dbg_plugmod_t deleting...\n", v2);
  if ( v3 )
  {
    *(_QWORD *)&v4 = 0;
    qfree();
    if ( (unsigned __int8)netnode_inited() )
    {
LABEL_9:
      sub_F3A0(nullptr);
      if ( (_QWORD *)dbg == a1 + 15 )
        goto LABEL_10;
      goto LABEL_4;
    }
  }
  else
  {
LABEL_13:
    if ( (unsigned __int8)netnode_inited() )
      goto LABEL_9;
  }
  if ( (_QWORD *)dbg == a1 + 15 )
LABEL_10:
    dbg = 0;
LABEL_4:
  clr_module_data();
  a1[262] = &off_7E4B0;
  remove_event_listener();
  sub_11D90((__int64)(a1 + 28));
  a1[13] = &off_7E4B0;
  *a1 = &off_7E4D8;
  remove_event_listener();
  return v5 - __readfsqword(0x28u);
}

