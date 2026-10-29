unsigned __int64 __fastcall sub_20BB20(__m128i *a1, _QWORD *a2, int *a3, __m128i a4, __m128 a5, __m128 a6)
{
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rbp
  __int64 v11; // rbx
  __int64 v12; // rax
  int *v13; // rsi
  unsigned __int64 v14; // rax
  __m128i v16; // [rsp+10h] [rbp-88h] BYREF
  __m128i v17; // [rsp+20h] [rbp-78h] BYREF
  __m128i v18; // [rsp+30h] [rbp-68h] BYREF
  __int64 v19; // [rsp+40h] [rbp-58h]
  __int64 v20; // [rsp+48h] [rbp-50h]
  unsigned __int64 v21; // [rsp+58h] [rbp-40h]

  v6 = a2[158];
  v21 = __readfsqword(0x28u);
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
          while ( (unsigned int)sub_1C2AD0((int *)v7, a3, *(double *)a4.m128i_i64) )
          {
            v7 += 96;
            if ( v8 == v7 )
              return v21 - __readfsqword(0x28u);
            if ( (*(_BYTE *)(v7 + 88) & 2) == 0 )
              goto LABEL_3;
          }
        }
        v11 = *(_QWORD *)(v7 + 80);
        if ( v11 <= 0 )
          LODWORD(v11) = 1;
        if ( (unsigned __int8)sub_1C27D0(v7, (__int64)a2, v11, *(double *)a4.m128i_i64) )
        {
          v12 = *(_QWORD *)(v7 + 16);
          if ( v12 != -1 && v12 != a2[5] )
          {
            v17.m128i_i64[1] = 0;
            v17.m128i_i64[0] = (__int64)&off_4DEFF0;
            v18 = 0u;
            v19 = 0;
            v20 = v12;
            if ( (unsigned int)sub_11FC20((__int64)a2, (__int64)&v17) )
              break;
          }
        }
      }
LABEL_3:
      v7 += 96;
      if ( v8 == v7 )
        return v21 - __readfsqword(0x28u);
    }
    v13 = (int *)v7;
    v17.m128i_i64[0] = v7;
    v7 += 96;
    v16 = _mm_load_si128(&v18);
    v14 = sub_20B9A0(a1, v13, *(double *)v16.m128i_i64);
    a4 = _mm_load_si128(&v16);
    v18.m128i_i32[0] = v11;
    v17 = a4;
    sub_20B0B0((__int64 *)(v14 + 40), &v17, *(double *)a4.m128i_i64, a5, a6);
  }
  return v21 - __readfsqword(0x28u);
}

