__int64 __fastcall sub_3B5A60(__int64 a1, __int64 a2, __m128 a3, double a4, double a5, double a6)
{
  __int64 v8; // rdi
  __int64 v10; // rax
  __int64 v11; // rsi
  __m128i v12; // xmm1
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  const char *v17; // rdx
  unsigned int v18; // r13d
  __int64 *v19; // rbx
  __int64 v21; // rdx
  __int64 v22; // r14
  __int64 i; // rbp
  __int64 *v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // r14
  __int64 j; // rbp
  __int64 *v30; // rax
  __int64 v31; // rdi
  __m128i v33; // [rsp+0h] [rbp-C8h] BYREF
  unsigned __int64 *v34[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v35; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v36; // [rsp+28h] [rbp-A0h]
  __int64 v37; // [rsp+38h] [rbp-90h]
  __int64 (__fastcall **v38)(); // [rsp+40h] [rbp-88h] BYREF
  int v39; // [rsp+48h] [rbp-80h]
  __int64 v40; // [rsp+50h] [rbp-78h]
  __int128 v41; // [rsp+58h] [rbp-70h]
  __int64 v42; // [rsp+68h] [rbp-60h]
  __int128 v43; // [rsp+70h] [rbp-58h]
  __m128i v44; // [rsp+80h] [rbp-48h]
  int v45; // [rsp+90h] [rbp-38h]
  unsigned __int64 v46; // [rsp+98h] [rbp-30h]

  v8 = *(_QWORD *)(a1 + 32);
  v46 = __readfsqword(0x28u);
  v34[0] = nullptr;
  v34[1] = nullptr;
  v33 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v34, (__m128i)(unsigned __int64)&v35);
  sub_38B9C0(v8, v34, a1, a3);
  v10 = *(_QWORD *)(a1 + 24);
  v11 = *(_QWORD *)(a1 + 32);
  v12 = _mm_load_si128(&v33);
  v36 = 0;
  v13 = a2 - *(_QWORD *)(v10 + 432);
  v37 = v11;
  v35 = 0;
  if ( v11 )
  {
    ++*(_DWORD *)(v11 + 104);
    v11 = *(_QWORD *)(a1 + 32);
  }
  v39 = 2;
  v40 = 0;
  v42 = 0;
  v38 = (__int64 (__fastcall **)())&off_4E71E8;
  v45 = -991146299 * (v13 >> 3);
  v41 = 0;
  v43 = 0;
  v44 = v12;
  sub_255A80((__int64 *)&v38, v11 + 16, 0, 0.0);
  v17 = s1;
  if ( *(_QWORD *)(a2 + 40) )
    v17 = *(const char **)(a2 + 32);
  v18 = sub_3B56D0(
          a1,
          (__int64)&v35,
          (__int64)v17,
          v14,
          v15,
          v16,
          0.0,
          *(double *)v12.m128i_i64,
          (__m128i)(unsigned __int64)&v35,
          a6);
  v38 = off_4DBCF8;
  if ( v42 )
  {
    *(_QWORD *)&v43 = 0;
    qfree(v42);
  }
  if ( v40 )
  {
    *(_QWORD *)&v41 = 0;
    qfree(v40);
  }
  v19 = (__int64 *)v37;
  if ( v37 )
  {
    if ( (*(_DWORD *)(v37 + 104))-- == 1 )
    {
      sub_258970(v19);
      v21 = v19[23];
      if ( v21 )
      {
        v22 = v19[24];
        if ( v22 )
        {
          for ( i = 0; i != v22; ++i )
          {
            v24 = (__int64 *)(v21 + 24 * i);
            v25 = *v24;
            if ( *v24 )
            {
              v24[1] = 0;
              qfree(v25);
              v21 = v19[23];
            }
          }
        }
        v19[24] = 0;
        qfree(v21);
      }
      v26 = v19[20];
      if ( v26 )
      {
        v19[21] = 0;
        qfree(v26);
      }
      v27 = v19[16];
      if ( v27 )
      {
        v28 = v19[17];
        if ( v28 )
        {
          for ( j = 0; j != v28; ++j )
          {
            v30 = (__int64 *)(v27 + 32 * j);
            v31 = *v30;
            if ( *v30 )
            {
              v30[1] = 0;
              qfree(v31);
              v27 = v19[16];
            }
          }
        }
        v19[17] = 0;
        qfree(v27);
      }
      sub_255050((__int64)(v19 + 2), 0.0);
      j__qfree((__int64)v19);
    }
  }
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v35);
  }
  sub_391150((__int64 *)v34);
  return v18;
}

