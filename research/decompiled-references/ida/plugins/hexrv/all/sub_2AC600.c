__int64 __fastcall sub_2AC600(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 result; // rax
  int v5; // ecx
  int v6; // edx

  v2 = *(_QWORD *)(a2 + 8);
  v3 = *(_QWORD *)(a1 + 8);
  result = 0xFFFFFFFFLL;
  if ( v3 >= v2 )
  {
    result = 1;
    if ( v2 >= v3 )
    {
      v5 = *(_DWORD *)(a1 + 16);
      v6 = *(_DWORD *)(a2 + 16);
      if ( v5 == 74 )
      {
        return (unsigned int)-(v6 != 74);
      }
      else if ( v6 != 74 )
      {
        result = v5 > v6;
        if ( v5 < v6 )
          return 0xFFFFFFFFLL;
      }
    }
  }
  return result;
}

