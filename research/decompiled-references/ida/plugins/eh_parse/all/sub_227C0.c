__int64 __fastcall sub_227C0(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rbp
  unsigned __int64 v6; // r15
  int v7; // r13d
  unsigned int dword; // eax
  __int64 v9; // r13
  unsigned __int64 v10; // r13

  v4 = sub_22740(a1, a3);
  if ( v4 >= *(unsigned int *)(a1 + 56) )
    return -1;
  v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL) + 16LL) & (*(_QWORD *)(a1 + 40) + v4 * *(_QWORD *)(a1 + 24));
  v6 = sub_218F0(a1, v5);
  if ( a3 < v6 )
  {
    if ( !v4 )
      return -1;
    v5 -= *(_QWORD *)(a1 + 24);
    v6 = sub_218F0(a1, v5);
    if ( a3 < v6 )
      return -1;
  }
  v7 = 2;
  if ( *(_DWORD *)(a1 + 60) == 5 )
    v7 = 4;
  dword = get_dword(v5 + 4);
  v9 = (dword & 2) != 0
     ? ((dword >> 2) & 0x7FF) * v7
     : ((unsigned int)get_dword(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL) + 16LL) & (*(_QWORD *)(a1 + 32)
                                                                                             + dword))
      & 0x3FFFF)
     * v7;
  v10 = v6 + v9;
  if ( a3 >= v10 )
    return -1;
  if ( a2 )
  {
    *a2 = v6;
    a2[1] = v10;
  }
  return v5;
}

