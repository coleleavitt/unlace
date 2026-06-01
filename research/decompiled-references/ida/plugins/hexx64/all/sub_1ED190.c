__int64 __fastcall sub_1ED190(__int64 a1, __int64 a2, double a3)
{
  __int64 *v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  int v8; // edx

  if ( *(_BYTE *)a2 == 9 )
  {
    v4 = *(__int64 **)(a2 + 8);
    v5 = *v4;
    v6 = *((int *)v4 + 4);
    if ( *(_QWORD *)(v5 + 440) < v6 )
      sub_1ECB80(a3);
    v7 = *(_QWORD *)(v5 + 432) + 104 * v6;
    v8 = *(_DWORD *)(v7 + 24);
    *(_DWORD *)(v7 + 24) = v8 | 0x800000;
    if ( **(_DWORD **)(a1 + 24) == 62 )
      *(_DWORD *)(v7 + 24) = v8 | 0x820000;
  }
  return 0;
}

