__int64 *__fastcall sub_39D060(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // edx
  __int64 v4; // rcx
  __int64 v5; // rsi

  v2 = operator new(0x28u);
  v3 = *(_DWORD *)(a2 + 48);
  v4 = *(_QWORD *)(a2 + 40);
  v5 = *(_QWORD *)(a2 + 16);
  *(_DWORD *)(v2 + 8) = 1;
  *(_QWORD *)v2 = off_4BA818;
  *(_QWORD *)(v2 + 16) = v5;
  *(_QWORD *)(v2 + 24) = v4;
  *(_DWORD *)(v2 + 32) = v3;
  *a1 = v2;
  return a1;
}

