unsigned __int64 __fastcall sub_317470(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  bool v3; // zf
  int v4; // ebp
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  __int64 v8; // rax
  int v9; // ebp
  __int64 v10; // rbx
  __int64 v12[2]; // [rsp+20h] [rbp-108h] BYREF
  __int64 v13; // [rsp+30h] [rbp-F8h] BYREF
  __int128 v14; // [rsp+38h] [rbp-F0h]
  __int64 v15[2]; // [rsp+50h] [rbp-D8h] BYREF
  __int64 *v16; // [rsp+60h] [rbp-C8h] BYREF
  __int128 v17; // [rsp+68h] [rbp-C0h]
  __int64 v18; // [rsp+80h] [rbp-A8h] BYREF
  __int128 v19; // [rsp+88h] [rbp-A0h]
  __int64 v20; // [rsp+98h] [rbp-90h]
  __int64 v21; // [rsp+A0h] [rbp-88h]
  __int64 v22; // [rsp+A8h] [rbp-80h]
  __int128 v23; // [rsp+B0h] [rbp-78h]
  __int64 v24; // [rsp+C0h] [rbp-68h]
  __int128 v25; // [rsp+C8h] [rbp-60h]
  char v26; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v27; // [rsp+E8h] [rbp-40h]

  v2 = -1;
  v27 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 4) & 0x40) != 0 )
    v2 = *(_QWORD *)(a1 + 144);
  if ( *(_BYTE *)(a1 + 320)
    && (unsigned int)(*(_DWORD *)(a1 + 72) - 208) <= 0x2F
    && (unsigned __int8)*(_QWORD *)(a1 + 328) )
  {
    v18 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v24 = 0;
    v26 = 16;
    v19 = 0;
    v23 = 0;
    v25 = 0;
    get_tinfo_details();
    cleanup_argloc();
    clear_tinfo_t();
  }
  sub_1C0A70((__int64)&v18, *(_QWORD *)(a1 + 1496), v2);
  v3 = *(_QWORD *)(a1 + 464) == 0;
  v12[0] = 0;
  v12[1] = 0;
  v13 = 0;
  v14 = 0;
  if ( v3 )
  {
    if ( (*(_BYTE *)(a1 + 4) & 0x30) == 0 )
      goto LABEL_29;
LABEL_39:
    if ( !under_debugger )
      sub_37EEE0(51871);
    goto LABEL_47;
  }
  v4 = 0;
  v5 = 0;
  do
  {
    v6 = *(_QWORD *)(a1 + 432) + 104LL * *(int *)(*(_QWORD *)(a1 + 456) + 4 * v5);
    *(_QWORD *)(a2 + 64) = v6;
    if ( (*(_BYTE *)(v6 + 25) & 1) == 0 )
      sub_3173A0(a2, 0xC6DAu);
    if ( !(unsigned __int8)sub_1EADE0((unsigned __int8 *)a1) )
    {
      v17 = 0;
      v15[0] = 0;
      v15[1] = 0;
      v16 = nullptr;
      sub_1BF940(v6, a1, (__int64)v15, 0);
      if ( (unsigned __int8)sub_60D40(v15, v12) || (unsigned __int8)sub_3142F0((unsigned __int64 **)&v16, (__int64)&v13) )
        sub_3173A0(a2, 0xC6D8u);
      sub_60840(v12, v15);
      sub_312B30(&v13, &v16);
      if ( (unsigned int)(*(_DWORD *)(a1 + 72) - 208) <= 0x2F
        && *(_DWORD *)(*(_QWORD *)(a1 + 1496) + 656LL) > *(_DWORD *)(a1 + 464)
        && !(unsigned __int8)sub_1C0B10(&v18, (_DWORD *)v6, v6 + 80, *(_DWORD *)(v6 + 88)) )
      {
        sub_3173A0(a2, 0xC76Du);
      }
      if ( v16 )
      {
        *(_QWORD *)&v17 = 0;
        qfree();
      }
      qfree();
    }
    ++v4;
    v7 = *(_QWORD *)(a1 + 464);
    v5 = v4;
  }
  while ( v4 < v7 );
  if ( (*(_BYTE *)(a1 + 4) & 0x30) == 0 )
    goto LABEL_27;
  if ( !(_DWORD)v7 )
    goto LABEL_39;
  v8 = sub_139840((_QWORD *)a1, 0);
  v9 = *(_DWORD *)(v8 + 24);
  v10 = v8;
  if ( (v9 & 0x20) == 0 && (!*(_QWORD *)(v8 + 40) || strcmp(*(const char **)(v8 + 32), "this")) )
  {
    if ( !under_debugger )
      sub_37EEE0(51872);
    goto LABEL_47;
  }
  if ( (v9 & 0x40) == 0 )
  {
    if ( (get_tinfo_property() & 0xF) == 0xA )
    {
      v9 = *(_DWORD *)(v10 + 24);
      goto LABEL_26;
    }
    if ( !under_debugger )
      sub_37EEE0(51873);
LABEL_47:
    BUG();
  }
LABEL_26:
  if ( (v9 & 0x8000) == 0 )
  {
    if ( !under_debugger )
      sub_37EEE0(51887);
    goto LABEL_47;
  }
LABEL_27:
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree();
  }
LABEL_29:
  qfree();
  if ( v20 )
  {
    v21 = 0;
    qfree();
  }
  qfree();
  return v27 - __readfsqword(0x28u);
}

