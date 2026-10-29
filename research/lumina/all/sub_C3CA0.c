__int64 __fastcall sub_C3CA0(_QWORD *a1, int a2)
{
  _WORD *v2; // r12

  v2 = (_WORD *)(a1[3] + 2LL * a2);
  *v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1[1] + 120LL))(a1[1], *(_QWORD *)(a1[2] + 8LL * a2));
  return *(unsigned __int16 *)(a1[3] + 2LL * a2);
}
