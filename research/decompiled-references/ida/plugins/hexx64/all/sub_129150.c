__int64 __fastcall sub_129150(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        double a7,
        __m128 a8,
        unsigned int a9)
{
  int v13; // r8d
  int v14; // r9d
  unsigned __int64 *v15; // rdi
  __int64 v16; // rax
  __m128i v17; // xmm0
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned __int64 *v20; // rax
  char v22; // al
  __int64 v24; // [rsp+10h] [rbp-68h] BYREF
  __int64 v25; // [rsp+18h] [rbp-60h]
  unsigned __int64 *v26; // [rsp+20h] [rbp-58h] BYREF
  __m128i v27; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v28; // [rsp+38h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  if ( (!(unsigned __int8)sub_64880(a2) || a2[3]) && a3 && a3 != a4 )
  {
    while ( 1 )
    {
      sub_127A20((__int64)&v24, a1, a3, a9, v13, v14, a7, a8);
      if ( (unsigned __int8)sub_64780(&v24, a2) )
      {
        v15 = v26;
LABEL_7:
        if ( a5 )
        {
          v16 = *(_QWORD *)a5;
          v17 = _mm_loadu_si128(&v27);
          *(_QWORD *)a5 = v24;
          v24 = v16;
          v18 = *(_QWORD *)(a5 + 8);
          *(_QWORD *)(a5 + 8) = v25;
          v19 = *(_QWORD *)(a5 + 32);
          v25 = v18;
          v20 = *(unsigned __int64 **)(a5 + 16);
          v27.m128i_i64[1] = v19;
          v26 = v20;
          *(_QWORD *)(a5 + 16) = v15;
          v15 = v20;
          *(__m128i *)(a5 + 24) = v17;
        }
        if ( v15 )
        {
          v27.m128i_i64[0] = 0;
          qfree((__int64)v15);
        }
        qfree(v24);
        return a3;
      }
      v22 = sub_318470(&v26, (__int64)(a2 + 2));
      v15 = v26;
      if ( v22 )
        goto LABEL_7;
      if ( !--a6 )
        break;
      if ( v26 )
      {
        v27.m128i_i64[0] = 0;
        qfree((__int64)v26);
      }
      qfree(v24);
      a3 = *(_QWORD *)(a3 + 16);
      if ( !a3 || a4 == a3 )
        return 0;
    }
    if ( v26 )
    {
      v27.m128i_i64[0] = 0;
      qfree((__int64)v26);
    }
    qfree(v24);
  }
  return 0;
}

