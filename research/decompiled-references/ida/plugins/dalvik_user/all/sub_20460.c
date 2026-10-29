__int64 __fastcall sub_20460(__int64 a1, __int64 *a2, __int64 *a3, const char *a4)
{
  unsigned int v7; // r14d
  unsigned int v9; // eax
  __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rsi
  __m128i si128; // xmm0
  __int64 v15; // rsi
  __m128i v16; // xmm0
  __int64 v17; // rax
  unsigned __int64 v18; // r15
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // [rsp+0h] [rbp-68h] BYREF
  __int128 v22; // [rsp+8h] [rbp-60h]
  char nptr[5]; // [rsp+23h] [rbp-45h] BYREF
  unsigned __int64 v24; // [rsp+28h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_20340(a1, a3) )
    return 0;
  if ( !strcmp(a4, "jdwp") )
    a4 = "track-jdwp";
  if ( !(unsigned __int8)sub_1E0A0(a1, a4) )
  {
    if ( a3 && *a3 )
    {
      a3[1] = 0;
      qfree();
      *a3 = 0;
      a3[2] = 0;
    }
    return 0;
  }
  v7 = sub_1FF60(a1, a3);
  if ( !(_BYTE)v7 )
    return 0;
  v21 = 0;
  v22 = 0;
  if ( !strncmp(a4, "shell:", 6u) )
  {
    sub_1DBD0(a1, &v21);
LABEL_13:
    if ( a2 )
      sub_1D360(a2, (__int64)&v21);
    goto LABEL_15;
  }
  if ( (unsigned __int8)sub_1DD80(a1, (__int64)nptr, 4u) )
  {
    nptr[4] = 0;
    v9 = strtoul(nptr, nullptr, 16);
    if ( !v9 )
      goto LABEL_13;
    v10 = v21;
    v11 = v9;
    v12 = v21;
    v18 = v9 + 1LL;
    v19 = v22;
    if ( (unsigned __int64)v22 < v18 )
    {
      if ( *((_QWORD *)&v22 + 1) < v18 )
      {
        v21 = qvector_reserve();
        v12 = v21;
        v19 = v22;
      }
      memset((void *)(v12 + v19), 0, v18 - v19);
      *(_QWORD *)&v22 = v18;
      v10 = v21;
    }
    else if ( v18 != (_QWORD)v22 )
    {
      *(_QWORD *)&v22 = v18;
    }
    *(_BYTE *)(v10 + v11) = 0;
    if ( (unsigned __int8)sub_1DD80(a1, v21, v11) )
      goto LABEL_13;
    v13 = *a3;
    if ( (unsigned __int64)a3[2] <= 0x1D )
    {
      v20 = qvector_reserve();
      *a3 = v20;
      v13 = v20;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_6A400);
    a3[1] = 30;
    *(__m128i *)v13 = si128;
    *(__m128i *)(v13 + 13) = _mm_load_si128((const __m128i *)&xmmword_6A450);
    *(_BYTE *)(*a3 + 29) = 0;
  }
  else
  {
    v15 = *a3;
    if ( (unsigned __int64)a3[2] <= 0x25 )
    {
      v17 = qvector_reserve();
      *a3 = v17;
      v15 = v17;
    }
    v16 = _mm_load_si128((const __m128i *)&xmmword_6A400);
    a3[1] = 38;
    *(__m128i *)v15 = v16;
    *(__m128i *)(v15 + 16) = _mm_load_si128((const __m128i *)&xmmword_6A440);
    *(_QWORD *)(v15 + 29) = 0x29746E65746E6F63LL;
    *(_BYTE *)(*a3 + 37) = 0;
  }
  v7 = 0;
LABEL_15:
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree();
  }
  return v7;
}

