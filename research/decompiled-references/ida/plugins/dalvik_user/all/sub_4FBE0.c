__int64 __fastcall sub_4FBE0(unsigned __int64 a1, __int64 *a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  int v8; // esi
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 i; // rdi
  __int64 v12; // rax
  char *v13; // rax
  __int64 v14; // rdx
  __m128 v15; // xmm0
  int v16; // eax
  __m128i *v17; // rax
  int v18; // esi
  char v19; // al
  __int64 v20; // r9
  __m128i v21; // xmm0
  __m128i v22; // xmm1
  __int64 v23; // r8
  __int64 v24; // rax
  __int8 v25; // r10
  __int64 v26; // rsi
  unsigned int v27; // ebx
  __int8 v30; // [rsp+Ch] [rbp-12Ch]
  __int64 v32; // [rsp+10h] [rbp-128h]
  __m128i v33; // [rsp+18h] [rbp-120h] BYREF
  __int64 v34; // [rsp+28h] [rbp-110h]
  int v35; // [rsp+34h] [rbp-104h] BYREF
  char *v36; // [rsp+38h] [rbp-100h] BYREF
  __int64 v37; // [rsp+40h] [rbp-F8h] BYREF
  __int8 v38[8]; // [rsp+48h] [rbp-F0h] BYREF
  __m128i v39; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v40; // [rsp+60h] [rbp-D8h]
  __int64 v41; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v42; // [rsp+78h] [rbp-C0h]
  __m128i v43; // [rsp+80h] [rbp-B8h]
  __int64 v44; // [rsp+90h] [rbp-A8h] BYREF
  __int128 v45; // [rsp+98h] [rbp-A0h]
  char v46; // [rsp+A8h] [rbp-90h]
  _BYTE v47[24]; // [rsp+B0h] [rbp-88h] BYREF
  int v48; // [rsp+C8h] [rbp-70h]
  __int64 v49; // [rsp+D0h] [rbp-68h]
  __int128 v50; // [rsp+D8h] [rbp-60h]
  char v51; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v52; // [rsp+F8h] [rbp-40h]

  v52 = __readfsqword(0x28u);
  qmutex_lock();
  v45 = 0;
  v44 = 0;
  v46 = byte_7FBE9;
  v43 = _mm_unpacklo_epi64((__m128i)0x400uLL, (__m128i)0x400uLL);
  v41 = qalloc();
  if ( !v41 )
    sub_43DF0((__int64)"JDWP encoder", a2, a3);
  v8 = *(_DWORD *)(a1 + 8);
  v42 = 0;
  sub_46BB0((__int64)&v41, v8, a3);
  if ( v46 )
    sub_1FAD0(&v44);
  v9 = v42;
  v10 = v43.m128i_i64[0];
  for ( i = v41; v43.m128i_i64[0] < (unsigned __int64)(v42 + 4); v10 = v43.m128i_i64[0] )
  {
    v43.m128i_i64[0] = v43.m128i_i64[1] + v10;
    v12 = qrealloc();
    i = v12;
    if ( !v12 )
      sub_43DF0((__int64)"JDWP encoder");
    v41 = v12;
    v9 = v42;
  }
  *(_DWORD *)(i + v9) = _byteswap_ulong(a4);
  v42 += 4;
  sub_46AA0((__int64)&v41, a5);
  memset(v47, 0, sizeof(v47));
  v13 = sub_48F20(a1, 0xBu, 6u, (__int64)&v41, (__int64)v47);
  v36 = v13;
  if ( !v13 )
    goto LABEL_18;
  if ( a2 )
  {
    v14 = *((_QWORD *)v13 + 1);
    v15 = _mm_loadh_ps((const double *)v13);
    v48 = 0;
    *(_QWORD *)&v47[16] = v14;
    *(__m128 *)v47 = v15;
    v49 = 0;
    v51 = byte_7FBE9;
    v50 = 0;
    if ( (unsigned __int8)sub_46430((__int64)v47, (unsigned __int32 *)&v35, 1) )
    {
      v16 = v35--;
      if ( v16 <= 0 )
      {
LABEL_19:
        sub_43EB0((__int64)v47);
        goto LABEL_20;
      }
      while ( 1 )
      {
        v18 = *(_DWORD *)(a1 + 16);
        v37 = 0;
        v40 = 0;
        v39 = 0;
        if ( !(unsigned __int8)sub_46950((__int64)v47, v18, &v37) )
          break;
        v19 = sub_47060(v47, (__int64)v38);
        v20 = v37;
        v21 = _mm_loadl_epi64(&v39);
        v22 = _mm_loadl_epi64((const __m128i *)&v39.m128i_u64[1]);
        v23 = v40;
        if ( !v19 )
          break;
        v24 = a2[1];
        v25 = v38[0];
        v26 = *a2;
        if ( a2[2] < (unsigned __int64)(v24 + 1) )
        {
          v34 = v40;
          v32 = v37;
          v30 = v38[0];
          v33.m128i_i64[1] = v22.m128i_i64[0];
          v33.m128i_i64[0] = v21.m128i_i64[0];
          v26 = qvector_reserve();
          v23 = v34;
          v20 = v32;
          *a2 = v26;
          v22 = _mm_loadl_epi64((const __m128i *)&v33.m128i_u64[1]);
          v24 = a2[1];
          v21 = _mm_loadl_epi64(&v33);
          v25 = v30;
        }
        v17 = (__m128i *)(v26 + 40 * v24);
        v17->m128i_i64[0] = v20;
        v17->m128i_i8[8] = v25;
        v17[2].m128i_i64[0] = v23;
        v17[1] = _mm_unpacklo_epi64(v21, v22);
        LODWORD(v17) = v35;
        ++a2[1];
        v35 = (_DWORD)v17 - 1;
        if ( (int)v17 <= 0 )
          goto LABEL_19;
      }
    }
    sub_43EB0((__int64)v47);
LABEL_18:
    v27 = 0;
    goto LABEL_21;
  }
LABEL_20:
  v27 = 1;
LABEL_21:
  sub_44B80((_QWORD **)&v36);
  qfree();
  if ( v44 )
  {
    *(_QWORD *)&v45 = 0;
    qfree();
  }
  qmutex_unlock();
  return v27;
}

