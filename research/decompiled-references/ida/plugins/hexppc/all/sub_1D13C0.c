void __fastcall sub_1D13C0(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v3; // edx
  unsigned int v4; // eax
  int v5; // edx
  __int64 v6; // rdx

  if ( *(_QWORD *)(a1 + 512) != a2 )
  {
    v2 = *(_DWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 512) = a2;
    v3 = v2;
    v4 = v2 & 0xFFFBFFFF;
    v5 = v3 | 0x40000;
    if ( a2 )
      v4 = v5;
    v6 = *(_QWORD *)(a1 + 64);
    *(_DWORD *)(a1 + 24) = v4;
    *(_QWORD *)(a1 + 520) = *(_QWORD *)(*(_QWORD *)(v6 + 1472) + 40 * a2 + 24);
  }
}

