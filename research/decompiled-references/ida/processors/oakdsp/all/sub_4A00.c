__int64 __fastcall sub_4A00(__int64 a1, __int64 a2, int a3, int a4)
{
  int v6; // r10d
  int v7; // ecx
  unsigned int v8; // eax
  int v9; // edx
  __int64 v10; // rcx

  v6 = 1 << (a4 - 1);
  if ( a4 <= 0 )
  {
    v10 = 0;
    v8 = 0;
  }
  else
  {
    v7 = 0;
    v8 = 0;
    do
    {
      v9 = 1 << v7++;
      v8 |= v9;
    }
    while ( a4 != v7 );
    v10 = a3 & v8;
  }
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 5;
  *(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL) = v10;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 33LL) |= 0x10u;
  if ( (a3 & v6) != 0 )
    *(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL) = ~(a3 ^ v8);
  *(_QWORD *)(a1 + 248) += 40LL;
  return 1;
}

