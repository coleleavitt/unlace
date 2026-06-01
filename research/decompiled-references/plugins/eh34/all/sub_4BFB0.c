__int64 __fastcall sub_4BFB0(__int64 a1, __int64 *a2)
{
  int v2; // eax
  __int64 result; // rax

  v2 = *((_DWORD *)a2 + 2);
  *((_DWORD *)a2 + 2) = 2;
  *(_DWORD *)(a1 + 8) = v2;
  result = *a2;
  *(_DWORD *)a2 = -1;
  *(_QWORD *)a1 = result;
  return result;
}
