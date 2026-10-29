__int64 __fastcall sub_DFCC0(__int64 a1, signed int a2, char a3)
{
  __int64 v5; // rdi
  __int64 result; // rax
  int v7; // ecx
  __int64 v8; // rsi

  v5 = *(unsigned int *)(a1 + 24);
  result = v5 + a2;
  if ( result < *(unsigned int *)(a1 + 16) )
  {
    v7 = v5;
    result = (unsigned int)(a2 - 1);
    if ( a2 <= 0 )
      return result;
    goto LABEL_5;
  }
  if ( !*(_BYTE *)(a1 + 28) )
  {
    result = sub_DFB20(a1, a2);
    if ( (int)result > 0 )
    {
      v5 = *(unsigned int *)(a1 + 24);
      result = (unsigned int)(result - 1);
      v7 = *(_DWORD *)(a1 + 24);
LABEL_5:
      while ( 1 )
      {
        v8 = *(_QWORD *)(a1 + 8);
        *(_DWORD *)(a1 + 24) = v7 + 1;
        *(_BYTE *)(v8 + v5) = a3;
        if ( (int)result <= 0 )
          break;
        v5 = *(unsigned int *)(a1 + 24);
        result = (unsigned int)(result - 1);
        v7 = *(_DWORD *)(a1 + 24);
      }
    }
  }
  return result;
}
