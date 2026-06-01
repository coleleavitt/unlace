__int64 __fastcall sub_3FAD60(__int64 a1, int a2, __m128i a3, __m128 a4, __m128 a5)
{
  char v5; // al
  __int64 v7; // [rsp+0h] [rbp-28h] BYREF
  int v8; // [rsp+8h] [rbp-20h]
  unsigned int v9; // [rsp+Ch] [rbp-1Ch]
  char v10; // [rsp+10h] [rbp-18h]
  unsigned __int64 v11; // [rsp+18h] [rbp-10h]

  v11 = __readfsqword(0x28u);
  v5 = *(_BYTE *)(a1 + 40LL * a2 + 65);
  if ( (unsigned __int8)(v5 - 2) > 2u && (unsigned __int8)(v5 - 6) > 1u )
    return 0xFFFFFFFFLL;
  v7 = a1;
  v8 = a2;
  v9 = -1;
  v10 = 0;
  sub_3FA580((int *)&v7, 1, 1, a3, a4, a5);
  if ( !v10 && !(unsigned __int8)sub_3FACB0((__int64)&v7, a3, a4, a5) )
    sub_3EB430(*(double *)a3.m128i_i64);
  return v9;
}

