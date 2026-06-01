__int64 __fastcall sub_2CBE30(__int64 a1, __int64 a2)
{
  __int64 v4; // rbp
  __int64 v5; // r15
  const char *v6; // rsi
  __int64 v7; // r14
  __int64 v8; // r12
  _QWORD *v9; // rax
  __m128i v10; // [rsp+8h] [rbp-E8h] BYREF
  __m128i v11; // [rsp+18h] [rbp-D8h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-C8h]
  __int128 v13; // [rsp+30h] [rbp-C0h]
  __int64 v14; // [rsp+48h] [rbp-A8h] BYREF
  __int128 v15; // [rsp+50h] [rbp-A0h]
  __int64 v16; // [rsp+68h] [rbp-88h] BYREF
  __int128 v17; // [rsp+70h] [rbp-80h]
  _QWORD v18[2]; // [rsp+88h] [rbp-68h] BYREF
  char v19; // [rsp+98h] [rbp-58h]
  __int128 v20; // [rsp+A0h] [rbp-50h]
  unsigned __int64 v21; // [rsp+B0h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  v19 = 108;
  v18[0] = &off_4B3A68;
  v12 = 0;
  v20 = 0;
  v13 = 0;
  v18[1] = a2;
  sub_2B15B0(a1, a2, 0);
  if ( netnode_qgetblob() <= 0 )
    goto LABEL_2;
  v15 = 0;
  v17 = 0;
  v14 = 0;
  v10 = 0u;
  v16 = 0;
  v11 = _mm_unpacklo_epi64((__m128i)v12, (__m128i)(v12 + (unsigned __int64)v13));
  sub_2CBA40(&v10, (__int64)&v11);
  if ( v11.m128i_i64[0] < (unsigned __int64)v11.m128i_i64[1] )
    sub_2B7D60((__int64)v18, &v16, (__int64)&v11);
  sub_2AD920((__int64)&v14, v10.m128i_i64);
  if ( (_QWORD)v17 )
  {
    sub_32CDA0(&v14, v17);
    v4 = v16 + 40 * v17;
    if ( v16 != v4 )
    {
      v5 = v16;
      do
      {
        sub_32CDA0(&v14, *(unsigned int *)(v5 + 32));
        sub_32D060(&v14, *(_QWORD *)(v5 + 24) - a2);
        v6 = s1;
        if ( *(_QWORD *)(v5 + 8) )
          v6 = *(const char **)v5;
        sub_32CF20(&v14, v6);
        v5 += 40;
      }
      while ( v4 != v5 );
      v4 = v16;
    }
    if ( !v4 )
      goto LABEL_9;
    v7 = v17;
    if ( (_QWORD)v17 )
    {
      v8 = 0;
      do
      {
        v9 = (_QWORD *)(v4 + 40 * v8);
        if ( *v9 )
        {
          v9[1] = 0;
          qfree();
          v4 = v16;
        }
        ++v8;
      }
      while ( v7 != v8 );
    }
  }
  else if ( !v16 )
  {
    goto LABEL_9;
  }
  *(_QWORD *)&v17 = 0;
  qfree();
LABEL_9:
  sub_2B6F30(v10.m128i_i64);
  sub_2B15B0(a1, a2, 1);
  netnode_setblob();
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree();
  }
LABEL_2:
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree();
  }
  return 1;
}

