__int64 __fastcall sub_38270(__int64 a1, int a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 8);
  if ( a2 == -1 )
    a2 = 5000;
  *(_DWORD *)(a1 + 8) = a2;
  return result;
}

