__int64 __fastcall sub_AAE0(__int64 a1, __m128 a2, double a3)
{
  __int64 result; // rax

  if ( netnode_qsupstr() > 0 )
    sub_8CB0((__int64 *)(a1 + 120), 0);
  netnode_altval();
  *(_QWORD *)(a1 + 240) = node2ea();
  sub_A390(a1, 1, a2, a3);
  result = *(unsigned int *)(a1 + 284);
  *(_DWORD *)(a1 + 200) = result;
  return result;
}

