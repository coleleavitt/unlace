__int64 *__fastcall sub_E0B40(__int64 a1, _DWORD *a2, int a3)
{
  __int64 v3; // r12
  int v4; // ebp
  __int64 *result; // rax

  v3 = a3;
  v4 = 10 - *(_DWORD *)(a1 + 68);
  result = sub_DFFD0(*(_QWORD *)a1, *(_QWORD **)(a1 + 80), 4LL * v4);
  *(_QWORD *)(a1 + 80) = result;
  if ( result )
  {
    *(_DWORD *)(a1 + 72) = v4;
    *((_DWORD *)result + v3) = *a2;
  }
  else
  {
    *(_DWORD *)(a1 + 72) = 0;
  }
  return result;
}
