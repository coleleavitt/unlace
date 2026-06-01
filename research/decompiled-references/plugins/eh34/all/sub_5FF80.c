_BYTE *__fastcall sub_5FF80(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  _BYTE *result; // rax

  v3 = *(_QWORD *)(a2 + 40);
  v4 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 176) = v3;
  *(_QWORD *)(v4 + 8) = v3;
  result = *(_BYTE **)(a1 + 32);
  *result = *(_BYTE *)(a1 + 8);
  *(_DWORD *)(a1 + 184) = a3;
  return result;
}
