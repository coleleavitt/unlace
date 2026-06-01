__int64 __fastcall sub_36780(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)(*(_DWORD *)(a1 + 808) + 1);
  *(_DWORD *)(a1 + 808) = result;
  return result;
}

