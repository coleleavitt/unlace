__int64 __fastcall sub_3EAB70(__int64 a1, unsigned int a2, int a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
  __int64 v11; // r9
  __int64 v12; // rbx

  v11 = **(int **)(*(_QWORD *)(a1 + 832) + 696LL);
  if ( v11 == a5 || v11 == a4 || v11 == a6 )
    sub_1D1F50(a1, 3u, a3, 0, 0x3BEA45E214ADDC55LL, v11, 0);
  v12 = sub_1D1F50(a1, a2, a3, a4, a5, a6, a7);
  if ( v12
    && sub_11A6C0((unsigned int *)v12)
    && *(_BYTE *)(v12 + 64) == 1
    && *(_DWORD *)(v12 + 72) == **(_DWORD **)(*(_QWORD *)(a1 + 832) + 728LL) )
  {
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 920LL) + 128LL) |= 2u;
  }
  return v12;
}

