__int64 __fastcall sub_11D4B0(__int64 a1)
{
  __int64 *v1; // rbp

  v1 = *(__int64 **)a1;
  sub_11D460(*(_QWORD *)a1);
  v1[17] = *(_QWORD *)(a1 + 16);
  *((_DWORD *)v1 + 36) = *(_DWORD *)(a1 + 88);
  v1[13] = *(_QWORD *)(a1 + 32);
  *((_DWORD *)v1 + 9) = *(_DWORD *)(a1 + 92);
  v1[15] = *(_QWORD *)(a1 + 40);
  *((_DWORD *)v1 + 10) = *(_DWORD *)(a1 + 80);
  *(_QWORD *)(*v1 + 56) = *(_QWORD *)(a1 + 64);
  v1[7] = *(_QWORD *)(a1 + 104);
  *(_QWORD *)(*v1 + 120) = *(_QWORD *)(a1 + 112);
  sub_C9B10(*v1, v1 + 37, -1, 0);
  v1[37] = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 72) = 0;
  return *(unsigned int *)(a1 + 84);
}
