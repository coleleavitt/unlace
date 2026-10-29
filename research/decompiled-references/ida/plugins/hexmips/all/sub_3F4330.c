__int64 __fastcall sub_3F4330(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  int v4; // r13d
  __int64 v5; // r14

  if ( *(_BYTE *)a2 != 4 )
    return 0;
  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_DWORD *)(a2 + 4);
  v5 = *(_QWORD *)(v3 + 24);
  if ( !(unsigned __int8)sub_3F2DD0(*(_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24), v3) )
  {
    if ( (unsigned int)(*(_DWORD *)v3 - 12) > 1
      || !(unsigned __int8)sub_1385E0(*(_QWORD *)(a1 + 16), a2, (int *)v3, 0, a2, 0xFFFFFFFF) )
    {
      return 0;
    }
    sub_118750((char *)a2, *(_QWORD *)(a1 + 48));
    if ( *(_DWORD *)(a2 + 4) < v4 )
      sub_11C5E0((char *)a2, *(_QWORD *)(a1 + 48), 9, v5, v4);
    *(_BYTE *)(a1 + 40) = 1;
  }
  ++*(_DWORD *)(a1 + 56);
  return 0;
}

