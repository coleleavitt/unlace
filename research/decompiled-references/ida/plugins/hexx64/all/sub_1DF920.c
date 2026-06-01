__int64 __fastcall sub_1DF920(_QWORD *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 *a5, double a6, __m128 a7)
{
  __int64 *v8; // rsi
  __int64 v11; // rdx
  __int64 v12; // rbx
  unsigned int v13; // ebx
  unsigned int v15; // eax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // [rsp+8h] [rbp-A8h] BYREF
  __m128i v20; // [rsp+10h] [rbp-A0h] BYREF
  __m128i v21; // [rsp+20h] [rbp-90h] BYREF
  __m128i v22; // [rsp+30h] [rbp-80h] BYREF
  __m128i v23; // [rsp+40h] [rbp-70h] BYREF
  __int64 v24[2]; // [rsp+50h] [rbp-60h] BYREF
  __int64 v25; // [rsp+60h] [rbp-50h]
  __int128 v26; // [rsp+68h] [rbp-48h]
  unsigned __int64 v27; // [rsp+78h] [rbp-38h]

  v8 = a5;
  v27 = __readfsqword(0x28u);
  v24[0] = 0;
  v24[1] = 0;
  v25 = 0;
  v26 = 0;
  if ( !a5 )
  {
    sub_123EA0((__int64)a1, v24, a4, 0, 0xFFFF0000, 0.0);
    v8 = v24;
  }
  if ( a3 )
    v11 = *(_QWORD *)(a3 + 16);
  else
    v11 = a1[7];
  v12 = sub_129150((__int64)a1, v8, v11, 0, 0, 0, 0.0, a7, 0x101u);
  if ( v12 )
  {
    if ( *(_DWORD *)(v12 + 68) < *(_DWORD *)(a4 + 4)
      || !sub_1255D0((unsigned __int8 *)(v12 + 64), *(_QWORD *)(a1[8] + 1504LL), a4, 1, 0.0) )
    {
      goto LABEL_7;
    }
    v15 = *(_DWORD *)v12;
    if ( *(_DWORD *)v12 == 18 )
    {
      if ( !(unsigned __int8)sub_11FD80((char *)(v12 + 48), &v19, 1)
        || (v19 & *(_QWORD *)(*(_QWORD *)(a1[60] + 24LL) + 16LL)) != v19
        || !v19 )
      {
        goto LABEL_7;
      }
      v22.m128i_i64[0] = 1 - v19;
      v22.m128i_i64[1] = 2 * v19 - 1;
      sub_316BB0(a2, &v22, 0.0, a7);
      v13 = 0;
    }
    else if ( v15 > 0x12 )
    {
      if ( v15 != 20
        || !(unsigned __int8)sub_11FD80((char *)(v12 + 48), &v19, 0)
        && !(unsigned __int8)sub_11FD80((char *)(v12 + 32), &v19, 0) )
      {
        goto LABEL_7;
      }
      v16 = log2ceil();
      v17 = *(_QWORD *)(*(_QWORD *)(a1[60] + 24LL) + 16LL);
      if ( (unsigned __int64)v16 > 0x3F )
      {
        v19 = 0;
      }
      else
      {
        v19 = 1LL << v16;
        v18 = v17 & (1LL << v16);
        if ( v18 != 1LL << v16 )
          goto LABEL_7;
        v17 &= v18 - 1;
      }
      v23.m128i_i64[1] = v17;
      v23.m128i_i64[0] = 0;
      sub_316BB0(a2, &v23, 0.0, a7);
      v13 = 0;
    }
    else
    {
      if ( v15 != 4 )
      {
        if ( v15 == 17
          && (unsigned __int8)sub_11FD80((char *)(v12 + 48), &v19, 0)
          && (v19 & *(_QWORD *)(*(_QWORD *)(a1[60] + 24LL) + 16LL)) == v19
          && v19 )
        {
          v21.m128i_i64[0] = 0;
          v21.m128i_i64[1] = v19;
          sub_316BB0(a2, &v21, 0.0, a7);
          v13 = 0;
          goto LABEL_8;
        }
LABEL_7:
        v13 = -1;
        goto LABEL_8;
      }
      if ( !(unsigned __int8)sub_11FD80((char *)(v12 + 32), &v19, 0)
        || v19 != (v19 & *(_QWORD *)(*(_QWORD *)(a1[60] + 24LL) + 16LL)) )
      {
        goto LABEL_7;
      }
      v20.m128i_i64[0] = v19;
      v20.m128i_i64[1] = 1;
      sub_316BB0(a2, &v20, 0.0, a7);
      v13 = 0;
    }
  }
  else
  {
    v13 = 1;
  }
LABEL_8:
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree(v25);
  }
  qfree(v24[0]);
  return v13;
}

