unsigned __int64 __fastcall sub_2047A0(__m128i *a1, _QWORD *a2, int *a3, double a4, __m128 a5, __m128 a6)
{
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rbp
  __int64 v11; // rbx
  __int64 v12; // rax
  int *v13; // rsi
  __int64 v14; // rax
  __m128i v15; // xmm0
  __m128i v17; // [rsp+10h] [rbp-88h] BYREF
  __m128i v18; // [rsp+20h] [rbp-78h] BYREF
  __m128i v19; // [rsp+30h] [rbp-68h] BYREF
  __int64 v20; // [rsp+40h] [rbp-58h]
  __int64 v21; // [rsp+48h] [rbp-50h]
  unsigned __int64 v22; // [rsp+58h] [rbp-40h]

  v6 = a2[158];
  v22 = __readfsqword(0x28u);
  v7 = a2[157];
  v8 = v7 + 96 * v6;
  while ( v8 != v7 )
  {
    while ( 1 )
    {
      if ( (*(_BYTE *)(v7 + 88) & 2) != 0 )
      {
        if ( a3 )
        {
          while ( (unsigned int)sub_1BC250((int *)v7, a3) )
          {
            v7 += 96;
            if ( v8 == v7 )
              return v22 - __readfsqword(0x28u);
            if ( (*(_BYTE *)(v7 + 88) & 2) == 0 )
              goto LABEL_3;
          }
        }
        v11 = *(_QWORD *)(v7 + 80);
        if ( v11 <= 0 )
          LODWORD(v11) = 1;
        if ( (unsigned __int8)sub_1BBF50(v7, (__int64)a2, (unsigned int)v11) )
        {
          v12 = *(_QWORD *)(v7 + 16);
          if ( v12 != -1 && v12 != a2[5] )
          {
            v18.m128i_i64[1] = 0;
            v18.m128i_i64[0] = (__int64)off_4AB7F0;
            v19 = 0u;
            v20 = 0;
            v21 = v12;
            if ( (unsigned int)sub_119560((__int64)a2, (__int64)&v18) )
              break;
          }
        }
      }
LABEL_3:
      v7 += 96;
      if ( v8 == v7 )
        return v22 - __readfsqword(0x28u);
    }
    v13 = (int *)v7;
    v18.m128i_i64[0] = v7;
    v7 += 96;
    v17 = _mm_load_si128(&v19);
    v14 = sub_204620(a1, v13);
    v15 = _mm_load_si128(&v17);
    v19.m128i_i32[0] = v11;
    v18 = v15;
    sub_203D30(v14 + 40, &v18, *(double *)v15.m128i_i64, a5, a6);
  }
  return v22 - __readfsqword(0x28u);
}

