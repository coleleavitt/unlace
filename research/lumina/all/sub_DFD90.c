__int64 __fastcall sub_DFD90(__int64 a1, const void *a2, signed int a3)
{
  int v3; // r12d
  __int64 result; // rax
  int v5; // ecx
  void *v6; // rax

  result = *(unsigned int *)(a1 + 24);
  v5 = a3 + result;
  if ( (unsigned int)(a3 + result) >= *(_DWORD *)(a1 + 16) )
  {
    if ( !*(_BYTE *)(a1 + 28) )
    {
      result = sub_DFB20(a1, a3);
      v3 = result;
      if ( (int)result > 0 )
      {
        result = (__int64)memcpy((void *)(*(_QWORD *)(a1 + 8) + *(unsigned int *)(a1 + 24)), a2, (int)result);
        *(_DWORD *)(a1 + 24) += v3;
      }
    }
  }
  else if ( a3 )
  {
    v6 = (void *)(*(_QWORD *)(a1 + 8) + result);
    *(_DWORD *)(a1 + 24) = v5;
    return (__int64)memcpy(v6, a2, a3);
  }
  return result;
}
