__int64 __fastcall sub_3FAE40(__int64 a1, int a2, char a3, __m128i a4, __m128 a5, __m128 a6)
{
  __int64 v7; // [rsp+0h] [rbp-28h] BYREF
  int v8; // [rsp+8h] [rbp-20h]
  unsigned int v9; // [rsp+Ch] [rbp-1Ch]
  char v10; // [rsp+10h] [rbp-18h]
  unsigned __int64 v11; // [rsp+18h] [rbp-10h]

  v11 = __readfsqword(0x28u);
  v7 = a1;
  v8 = a2;
  v9 = -1;
  v10 = 0;
  sub_3FA580((int *)&v7, 1, a3, a4, a5, a6);
  if ( !v10 && !(unsigned __int8)sub_3FACB0((__int64)&v7, a4, a5, a6) )
    sub_3EB430(*(double *)a4.m128i_i64);
  return v9;
}

