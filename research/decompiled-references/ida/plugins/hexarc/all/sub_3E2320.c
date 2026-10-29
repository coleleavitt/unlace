__int64 __fastcall sub_3E2320(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  int v4; // eax

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 784LL);
  *(_DWORD *)(v2 + 8) = 8;
  *(_DWORD *)(v2 + 24) = 4;
  *(_DWORD *)(v2 + 32) = 272;
  *(_QWORD *)(v2 + 56) = a1;
  *(_QWORD *)(v2 + 48) = sub_3E2270;
  *(_QWORD *)(*(_QWORD *)(a1 + 832) + 352LL) = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1352LL);
  v3 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 840) = a2;
  if ( (*(_BYTE *)(v3 + 112) & 0x10) != 0 )
  {
    *(_DWORD *)(v3 + 1184) = 116;
    v4 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 1184LL);
    *(_QWORD *)(a1 + 864) = -1;
    *(_DWORD *)(a1 + 872) = v4;
  }
  return 0;
}

