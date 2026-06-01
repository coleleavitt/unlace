__int64 __fastcall sub_1EAE10(_QWORD *a1, __m128i *a2, __int64 *a3, __int64 a4, unsigned int a5, double a6, __m128 a7)
{
  __int64 v10; // rdi
  int v12; // edx
  __int64 v13; // rcx
  unsigned int v14; // eax
  int v15; // ebp
  char v16; // r14
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned int v19; // ebx
  _QWORD *v20; // rdi
  __m128i v21; // xmm1
  __m128i v22; // xmm0
  __m128i si128; // xmm2
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // [rsp+0h] [rbp-B8h] BYREF
  char v28; // [rsp+8h] [rbp-B0h]
  __m128i v29; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+20h] [rbp-98h]
  char v31; // [rsp+28h] [rbp-90h]
  _OWORD v32[4]; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int64 v33; // [rsp+78h] [rbp-40h]

  v10 = a1[8];
  v33 = __readfsqword(0x28u);
  sub_13FDE0(v10, 0);
  if ( (a3[1] & 0xFB) != 1 )
  {
    if ( !under_debugger )
      sub_383060(0xCB4Fu, a6);
LABEL_30:
    BUG();
  }
  v12 = *((_DWORD *)a3 + 3);
  if ( v12 <= 0 )
  {
    if ( !under_debugger )
      sub_383060(0xCB50u, a6);
    goto LABEL_30;
  }
  v28 = *((_BYTE *)a3 + 8);
  v13 = *a3;
  v14 = a5 >> 1;
  DWORD1(v32[0]) = v12;
  v15 = a5 & 1;
  v27 = v13;
  LODWORD(v32[0]) = 0;
  v16 = v14 & 1;
  memset((char *)v32 + 8, 0, 24);
  if ( !a4 )
  {
    if ( v15 )
    {
LABEL_20:
      v20 = a1 + 56;
      goto LABEL_13;
    }
LABEL_12:
    v20 = a1 + 52;
LABEL_13:
    v19 = sub_1E0180((__int64)v20, (__m128i *)v32, (__int64)&v27, v16);
    goto LABEL_14;
  }
  v17 = a1[6];
  if ( v17 == a4 )
  {
    if ( v15 )
    {
      if ( v17 != a1[7] )
      {
        v25 = a1[8];
        v31 = 1;
        v29 = (__m128i)v25;
        v30 = 0;
        goto LABEL_7;
      }
      goto LABEL_20;
    }
    goto LABEL_12;
  }
  if ( a1[7] == a4 )
  {
    if ( !v15 )
    {
      v26 = a1[8];
      v31 = 1;
      v29 = (__m128i)v26;
      v30 = 0;
      goto LABEL_8;
    }
    goto LABEL_20;
  }
  v18 = a1[8];
  v31 = 1;
  v29 = (__m128i)v18;
  v30 = 0;
  if ( v15 )
LABEL_7:
    a4 = *(_QWORD *)(a4 + 8);
LABEL_8:
  sub_1EA870((__int64)a1, &v29, v17, a4, (__m128)0LL, a7);
  v19 = sub_1E0180((__int64)&v29, (__m128i *)v32, (__int64)&v27, v16);
  if ( v29.m128i_i64[1] )
  {
    sub_13FCB0((unsigned __int64 **)&v29.m128i_i64[1]);
    if ( v29.m128i_i64[1] )
      qfree(v29.m128i_i64[1]);
  }
LABEL_14:
  if ( (_BYTE)v19 )
  {
    if ( LODWORD(v32[0]) == 8 )
    {
      v19 = 0;
    }
    else if ( a2 )
    {
      v21 = _mm_loadu_si128(a2);
      v22 = _mm_loadu_si128(a2 + 1);
      *a2 = _mm_load_si128((const __m128i *)v32);
      si128 = _mm_load_si128((const __m128i *)&v32[1]);
      v32[2] = v21;
      v32[3] = v22;
      a2[1] = si128;
      v32[0] = v21;
      v32[1] = v22;
    }
  }
  sub_312B80((__int64)v32);
  return v19;
}

