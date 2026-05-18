__int64 *__fastcall sub_C3C50(__int64 a1)
{
  int v1; // edx
  char v2; // al
  __int64 v3; // rdx

  v1 = *(char *)(a1 + 84);
  *(_BYTE *)(a1 + 1) &= 0xF9u;
  *(_WORD *)(a1 + 70) = 0;
  v2 = v1 - 1;
  LOWORD(v1) = *(_WORD *)(a1 + 2LL * (v1 - 1) + 88);
  *(_BYTE *)(a1 + 84) = v2;
  *(_WORD *)(a1 + 86) = v1;
  v3 = *(_QWORD *)(a1 + 136);
  *(_QWORD *)(a1 + 136) = *(_QWORD *)(a1 + 8LL * v2 + 144);
  return sub_C36A0(*(_QWORD *)(v3 + 112));
}
