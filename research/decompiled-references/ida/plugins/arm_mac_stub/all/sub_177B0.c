unsigned __int64 __fastcall sub_177B0(__int64 a1)
{
  char v1; // al
  __int64 (*v2)(); // rcx
  __int64 (*v3)(); // rdx
  __int64 v4; // r12
  __int64 v5; // rbp
  __int64 j; // rdx
  unsigned __int64 v7; // rax
  __int64 v9; // r12
  __int64 i; // r14
  __m128i v11; // [rsp+0h] [rbp-68h] BYREF
  __int64 v12; // [rsp+10h] [rbp-58h]
  __int64 v13; // [rsp+18h] [rbp-50h]
  __int64 v14; // [rsp+20h] [rbp-48h]
  __int64 (*v15)(); // [rsp+28h] [rbp-40h]
  char v16; // [rsp+30h] [rbp-38h]
  int v17; // [rsp+34h] [rbp-34h]
  unsigned __int64 v18; // [rsp+38h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 248) )
  {
    *(_QWORD *)(a1 + 256) = 0;
    qfree();
    *(_QWORD *)(a1 + 248) = 0;
    *(_QWORD *)(a1 + 264) = 0;
  }
  if ( *(_QWORD *)(a1 + 224) )
  {
    *(_QWORD *)(a1 + 232) = 0;
    qfree();
    *(_QWORD *)(a1 + 224) = 0;
    *(_QWORD *)(a1 + 240) = 0;
  }
  if ( *(_QWORD *)(a1 + 272) )
  {
    *(_QWORD *)(a1 + 280) = 0;
    qfree();
    *(_QWORD *)(a1 + 272) = 0;
    *(_QWORD *)(a1 + 288) = 0;
  }
  v1 = *(_BYTE *)(a1 + 161);
  v2 = *(__int64 (**)())(a1 + 8);
  v3 = *(__int64 (**)())(a1 + 472);
  v11.m128i_i64[0] = (__int64)off_45650;
  v13 = a1 + 224;
  v11.m128i_i64[1] = (__int64)v2;
  v12 = a1 + 248;
  v14 = a1 + 272;
  v15 = v3;
  v16 = v1;
  v17 = 0;
  sub_15C90(a1, &v11, v3, v2);
  *(_BYTE *)(a1 + 440) = 1;
  v4 = *(_QWORD *)(a1 + 232);
  if ( (*(_BYTE *)(a1 + 480) & 2) != 0 )
  {
    if ( !v4 )
      return v18 - __readfsqword(0x28u);
    v5 = *(_QWORD *)(a1 + 224);
    if ( !strcmp((const char *)(v5 + 8), "__TEXT") && *(_QWORD *)(v5 + 40) )
    {
      v9 = *(_QWORD *)(a1 + 248);
      for ( i = v9 + 80LL * *(_QWORD *)(a1 + 256); i != v9; v9 += 80 )
      {
        if ( !strcmp((const char *)(v9 + 16), "__TEXT") )
          *(_DWORD *)(v9 + 48) -= *(_QWORD *)(v5 + 40);
      }
      *(_QWORD *)(v5 + 40) = 0;
      v5 = *(_QWORD *)(a1 + 224);
      v4 = *(_QWORD *)(a1 + 232);
    }
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 224);
  }
  for ( j = v5 + 72 * v4; j != v5; v5 += 72 )
  {
    if ( *(_QWORD *)(a1 + 448) == -1 && !*(_QWORD *)(v5 + 40) && *(_QWORD *)(v5 + 48) )
      *(_QWORD *)(a1 + 448) = *(_QWORD *)(v5 + 24);
    v7 = *(_QWORD *)(v5 + 24);
    if ( v7 < *(_QWORD *)(a1 + 456) )
      *(_QWORD *)(a1 + 456) = v7;
  }
  return v18 - __readfsqword(0x28u);
}

