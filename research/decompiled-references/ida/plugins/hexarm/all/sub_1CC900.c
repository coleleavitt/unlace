__int64 __fastcall sub_1CC900(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(v1 + 1192);
  if ( 16LL * *(_QWORD *)(v1 + 1200) )
  {
    do
    {
      *(_QWORD *)(v2 + 8) -= *(_QWORD *)(a1 + 48);
      v2 += 16;
    }
    while ( v2 != *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1192LL) + 16LL * *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1200LL) );
  }
  return 0;
}

