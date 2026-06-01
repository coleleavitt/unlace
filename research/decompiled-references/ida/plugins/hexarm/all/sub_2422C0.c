__int64 __fastcall sub_2422C0(__int64 a1)
{
  int tinfo_size; // eax
  __int64 v2; // rdx
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // r8
  _QWORD *v6; // rax
  _QWORD *v7; // rcx

  tinfo_size = get_tinfo_size();
  v2 = *(_QWORD *)(a1 + 120);
  v3 = *(_QWORD *)(a1 + 112);
  v4 = -1LL << (8 * (unsigned __int8)tinfo_size - 1);
  if ( (unsigned __int64)(8 * tinfo_size - 1) >= 0x40 )
    v4 = 0;
  v5 = v3 + 56 * v2;
  if ( v3 == v5 )
    return 0;
  while ( 1 )
  {
    v6 = *(_QWORD **)(v3 + 32);
    v7 = &v6[*(_QWORD *)(v3 + 40)];
    if ( v7 != v6 )
      break;
LABEL_9:
    v3 += 56;
    if ( v5 == v3 )
      return 0;
  }
  while ( (*v6 & v4) == 0 )
  {
    if ( v7 == ++v6 )
      goto LABEL_9;
  }
  return 1;
}

