__int64 __fastcall sub_7EF0(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  int *v5; // rdx
  int *v6; // rdi
  __int64 v7; // r9
  int v8; // r8d
  int v9; // esi
  int v10; // ecx
  __int64 v11; // rax

  v5 = (int *)(a1 + 24);
  v6 = (int *)(a1 + 56);
  v7 = 0;
  v8 = 0;
  do
  {
    v9 = *v5;
    if ( !*v5 )
      break;
    v10 = v5[1];
    v5 += 2;
    v11 = ~(-1LL << v9) & (a2 >> v10);
    LOBYTE(v10) = v8;
    v8 += v9;
    v7 |= v11 << v10;
  }
  while ( v6 != v5 );
  *a3 = 8 * v7;
  return 0;
}

