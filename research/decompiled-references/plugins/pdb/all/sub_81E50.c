__int64 __fastcall sub_81E50(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 (__fastcall *v3)(__int64, __int64, __int64, __int64); // rax
  size_t v4; // rbx
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rsi
  __int64 v10; // rbx
  size_t v11; // rax
  size_t v12; // rbx
  _BYTE *v13; // rax
  __int64 v14; // rdi
  size_t v15; // rax
  __int64 v16; // rdx
  __int64 (__fastcall *v17)(__int64, __int64, __int64, __int64); // rax
  size_t v18; // rbp
  __int64 v19; // r14
  size_t v20; // r15
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rax
  __m128i v24; // xmm0
  __int64 v25; // rdx
  __int64 v27; // [rsp+10h] [rbp-468h] BYREF
  __m128i v28; // [rsp+18h] [rbp-460h] BYREF
  _BYTE src[1032]; // [rsp+30h] [rbp-448h] BYREF
  unsigned __int64 v30; // [rsp+438h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 40);
  v30 = __readfsqword(0x28u);
  v3 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 40LL);
  if ( v3 == sub_81000 )
  {
    if ( !*(_BYTE *)(a1 + 56) )
    {
LABEL_3:
      LODWORD(v4) = 0;
      return (unsigned int)v4;
    }
    if ( v2 != qlseek(*(_QWORD *)(a1 + 24), v2, 0, sub_81000) )
    {
      sub_37FD0(*(__int64 **)(a1 + 8), (__int64)"COFF failed to seek at 0x%llX", v2);
      goto LABEL_3;
    }
  }
  else if ( !((unsigned __int8 (__fastcall *)(__int64, __int64))v3)(a1, v2) )
  {
    goto LABEL_3;
  }
  v6 = 0;
  v27 = 0;
  v28 = 0;
  while ( 1 )
  {
    v11 = qlread(*(_QWORD *)(a1 + 24), src, 1024);
    v12 = v11;
    if ( v11 == -1 )
    {
LABEL_15:
      v14 = v27;
      LODWORD(v4) = 0;
      goto LABEL_16;
    }
    v13 = memchr(src, 0, v11);
    if ( v13 )
      break;
    if ( v12 != 1024 )
      goto LABEL_15;
    v10 = v28.m128i_i64[0];
    v6 += 1024;
    if ( v28.m128i_i64[0] )
    {
      v7 = v28.m128i_i64[0] + 1023;
      v8 = v28.m128i_i64[0] + 1024;
      v9 = v27;
      v10 = v28.m128i_i64[0] - 1;
      if ( v28.m128i_i64[1] >= (unsigned __int64)(v28.m128i_i64[0] + 1024) )
        goto LABEL_8;
    }
    else
    {
      v9 = v27;
      v8 = 1025;
      v7 = 1024;
      if ( v28.m128i_i64[1] >= 0x401uLL )
        goto LABEL_8;
    }
    v27 = qvector_reserve(&v27, v9, v8, 1);
    v9 = v27;
LABEL_8:
    v28.m128i_i64[0] = v8;
    *(_BYTE *)(v9 + v7) = 0;
    memmove((void *)(v10 + v27), src, 0x400u);
  }
  v15 = v13 - src;
  v4 = v15;
  if ( v15 )
  {
    v19 = v28.m128i_i64[0];
    v20 = v15;
    if ( v28.m128i_i64[0] )
    {
      v19 = v28.m128i_i64[0] - 1;
      v20 = v15 + v28.m128i_i64[0] - 1;
    }
    v21 = v27;
    v22 = v20 + 1;
    if ( v28.m128i_i64[1] < v20 + 1 )
    {
      v27 = qvector_reserve(&v27, v27, v22, 1);
      v22 = v20 + 1;
      v21 = v27;
    }
    v28.m128i_i64[0] = v22;
    *(_BYTE *)(v21 + v20) = 0;
    memmove((void *)(v19 + v27), src, v4);
  }
  v16 = *(_QWORD *)(a1 + 40);
  v17 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 40LL);
  v18 = v4 + v6 + v16 + 1;
  if ( v17 != sub_81000 )
  {
    LODWORD(v4) = ((__int64 (__fastcall *)(__int64, size_t))v17)(a1, v4 + v6 + v16 + 1);
    goto LABEL_33;
  }
  LODWORD(v4) = *(unsigned __int8 *)(a1 + 56);
  if ( (_BYTE)v4 )
  {
    *(_QWORD *)(a1 + 40) = v18;
    v4 = qlseek(*(_QWORD *)(a1 + 24), v18, 0, sub_81000);
    if ( v18 == v4 )
    {
      v23 = v27;
      goto LABEL_34;
    }
    sub_37FD0(*(__int64 **)(a1 + 8), (__int64)"COFF failed to seek at 0x%llX", v18);
    LOBYTE(v4) = v18 == v4;
LABEL_33:
    v23 = v27;
    v14 = v27;
    if ( !(_BYTE)v4 )
      goto LABEL_16;
LABEL_34:
    v24 = _mm_loadu_si128(&v28);
    LODWORD(v4) = 1;
    v14 = *(_QWORD *)a2;
    v25 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)a2 = v23;
    *(__m128i *)(a2 + 8) = v24;
    v27 = v14;
    v28.m128i_i64[1] = v25;
    goto LABEL_16;
  }
  v14 = v27;
LABEL_16:
  if ( v14 )
  {
    v28.m128i_i64[0] = 0;
    qfree(v14);
  }
  return (unsigned int)v4;
}
