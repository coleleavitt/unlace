__int64 __fastcall sub_292E10(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int tinfo_size; // r12d
  __int64 v5; // rdx
  int v6; // ecx
  unsigned int v7; // eax
  int v8; // ecx
  _QWORD v9[7]; // [rsp+0h] [rbp-38h] BYREF

  v9[1] = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v2 + 8) != 51 )
    return 0;
  if ( *(_DWORD *)(*(_QWORD *)(v2 + 24) + 8LL) != 48 )
    return 0;
  if ( (*(_BYTE *)(a2 + 48) & 0xFu) > 8 )
    return 0;
  tinfo_size = get_tinfo_size();
  if ( tinfo_size != (unsigned int)get_tinfo_size() )
    return 0;
  sub_32C870(v9, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), a2 + 48);
  copy_tinfo_t();
  clear_tinfo_t();
  v5 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 24LL);
  v6 = *(_DWORD *)(v5 + 56);
  v7 = v6 & 0xFFFFFFDF;
  v8 = v6 | 0x20;
  if ( (*(_BYTE *)(a2 + 56) & 0x20) != 0 )
    v7 = v8;
  *(_DWORD *)(v5 + 56) = v7;
  copy_tinfo_t();
  sub_255C10((__int64 *)a2, *(_QWORD *)(a2 + 24));
  return 1;
}

