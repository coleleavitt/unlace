__int64 __fastcall sub_64280(__int64 *a1, __int64 *a2, double a3)
{
  __int64 v4; // rsi
  __int64 v6; // rdi
  __int64 v7; // r10
  unsigned __int64 v8; // r9
  __int64 v9; // rax
  unsigned int v10; // esi
  __int64 v11; // rcx
  __int64 v12; // r8

  v4 = a2[1];
  if ( !v4 )
    return 0;
  sub_63DE0(a1, v4 - 1, a3);
  v6 = *a1;
  v7 = *a2;
  v8 = (unsigned __int64)a2[1] >> 6;
  if ( !v8 )
    return 0;
  v9 = 0;
  v10 = 0;
  do
  {
    v11 = *(_QWORD *)(v7 + 8 * v9);
    v12 = ~*(_QWORD *)(v6 + 8 * v9);
    LOBYTE(v12) = (v11 & v12) != 0;
    *(_QWORD *)(v6 + 8 * v9++) |= v11;
    v10 |= v12;
  }
  while ( v8 != v9 );
  return v10;
}

