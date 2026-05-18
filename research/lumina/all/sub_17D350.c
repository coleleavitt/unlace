__int64 __fastcall sub_17D350(__int64 a1, int a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 356);
  *(_DWORD *)(a1 + 356) = a2;
  return result;
}
