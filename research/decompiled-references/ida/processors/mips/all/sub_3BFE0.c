__int64 __fastcall sub_3BFE0(__int64 a1)
{
  __int64 v1; // rcx
  int v2; // edx
  __int64 result; // rax
  char **v4; // rsi
  const char *v5; // rsi
  __int64 v6; // rax

  v1 = *(_QWORD *)(a1 + 32);
  v2 = *(_DWORD *)(v1 + 24);
  if ( !*(_BYTE *)(a1 + 312) )
  {
    *(_DWORD *)(a1 + 120) = 2 * (v2 != 4);
    return 1;
  }
  result = 0;
  if ( v2 != 8 )
  {
    v4 = &(&off_73540)[4 * *(unsigned int *)(a1 + 120)];
    result = (_BYTE)v4[1] & 1;
    if ( ((_BYTE)v4[1] & 1) != 0 )
    {
      v5 = *v4;
      v6 = 2 * (unsigned int)(v2 != 4);
      *(_DWORD *)(a1 + 120) = v6;
      sub_3AC20(
        (__int64)"ABI '%s' is not compatible with IDA address size %d,falling back to the default ABI '%s'\n",
        v5,
        *(_DWORD *)(v1 + 24),
        (&off_73540)[4 * v6]);
      *(_BYTE *)(a1 + 312) = 0;
      return 1;
    }
  }
  return result;
}

