__int64 __fastcall sub_28A30(const __m128i *a1)
{
  int v1; // esi
  _DWORD *v3; // rdi
  unsigned int v4; // r14d
  unsigned int v5; // ebp
  __int64 v6; // rdi
  __int64 v7; // r12
  __m128i v8; // xmm0
  char v9; // al
  __int64 v10; // rdi
  unsigned int v11; // eax
  char *v12; // r15
  int v13; // eax
  __int64 v14; // rdi
  unsigned int v15; // eax
  _BYTE *v16; // rax
  __int64 result; // rax
  _BYTE *v18; // rax
  __m128i v19; // xmm0
  __int32 v20; // eax
  __m128i v21; // [rsp+8h] [rbp-110h] BYREF
  const __m128i *v22; // [rsp+18h] [rbp-100h]
  __int64 v23; // [rsp+28h] [rbp-F0h] BYREF
  char *s1; // [rsp+30h] [rbp-E8h] BYREF
  __int128 v25; // [rsp+38h] [rbp-E0h]
  __m128i v26; // [rsp+50h] [rbp-C8h] BYREF
  _BYTE *v27; // [rsp+60h] [rbp-B8h]
  int v28; // [rsp+68h] [rbp-B0h]
  unsigned int v29; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+74h] [rbp-A4h]
  __int128 v31; // [rsp+80h] [rbp-98h]
  __int64 v32; // [rsp+90h] [rbp-88h]
  __int64 v33; // [rsp+A0h] [rbp-78h]
  __m128i v34[2]; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v35; // [rsp+D0h] [rbp-48h]
  unsigned __int64 v36; // [rsp+D8h] [rbp-40h]

  v1 = a1->m128i_i32[2];
  v36 = __readfsqword(0x28u);
  v3 = (_DWORD *)a1->m128i_i64[0];
  v23 = 0;
  sub_25690(v3, v1, 0, (int *)&v23);
  v4 = v23;
  v5 = HIDWORD(v23);
  v35 = 0;
  memset(v34, 0, sizeof(v34));
  v6 = a1->m128i_i64[0];
  if ( (unsigned int)v23 >= HIDWORD(v23) )
    return 0;
  v7 = v6 + 232;
  v8.m128i_i64[0] = 0;
  while ( 1 )
  {
    *(__int64 *)((char *)v34[0].m128i_i64 + 4) = v8.m128i_i64[0];
    v9 = sub_23850(v6, v7, (v4 & 0xFFFFFF) - 1, (__int64)v34);
    v8 = _mm_loadl_epi64((const __m128i *)((char *)v34[0].m128i_i64 + 4));
    if ( !v9 )
    {
LABEL_3:
      if ( ++v4 >= v5 )
        return 0;
      goto LABEL_4;
    }
    v10 = a1->m128i_i64[0];
    s1 = nullptr;
    v25 = 0;
    v21.m128i_i64[0] = v8.m128i_i64[0];
    v11 = sub_24180(v10, _mm_cvtsi128_si32(v8), (__int64 *)&s1);
    v12 = s1;
    v8.m128i_i64[0] = v21.m128i_i64[0];
    if ( v11 > 7 )
    {
      if ( (_QWORD)v25 )
      {
        v13 = strcmp(s1, "value__");
        v8 = _mm_loadl_epi64(&v21);
        if ( !v13 )
          break;
      }
    }
LABEL_17:
    if ( !v12 )
      goto LABEL_3;
    ++v4;
    v21.m128i_i64[0] = v8.m128i_i64[0];
    *(_QWORD *)&v25 = 0;
    qfree();
    v8.m128i_i64[0] = v21.m128i_i64[0];
    if ( v4 >= v5 )
      return 0;
LABEL_4:
    v6 = a1->m128i_i64[0];
  }
  v14 = a1->m128i_i64[0];
  v26.m128i_i32[0] = 0;
  v22 = &v26;
  v21.m128i_i64[0] = v14;
  v21.m128i_i64[1] = v8.m128i_i64[0];
  v15 = sub_24290(v14, _mm_cvtsi128_si32(_mm_shuffle_epi32(v8, 229)), v26.m128i_i32, 3u);
  v29 = 0;
  v16 = (_BYTE *)sub_240C0(v21.m128i_i64[0], 3u, v15, &v29);
  v8.m128i_i64[0] = v21.m128i_i64[1];
  if ( !v16 )
    goto LABEL_13;
  if ( v29 < v26.m128i_i32[0] )
  {
    v12 = s1;
    goto LABEL_17;
  }
  if ( v26.m128i_i32[0] <= 1u || *v16 != 6 )
  {
LABEL_13:
    result = 0;
    goto LABEL_14;
  }
  v18 = v16 + 1;
  v19 = _mm_loadl_epi64(a1);
  v28 = 0;
  v27 = &v18[v26.m128i_i32[0] - 1];
  v26 = _mm_unpacklo_epi64(v19, (__m128i)(unsigned __int64)v18);
  LOBYTE(v29) = 0;
  v30 = 0;
  v32 = 0;
  v33 = 0;
  v31 = 0;
  if ( (unsigned __int8)sub_28400(v22, (__int64)&v29) )
    v20 = HIDWORD(v30);
  else
    v20 = 0;
  v21.m128i_i32[0] = v20;
  sub_22A90((__int64)&v29);
  result = v21.m128i_u32[0];
LABEL_14:
  if ( s1 )
  {
    v21.m128i_i32[0] = result;
    *(_QWORD *)&v25 = 0;
    qfree();
    return v21.m128i_u32[0];
  }
  return result;
}

