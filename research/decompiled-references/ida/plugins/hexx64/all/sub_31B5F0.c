unsigned __int64 __fastcall sub_31B5F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  bool v3; // zf
  int v4; // ebp
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  int v11; // ebp
  unsigned __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v15[2]; // [rsp+20h] [rbp-108h] BYREF
  __int64 v16; // [rsp+30h] [rbp-F8h] BYREF
  __int128 v17; // [rsp+38h] [rbp-F0h]
  __int64 v18[2]; // [rsp+50h] [rbp-D8h] BYREF
  unsigned __int64 *v19; // [rsp+60h] [rbp-C8h] BYREF
  __int128 v20; // [rsp+68h] [rbp-C0h]
  __int64 v21; // [rsp+80h] [rbp-A8h] BYREF
  __int128 v22; // [rsp+88h] [rbp-A0h]
  __int64 v23; // [rsp+98h] [rbp-90h]
  __int64 v24; // [rsp+A0h] [rbp-88h]
  __int64 v25; // [rsp+A8h] [rbp-80h]
  __int128 v26; // [rsp+B0h] [rbp-78h]
  __int64 v27; // [rsp+C0h] [rbp-68h]
  __int128 v28; // [rsp+C8h] [rbp-60h]
  char v29; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v30; // [rsp+E8h] [rbp-40h]

  v2 = -1;
  v30 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 4) & 0x40) != 0 )
    v2 = *(_QWORD *)(a1 + 144);
  if ( *(_BYTE *)(a1 + 320)
    && (unsigned int)(*(_DWORD *)(a1 + 72) - 208) <= 0x2F
    && (unsigned __int8)*(_QWORD *)(a1 + 328) )
  {
    v21 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v27 = 0;
    v29 = 16;
    v22 = 0;
    v26 = 0;
    v28 = 0;
    get_tinfo_details();
    cleanup_argloc();
    clear_tinfo_t();
  }
  sub_1C44B0((__int64)&v21, *(_QWORD *)(a1 + 1496), v2);
  v3 = *(_QWORD *)(a1 + 464) == 0;
  v15[0] = 0;
  v15[1] = 0;
  v16 = 0;
  v17 = 0;
  if ( v3 )
  {
    if ( (*(_BYTE *)(a1 + 4) & 0x30) == 0 )
    {
      v13 = 0;
      goto LABEL_30;
    }
LABEL_40:
    if ( !under_debugger )
      sub_383060(0xCA9Fu, 0.0);
    goto LABEL_48;
  }
  v4 = 0;
  v5 = 0;
  do
  {
    v6 = *(_QWORD *)(a1 + 432) + 104LL * *(int *)(*(_QWORD *)(a1 + 456) + 4 * v5);
    *(_QWORD *)(a2 + 64) = v6;
    if ( (*(_BYTE *)(v6 + 25) & 1) == 0 )
      sub_31B520(a2, 0xC6DAu, 0.0);
    if ( !(unsigned __int8)sub_1EEA60((unsigned __int8 *)a1) )
    {
      v20 = 0;
      v18[0] = 0;
      v18[1] = 0;
      v19 = nullptr;
      sub_1C3380(v6, a1, (__int64)v18, 0, 0.0, (__m128)0LL);
      if ( (unsigned __int8)sub_64780(v18, v15) || (unsigned __int8)sub_318470(&v19, (__int64)&v16) )
        sub_31B520(a2, 0xC6D8u, 0.0);
      sub_64280(v15, v18, 0.0);
      sub_316CB0(&v16, (const void **)&v19, v7, v8);
      if ( (unsigned int)(*(_DWORD *)(a1 + 72) - 208) <= 0x2F
        && *(_DWORD *)(*(_QWORD *)(a1 + 1496) + 656LL) > *(_DWORD *)(a1 + 464)
        && !(unsigned __int8)sub_1C4550(&v21, (_DWORD *)v6, v6 + 80, *(_DWORD *)(v6 + 88), 0.0, (__m128)0LL) )
      {
        sub_31B520(a2, 0xC76Du, 0.0);
      }
      if ( v19 )
      {
        *(_QWORD *)&v20 = 0;
        qfree((__int64)v19);
      }
      qfree(v18[0]);
    }
    ++v4;
    v9 = *(_QWORD *)(a1 + 464);
    v5 = v4;
  }
  while ( v4 < v9 );
  if ( (*(_BYTE *)(a1 + 4) & 0x30) == 0 )
    goto LABEL_27;
  if ( !(_DWORD)v9 )
    goto LABEL_40;
  v10 = sub_13D280((_QWORD *)a1, 0, 0.0);
  v11 = *(_DWORD *)(v10 + 24);
  v12 = v10;
  if ( (v11 & 0x20) == 0 && (!*(_QWORD *)(v10 + 40) || strcmp(*(const char **)(v10 + 32), "this")) )
  {
    if ( !under_debugger )
      sub_383060(0xCAA0u, 0.0);
    goto LABEL_48;
  }
  if ( (v11 & 0x40) == 0 )
  {
    if ( (get_tinfo_property() & 0xF) == 0xA )
    {
      v11 = *(_DWORD *)(v12 + 24);
      goto LABEL_26;
    }
    if ( !under_debugger )
      sub_383060(0xCAA1u, 0.0);
LABEL_48:
    BUG();
  }
LABEL_26:
  if ( (v11 & 0x8000) == 0 )
  {
    if ( !under_debugger )
      sub_383060(0xCAAFu, 0.0);
    goto LABEL_48;
  }
LABEL_27:
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v16);
  }
  v13 = v15[0];
LABEL_30:
  qfree(v13);
  if ( v23 )
  {
    v24 = 0;
    qfree(v23);
  }
  qfree(v22);
  return v30 - __readfsqword(0x28u);
}

