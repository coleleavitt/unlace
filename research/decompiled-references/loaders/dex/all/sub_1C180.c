__int64 __fastcall sub_1C180(__int64 a1, __int64 a2)
{
  unsigned int v2; // ecx
  __int64 result; // rax
  __int64 v4; // rdx

  v2 = *(_DWORD *)(a2 + 24);
  result = 0;
  if ( v2 )
  {
    v4 = *(_QWORD *)(a1 + 32);
    result = v4 + v2;
    if ( __CFADD__(v4, v2) )
    {
      return 0;
    }
    else if ( (unsigned __int64)*(unsigned int *)(*(_QWORD *)(a1 + 40) + 32LL) + v4 < result + 1 )
    {
      return 0;
    }
  }
  return result;
}
