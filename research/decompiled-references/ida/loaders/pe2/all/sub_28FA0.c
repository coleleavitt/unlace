__int64 __fastcall sub_28FA0(
        __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        char *a4,
        int a5,
        _DWORD *a6,
        _DWORD *a7,
        __int64 *a8,
        _DWORD *a9,
        _DWORD *a10,
        _DWORD *a11,
        unsigned __int64 a12,
        __int64 a13,
        __int64 a14)
{
  unsigned int v16; // r14d
  __int64 v17; // rdi
  __int64 result; // rax
  __int64 v19; // r9
  __int8 *v20; // rax
  __int64 v21; // rax
  __int8 v22; // dl
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int v27; // r15d
  __int64 v28; // rax
  __int64 v29; // rdi
  char *v30; // rcx
  __int64 v31; // r15
  unsigned int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rdx
  bool v35; // cl
  __m128i v36; // xmm0
  char v37; // [rsp+0h] [rbp-160h]
  __int8 *v38; // [rsp+10h] [rbp-150h]
  int v42; // [rsp+6Ch] [rbp-F4h] BYREF
  __m128i v43; // [rsp+70h] [rbp-F0h] BYREF
  __int64 v44; // [rsp+80h] [rbp-E0h]
  int v45; // [rsp+88h] [rbp-D8h]
  __m256i v46; // [rsp+90h] [rbp-D0h] BYREF
  __int64 v47; // [rsp+B0h] [rbp-B0h]
  __int64 v48; // [rsp+C0h] [rbp-A0h]
  _DWORD v49[12]; // [rsp+D0h] [rbp-90h] BYREF
  char v50[40]; // [rsp+100h] [rbp-60h] BYREF
  unsigned __int64 v51; // [rsp+128h] [rbp-38h]

  v51 = __readfsqword(0x28u);
  if ( a3 )
    *a3 = 0;
  if ( a4 )
    *(_WORD *)a4 = 0;
  if ( a6 )
    *a6 = 0;
  if ( a7 )
    *a7 = 0;
  if ( a8 )
    *a8 = 0;
  if ( a9 )
    *a9 = 0;
  if ( a10 )
    *a10 = 0;
  if ( a11 )
    *a11 = 0;
  if ( a12 )
    *(_DWORD *)a12 = 0;
  if ( a13 )
    *(_QWORD *)a13 = 0;
  if ( a14 )
    *(_DWORD *)a14 = 0;
  v16 = HIBYTE(a2);
  if ( (HIBYTE(a2) & 0xFFFFFFFD) != 4 )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  v17 = *(_QWORD *)(a1 + 8);
  result = 1;
  if ( *(_BYTE *)(v17 + 40LL * (int)v16 + 72) )
  {
    if ( (unsigned __int8)sub_23850(v17, v17 + 40LL * v16 + 72, (a2 & 0xFFFFFF) - 1, (__int64)v49) )
    {
      v20 = (__int8 *)&unk_2F1A0;
      if ( v16 != 4 )
        v20 = (__int8 *)&unk_2F19C;
      v38 = v20;
      if ( a3 )
      {
        v21 = *(_QWORD *)(a1 + 8);
        v43.m128i_i32[2] = 2;
        v46.m256i_i32[7] = HIBYTE(a2);
        v22 = *v38;
        v43.m128i_i64[0] = v21;
        v46.m256i_i64[0] = v21;
        LODWORD(v21) = *(_DWORD *)(v21 + 156);
        v46.m256i_i8[20] = v22;
        v46.m256i_i64[1] = (__int64)&v43;
        v46.m256i_i32[4] = 1;
        v46.m256i_i32[6] = a2 & 0xFFFFFF;
        v47 = (unsigned int)v21;
        if ( !(unsigned __int8)sub_25E00((__int64)&v46, &v42, (__int64)v50, (__int64)&v43, a2 & 0xFFFFFF, v19) || !v42 )
          sub_DB80((__int64)"Couldn't find typedef for member token 0x%x.", a2, v23, v24, v25, v26, v37);
        *a3 = v42;
      }
      memset(&v46, 0, 24);
      v27 = v49[(unsigned __int8)v38[1]];
      v28 = qvector_reserve();
      v29 = *(_QWORD *)(a1 + 8);
      v46.m256i_i64[0] = v28;
      sub_24180(v29, v27, v46.m256i_i64);
      v30 = (char *)s1;
      if ( v46.m256i_i64[1] )
        v30 = (char *)v46.m256i_i64[0];
      sub_264E0(a4, a5, a6, v30);
      if ( v46.m256i_i64[0] )
      {
        v46.m256i_i64[1] = 0;
        qfree();
      }
      if ( a7 )
        *a7 = v49[(unsigned __int8)v38[2]];
      v31 = *(_QWORD *)(a1 + 8);
      v43.m128i_i32[0] = 0;
      v32 = sub_24290(v31, v49[(unsigned __int8)v38[3]], v43.m128i_i32, 3u);
      v46.m256i_i32[0] = 0;
      v33 = sub_240C0(v31, 3u, v32, &v46);
      if ( v33 )
      {
        v34 = v43.m128i_u32[0];
        if ( v46.m256i_i32[0] < (unsigned __int32)v43.m128i_i32[0] )
          return 2147500037LL;
        v35 = v43.m128i_i32[0] != 0;
      }
      else
      {
        v35 = 0;
        v34 = 0;
      }
      if ( a8 )
        *a8 = v33;
      if ( a9 )
        *a9 = v34;
      if ( a10 )
        *a10 = v49[0];
      if ( a11 )
        *a11 = v49[1];
      if ( v35 && a12 | a13 | a14 )
      {
        v36 = _mm_loadl_epi64((const __m128i *)(a1 + 8));
        v44 = v34 + v33;
        v45 = 0;
        v43 = _mm_unpacklo_epi64(v36, (__m128i)(unsigned __int64)v33);
        v46.m256i_i8[0] = 0;
        *(__int64 *)((char *)v46.m256i_i64 + 4) = 0;
        v47 = 0;
        v48 = 0;
        *(_OWORD *)&v46.m256i_u64[2] = 0;
        if ( (unsigned __int8)sub_28400(&v43, (__int64)&v46) )
          sub_280E0(a1, (__int64)&v46, a2, 0x4000000u, a12, a13, a14);
        sub_22A90((__int64)&v46);
        return 0;
      }
      else
      {
        return 0;
      }
    }
    else
    {
      return 2147942413LL;
    }
  }
  return result;
}

