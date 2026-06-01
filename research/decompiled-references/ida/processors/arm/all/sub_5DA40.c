__int64 __fastcall sub_5DA40(__int64 a1, __int64 a2, unsigned __int8 a3, double a4, double a5, __m128 a6)
{
  __m128i v6; // xmm0
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rbx
  const __m128i *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // ebx
  _QWORD v22[2]; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v23; // [rsp+10h] [rbp-E8h]
  __int128 v24; // [rsp+18h] [rbp-E0h]
  int v25; // [rsp+28h] [rbp-D0h]
  __int64 v26; // [rsp+30h] [rbp-C8h]
  __int64 v27; // [rsp+38h] [rbp-C0h]
  __int128 v28; // [rsp+40h] [rbp-B8h]
  __int64 v29; // [rsp+50h] [rbp-A8h]
  int v30; // [rsp+58h] [rbp-A0h]
  __int128 v31; // [rsp+60h] [rbp-98h]
  __int128 v32; // [rsp+70h] [rbp-88h]
  const __m128i *v33; // [rsp+80h] [rbp-78h] BYREF
  __int128 v34; // [rsp+88h] [rbp-70h]
  __int64 v35; // [rsp+98h] [rbp-60h]
  char v36; // [rsp+A0h] [rbp-58h]
  __int64 v37; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v38; // [rsp+B0h] [rbp-48h]
  __int64 v39; // [rsp+B8h] [rbp-40h]
  __int64 v40; // [rsp+C0h] [rbp-38h]
  __int64 v41; // [rsp+C8h] [rbp-30h]
  unsigned __int64 v42; // [rsp+D8h] [rbp-20h]

  v6.m128i_i64[0] = 0;
  v42 = __readfsqword(0x28u);
  v22[0] = a1;
  v22[1] = a2;
  v23 = 0;
  v25 = 8;
  v26 = 0;
  v27 = 0;
  v29 = 0;
  v30 = 112;
  v33 = 0;
  v35 = 0;
  v36 = 0;
  v37 = -1;
  v38 = 0x8000000000000000LL;
  v24 = 0;
  v28 = 0;
  v31 = 0;
  v32 = 0;
  v34 = 0;
  v8 = qvector_reserve((__int64)&v33, 0, 1, 16);
  v9 = *((_QWORD *)&v34 + 1);
  v10 = v8;
  *((_QWORD *)&v34 + 1) = 0;
  v11 = v33;
  v12 = v34 - 1;
  if ( (__int64)v34 - 1 >= 0 )
  {
    v13 = v8;
    do
    {
      v6 = _mm_loadu_si128(v11);
      v13 += 16;
      ++v11;
      *(__m128i *)(v13 - 16) = v6;
    }
    while ( v12-- != 0 );
    v11 = v33;
  }
  qfree((__int64)v11);
  v33 = (const __m128i *)v10;
  *((_QWORD *)&v34 + 1) = v9;
  v15 = (_QWORD *)(16 * v34 + v10);
  v15[1] = 0;
  *v15 = 0xD0000000DLL;
  *(_QWORD *)&v34 = v34 + 1;
  v39 = 0;
  v40 = -1;
  v41 = 0xFFFFFFFFLL;
  v20 = sub_5D380((__int64)v22, a3, *(double *)v6.m128i_i64, a5, a6, v16, v17, v18, v19);
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    qfree((__int64)v33);
  }
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    qfree(v27);
  }
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v23);
  }
  return v20;
}
