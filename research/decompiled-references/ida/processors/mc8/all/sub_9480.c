__int64 __fastcall sub_9480(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  int v5; // edx
  __int64 v6; // rcx
  __int64 v7; // rsi

  result = a1;
  v5 = a3 - a2;
  *(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) = a1 + 280;
  *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL) = a1 + 368;
  v6 = 0;
  if ( v5 > 0 )
  {
    do
    {
      v7 = a2 + (int)v6;
      *(_DWORD *)(a1 + 4 * v6 + 228) = *(_DWORD *)(a1 + 4 * v7 + 228);
      *(_QWORD *)(a1 + 8 * v6 + 280) = *(_QWORD *)(a1 + 8 * v7 + 280);
      *(_QWORD *)(a1 + 8 * v6++ + 368) = *(_QWORD *)(a1 + 8 * v7 + 368);
    }
    while ( v6 != v5 );
  }
  *(_DWORD *)(a1 + 4LL * v5 + 228) = 0;
  *(_QWORD *)(a1 + 8LL * v5 + 280) = 0;
  *(_QWORD *)(a1 + 8LL * v5 + 368) = 0;
  *(_DWORD *)(a1 + 272) = v5 - 1;
  return result;
}

