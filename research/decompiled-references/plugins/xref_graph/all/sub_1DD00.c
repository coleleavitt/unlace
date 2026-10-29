QT::QGraphicsScene *__fastcall sub_1DD00(__int64 a1, __int64 a2, char a3)
{
  QT::QGraphicsScene *v4; // rax
  size_t v5; // r14
  QT::QGraphicsScene *v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __m128i *v11; // rax
  __m128i v12; // xmm0
  __int64 (__fastcall *v14)(); // rax
  const void *v15; // rsi
  int *v16; // rsi
  __int64 v17; // r8
  __int64 v18; // r9
  int *v19; // rax
  _BYTE v20[8]; // [rsp+8h] [rbp-70h] BYREF
  __m128i v21; // [rsp+10h] [rbp-68h] BYREF
  __int64 (__fastcall *v22)(); // [rsp+20h] [rbp-58h] BYREF
  __int128 v23; // [rsp+28h] [rbp-50h]
  unsigned __int64 v24; // [rsp+38h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v4 = (QT::QGraphicsScene *)operator new(0xAB8u);
  v5 = *(_QWORD *)(a2 + 8);
  v22 = nullptr;
  v6 = v4;
  v23 = 0;
  if ( v5 )
  {
    v14 = (__int64 (__fastcall *)())qalloc_or_throw(v5);
    v15 = *(const void **)a2;
    v22 = v14;
    *((_QWORD *)&v23 + 1) = v5;
    memcpy(v14, v15, v5);
    *(_QWORD *)&v23 = v5;
  }
  sub_276B0(v6);
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v22, &v22, v7, v8);
  }
  if ( a3 )
  {
    v16 = *(int **)(a1 + 1752);
    v22 = (__int64 (__fastcall *)())v6;
    sub_1DA20((int **)(a1 + 1736), v16, (__int64 *)&v22, v8, v9, v10);
    v19 = *(int **)(a1 + 1736);
    if ( !v19 || *v19 > 1 )
      sub_1B8E0(a1 + 1736, 0, 0, 0, v17, v18);
  }
  v21.m128i_i64[1] = 0;
  v21.m128i_i64[0] = (__int64)sub_1C440;
  *(_QWORD *)&v23 = 0;
  v22 = sub_3DE20;
  v11 = (__m128i *)operator new(0x20u);
  v12 = _mm_load_si128(&v21);
  v11->m128i_i32[0] = 1;
  v11->m128i_i64[1] = (__int64)sub_1A370;
  v11[1] = v12;
  QT::QObject::connectImpl(v20, v6, &v22, a1 + 1784, &v21, v11, 0, 0, &off_4EB40);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v20);
  return v6;
}
