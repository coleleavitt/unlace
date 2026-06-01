__int64 __fastcall sub_21B60(__int64 *a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebx
  char v7; // al
  char v8; // dl
  size_t v9; // rax
  size_t v10; // r8
  void *v11; // rdi
  size_t v12; // r14
  const char *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // rbp
  _QWORD *v17; // rdx
  char v19; // al
  __int64 v20; // rax
  __int64 v21; // r14
  size_t v22; // r15
  char *v23; // rdi
  __int64 v24; // rax
  char *v25; // rdx
  __m128i v26; // xmm0
  size_t v27; // [rsp+0h] [rbp-8D8h]
  size_t v28; // [rsp+0h] [rbp-8D8h]
  size_t v29; // [rsp+8h] [rbp-8D0h]
  char v30; // [rsp+1Fh] [rbp-8B9h]
  __int64 v31; // [rsp+20h] [rbp-8B8h] BYREF
  __int64 v32; // [rsp+28h] [rbp-8B0h] BYREF
  __int64 v33; // [rsp+30h] [rbp-8A8h] BYREF
  __int128 v34; // [rsp+38h] [rbp-8A0h]
  __int64 v35; // [rsp+50h] [rbp-888h] BYREF
  __int128 v36; // [rsp+58h] [rbp-880h]
  char *v37; // [rsp+70h] [rbp-868h] BYREF
  __m128i v38; // [rsp+78h] [rbp-860h] BYREF
  char v39[1024]; // [rsp+90h] [rbp-848h] BYREF
  char s; // [rsp+490h] [rbp-448h] BYREF
  char src[1031]; // [rsp+491h] [rbp-447h] BYREF
  unsigned __int64 v42; // [rsp+898h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  v34 = 0;
  v33 = 0;
  sub_13B20(&v33);
  v35 = 0;
  v36 = 0;
  qsnprintf();
  v31 = 0;
  v38 = 0;
  v32 = 0;
  v37 = nullptr;
  v6 = sub_1D840((unsigned __int8 *)&v31, a4);
  if ( !(_BYTE)v6 )
  {
    if ( byte_7FAF8 )
    {
      if ( (_BYTE)v31 )
      {
        sub_5D660(&v32, 0xFFFFFFFFLL);
        LOWORD(v31) = 0;
LABEL_39:
        v13 = v37;
        if ( v38.m128i_i64[0] > 1uLL )
        {
LABEL_40:
          sub_11270((__int64)"ADB %s", v13);
          if ( !v37 )
            goto LABEL_23;
          goto LABEL_22;
        }
LABEL_21:
        if ( !v13 )
          goto LABEL_23;
LABEL_22:
        v38.m128i_i64[0] = 0;
        qfree();
        goto LABEL_23;
      }
      goto LABEL_20;
    }
LABEL_38:
    LOWORD(v31) = 0;
    goto LABEL_39;
  }
  if ( !byte_7FAF8 )
  {
    v7 = sub_1E130(&v35, (__int64)&v37, (__int64)"%s", v39);
    v8 = byte_7FAF8;
    if ( v7 )
      goto LABEL_4;
LABEL_35:
    if ( v8 )
    {
      if ( (_BYTE)v31 )
      {
        sub_5D660(&v32, 0xFFFFFFFFLL);
        goto LABEL_38;
      }
LABEL_20:
      v13 = v37;
      if ( v38.m128i_i64[0] > 1uLL )
        goto LABEL_40;
      goto LABEL_21;
    }
    goto LABEL_38;
  }
  v19 = sub_20460((__int64)&v31, &v35, (__int64 *)&v37, v39);
  v8 = byte_7FAF8;
  if ( !v19 )
    goto LABEL_35;
LABEL_4:
  if ( v8 )
  {
    if ( !(_BYTE)v31 )
      goto LABEL_6;
    sub_5D660(&v32, 0xFFFFFFFFLL);
  }
  LOWORD(v31) = 0;
LABEL_6:
  if ( v37 )
  {
    v38.m128i_i64[0] = 0;
    qfree();
  }
  if ( (_QWORD)v36 )
  {
    if ( (unsigned int)qsscanf() == 3 )
    {
      if ( a1 )
      {
        v9 = strlen(&s);
        v10 = v9;
        if ( v9 > 2 )
        {
          if ( s == 40 )
          {
            v21 = v9 - 1;
            if ( v39[v9 + 1023] == 41 )
            {
              v29 = v9;
              v22 = v9 - 2;
              v37 = nullptr;
              v38 = 0;
              v37 = (char *)qvector_reserve();
              v38.m128i_i64[0] = v21;
              memmove(v37, src, v22);
              v37[v29 - 2] = 0;
              v24 = a1[2];
              v25 = v37;
              v26 = _mm_loadu_si128(&v38);
              v37 = (char *)*a1;
              v23 = v37;
              *a1 = (__int64)v25;
              v38.m128i_i64[1] = v24;
              *(__m128i *)(a1 + 1) = v26;
              if ( v23 )
              {
                v38.m128i_i64[0] = 0;
                qfree();
              }
              goto LABEL_16;
            }
          }
LABEL_13:
          v11 = (void *)*a1;
          v12 = v9 + 1;
          if ( a1[2] < v9 + 1 )
          {
            v28 = v9;
            v20 = qvector_reserve();
            *a1 = v20;
            v10 = v28;
            v11 = (void *)v20;
          }
          a1[1] = v12;
          v27 = v10;
          memmove(v11, &s, v10);
          *(_BYTE *)(*a1 + v27) = 0;
          goto LABEL_16;
        }
        if ( v9 )
          goto LABEL_13;
        a1[1] = 0;
      }
LABEL_16:
      if ( a2 )
        *a2 = v30;
      goto LABEL_24;
    }
LABEL_23:
    v6 = 0;
LABEL_24:
    v14 = v35;
    if ( !v35 )
      goto LABEL_31;
    v15 = v36;
    if ( (_QWORD)v36 )
    {
      v16 = 0;
      do
      {
        v17 = (_QWORD *)(v14 + 24 * v16);
        if ( *v17 )
        {
          v17[1] = 0;
          qfree();
          v14 = v35;
        }
        ++v16;
      }
      while ( v15 != v16 );
    }
    goto LABEL_30;
  }
  v6 = 0;
  if ( v35 )
  {
LABEL_30:
    *(_QWORD *)&v36 = 0;
    qfree();
  }
LABEL_31:
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    qfree();
  }
  return v6;
}

