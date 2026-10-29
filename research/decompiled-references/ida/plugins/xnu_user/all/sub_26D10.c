__int64 __fastcall sub_26D10(_QWORD *a1, __int64 a2, int a3)
{
  unsigned int v4; // r13d
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rsi
  __int64 v10; // rax
  __m128i si128; // xmm1
  unsigned __int64 v12; // rdx
  __int64 *v13; // rdi
  __int64 v14; // r14
  __int64 *v15; // rdi
  __int64 v16; // r15
  __int64 v17; // r13
  _QWORD *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rax
  __m128i v21; // [rsp+10h] [rbp-118h] BYREF
  __int64 v22; // [rsp+20h] [rbp-108h]
  __int128 v23; // [rsp+28h] [rbp-100h]
  __int64 v24; // [rsp+38h] [rbp-F0h]
  __int128 v25; // [rsp+40h] [rbp-E8h]
  __int64 v26; // [rsp+50h] [rbp-D8h]
  __int64 v27; // [rsp+58h] [rbp-D0h]
  __int128 v28; // [rsp+60h] [rbp-C8h]
  int v29; // [rsp+70h] [rbp-B8h]
  __m512i v30; // [rsp+80h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+C0h] [rbp-68h]
  __int64 v32; // [rsp+C8h] [rbp-60h]
  __int128 v33; // [rsp+D0h] [rbp-58h]
  int v34; // [rsp+E0h] [rbp-48h]
  unsigned __int64 v35; // [rsp+E8h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  if ( (unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDLL || a3 > 3 )
    return 0;
  v7 = a1[246];
  v8 = a1[245];
  v10 = v8;
  if ( v7 != 4 )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_82340);
    v22 = 0;
    v24 = 0;
    v27 = 0;
    v26 = 0;
    v29 = 0;
    v23 = 0;
    v25 = 0;
    v28 = 0;
    v21 = si128;
    if ( v7 > 4 )
    {
      v16 = 416;
      v17 = 4;
      while ( 1 )
      {
        v18 = (_QWORD *)(v16 + v8);
        if ( v18[9] )
        {
          v18[10] = 0;
          qfree();
        }
        if ( v18[5] )
        {
          v18[6] = 0;
          qfree();
        }
        if ( v18[2] )
        {
          v18[3] = 0;
          qfree();
        }
        ++v17;
        v16 += 104;
        if ( v7 == v17 )
          break;
        v8 = a1[245];
      }
      a1[246] = 4;
      v10 = a1[245];
    }
    else
    {
      v12 = a1[247];
      v13 = a1 + 245;
      if ( (unsigned __int64)&v21 < v8 || (unsigned __int64)&v21 >= v8 + 104 * v12 )
      {
        if ( v12 > 3
          || (v10 = qvector_reserve(),
              v7 = a1[246],
              a1[245] = v10,
              si128 = _mm_load_si128((const __m128i *)&xmmword_82340),
              v7 <= 3) )
        {
          v19 = 104 * v7;
          do
          {
            v20 = v19 + v10;
            v19 += 104;
            *(_QWORD *)(v20 + 16) = 0;
            *(_QWORD *)(v20 + 40) = 0;
            *(_QWORD *)(v20 + 64) = 0;
            *(_QWORD *)(v20 + 72) = 0;
            *(_DWORD *)(v20 + 96) = 0;
            *(__m128i *)v20 = si128;
            *(_OWORD *)(v20 + 24) = 0;
            *(_OWORD *)(v20 + 48) = 0;
            *(_OWORD *)(v20 + 80) = 0;
            v10 = a1[245];
          }
          while ( v19 != 416 );
        }
        a1[246] = 4;
      }
      else
      {
        memset(&v30.m512i_u64[2], 0, 48);
        v31 = 0;
        v32 = 0;
        v34 = 0;
        *(__m128i *)v30.m512i_i8 = si128;
        v33 = 0;
        sub_26B30(v13, 4u, (__int64)&v30);
        sub_1C760(&v30);
        v10 = a1[245];
      }
    }
  }
  v14 = v10 + 104LL * a3;
  if ( *(_QWORD *)v14 != -1 && *(_QWORD *)(v14 + 8) && *(_QWORD *)(v14 + 24) > 1u )
    return 0;
  v4 = sub_2F010(a1 + 213, v14 + 68, v14 + 8, v14 + 40, a2);
  if ( !(_BYTE)v4 )
    return 0;
  *(_QWORD *)v14 = a2;
  *(_DWORD *)(v14 + 64) = 25;
  *(_DWORD *)(v14 + 96) = 25;
  memset(&v30, 0, 24);
  if ( a3 == 2 )
  {
    sub_19AC0((__int64)&v30, "BaseSystem");
  }
  else if ( a3 == 3 )
  {
    sub_19AC0((__int64)&v30, "Auxiliary");
  }
  else if ( a3 )
  {
    v15 = (__int64 *)(v14 + 16);
    if ( a3 != 1 )
      goto LABEL_20;
    sub_19AC0((__int64)&v30, "System");
  }
  else
  {
    sub_19AC0((__int64)&v30, "Boot");
  }
  v15 = (__int64 *)(v14 + 16);
LABEL_20:
  sub_15ED0(v15);
  sub_58D90(a1, v14);
  sub_46550(a1 + 213, v14 + 40, *(unsigned int *)(v14 + 68));
  if ( v30.m512i_i64[0] )
  {
    v30.m512i_i64[1] = 0;
    qfree();
  }
  return v4;
}

