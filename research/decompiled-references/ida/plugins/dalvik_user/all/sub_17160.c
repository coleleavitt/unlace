__int64 __fastcall sub_17160(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rax

  v1 = a1[58];
  if ( v1 )
    return 4294967290LL;
  v3 = a1[57];
  if ( !a1[59] )
  {
    v5 = qvector_reserve();
    a1[57] = v5;
    v3 = v5;
    v1 = a1[58];
  }
  v4 = 80 * v1 + v3;
  *(_WORD *)(v4 + 72) = 0;
  *(_QWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 40) = 0;
  *(_QWORD *)(v4 + 64) = 0;
  *(_OWORD *)v4 = 0;
  *(_OWORD *)(v4 + 24) = 0;
  *(_OWORD *)(v4 + 48) = 0;
  ++a1[58];
  return 4294967292LL;
}

