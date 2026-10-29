__int64 __fastcall sub_293610(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rax
  __int64 v5; // rax
  char tinfo_property; // al
  unsigned __int8 v8; // al
  char v9; // al
  unsigned __int64 tinfo_size; // rbp
  __int64 v11; // rdi
  char v12; // r13
  unsigned __int8 v13; // al
  unsigned __int8 v14; // al
  unsigned __int8 v15; // [rsp+8h] [rbp-A0h]
  unsigned __int8 v16; // [rsp+8h] [rbp-A0h]
  unsigned __int8 v17; // [rsp+8h] [rbp-A0h]
  __int64 v18[4]; // [rsp+20h] [rbp-88h] BYREF
  __int128 v19; // [rsp+40h] [rbp-68h] BYREF
  __int64 v20; // [rsp+50h] [rbp-58h]
  int v21; // [rsp+58h] [rbp-50h]
  __int16 v22; // [rsp+5Ch] [rbp-4Ch]
  unsigned __int64 v23; // [rsp+68h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 8) != 48 )
  {
    if ( !under_debugger )
      sub_383060(0xC8D9u, a3);
    goto LABEL_23;
  }
  v3 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v3 + 8) != 57 )
    return 0;
  v5 = *(_QWORD *)(v3 + 24);
  if ( *(_DWORD *)(v5 + 8) != 48 )
    return 0;
  if ( *(_DWORD *)(*(_QWORD *)(v5 + 24) + 8LL) == 64 )
    return 0;
  tinfo_property = get_tinfo_property();
  if ( (tinfo_property & 0x3E) == 0 || (tinfo_property & 0xFu) > 8 )
    return 0;
  v18[0] = get_tinfo_property();
  if ( (get_tinfo_property() & 0xF) == 0xC )
  {
    v18[1] = get_tinfo_property();
    v9 = get_tinfo_property();
    if ( (v9 & 0x3E) == 0
      || (v9 & 0xFu) > 8
      || (tinfo_size = get_tinfo_size(), get_tinfo_size() >= tinfo_size)
      || (v11 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 216LL),
          v19 = 0u,
          v12 = sub_32DC20(v11, v18, -1, (__int64 *)(a2 + 48), &v19),
          cleanup_argloc(),
          !v12) )
    {
      v14 = 0;
      goto LABEL_17;
    }
    v18[2] = 0;
    v18[3] = 0;
    v19 = 0;
    copy_tinfo_t();
    v20 = 0;
    copy_tinfo_t();
    v21 = 0;
    v22 = 0;
    clear_tinfo_t();
    clear_tinfo_t();
    copy_tinfo_t();
    create_tinfo();
    clear_tinfo_t();
    clear_tinfo_t();
    clear_tinfo_t();
    v13 = sub_246B40(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 24LL), *(_QWORD *)(a1 + 72), v18, 0.0);
    if ( v13 )
    {
      v16 = v13;
      sub_2441C0(*(_QWORD *)(a2 + 24), *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0, 0.0);
      copy_tinfo_t();
      sub_255850((__int64 *)a2, *(_QWORD *)(a2 + 24), 0.0);
      v14 = v16;
LABEL_17:
      v17 = v14;
      clear_tinfo_t();
      v8 = v17;
      goto LABEL_10;
    }
    if ( !under_debugger )
      sub_383060(0xC8DAu, 0.0);
LABEL_23:
    BUG();
  }
  v8 = 0;
LABEL_10:
  v15 = v8;
  clear_tinfo_t();
  return v15;
}

