void __fastcall sub_11CB70(__m128i *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int32 v6; // r13d
  __int64 i; // rsi
  int v8; // edx
  __int64 v9; // rax
  __int32 v10; // r12d
  __int64 v11; // rbp
  __int64 v12; // rdi
  __int64 v13; // rdi
  _QWORD *j; // r14
  _QWORD *v15; // rbp
  _QWORD *v16; // r12
  _QWORD *k; // r14
  _QWORD *v18; // r12
  _QWORD *v19; // rbp
  void (__fastcall *v20)(_QWORD); // rax
  _QWORD *m; // r12
  __int64 v22; // rbp
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rcx
  _QWORD *v31; // rsi
  __int64 v32; // rax
  _QWORD *v33; // rsi
  void (__fastcall *v34)(__int64); // rax
  __int64 v35; // rdi
  __int64 v36; // rdi

  if ( a1[7].m128i_i8[1] != -89 || a1->m128i_i64[1] || (v6 = sub_D1B50((__int64)a1)) != 0 )
  {
    v4 = a1[1].m128i_i64[1];
    if ( v4 )
      xmmword_241510(v4, a2, a3);
  }
  else
  {
    sub_116940(a1, 0, a3, v5);
    for ( i = a1[45].m128i_i64[0]; i; i = a1[45].m128i_i64[0] )
    {
      a1[45].m128i_i64[0] = *(_QWORD *)(i + 24);
      sub_C9250((__int64)a1, (_QWORD *)i);
    }
    v8 = a1[2].m128i_i32[2];
    a1[46].m128i_i64[0] = 0;
    a1[6].m128i_i8[13] = 0;
    v9 = a1[2].m128i_i64[0];
    if ( v8 > 0 )
    {
      v10 = 0;
      do
      {
        v11 = v9 + 32LL * v10;
        v12 = *(_QWORD *)(v11 + 8);
        if ( v12 )
        {
          sub_11C990(v12);
          *(_QWORD *)(v11 + 8) = 0;
          if ( v10 != 1 )
            *(_QWORD *)(v11 + 24) = 0;
          v9 = a1[2].m128i_i64[0];
        }
        ++v10;
      }
      while ( v10 < a1[2].m128i_i32[2] );
    }
    v13 = *(_QWORD *)(v9 + 56);
    if ( v13 )
      sub_D8A60(v13, i);
    sub_D04F0((__int64)a1);
    sub_CF460(a1);
    for ( j = (_QWORD *)a1[37].m128i_i64[0]; j; j = (_QWORD *)*j )
    {
      v15 = (_QWORD *)j[2];
      do
      {
        i = v15[8];
        sub_D1B10((__int64)a1, i);
        v16 = (_QWORD *)v15[2];
        if ( v15 )
        {
          i = (__int64)v15;
          sub_C9250((__int64)a1, v15);
        }
        v15 = v16;
      }
      while ( v16 );
    }
    sub_C9C70((__int64)&a1[36].m128i_i64[1], i);
    for ( k = (_QWORD *)a1[38].m128i_i64[1]; k; k = (_QWORD *)*k )
    {
      v18 = (_QWORD *)k[2];
      v19 = v18 + 2;
      do
      {
        v20 = (void (__fastcall *)(_QWORD))v19[2];
        if ( v20 )
          v20(*v19);
        v19 += 5;
      }
      while ( v19 != v18 + 17 );
      if ( v18 )
      {
        i = (__int64)v18;
        sub_C9250((__int64)a1, v18);
      }
    }
    sub_C9C70((__int64)a1[38].m128i_i64, i);
    for ( m = (_QWORD *)a1[34].m128i_i64[0]; m; m = (_QWORD *)*m )
    {
      v22 = m[2];
      i = *(_QWORD *)(v22 + 40);
      if ( i )
      {
        *(_DWORD *)(i + 48) |= 0x4000u;
        sub_D8230((__int64)a1, (_QWORD *)i);
        *(_QWORD *)(v22 + 40) = 0;
      }
      if ( (*(_DWORD *)(v22 + 16))-- == 1 )
      {
        i = v22;
        sub_D0090((__int64)a1, (_QWORD *)v22);
      }
    }
    sub_C9C70((__int64)&a1[33].m128i_i64[1], i);
    v28 = a1[24].m128i_i64[1];
    a1[5].m128i_i32[0] = 0;
    if ( v28 )
    {
      i = 0;
      sub_CA220(a1->m128i_i64, 0, v24, v25, v26, v27);
      v28 = a1[24].m128i_i64[1];
    }
    else
    {
      a1[5].m128i_i32[1] = -1;
    }
    sub_C9940(v28, i, v24, v25, v26, v27);
    if ( a1[14].m128i_i32[1] > 0 )
    {
      do
      {
        v30 = v6++;
        (*(void (__fastcall **)(__int64, _QWORD))(a1->m128i_i64[0] + 96))(
          a1->m128i_i64[0],
          *(_QWORD *)(a1[14].m128i_i64[1] + 8 * v30));
      }
      while ( v6 < a1[14].m128i_i32[1] );
    }
    v31 = (_QWORD *)a1[14].m128i_i64[1];
    if ( v31 )
      sub_C9250((__int64)a1, v31);
    v32 = a1[2].m128i_i64[0];
    a1[7].m128i_i8[1] = -43;
    v33 = *(_QWORD **)(v32 + 56);
    if ( v33 )
      sub_C9250((__int64)a1, v33);
    v34 = (void (__fastcall *)(__int64))a1[20].m128i_i64[1];
    if ( v34 )
      v34(a1[20].m128i_i64[0]);
    v35 = a1[1].m128i_i64[1];
    if ( v35 )
    {
      xmmword_241510(v35, v33, v29);
      v36 = a1[1].m128i_i64[1];
      a1[7].m128i_i8[1] = -50;
      if ( v36 )
        ((void (*)(void))*(&xmmword_2414F0 + 1))();
    }
    else
    {
      a1[7].m128i_i8[1] = -50;
    }
    if ( a1[26].m128i_i8[0] )
      sub_C91C0(a1[30].m128i_i64[0], (__int64)v33);
    sub_C91C0((__int64)a1, (__int64)v33);
  }
}
