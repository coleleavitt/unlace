unsigned __int64 __fastcall sub_C860(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v5; // [rsp+0h] [rbp-50h] BYREF
  __int128 v6; // [rsp+8h] [rbp-48h]
  unsigned __int64 v7; // [rsp+18h] [rbp-38h]

  v7 = __readfsqword(0x28u);
  *a1 = &off_38828;
  a1[13] = off_38880;
  if ( (debug & 0x10000) != 0 && (v5 = 0, v6 = 0, get_dbctx_id(), sub_C7A0(&v5), sub_B4F0(), v5) )
  {
    *(_QWORD *)&v6 = 0;
    qfree();
    if ( (_QWORD *)dbg != a1 + 15 )
      goto LABEL_3;
  }
  else if ( (_QWORD *)dbg != a1 + 15 )
  {
    goto LABEL_3;
  }
  dbg = 0;
LABEL_3:
  clr_module_data();
  v2 = a1[160];
  a1[28] = off_39318;
  a1[136] = off_39590;
  if ( v2 )
  {
    a1[161] = 0;
    qfree();
  }
  a1[28] = off_39990;
  a1[136] = &off_396C0;
  free_debug_event();
  v3 = a1[145];
  a1[136] = &unk_39CE8;
  if ( v3 )
  {
    a1[146] = 0;
    qfree();
  }
  if ( a1[138] )
  {
    a1[139] = 0;
    qfree();
  }
  sub_B760((__int64)(a1 + 28));
  *a1 = &off_395E8;
  a1[13] = &off_392F0;
  remove_event_listener();
  return v7 - __readfsqword(0x28u);
}

