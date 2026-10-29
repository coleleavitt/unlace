__int64 __fastcall sub_3E380(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  if ( *(_DWORD *)a1 || *(_BYTE *)(a1 + 8) )
    return 0xFFFFFFFFLL;
  v1 = *(_DWORD *)(a1 + 4);
  result = 1;
  if ( v1 != 1 )
    return 2 * (unsigned int)(v1 == 2);
  return result;
}

