__int64 __fastcall sub_4132E0(__int64 a1, int a2, __m128i a3, __m128 a4, __m128 a5)
{
  bool v5; // zf
  unsigned __int16 v7; // ax
  __int64 v8; // [rsp+0h] [rbp-38h] BYREF
  int v9; // [rsp+8h] [rbp-30h]
  unsigned int v10; // [rsp+Ch] [rbp-2Ch]
  char v11; // [rsp+10h] [rbp-28h]
  unsigned __int64 v12; // [rsp+18h] [rbp-20h]

  v5 = *(_DWORD *)(a1 + 892) == -1;
  v12 = __readfsqword(0x28u);
  if ( v5 )
  {
    v7 = *(_WORD *)(a1 + 48);
    if ( v7 != 515 )
    {
      if ( v7 > 0x203u )
      {
        if ( v7 != 604 )
          goto LABEL_2;
      }
      else if ( v7 > 0x100u )
      {
        if ( (unsigned __int16)(v7 - 258) > 0x53u )
          goto LABEL_2;
      }
      else if ( v7 <= 0xF4u )
      {
        goto LABEL_2;
      }
    }
    *(_DWORD *)(a1 + 892) = sub_40FAA0((_QWORD *)a1, *(double *)a3.m128i_i64, a4);
  }
LABEL_2:
  v8 = a1;
  v9 = a2;
  v10 = -1;
  v11 = 0;
  sub_3FA580((int *)&v8, 1, 0, a3, a4, a5);
  if ( !v11 && !(unsigned __int8)sub_3FACB0((__int64)&v8, a3, a4, a5) )
    sub_3EB430(*(double *)a3.m128i_i64);
  return v10;
}

