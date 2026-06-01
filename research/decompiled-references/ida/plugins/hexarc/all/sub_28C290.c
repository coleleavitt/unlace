__int64 __fastcall sub_28C290(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  char tinfo_property; // al
  unsigned __int8 v7; // al
  char v8; // al
  unsigned __int64 tinfo_size; // rbp
  int v10; // r9d
  __int64 v11; // rdi
  char v12; // r13
  unsigned __int8 v13; // al
  unsigned __int8 v14; // al
  unsigned __int8 v15; // [rsp+8h] [rbp-A0h]
  unsigned __int8 v16; // [rsp+8h] [rbp-A0h]
  unsigned __int8 v17; // [rsp+8h] [rbp-A0h]
  _QWORD v18[4]; // [rsp+20h] [rbp-88h] BYREF
  __int128 v19; // [rsp+40h] [rbp-68h] BYREF
  __int64 v20; // [rsp+50h] [rbp-58h]
  int v21; // [rsp+58h] [rbp-50h]
  __int16 v22; // [rsp+5Ch] [rbp-4Ch]
  unsigned __int64 v23; // [rsp+68h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 8) != 48 )
  {
    if ( !under_debugger )
      sub_37B760(51417);
    goto LABEL_23;
  }
  v2 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v2 + 8) != 57 )
    return 0;
  v4 = *(_QWORD *)(v2 + 24);
  if ( *(_DWORD *)(v4 + 8) != 48 )
    return 0;
  if ( *(_DWORD *)(*(_QWORD *)(v4 + 24) + 8LL) == 64 )
    return 0;
  tinfo_property = get_tinfo_property();
  if ( (tinfo_property & 0x3E) == 0 || (tinfo_property & 0xFu) > 8 )
    return 0;
  v18[0] = get_tinfo_property();
  if ( (get_tinfo_property() & 0xF) == 0xC )
  {
    v18[1] = get_tinfo_property();
    v8 = get_tinfo_property();
    if ( (v8 & 0x3E) == 0
      || (v8 & 0xFu) > 8
      || (tinfo_size = get_tinfo_size(), get_tinfo_size() >= tinfo_size)
      || (v11 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 216LL),
          v19 = 0u,
          v12 = sub_3266E0(v11, (unsigned int)v18, -1, (int)a2 + 48, (unsigned int)&v19, v10),
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
    v13 = sub_23F7C0(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 24LL), *(_QWORD *)(a1 + 72), v18);
    if ( v13 )
    {
      v16 = v13;
      sub_23CE40(*(_QWORD *)(a2 + 24), *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
      copy_tinfo_t();
      sub_24E4D0((__int64 *)a2, *(_QWORD *)(a2 + 24));
      v14 = v16;
LABEL_17:
      v17 = v14;
      clear_tinfo_t();
      v7 = v17;
      goto LABEL_10;
    }
    if ( !under_debugger )
      sub_37B760(51418);
LABEL_23:
    BUG();
  }
  v7 = 0;
LABEL_10:
  v15 = v7;
  clear_tinfo_t();
  return v15;
}

