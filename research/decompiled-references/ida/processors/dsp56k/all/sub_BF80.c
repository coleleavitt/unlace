__int64 __fastcall sub_BF80(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax

  v1 = *(int *)(a1 + 264);
  *(_DWORD *)(a1 + 264) = v1 + 1;
  v2 = a1 + 80 * v1 + 272;
  *(_QWORD *)(a1 + 248) = v2;
  *(_BYTE *)(v2 + 4) = 8;
  *(_BYTE *)(v2 + 44) = 8;
  **(_BYTE **)(a1 + 248) = 1;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 40LL) = 1;
  return 1;
}

