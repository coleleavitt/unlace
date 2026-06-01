__int64 __fastcall sub_4D240(unsigned __int64 a1, __int64 *a2, __int64 a3, unsigned int a4)
{
  int v7; // esi
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 i; // rdi
  __int64 v11; // rax
  char *v12; // rax
  __int64 v13; // rdx
  __m128 v14; // xmm0
  int v15; // eax
  int v16; // eax
  __int64 v17; // rdx
  __m128i v18; // xmm0
  __int64 v19; // rsi
  __int64 v20; // rax
  unsigned int v21; // ebx
  __m128i v23; // [rsp+0h] [rbp-F8h] BYREF
  int v24; // [rsp+14h] [rbp-E4h] BYREF
  char *v25; // [rsp+18h] [rbp-E0h] BYREF
  __m128i v26; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v27; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v28; // [rsp+38h] [rbp-C0h]
  __m128i v29; // [rsp+40h] [rbp-B8h]
  __int64 v30; // [rsp+50h] [rbp-A8h] BYREF
  __int128 v31; // [rsp+58h] [rbp-A0h]
  char v32; // [rsp+68h] [rbp-90h]
  _BYTE v33[24]; // [rsp+70h] [rbp-88h] BYREF
  int v34; // [rsp+88h] [rbp-70h]
  __int64 v35; // [rsp+90h] [rbp-68h]
  __int128 v36; // [rsp+98h] [rbp-60h]
  char v37; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v38; // [rsp+B8h] [rbp-40h]

  v23.m128i_i64[0] = a3;
  v38 = __readfsqword(0x28u);
  qmutex_lock();
  v31 = 0;
  v30 = 0;
  v32 = byte_7FBE9;
  v29 = _mm_unpacklo_epi64((__m128i)8uLL, (__m128i)8uLL);
  v27 = qalloc();
  if ( !v27 )
    sub_43DF0((__int64)"JDWP encoder", a2, v23.m128i_i64[0]);
  v7 = *(_DWORD *)(a1 + 8);
  v28 = 0;
  sub_46BB0((__int64)&v27, v7, v23.m128i_i64[0]);
  if ( v32 )
    sub_1FAD0(&v30);
  v8 = v28;
  v9 = v29.m128i_i64[0];
  for ( i = v27; v29.m128i_i64[0] < (unsigned __int64)(v28 + 4); v9 = v29.m128i_i64[0] )
  {
    v29.m128i_i64[0] = v29.m128i_i64[1] + v9;
    v11 = qrealloc();
    i = v11;
    if ( !v11 )
      sub_43DF0((__int64)"JDWP encoder");
    v27 = v11;
    v8 = v28;
  }
  *(_DWORD *)(i + v8) = _byteswap_ulong(a4);
  v28 += 4;
  memset(v33, 0, sizeof(v33));
  v12 = sub_48F20(a1, 2u, 0x10u, (__int64)&v27, (__int64)v33);
  v25 = v12;
  if ( !v12 )
    goto LABEL_17;
  if ( a2 )
  {
    v13 = *((_QWORD *)v12 + 1);
    v14 = _mm_loadh_ps((const double *)v12);
    v34 = 0;
    *(_QWORD *)&v33[16] = v13;
    *(__m128 *)v33 = v14;
    v35 = 0;
    v37 = byte_7FBE9;
    v36 = 0;
    if ( (unsigned __int8)sub_46430((__int64)v33, (unsigned __int32 *)&v24, 1) )
    {
      v15 = v24--;
      if ( v15 <= 0 )
      {
LABEL_18:
        sub_43EB0((__int64)v33);
        goto LABEL_19;
      }
      while ( (unsigned __int8)sub_473C0((__int64)v33, &v26) )
      {
        v17 = a2[1];
        v18 = _mm_load_si128(&v26);
        v19 = *a2;
        if ( a2[2] < (unsigned __int64)(v17 + 1) )
        {
          v23 = v18;
          v20 = qvector_reserve();
          v17 = a2[1];
          v18 = _mm_load_si128(&v23);
          *a2 = v20;
          v19 = v20;
        }
        v16 = v24;
        *(__m128i *)(v19 + 16 * v17) = v18;
        ++a2[1];
        v24 = v16 - 1;
        if ( v16 <= 0 )
          goto LABEL_18;
      }
    }
    sub_43EB0((__int64)v33);
LABEL_17:
    v21 = 0;
    goto LABEL_20;
  }
LABEL_19:
  v21 = 1;
LABEL_20:
  sub_44B80((_QWORD **)&v25);
  qfree();
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree();
  }
  qmutex_unlock();
  return v21;
}

