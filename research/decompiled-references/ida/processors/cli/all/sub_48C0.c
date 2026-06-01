__int64 __fastcall sub_48C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  int v3; // eax
  int v4; // ecx
  int v5; // r13d
  __int64 flags; // rax
  __int64 v7; // r12

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(unsigned __int16 *)(a2 + 24);
  v4 = *(_DWORD *)(v2 + 104);
  if ( v3 < v4 || v3 >= *(_DWORD *)(v2 + 108) )
  {
    *(_BYTE *)(a1 + 10397) = 1;
    get_flags_ex(*(_QWORD *)(a2 + 16), 0);
    goto LABEL_10;
  }
  v5 = *(_DWORD *)(*(_QWORD *)(v2 + 112) + 16LL * (v3 - v4) + 8);
  *(_BYTE *)(a1 + 10397) = ~(_BYTE)v5;
  *(_BYTE *)(a1 + 10397) &= 1u;
  flags = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
  v7 = flags;
  if ( (v5 & 0x100) != 0 )
    sub_4630(a1, a2, (unsigned __int8 *)(a2 + 40), flags, 1u);
  if ( (v5 & 4) == 0 )
  {
LABEL_10:
    if ( (unsigned __int8)segtype(*(_QWORD *)(a2 + 16)) == 1 )
      goto LABEL_7;
    goto LABEL_11;
  }
  sub_4630(a1, a2, (unsigned __int8 *)(a2 + 40), v7, 0);
  if ( (unsigned __int8)segtype(*(_QWORD *)(a2 + 16)) == 1 )
  {
LABEL_7:
    *(_BYTE *)(a1 + 10397) = 0;
    return 1;
  }
LABEL_11:
  if ( !*(_BYTE *)(a1 + 10397) )
    return 1;
  add_cref(*(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26), 21);
  return 1;
}

