__int64 __fastcall sub_390940(__int64 a1, __int64 a2, double a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned __int8 v7; // [rsp+1h] [rbp-9h]

  if ( !a2 || (*(_BYTE *)(a2 + 26) & 1) == 0 )
    return 0;
  v7 = sub_2118B0(*(_QWORD **)(a1 + 24), a2);
  if ( !v7 )
    return 0;
  sub_2B4840(*(_QWORD *)(a1 + 24));
  nullsub_114();
  sub_38FA10(a1, 0, a3, v4, v5, v6);
  return v7;
}

