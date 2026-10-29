__int64 __fastcall sub_114E70(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _DWORD *v3; // rdx

  result = 0;
  if ( *(_BYTE *)a2 == 4 )
  {
    v3 = *(_DWORD **)(a2 + 8);
    if ( *(_DWORD *)(a1 + 56) == *v3 )
    {
      *(_QWORD *)(a1 + 48) = v3;
      return 1;
    }
  }
  return result;
}

