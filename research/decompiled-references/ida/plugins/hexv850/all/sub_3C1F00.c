__int64 __fastcall sub_3C1F00(_DWORD *a1, __int64 a2)
{
  __int64 (*v2)(void); // rax
  int v3; // ecx
  __int64 result; // rax
  int v5; // ecx

  v2 = *(__int64 (**)(void))(*(_QWORD *)a1 + 40LL);
  if ( (char *)v2 != (char *)sub_3C1B50 )
    return v2();
  v3 = *(_DWORD *)(a2 + 12);
  result = 1;
  if ( a1[3] <= v3 )
  {
    result = 0xFFFFFFFFLL;
    if ( a1[3] >= v3 )
    {
      v5 = *(_DWORD *)(a2 + 16);
      result = 1;
      if ( a1[4] <= v5 )
        return (unsigned int)-(a1[4] < v5);
    }
  }
  return result;
}

