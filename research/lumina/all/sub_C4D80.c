__int64 __fastcall sub_C4D80(__int64 a1, __int64 a2, _DWORD *a3, int a4)
{
  __int64 result; // rax
  _DWORD *v6; // rbp
  int v7; // ebx
  int v8; // eax
  __int64 v9; // r14

  result = (unsigned int)*a3;
  if ( (int)result > 0 )
  {
    v6 = a3 + 2;
    v7 = 0;
    do
    {
      if ( a4 != v7 )
      {
        if ( (*((_BYTE *)v6 + 61) & 0x20) == 0
          || (result = *(unsigned int *)(a2 + 4LL * (int)v6[16] + 4), !(_DWORD)result) )
        {
          v8 = *(_DWORD *)(a1 + 52);
          *(_DWORD *)(a1 + 52) = v8 + 1;
          *(_DWORD *)(a2 + 4LL * (int)v6[16] + 4) = v8;
          result = *(unsigned int *)(a2 + 4LL * (int)v6[16] + 4);
        }
        v9 = *((_QWORD *)v6 + 5);
        for ( v6[16] = result; v9; v9 = *(_QWORD *)(v9 + 80) )
          result = sub_C4D80(a1, a2, *(_QWORD *)(v9 + 40), 0xFFFFFFFFLL);
      }
      ++v7;
      v6 += 26;
    }
    while ( *a3 > v7 );
  }
  return result;
}
