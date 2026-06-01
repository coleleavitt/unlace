__int64 __fastcall sub_3969C0(__int64 a1, __int64 a2, double a3, double a4, __m128i a5, double a6)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int8 v10; // [rsp+1h] [rbp-9h]

  if ( !a2 || (*(_BYTE *)(a2 + 26) & 1) == 0 )
    return 0;
  v10 = sub_216C70(*(_QWORD **)(a1 + 24), a2);
  if ( !v10 )
    return 0;
  sub_2B9C00(*(_QWORD *)(a1 + 24));
  nullsub_114();
  sub_395A90(a1, 0, a3, v7, v8, v9, a4, a5, a6);
  return v10;
}

