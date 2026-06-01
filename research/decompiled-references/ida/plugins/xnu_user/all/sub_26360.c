__int64 __fastcall sub_26360(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v8; // dl
  __int64 result; // rax
  int *v10; // rdi
  __int64 v11; // rax
  unsigned __int64 v12; // rbp
  _QWORD *v13; // r14
  void *v14; // r13
  size_t v15; // rbx
  size_t v16; // r15
  void *v17; // rbx
  size_t v18; // r15
  _QWORD *v19; // rsi
  _QWORD *v20; // rax
  __m128i si128; // [rsp+0h] [rbp-128h] BYREF
  void *src; // [rsp+10h] [rbp-118h]
  size_t n[2]; // [rsp+18h] [rbp-110h]
  void *v24; // [rsp+28h] [rbp-100h]
  size_t v25[2]; // [rsp+30h] [rbp-F8h]
  __int64 v26; // [rsp+40h] [rbp-E8h]
  void *v27; // [rsp+48h] [rbp-E0h]
  size_t v28[2]; // [rsp+50h] [rbp-D8h]
  int v29; // [rsp+60h] [rbp-C8h]
  __m128 v30; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+80h] [rbp-A8h]
  void *v32; // [rsp+88h] [rbp-A0h]
  __int128 v33; // [rsp+90h] [rbp-98h]
  void *v34; // [rsp+A0h] [rbp-88h]
  __int128 v35; // [rsp+A8h] [rbp-80h]
  __int64 v36; // [rsp+B8h] [rbp-70h]
  void *v37; // [rsp+C0h] [rbp-68h]
  __int128 v38; // [rsp+C8h] [rbp-60h]
  int v39; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v40; // [rsp+E8h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  v8 = callui(27, a2, &callui, a4, a5, a6, si128.m128i_i64[0], si128.m128i_i64[1], src, n[0]);
  result = 1;
  if ( !v8 )
  {
    v10 = *(int **)(a1 + 16);
    *(_OWORD *)n = 0;
    *(_OWORD *)v25 = 0;
    *(_OWORD *)v28 = 0;
    src = nullptr;
    v24 = nullptr;
    v27 = nullptr;
    v26 = 0;
    v29 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_82340);
    v11 = sub_1D1B0(v10, a3);
    v12 = v11;
    if ( v11 != -1 && (unsigned __int8)sub_24E80(*(_QWORD *)(a1 + 16), &si128, v11) )
    {
      v13 = *(_QWORD **)(a1 + 24);
      v14 = nullptr;
      v15 = n[0];
      v30 = _mm_loadh_ps((const double *)si128.m128i_i64);
      v31 = si128.m128i_i64[1];
      v33 = 0;
      if ( n[0] )
      {
        v14 = (void *)qalloc_or_throw();
        *((_QWORD *)&v33 + 1) = v15;
        memcpy(v14, src, v15);
        *(_QWORD *)&v33 = v15;
      }
      v16 = v25[0];
      v17 = nullptr;
      v35 = 0;
      if ( v25[0] )
      {
        v17 = (void *)qalloc_or_throw();
        *((_QWORD *)&v35 + 1) = v16;
        memcpy(v17, v24, v16);
        *(_QWORD *)&v35 = v16;
      }
      v18 = v28[0];
      v37 = nullptr;
      v38 = 0;
      v36 = v26;
      if ( v28[0] )
      {
        v37 = (void *)qalloc_or_throw();
        *((_QWORD *)&v38 + 1) = v18;
        memcpy(v37, v27, v18);
        *(_QWORD *)&v38 = v18;
      }
      v19 = v13 + 1;
      v39 = v29;
      v20 = (_QWORD *)v13[2];
      if ( !v20 )
        goto LABEL_25;
      do
      {
        if ( v20[4] >= v12 )
        {
          v19 = v20;
          v20 = (_QWORD *)v20[2];
        }
        else
        {
          v20 = (_QWORD *)v20[3];
        }
      }
      while ( v20 );
      if ( v19 == v13 + 1 || v12 < v19[4] )
      {
LABEL_25:
        v32 = v14;
        v34 = v17;
        sub_26100(v13, v19, (__int64)&v30);
        v14 = v32;
        v17 = v34;
      }
      v32 = v14;
      v34 = v17;
      sub_1C760(&v30.m128_u64[1]);
    }
    if ( v27 )
    {
      v28[0] = 0;
      qfree();
    }
    if ( v24 )
    {
      v25[0] = 0;
      qfree();
    }
    if ( src )
    {
      n[0] = 0;
      qfree();
    }
    return 0;
  }
  return result;
}

