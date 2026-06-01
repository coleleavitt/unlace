__int64 __fastcall sub_21460(const char *a1, __int64 a2)
{
  const char *v3; // rdi
  unsigned int v4; // ebx
  const char *v5; // rdi
  const char *v6; // rsi
  __int64 v7; // rdi
  unsigned int v9; // ebp
  __int64 v10; // rax
  __int64 v11; // rdx
  __m128i v12; // xmm0
  const char *v13; // rsi
  __int64 v14; // rsi
  __int64 v15; // [rsp+0h] [rbp-98h] BYREF
  __int64 v16; // [rsp+8h] [rbp-90h] BYREF
  const char *v17; // [rsp+10h] [rbp-88h]
  __int128 v18; // [rsp+18h] [rbp-80h]
  __int64 v19; // [rsp+30h] [rbp-68h] BYREF
  __m128i v20; // [rsp+38h] [rbp-60h] BYREF
  __int64 v21; // [rsp+50h] [rbp-48h] BYREF
  __int128 v22; // [rsp+58h] [rbp-40h]
  unsigned __int64 v23; // [rsp+68h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  v18 = 0;
  dword_7FAF4 = 5037;
  v17 = nullptr;
  if ( !(unsigned __int8)qgetenv() )
    goto LABEL_5;
  v3 = nptr;
  if ( (_QWORD)v18 )
    v3 = v17;
  dword_7FAF4 = strtol(v3, nullptr, 0);
  if ( (unsigned int)(dword_7FAF4 - 1) <= 0xFFFE )
  {
LABEL_5:
    v19 = 0;
    v20 = 0;
    v4 = sub_1E4E0((__int64)&v19);
    if ( (_BYTE)v4 && !(unsigned __int8)sub_1E630(a1, (__int64)&v19) )
    {
      v7 = *(_QWORD *)a2;
      v10 = *(_QWORD *)(a2 + 16);
      v4 = 0;
      v11 = v19;
      v12 = _mm_loadu_si128(&v20);
      v19 = *(_QWORD *)a2;
      *(_QWORD *)a2 = v11;
      v20.m128i_i64[1] = v10;
      *(__m128i *)(a2 + 8) = v12;
LABEL_21:
      if ( v7 )
      {
        v20.m128i_i64[0] = 0;
        qfree();
      }
      goto LABEL_23;
    }
    byte_7FAF8 = 1;
    v15 = 0;
    v16 = 0;
    if ( !(unsigned __int8)sub_1D840((unsigned __int8 *)&v15, a2) )
    {
      if ( !byte_7FAF8 )
        goto LABEL_31;
      goto LABEL_9;
    }
    v9 = sub_21020((__int64)&v15);
    if ( !(_BYTE)v9 )
    {
      if ( !byte_7FAF8 )
        goto LABEL_31;
LABEL_9:
      if ( !(_BYTE)v15 )
      {
LABEL_10:
        byte_7FAF8 = 0;
        sub_11340((__int64)"Falling back to adb client\n");
        if ( !(_BYTE)v4 )
        {
          v21 = 0;
          v5 = nptr;
          v22 = 0;
          if ( (_QWORD)xmmword_7FBD8 )
            v5 = (const char *)qword_7FBD0;
          if ( (unsigned __int8)sub_1AAF0(v5) )
          {
            sub_13B20(&v21);
            if ( v20.m128i_i64[0] > 1uLL )
              sub_1FAD0(&v21);
          }
          else
          {
            v14 = v21;
            if ( *((_QWORD *)&v22 + 1) <= 0x35u )
            {
              v21 = qvector_reserve();
              v14 = v21;
            }
            *(_QWORD *)&v22 = 54;
            *(__m128i *)v14 = _mm_load_si128((const __m128i *)&xmmword_6A460);
            *(__m128i *)(v14 + 16) = _mm_load_si128((const __m128i *)&xmmword_6A470);
            *(__m128i *)(v14 + 32) = _mm_load_si128((const __m128i *)&xmmword_6A480);
            *(_QWORD *)(v14 + 45) = 0xA2E726576726573LL;
            *(_BYTE *)(v21 + 53) = 0;
          }
          sub_1FAD0(&v21);
          v6 = nptr;
          if ( (_QWORD)v22 )
            v6 = (const char *)v21;
          sub_11270((__int64)"%s", v6);
          if ( v21 )
          {
            *(_QWORD *)&v22 = 0;
            qfree();
          }
        }
        v7 = v19;
        goto LABEL_21;
      }
      sub_5D660(&v16, 0xFFFFFFFFLL);
LABEL_31:
      LOWORD(v15) = 0;
      goto LABEL_10;
    }
    if ( byte_7FAF8 )
    {
      if ( !(_BYTE)v15 )
      {
LABEL_29:
        sub_11340((__int64)"TCP-connection to adb server\n");
        v7 = v19;
        v4 = v9;
        goto LABEL_21;
      }
      sub_5D660(&v16, 0xFFFFFFFFLL);
    }
    LOWORD(v15) = 0;
    goto LABEL_29;
  }
  if ( *(_QWORD *)a2 )
  {
    *(_QWORD *)(a2 + 8) = 0;
    qfree();
    *(_QWORD *)a2 = 0;
    *(_QWORD *)(a2 + 16) = 0;
  }
  v13 = nptr;
  if ( (_QWORD)v18 )
    v13 = v17;
  sub_11270((__int64)"Env var ANDROID_ADB_SERVER_PORT must be a positive number less than 65535. Got \"%s\"", v13);
  v4 = 0;
LABEL_23:
  if ( v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree();
  }
  return v4;
}

