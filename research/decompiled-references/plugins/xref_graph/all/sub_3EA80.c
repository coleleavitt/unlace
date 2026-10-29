unsigned __int64 __fastcall sub_3EA80(__m128i *a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  char *v8; // r8
  __int64 v9; // r9
  bool v10; // r13
  __int64 v11; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  char *v16; // r13
  __int64 v18; // rdx
  unsigned __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rax
  char *v22; // rdi
  __int64 v23; // rax
  QT::QTextFormat *v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rax
  _QWORD *v27; // rdi
  __int64 v28; // [rsp+0h] [rbp-48h]
  _BYTE v29[16]; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 v30; // [rsp+18h] [rbp-30h]

  v30 = __readfsqword(0x28u);
  v6 = a1->m128i_i64[0];
  if ( !a1->m128i_i64[0] || (v7 = *a3, *(int *)v6 > 1) )
  {
LABEL_3:
    v28 = *a3;
    QT::QTextFormat::QTextFormat((QT::QTextFormat *)v29, (const QT::QTextFormat *)(a3 + 1));
    v10 = a2 == 0 && a1[1].m128i_i64[0] != 0;
    if ( v10 )
    {
      v23 = a1->m128i_i64[0];
      if ( !a1->m128i_i64[0] || *(int *)v23 > 1 )
        goto LABEL_34;
      v22 = (char *)a1->m128i_i64[1];
      v25 = (__int64)&v22[-((v23 + 31) & 0xFFFFFFFFFFFFFFF0LL)];
      if ( v25 > 0 )
        goto LABEL_35;
      v9 = *(_QWORD *)(v23 + 8);
      v15 = a1[1].m128i_i64[0];
      v19 = 0xAAAAAAAAAAAAAAABLL * (v25 >> 3);
      v8 = (char *)(v9 - v15);
      if ( (__int64)(v9 - v15 - v19) <= 0 || (v20 = 2 * v15, 3 * v15 >= v9) )
      {
LABEL_34:
        sub_3E590(a1, 1u, 1, 0, (__int64)v8, v9);
        v22 = (char *)a1->m128i_i64[1];
        goto LABEL_35;
      }
      v26 = (__int64)(v8 - 1) / 2;
      if ( v26 < 0 )
        v26 = 0;
      v8 = (char *)a1->m128i_i64[1];
      v21 = v26 + 1;
LABEL_24:
      v22 = &v8[24 * (v21 - v19)];
      if ( v15 && v8 != v22 && v8 && v22 )
        v22 = (char *)memmove(v22, v8, 8 * (v15 + v20));
      a1->m128i_i64[1] = (__int64)v22;
      if ( !v10 )
      {
        v8 = v22;
        goto LABEL_31;
      }
LABEL_35:
      v24 = (QT::QTextFormat *)(v22 - 16);
      *((_QWORD *)v24 - 1) = v28;
      QT::QTextFormat::QTextFormat(v24, (const QT::QTextFormat *)v29);
      a1->m128i_i64[1] -= 24;
      ++a1[1].m128i_i64[0];
      goto LABEL_15;
    }
LABEL_4:
    v11 = a1->m128i_i64[0];
    if ( a1->m128i_i64[0] )
    {
      if ( *(int *)v11 > 1 )
      {
LABEL_6:
        sub_3E590(a1, 0, 1, 0, (__int64)v8, v9);
        v8 = (char *)a1->m128i_i64[1];
LABEL_31:
        v15 = a1[1].m128i_i64[0];
        goto LABEL_14;
      }
      v8 = (char *)a1->m128i_i64[1];
      v15 = a1[1].m128i_i64[0];
      v18 = (__int64)&v8[-((v11 + 31) & 0xFFFFFFFFFFFFFFF0LL)];
      v19 = 0xAAAAAAAAAAAAAAABLL * (v18 >> 3);
      if ( (__int64)(*(_QWORD *)(v11 + 8) - v15 - v19) <= 0 )
      {
        if ( v18 <= 0 )
          goto LABEL_6;
        v20 = 2 * v15;
        if ( 3 * v15 >= 2LL * *(_QWORD *)(v11 + 8) )
          goto LABEL_6;
        v10 = 0;
        v21 = 0;
        goto LABEL_24;
      }
    }
    else
    {
      sub_3E590(a1, 0, 1, 0, (__int64)v8, v9);
      v8 = (char *)a1->m128i_i64[1];
      v15 = a1[1].m128i_i64[0];
    }
LABEL_14:
    v16 = &v8[24 * a2];
    memmove(v16 + 24, v16, 24 * (v15 - a2));
    *(_QWORD *)v16 = v28;
    QT::QTextFormat::QTextFormat((QT::QTextFormat *)(v16 + 8), (const QT::QTextFormat *)v29);
    ++a1[1].m128i_i64[0];
LABEL_15:
    QT::QTextFormat::~QTextFormat((QT::QTextFormat *)v29);
    return v30 - __readfsqword(0x28u);
  }
  if ( a1[1].m128i_i64[0] != a2 )
  {
    if ( !a2 )
    {
      v12 = a1->m128i_i64[1];
      v13 = (v6 + 31) & 0xFFFFFFFFFFFFFFF0LL;
      goto LABEL_10;
    }
LABEL_19:
    v28 = *a3;
    QT::QTextFormat::QTextFormat((QT::QTextFormat *)v29, (const QT::QTextFormat *)(a3 + 1));
    goto LABEL_4;
  }
  v12 = a1->m128i_i64[1];
  v13 = (v6 + 31) & 0xFFFFFFFFFFFFFFF0LL;
  if ( a2 != *(_QWORD *)(v6 + 8) - 0xAAAAAAAAAAAAAAABLL * ((__int64)(v12 - v13) >> 3) )
  {
    v27 = (_QWORD *)(v12 + 24 * a2);
    *v27 = v7;
    QT::QTextFormat::QTextFormat((QT::QTextFormat *)(v27 + 1), (const QT::QTextFormat *)(a3 + 1));
    v14 = a1[1].m128i_i64[0] + 1;
    goto LABEL_12;
  }
  if ( a2 )
    goto LABEL_19;
LABEL_10:
  if ( v13 == v12 )
    goto LABEL_3;
  *(_QWORD *)(v12 - 24) = v7;
  QT::QTextFormat::QTextFormat((QT::QTextFormat *)(v12 - 16), (const QT::QTextFormat *)(a3 + 1));
  a1->m128i_i64[1] -= 24;
  v14 = a1[1].m128i_i64[0] + 1;
LABEL_12:
  a1[1].m128i_i64[0] = v14;
  return v30 - __readfsqword(0x28u);
}
