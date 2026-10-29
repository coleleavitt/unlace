__int64 __fastcall sub_157240(__int64 a1, __int64 a2, __int64 a3, __m128 a4)
{
  __int64 v4; // r12
  __int64 v6; // rax
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rbp
  char v9; // bp
  int v10; // r8d
  int v11; // r9d
  unsigned __int64 *v12; // rdi
  char v14; // al
  __int64 v15; // [rsp+10h] [rbp-C8h] BYREF
  __int128 v16; // [rsp+18h] [rbp-C0h]
  __int64 v17[2]; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+40h] [rbp-98h] BYREF
  __int128 v19; // [rsp+48h] [rbp-90h]
  __int64 v20[2]; // [rsp+60h] [rbp-78h] BYREF
  unsigned __int64 *v21; // [rsp+70h] [rbp-68h] BYREF
  __int128 v22; // [rsp+78h] [rbp-60h]
  __int64 v23; // [rsp+88h] [rbp-50h]
  __int64 v24; // [rsp+90h] [rbp-48h]
  __int64 v25; // [rsp+98h] [rbp-40h]
  unsigned __int64 v26; // [rsp+A8h] [rbp-30h]

  v4 = 1;
  v26 = __readfsqword(0x28u);
  v24 = a2;
  v25 = a3;
  while ( 1 )
  {
    v19 = 0;
    v17[0] = 0;
    v17[1] = 0;
    v18 = 0;
    sub_123EA0(a1, v17, a3, 1, 0xFFFF0000, *(double *)a4.m128_u64);
    v6 = *(_QWORD *)(a1 + 64);
    v20[0] = 0;
    v20[1] = 0;
    v7 = *(_QWORD *)(v6 + 128);
    v8 = *(_QWORD *)(v6 + 568);
    v21 = nullptr;
    v15 = 0;
    v22 = 0;
    v16 = 0;
    if ( v7 + v8 - 1 >= v8 )
    {
      v15 = qvector_reserve((__int64)&v15, 0, 1, 16);
      a4 = (__m128)_mm_unpacklo_epi64((__m128i)v8, (__m128i)v7);
      *(__m128 *)(v15 + 16 * v16) = a4;
      *(_QWORD *)&v16 = v16 + 1;
    }
    v9 = sub_317F40(&v15, (__int64)&v18);
    if ( v15 )
    {
      *(_QWORD *)&v16 = 0;
      qfree(v15);
    }
    sub_128EE0(
      a1,
      v20,
      (unsigned __int8 *)*(&v23 + v4),
      v9 == 0 ? 1 : 16385,
      v10,
      v11,
      *(double *)a4.m128_u64,
      (__m128)0LL);
    if ( (unsigned __int8)sub_64880(v20) && !(_QWORD)v22 )
    {
      if ( v21 )
        qfree((__int64)v21);
      qfree(v20[0]);
      if ( v18 )
      {
        *(_QWORD *)&v19 = 0;
        qfree(v18);
      }
      goto LABEL_19;
    }
    if ( (unsigned __int8)sub_64780(v20, v17) )
      break;
    v14 = sub_318470(&v21, (__int64)&v18);
    v12 = v21;
    if ( v14 )
      goto LABEL_10;
    if ( v21 )
    {
      *(_QWORD *)&v22 = 0;
      qfree((__int64)v21);
    }
    qfree(v20[0]);
    if ( v18 )
    {
      *(_QWORD *)&v19 = 0;
      qfree(v18);
    }
LABEL_19:
    qfree(v17[0]);
    if ( v4 == 2 )
      return 1;
    a3 = v24;
    v4 = 2;
  }
  v12 = v21;
LABEL_10:
  if ( v12 )
  {
    *(_QWORD *)&v22 = 0;
    qfree((__int64)v12);
  }
  qfree(v20[0]);
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree(v18);
  }
  qfree(v17[0]);
  return 0;
}

