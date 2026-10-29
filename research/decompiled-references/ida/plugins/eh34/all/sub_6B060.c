__int64 __fastcall sub_6B060(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __int64 a8,
        int a9)
{
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 *v14; // r13
  __m128i v15; // xmm0
  __m128i v17; // xmm0
  __int64 *v19; // [rsp+10h] [rbp-88h] BYREF
  __m128i v20; // [rsp+18h] [rbp-80h] BYREF
  char v21; // [rsp+28h] [rbp-70h]
  __int64 v22; // [rsp+30h] [rbp-68h] BYREF
  __m128i v23; // [rsp+38h] [rbp-60h] BYREF
  char v24; // [rsp+48h] [rbp-50h]
  unsigned __int64 v25; // [rsp+58h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  sub_5FF80(a2, a5, a9);
  *(_BYTE *)(a2 + 138) = *(_BYTE *)(a4 + 1);
  sub_5FFF0(a2, a6, a8);
  sub_69980((__int64)&v19, a2, *(_QWORD *)(a2 + 176), 0, a3);
  v14 = v19;
  if ( v21 )
  {
    v15 = _mm_loadu_si128(&v20);
    *(_QWORD *)a1 = v19;
    *(_BYTE *)(a1 + 24) = 1;
    *(__m128i *)(a1 + 8) = v15;
  }
  else
  {
    *(_QWORD *)(a2 + 472) = v19;
    if ( v14 )
    {
      sub_665D0((__int64)&v22, (_QWORD *)a2, a5, v12, v13);
      if ( v24 || (sub_6A680((__int64)&v22, (const char *)a2, v14, 0, a7), v24) )
      {
        *(_QWORD *)a1 = v22;
        v17 = _mm_loadu_si128(&v23);
        *(_BYTE *)(a1 + 24) = 1;
        *(__m128i *)(a1 + 8) = v17;
      }
      else
      {
        *(_BYTE *)a1 = 1;
        *(_BYTE *)(a1 + 24) = 0;
      }
    }
    else
    {
      *(_BYTE *)a1 = 0;
      *(_BYTE *)(a1 + 24) = 0;
    }
  }
  return a1;
}

