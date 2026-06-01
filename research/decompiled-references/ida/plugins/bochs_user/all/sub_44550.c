__int64 __fastcall sub_44550(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 v5; // rsi
  __int64 v6; // rdi
  bool v7; // zf
  int v9; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 8);
  v10 = __readfsqword(0x28u);
  free_idcv();
  v5 = 0x7FFFFFDE068LL;
  *(_BYTE *)a2 = 2;
  v6 = qword_753F8;
  *(_QWORD *)(a2 + 8) = v3;
  v7 = *(_BYTE *)(v6 + 121) == 0;
  v9 = *(_QWORD *)(a1 + 8);
  if ( v7 )
    v5 = 2147344436;
  sub_44120(v6, v5, (__int64)&v9, 4u);
  return 0;
}

