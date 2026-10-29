__int64 __fastcall sub_36040(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // rbp
  __int64 v5; // r15
  const __m128i *v6; // r13
  __m128i v7; // xmm0
  char v8; // r14
  char v9; // al
  int v10; // esi
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 *v13; // rax
  const char *v14; // rbp
  __int64 *v15; // rax
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  const char *v19; // rsi
  __int64 *v20; // rax
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  int v24; // r9d
  const char *v25; // rsi
  const char *v26; // rbp
  __int64 *v27; // rax
  __int64 *v28; // rax
  int v29; // ecx
  int v30; // r8d
  int v31; // r9d
  const char *v32; // rsi
  _QWORD *v33; // [rsp+8h] [rbp-70h]
  unsigned __int8 v34; // [rsp+8h] [rbp-70h]
  int v35; // [rsp+14h] [rbp-64h] BYREF
  __int64 v36; // [rsp+18h] [rbp-60h] BYREF
  _QWORD v37[11]; // [rsp+20h] [rbp-58h] BYREF

  v37[3] = __readfsqword(0x28u);
  result = *(unsigned __int8 *)(a1 + 142);
  if ( (unsigned __int8)result > 2u )
    return result;
  v3 = *(_QWORD *)(a1 + 88);
  result = *(unsigned __int8 *)(v3 + 142);
  if ( !(_BYTE)result )
    return result;
  if ( (_BYTE)result == 5 )
  {
    if ( (debug & 0x400000) != 0 )
    {
      v13 = sub_34340(v3);
      v14 = src;
      if ( v13[1] )
        v14 = (const char *)*v13;
      v15 = sub_34340(a1);
      v19 = src;
      if ( v15[1] )
        v19 = (const char *)*v15;
      sub_88B80(
        (unsigned int)"Error array DIE %s dependency DIE %s processing error\n",
        (_DWORD)v19,
        (_DWORD)v14,
        v16,
        v17,
        v18);
    }
    return 5;
  }
  v33 = (_QWORD *)(a1 + 8);
  if ( !(unsigned __int8)sub_350A0(v3, a1 + 8) )
  {
    if ( (debug & 0x400000) != 0 )
    {
      v26 = src;
      v27 = sub_34340(*(_QWORD *)(a1 + 88));
      if ( v27[1] )
        v26 = (const char *)*v27;
      v28 = sub_34340(a1);
      v32 = src;
      if ( v28[1] )
        v32 = (const char *)*v28;
      sub_88B80(
        (unsigned int)"Error array DIE %s propagating type information from DIE %s\n",
        (_DWORD)v32,
        (_DWORD)v26,
        v29,
        v30,
        v31);
    }
    return 5;
  }
  v36 = 0;
  v4 = *(_QWORD *)(a1 + 152);
  if ( v4 )
  {
    v5 = 1;
    do
    {
      --v4;
      v6 = (const __m128i *)(*(_QWORD *)(a1 + 144) + 8 * v4);
      v7 = _mm_loadl_epi64(v6);
      v37[0] = 0;
      v37[1] = _mm_shuffle_epi32(v7, 225).m128i_u64[0];
      copy_tinfo_t(v37, v33);
      v8 = create_tinfo(&v36, 11, 11, v37);
      clear_tinfo_t(v37);
      if ( !v8 )
      {
        if ( (debug & 0x400000) != 0 )
        {
          v20 = sub_34340(a1);
          v25 = src;
          if ( v20[1] )
            v25 = (const char *)*v20;
          sub_88B80((unsigned int)"Error array DIE %s creating array type\n", (_DWORD)v25, v21, v22, v23, v24);
        }
        goto LABEL_10;
      }
      copy_tinfo_t(v33, &v36);
      v5 *= v6->m128i_u32[0];
    }
    while ( v4 );
    v10 = v5 * *(_DWORD *)(*(_QWORD *)(a1 + 88) + 136LL);
    if ( (v5 * (unsigned __int64)*(unsigned int *)(*(_QWORD *)(a1 + 88) + 136LL)) >> 32 )
      goto LABEL_10;
  }
  else
  {
    v10 = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 136LL);
  }
  sub_345A0(a1, v10);
  v11 = *(_QWORD *)(a1 + 80);
  v12 = *(_QWORD *)(a1 + 104);
  v35 = 0;
  if ( (*(unsigned int (__fastcall **)(__int64, __int64, int *, _QWORD *))(*(_QWORD *)(*(_QWORD *)(v11 + 144) + 88LL)
                                                                         + 112LL))(
         v12,
         8455,
         &v35,
         v37)
    || !v35
    || (unsigned __int8)sub_33970(v33) )
  {
    v9 = *(_BYTE *)(*(_QWORD *)(a1 + 88) + 142LL);
    if ( v9 == 4 )
      v9 = 3;
  }
  else
  {
LABEL_10:
    v9 = 5;
  }
  v34 = v9;
  clear_tinfo_t(&v36);
  return v34;
}
