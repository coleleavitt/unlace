unsigned __int64 __fastcall sub_31170(__int64 a1, const __m128i *a2, __int64 *a3)
{
  char v5; // dl
  __int64 v6; // rax
  __m128i v7; // xmm1
  __int64 v8; // rax
  __m128 v9; // xmm0
  const char *v10; // rdx
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // rdi
  unsigned int i; // r12d
  bool v20; // zf
  const char *v21; // rsi
  const char *v22; // rsi
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  int v26; // r9d
  const char *v27; // rsi
  const char *v28; // rsi
  __int64 name_ea; // rax
  __int64 v30; // r12
  const char *v31; // rsi
  const char *v32; // rsi
  _BYTE v33[8]; // [rsp+0h] [rbp-80h] BYREF
  __int64 v34; // [rsp+8h] [rbp-78h] BYREF
  __m128i v35; // [rsp+10h] [rbp-70h] BYREF
  const char *v36; // [rsp+28h] [rbp-58h] BYREF
  __int128 v37; // [rsp+30h] [rbp-50h]
  unsigned __int64 v38; // [rsp+40h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  v35 = 0;
  v34 = 0;
  v5 = sub_97CA0(&v34, *a3, &a2->m128i_u64[1]);
  v6 = a3[1];
  if ( v5 )
  {
    v7 = _mm_loadu_si128(&v35);
    v8 = v34;
    v9 = _mm_loadh_ps((const double *)a3 + 2);
    v34 = *a3;
    *a3 = v8;
    v6 = v35.m128i_i64[0];
    *(__m128i *)(a3 + 1) = v7;
    v35 = (__m128i)v9;
  }
  v10 = src;
  if ( v6 )
    v10 = (const char *)*a3;
  if ( (unsigned int)get_name_value(v33, -1, v10) == 1 )
  {
    if ( (debug & 0x400000) != 0 )
    {
      v32 = src;
      if ( a3[1] )
        v32 = (const char *)*a3;
      sub_88B80((unsigned int)"Found conflicting byte with name \"%s\".. ", (_DWORD)v32, v11, v12, v13, v14);
    }
    for ( i = 0; ; ++i )
    {
      v20 = a3[1] == 0;
      v21 = src;
      v36 = nullptr;
      v37 = 0;
      if ( !v20 )
        v21 = (const char *)*a3;
      sub_9EF10(&v36, v21, i);
      v22 = src;
      if ( (_QWORD)v37 )
        v22 = v36;
      if ( get_name_ea(-1, v22) == -1 )
        break;
      if ( v36 )
      {
        *(_QWORD *)&v37 = 0;
        qfree(v36);
      }
    }
    if ( (debug & 0x400000) != 0 )
    {
      v27 = src;
      if ( (_QWORD)v37 )
        LODWORD(v27) = (_DWORD)v36;
      sub_88B80((unsigned int)"Renaming to \"%s\"\n", (_DWORD)v27, v23, v24, v25, v26);
    }
    v28 = src;
    if ( a3[1] )
      v28 = (const char *)*a3;
    name_ea = get_name_ea(-1, v28);
    v30 = name_ea;
    v31 = src;
    if ( (_QWORD)v37 )
      v31 = v36;
    set_name(name_ea, v31, 0);
    sub_1B9A0(*(_QWORD *)(*(_QWORD *)(a2->m128i_i64[1] + 16) + 128LL), v30);
    if ( v36 )
    {
      *(_QWORD *)&v37 = 0;
      qfree(v36);
    }
  }
  v15 = a2[19].m128i_i64[1];
  v16 = _mm_loadu_si128(a2 + 20);
  v17 = v34;
  a2[19].m128i_i64[1] = *a3;
  a2[20].m128i_i64[0] = a3[1];
  a2[20].m128i_i64[1] = a3[2];
  *a3 = v15;
  *(__m128i *)(a3 + 1) = v16;
  if ( v17 )
  {
    v35.m128i_i64[0] = 0;
    qfree(v17);
  }
  return v38 - __readfsqword(0x28u);
}
