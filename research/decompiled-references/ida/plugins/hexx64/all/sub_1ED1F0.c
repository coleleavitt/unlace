bool __fastcall sub_1ED1F0(__int64 a1, double a2)
{
  __int64 *v2; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  int v7; // edx

  if ( *(_BYTE *)a1 != 9 )
    return 0;
  v2 = *(__int64 **)(a1 + 8);
  if ( v2[1] )
    return 0;
  v4 = *v2;
  v5 = *((int *)v2 + 4);
  if ( *(_QWORD *)(v4 + 440) < v5 )
    sub_1ECB80(a2);
  v6 = *(_QWORD *)(v4 + 432) + 104 * v5;
  v7 = *(_DWORD *)(v6 + 88);
  return v7 == *(_DWORD *)(a1 + 4) && (*(_BYTE *)(a1 + 1) & 2) == 0 && (*(_BYTE *)(v6 + 25) & 8) != 0 && sub_11CAD0(v7);
}

