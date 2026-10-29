_DWORD *__fastcall sub_E2320(__int64 a1, unsigned int a2, unsigned int a3)
{
  int v4; // ebp
  __int64 v5; // rdx
  _DWORD *result; // rax

  sub_E1710(a1, 71, 0, a3, 0);
  v4 = sub_E1710(a1, 35, a2, 0, 0);
  sub_E1710(a1, 94, a2, 0, a3);
  v5 = *(int *)(a1 + 144);
  if ( (int)v5 > 0 )
  {
    *(_WORD *)(*(_QWORD *)(a1 + 136) + 24 * v5 - 22) = 128;
    LODWORD(v5) = *(_DWORD *)(a1 + 144);
  }
  if ( v4 < 0 )
    v4 = v5 - 1;
  result = &unk_241F50;
  if ( !*(_BYTE *)(*(_QWORD *)a1 + 103LL) )
    result = (_DWORD *)(*(_QWORD *)(a1 + 136) + 24LL * v4);
  result[2] = v5;
  return result;
}
