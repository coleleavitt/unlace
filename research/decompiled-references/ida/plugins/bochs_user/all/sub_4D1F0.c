__int64 __fastcall sub_4D1F0(__int64 a1, int a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 24);
  *(_DWORD *)(a1 + 24) = a2;
  return result;
}

