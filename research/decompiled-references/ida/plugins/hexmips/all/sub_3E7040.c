__int64 __fastcall sub_3E7040(int *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _BYTE *a6)
{
  unsigned int v6; // r15d
  int v11; // esi
  int v12; // eax
  int v13; // esi
  __int64 v14; // rax
  int v15; // esi
  int v16; // eax
  __int64 v17; // rdi
  int v18; // esi
  int v19; // esi
  __int64 v20; // rax
  __m128i v21; // xmm0
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  int v25; // [rsp+1Ch] [rbp-ECh]
  __int64 v26; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v27; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v28[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+50h] [rbp-B8h]
  __int64 v30; // [rsp+58h] [rbp-B0h]
  __int64 v31; // [rsp+70h] [rbp-98h] BYREF
  __int64 v32; // [rsp+78h] [rbp-90h]
  __int64 v33; // [rsp+80h] [rbp-88h] BYREF
  __m128i v34; // [rsp+88h] [rbp-80h] BYREF
  __int64 v35; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v36; // [rsp+A8h] [rbp-60h]
  __int64 *v37; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v38; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v39; // [rsp+C8h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  if ( a3 )
    return 0;
  v6 = sub_334660((unsigned __int64)&v26, &v27, a2);
  if ( !(_BYTE)v6 )
    return 0;
  sub_334430((__int64)v28, a2, v26, v27);
  v11 = a1[121];
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  if ( sub_60730(v28, v11) )
  {
    v12 = sub_609A0(v28, a1[121]);
    v13 = a1[121];
    v35 = 0;
    v36 = 0;
    v25 = 4 * (v12 > 4) + 4;
    sub_5FC80(&v35, v13, v25);
    v37 = nullptr;
    v38 = 0;
    sub_60080(&v31, &v35);
    sub_311F30(&v33, &v37);
    if ( v37 )
    {
      *(_QWORD *)&v38 = 0;
      qfree();
    }
    qfree();
    if ( (unsigned int)(a1[187] - 1) <= 1 && v25 == 8 )
    {
      v14 = *(_QWORD *)(v27 + 16);
      if ( v14 )
      {
        if ( *(_BYTE *)(v14 + 64) == 1 )
        {
          v15 = a1[123];
          if ( v15 == *(_DWORD *)(v14 + 72) )
          {
            v35 = 0;
            v36 = 0;
            sub_5FC80(&v35, v15, 8);
            v37 = nullptr;
            v38 = 0;
            sub_60080(&v31, &v35);
            sub_311F30(&v33, &v37);
            if ( v37 )
            {
              *(_QWORD *)&v38 = 0;
              qfree();
            }
            goto LABEL_23;
          }
        }
      }
    }
  }
  else if ( (unsigned int)(a1[187] - 1) <= 1 && *(_BYTE *)(v27 + 64) == 1 && a1[123] == *(_DWORD *)(v27 + 72) )
  {
    v18 = a1[121];
    v35 = 0;
    v36 = 0;
    sub_5FC80(&v35, v18, 8);
    v37 = nullptr;
    v38 = 0;
    sub_60080(&v31, &v35);
    sub_311F30(&v33, &v37);
    if ( v37 )
    {
      *(_QWORD *)&v38 = 0;
      qfree();
    }
    qfree();
    v19 = a1[123];
    v35 = 0;
    v36 = 0;
    sub_5FC80(&v35, v19, 8);
    v37 = nullptr;
    v38 = 0;
    sub_60080(&v31, &v35);
    sub_311F30(&v33, &v37);
    if ( v37 )
    {
      *(_QWORD *)&v38 = 0;
      qfree();
    }
LABEL_23:
    qfree();
  }
  if ( (unsigned __int8)sub_60680(&v31) && !v34.m128i_i64[0] )
  {
    if ( v33 )
      qfree();
    qfree();
    if ( v29 )
    {
      v30 = 0;
      qfree();
    }
    qfree();
    return 0;
  }
  sub_36E690(a2);
  v16 = sub_11EA30((__int64)&v31, a5);
  v17 = v33;
  if ( v16 )
  {
    v20 = *(_QWORD *)a5;
    v21 = _mm_loadu_si128(&v34);
    *(_QWORD *)a5 = v31;
    v31 = v20;
    v22 = *(_QWORD *)(a5 + 8);
    *(_QWORD *)(a5 + 8) = v32;
    v23 = *(_QWORD *)(a5 + 32);
    v32 = v22;
    v24 = *(_QWORD *)(a5 + 16);
    *(__m128i *)(a5 + 24) = v21;
    *(_QWORD *)(a5 + 16) = v17;
    v17 = v24;
    v33 = v24;
    v34.m128i_i64[1] = v23;
    *a6 = 1;
  }
  if ( v17 )
  {
    v34.m128i_i64[0] = 0;
    qfree();
  }
  qfree();
  if ( v29 )
  {
    v30 = 0;
    qfree();
  }
  qfree();
  return v6;
}

