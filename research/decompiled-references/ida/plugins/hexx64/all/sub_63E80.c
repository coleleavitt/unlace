__int64 __fastcall sub_63E80(__int64 *a1, int a2, int a3, double a4)
{
  char v4; // bp
  int v5; // r12d
  __int64 v7; // r10
  unsigned __int64 v8; // rdi
  __int64 *v9; // r11
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r12
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rcx
  _QWORD *v18; // rdx
  bool v19; // zf
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rsi
  unsigned int v26; // ecx

  if ( !a3 )
    return 0;
  v4 = a2;
  if ( a2 < 0 )
  {
    if ( !under_debugger )
      sub_383060(0xC487u, a4);
LABEL_22:
    BUG();
  }
  v5 = a2 + a3 - 1;
  if ( a2 > v5 )
  {
    if ( !under_debugger )
      sub_383060(0xC488u, a4);
    goto LABEL_22;
  }
  sub_63DE0(a1, v5, a4);
  v7 = a2 >> 6;
  v8 = v5 >> 6;
  v9 = (__int64 *)(*a1 + 8 * v7);
  v10 = a2 & 0x3F;
  v11 = v5 & 0x3F;
  v12 = 1LL << v4;
  v13 = *v9;
  v14 = v7 + 1;
  v15 = 63;
  if ( v7 == v8 )
  {
    v26 = 0;
    if ( v11 < v10 )
      return v26;
    v15 = v11;
  }
  v16 = 0;
  do
  {
    ++v10;
    v16 |= v12;
    v12 *= 2;
  }
  while ( v15 >= v10 );
  v17 = v13 | v16;
  *v9 = v17;
  LOBYTE(v17) = v17 != v13;
  if ( v14 < v8 )
  {
    do
    {
      v18 = (_QWORD *)(*a1 + 8 * v14);
      v19 = *v18 == -1;
      *v18 = -1;
      LOBYTE(v10) = !v19;
      ++v14;
      LODWORD(v17) = v10 | v17;
    }
    while ( v8 != v14 );
    goto LABEL_9;
  }
  if ( v8 == v14 )
  {
LABEL_9:
    v20 = 0;
    v21 = 1;
    v22 = 0;
    do
    {
      ++v20;
      v22 |= v21;
      v21 *= 2;
    }
    while ( v11 >= v20 );
    v23 = (__int64 *)(*a1 + 8 * v8);
    v24 = *v23;
    v25 = *v23 | v22;
    v19 = *v23 == v25;
    *v23 = v25;
    LOBYTE(v24) = !v19;
    return (unsigned int)v24 | (unsigned int)v17;
  }
  return (unsigned int)v17;
}

