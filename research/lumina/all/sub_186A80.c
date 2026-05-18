unsigned __int64 __fastcall sub_186A80(_QWORD *a1)
{
  _QWORD *v2; // rdi
  __m128i si128; // xmm1
  _WORD *v4; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  __int64 v7; // r12
  __int64 v8; // r12
  _WORD *v9; // rsi
  _WORD *v10; // rsi
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // r15
  char *v15; // rbp
  __int64 v16; // r14
  __int64 v17; // r13
  __int128 v18; // xmm1
  __int64 v19; // rax
  __m128i v20; // xmm0
  __int64 v21; // rax
  __m128i v22; // xmm0
  void *v23; // rdi
  __int64 v25; // rax
  __int64 v26; // rax

  v2 = a1 + 8;
  *((_WORD *)v2 + 60) = 9052;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1B7180);
  *(v2 - 6) = 0;
  *(v2 - 7) = sub_188810;
  *(v2 - 8) = &off_23CE50;
  *(v2 - 3) = 0;
  *v2 = 0;
  v2[3] = 0;
  v2[9] = 0;
  v2[14] = 0x2727222200000000LL;
  *((_BYTE *)v2 + 48) = 0;
  *(_OWORD *)(v2 - 5) = 0;
  *((_OWORD *)v2 - 1) = 0;
  *(_OWORD *)(v2 + 1) = 0;
  *((_OWORD *)v2 + 2) = 0;
  *(__m128i *)((char *)v2 + 52) = si128;
  *((_OWORD *)v2 + 5) = 0;
  v4 = (_WORD *)sub_1987B0(v2, 0, 3, 1);
  a1[8] = v4;
  a1[9] = 3;
  *v4 = 12079;
  *(_BYTE *)(a1[8] + 2LL) = 0;
  v5 = a1[12];
  v6 = a1[13];
  if ( v6 < v5 + 1 )
  {
    v12 = sub_1987B0(a1 + 11, 0, v5 + 1, 48);
    v13 = a1[12];
    v14 = a1[13];
    v7 = v12;
    a1[13] = v6;
    v15 = (char *)a1[11];
    v16 = v13 - 1;
    if ( v16 >= 0 )
    {
      v17 = v12;
      v18 = 0;
      do
      {
        v19 = *(_QWORD *)v15;
        v20 = _mm_loadu_si128((const __m128i *)(v15 + 8));
        *(_OWORD *)(v15 + 8) = v18;
        *(_QWORD *)v15 = 0;
        *(_QWORD *)v17 = v19;
        *(__m128i *)(v17 + 8) = v20;
        v21 = *((_QWORD *)v15 + 3);
        v22 = _mm_loadu_si128((const __m128i *)v15 + 2);
        *((_QWORD *)v15 + 3) = 0;
        *(_QWORD *)(v17 + 24) = v21;
        *(__m128i *)(v17 + 32) = v22;
        v23 = *(void **)v15;
        *((_QWORD *)v15 + 5) = 0;
        if ( v23 )
        {
          *((_QWORD *)v15 + 1) = 0;
          j__free(v23);
          v18 = 0;
        }
        v15 += 48;
        v17 += 48;
      }
      while ( v16-- != 0 );
      v15 = (char *)a1[11];
    }
    j__free(v15);
    a1[11] = v7;
    v5 = a1[12];
    a1[13] = v14;
  }
  else
  {
    v7 = a1[11];
  }
  v8 = 48 * v5 + v7;
  *(_QWORD *)v8 = 0;
  *(_OWORD *)(v8 + 8) = 0;
  *(_QWORD *)(v8 + 24) = 0;
  *(_OWORD *)(v8 + 32) = 0;
  ++a1[12];
  v9 = *(_WORD **)v8;
  if ( *(_QWORD *)(v8 + 16) <= 2u )
  {
    v26 = sub_1987B0(v8, v9, 3, 1);
    *(_QWORD *)v8 = v26;
    v9 = (_WORD *)v26;
  }
  *(_QWORD *)(v8 + 8) = 3;
  *v9 = 10799;
  *(_BYTE *)(*(_QWORD *)v8 + 2LL) = 0;
  v10 = *(_WORD **)(v8 + 24);
  if ( *(_QWORD *)(v8 + 40) <= 2u )
  {
    v25 = sub_1987B0(v8 + 24, v10, 3, 1);
    *(_QWORD *)(v8 + 24) = v25;
    v10 = (_WORD *)v25;
  }
  *(_QWORD *)(v8 + 32) = 3;
  *v10 = 12074;
  *(_BYTE *)(*(_QWORD *)(v8 + 24) + 2LL) = 0;
  sub_186100(a1, "auto|static|extern|for|if|else|while|do|break|continue|return|try|catch|throw", 1);
  sub_186100(a1, "long|string|__int64|success|char|float|void", 2);
  return sub_186100(a1, "BADADDR|BADSEL|MAXADDR", 3);
}
