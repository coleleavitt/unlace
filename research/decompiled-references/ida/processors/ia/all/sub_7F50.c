__int64 __fastcall sub_7F50(__int64 a1, unsigned __int64 a2, __int64 *a3)
{
  int *v6; // rdx
  int *v7; // rbp
  __int64 v8; // r8
  int v9; // edi
  int v10; // esi
  int v11; // ecx
  __int64 v12; // rax

  v6 = (int *)(a1 + 24);
  v7 = (int *)(a1 + 56);
  v8 = 0;
  v9 = 0;
  do
  {
    v10 = *v6;
    if ( !*v6 )
      break;
    v11 = v6[1];
    v6 += 2;
    v12 = ~(-1LL << v10) & (a2 >> v11);
    LOBYTE(v11) = v9;
    v9 += v10;
    v8 |= v12 << v11;
  }
  while ( v7 != v6 );
  *a3 = v8;
  *a3 = v8 ^ ((1LL << *(_DWORD *)(a1 + 24)) - 1);
  return 0;
}

