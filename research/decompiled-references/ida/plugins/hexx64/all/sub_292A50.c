__int64 __fastcall sub_292A50(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rax
  int tinfo_size; // r12d
  __int64 v6; // rdx
  int v7; // ecx
  unsigned int v8; // eax
  int v9; // ecx
  _QWORD v10[7]; // [rsp+0h] [rbp-38h] BYREF

  v10[1] = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v3 + 8) != 51 )
    return 0;
  if ( *(_DWORD *)(*(_QWORD *)(v3 + 24) + 8LL) != 48 )
    return 0;
  if ( (*(_BYTE *)(a2 + 48) & 0xFu) > 8 )
    return 0;
  tinfo_size = get_tinfo_size();
  if ( tinfo_size != (unsigned int)get_tinfo_size() )
    return 0;
  sub_32C540(v10, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), (_QWORD *)(a2 + 48));
  copy_tinfo_t();
  clear_tinfo_t();
  v6 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 24LL);
  v7 = *(_DWORD *)(v6 + 56);
  v8 = v7 & 0xFFFFFFDF;
  v9 = v7 | 0x20;
  if ( (*(_BYTE *)(a2 + 56) & 0x20) != 0 )
    v8 = v9;
  *(_DWORD *)(v6 + 56) = v8;
  copy_tinfo_t();
  sub_255850((__int64 *)a2, *(_QWORD *)(a2 + 24), a3);
  return 1;
}

