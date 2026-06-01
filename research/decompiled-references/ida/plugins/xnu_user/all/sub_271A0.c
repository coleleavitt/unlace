unsigned __int64 __fastcall sub_271A0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __m128i *v6; // rbx
  unsigned __int64 v7; // r13
  _QWORD *m128i_i64; // rax
  __m128i si128; // xmm1
  unsigned __int64 v11; // rdx
  __int64 *v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // r14
  int v15; // r12d
  __int64 v16; // rax
  __int64 v18; // r14
  __int64 v19; // r12
  __int64 *v20; // rbx
  __int64 v21; // rdx
  _QWORD *v22; // rax
  __m128i v23; // [rsp+0h] [rbp-108h] BYREF
  __int64 v24; // [rsp+10h] [rbp-F8h]
  __int128 v25; // [rsp+18h] [rbp-F0h]
  __int64 v26; // [rsp+28h] [rbp-E0h]
  __int128 v27; // [rsp+30h] [rbp-D8h]
  __int64 v28; // [rsp+40h] [rbp-C8h]
  __int64 v29; // [rsp+48h] [rbp-C0h]
  __int128 v30; // [rsp+50h] [rbp-B8h]
  int v31; // [rsp+60h] [rbp-A8h]
  __m128i v32; // [rsp+70h] [rbp-98h] BYREF
  __int64 v33; // [rsp+80h] [rbp-88h]
  __int128 v34; // [rsp+88h] [rbp-80h]
  __int64 v35; // [rsp+98h] [rbp-70h]
  __int128 v36; // [rsp+A0h] [rbp-68h]
  __int64 v37; // [rsp+B0h] [rbp-58h]
  __int64 v38; // [rsp+B8h] [rbp-50h]
  __int128 v39; // [rsp+C0h] [rbp-48h]
  int v40; // [rsp+D0h] [rbp-38h]
  unsigned __int64 v41; // [rsp+D8h] [rbp-30h]

  v6 = (__m128i *)a1[245];
  v7 = a1[246];
  v41 = __readfsqword(0x28u);
  m128i_i64 = v6->m128i_i64;
  if ( v7 != 4 )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_82340);
    v24 = 0;
    v26 = 0;
    v29 = 0;
    v28 = 0;
    v31 = 0;
    v25 = 0;
    v27 = 0;
    v30 = 0;
    v23 = si128;
    if ( v7 > 4 )
    {
      v18 = 52;
      v19 = 4;
      while ( 1 )
      {
        v20 = &v6->m128i_i64[v18];
        if ( v20[9] )
        {
          v20[10] = 0;
          qfree();
        }
        if ( v20[5] )
        {
          v20[6] = 0;
          qfree();
        }
        if ( v20[2] )
        {
          v20[3] = 0;
          qfree();
        }
        ++v19;
        v18 += 13;
        if ( v7 == v19 )
          break;
        v6 = (__m128i *)a1[245];
      }
      a1[246] = 4;
      m128i_i64 = (_QWORD *)a1[245];
    }
    else
    {
      v11 = a1[247];
      v12 = a1 + 245;
      if ( &v23 < v6 || &v23 >= (__m128i *)((char *)v6 + 104 * v11) )
      {
        if ( v11 > 3
          || (m128i_i64 = (_QWORD *)qvector_reserve(),
              v7 = a1[246],
              a1[245] = (__int64)m128i_i64,
              si128 = _mm_load_si128((const __m128i *)&xmmword_82340),
              v7 <= 3) )
        {
          v21 = 13 * v7;
          do
          {
            v22 = &m128i_i64[v21];
            v21 += 13;
            v22[2] = 0;
            v22[5] = 0;
            v22[8] = 0;
            v22[9] = 0;
            *((_DWORD *)v22 + 24) = 0;
            *(__m128i *)v22 = si128;
            *(_OWORD *)(v22 + 3) = 0;
            *((_OWORD *)v22 + 3) = 0;
            *((_OWORD *)v22 + 5) = 0;
            m128i_i64 = (_QWORD *)a1[245];
          }
          while ( v21 != 52 );
        }
        a1[246] = 4;
      }
      else
      {
        v33 = 0;
        v35 = 0;
        v37 = 0;
        v38 = 0;
        v40 = 0;
        v32 = si128;
        v34 = 0;
        v36 = 0;
        v39 = 0;
        sub_26B30(v12, 4u, (__int64)&v32);
        sub_1C760(&v32);
        m128i_i64 = (_QWORD *)a1[245];
      }
    }
  }
  v13 = 0;
  v14 = 0;
  v15 = 0;
  if ( *m128i_i64 != -1 )
    goto LABEL_7;
LABEL_11:
  while ( 1 )
  {
    v16 = a1[244];
    v32.m128i_i64[0] = 0;
    if ( (*(__int64 (__fastcall **)(__int64 *, __int64, __m128i *, __int64, _QWORD, __int64, __int64, __int64, __int64, _QWORD, _QWORD, __int64, _QWORD, _QWORD, __int64, __int64, _QWORD, _QWORD, int))(*a1 + 288))(
           a1,
           v16 + 8 * v14,
           &v32,
           8,
           0,
           a6,
           v23.m128i_i64[0],
           v23.m128i_i64[1],
           v24,
           v25,
           *((_QWORD *)&v25 + 1),
           v26,
           v27,
           *((_QWORD *)&v27 + 1),
           v28,
           v29,
           v30,
           *((_QWORD *)&v30 + 1),
           v31) != 8 )
      break;
    ++v14;
    sub_26D10(a1, v32.m128i_i64[0], v15);
    if ( v14 == 4 )
      break;
    while ( 1 )
    {
      v13 += 104;
      v15 = v14;
      m128i_i64 = (_QWORD *)(v13 + a1[245]);
      if ( *m128i_i64 == -1 )
        break;
LABEL_7:
      if ( !m128i_i64[1] || m128i_i64[3] <= 1u )
        goto LABEL_11;
      if ( ++v14 == 4 )
        return v41 - __readfsqword(0x28u);
    }
  }
  return v41 - __readfsqword(0x28u);
}

