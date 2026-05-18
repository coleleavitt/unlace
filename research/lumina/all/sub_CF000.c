__int64 __fastcall sub_CF000(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  __int64 result; // rax
  char v5; // al
  unsigned __int8 v6; // al

  if ( a2 == 1 )
  {
    v5 = *(_BYTE *)(a1 + 31);
    if ( v5 )
    {
      v6 = v5 - 1;
      *(_BYTE *)(a1 + 31) = v6;
      return *(unsigned int *)(a1 + 4LL * v6 + 216);
    }
    else
    {
      result = (unsigned int)(*(_DWORD *)(a1 + 56) + 1);
      *(_DWORD *)(a1 + 56) = result;
    }
  }
  else
  {
    v2 = *(_DWORD *)(a1 + 40);
    if ( a2 <= v2 )
    {
      result = *(unsigned int *)(a1 + 44);
      *(_DWORD *)(a1 + 40) = v2 - a2;
      *(_DWORD *)(a1 + 44) = a2 + result;
    }
    else
    {
      v3 = *(_DWORD *)(a1 + 56);
      *(_DWORD *)(a1 + 56) = v3 + a2;
      return (unsigned int)(v3 + 1);
    }
  }
  return result;
}
