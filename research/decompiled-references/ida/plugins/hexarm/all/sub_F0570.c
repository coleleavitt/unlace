__int64 __fastcall sub_F0570(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // r12
  unsigned __int64 v11; // r14
  __int64 v12; // r14
  __int64 v13; // rax
  char v14; // r13
  __int64 v15; // rax
  __int64 v16; // r13
  unsigned __int64 v18; // [rsp+10h] [rbp-50h]
  unsigned __int8 v19; // [rsp+1Fh] [rbp-41h]
  _QWORD v20[8]; // [rsp+20h] [rbp-40h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v20[1] = __readfsqword(0x28u);
  v19 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v3 + 8) + 936LL) + 80LL))(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 936LL));
  if ( !v19 )
    return v19;
  if ( *(_DWORD *)(a2 + 8) != 65 )
    return 0;
  v5 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 432LL) + 104LL * *(int *)(a2 + 32);
  if ( *(_DWORD *)v5 != 1 )
    return 0;
  v6 = *(_QWORD *)(v5 + 8) - *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8LL * *(int *)(a1 + 120));
  if ( v6 < 0 )
    return 0;
  *(_DWORD *)(v5 + 24) &= ~1u;
  v18 = v6;
  v7 = j__qalloc_or_throw();
  *(_QWORD *)(v7 + 8) = -4294967231LL;
  v8 = v7;
  *(_QWORD *)v7 = -1;
  *(_QWORD *)(v7 + 16) = 0xFFFFFFFFLL;
  *(_OWORD *)(v7 + 24) = 0;
  *(_QWORD *)(v7 + 40) = 0;
  *(_QWORD *)(v7 + 48) = 0;
  *(_DWORD *)(v7 + 56) = 0;
  *(_QWORD *)(v7 + 24) = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL);
  *(_DWORD *)(v7 + 32) = *(_DWORD *)(**(_QWORD **)(a1 + 88) + 4LL * *(int *)(a1 + 120));
  copy_tinfo_t();
  v9 = j__qalloc_or_throw();
  *(_QWORD *)(v9 + 24) = v8;
  v10 = v9;
  *(_QWORD *)v9 = -1;
  *(_DWORD *)(v9 + 8) = 48;
  *(_QWORD *)(v9 + 12) = -1;
  *(_QWORD *)(v9 + 32) = 0;
  *(_QWORD *)(v9 + 40) = 0;
  *(_QWORD *)(v9 + 48) = 0;
  *(_DWORD *)(v9 + 56) = 0;
  v11 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 216LL) + 130LL);
  if ( v18 % v11 )
  {
    copy_tinfo_t();
  }
  else
  {
    copy_tinfo_t();
    if ( v18 < v11 )
      goto LABEL_8;
    LODWORD(v18) = v18 / v11;
  }
  v12 = j__qalloc_or_throw();
  v13 = sub_241310(*(_QWORD *)(a1 + 72), v18, 0, -1, 0, 0, 0);
  *(_QWORD *)(v12 + 24) = v10;
  *(_QWORD *)(v12 + 32) = v13;
  v10 = v12;
  *(_QWORD *)v12 = -1;
  *(_DWORD *)(v12 + 8) = 35;
  *(_QWORD *)(v12 + 12) = -1;
  *(_QWORD *)(v12 + 40) = 0;
  *(_QWORD *)(v12 + 48) = 0;
  *(_DWORD *)(v12 + 56) = 0;
  sub_244580(v12, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
LABEL_8:
  if ( a3 )
  {
    v20[0] = get_tinfo_property();
    v14 = compare_tinfo();
    clear_tinfo_t();
    if ( !v14 )
    {
      v15 = j__qalloc_or_throw();
      *(_QWORD *)v15 = -1;
      v16 = v15;
      *(_DWORD *)(v15 + 8) = 48;
      *(_QWORD *)(v15 + 24) = v10;
      *(_QWORD *)(v15 + 12) = -1;
      *(_QWORD *)(v15 + 32) = 0;
      *(_QWORD *)(v15 + 40) = 0;
      *(_QWORD *)(v15 + 48) = 0;
      *(_DWORD *)(v15 + 56) = 0;
      sub_32C870(v20, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), a2 + 48);
      copy_tinfo_t();
      v10 = v16;
      clear_tinfo_t();
    }
    sub_2559F0(a2);
    *(_DWORD *)(a2 + 8) = 51;
    *(_QWORD *)(a2 + 24) = v10;
  }
  else
  {
    sub_2559F0(a2);
    sub_255C10(a2, v10);
  }
  sub_244580(a2, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
  if ( *(_DWORD *)(a2 + 8) == 51 )
    *(_DWORD *)(a2 + 40) = get_tinfo_size();
  return v19;
}

