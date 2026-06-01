__int64 __fastcall sub_2E450(__int64 a1, unsigned __int8 a2, _QWORD *a3, char a4)
{
  __int64 v7; // rax
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rbx
  unsigned __int8 v13; // al
  void (*v14)(); // rax
  __int64 v16; // rdi
  __int64 v17; // r15
  __m128i v18; // xmm1
  __m128i v19; // xmm1
  __int64 v20; // rdi
  void (*v21)(__int64, ...); // rdx
  const char *v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __m128i v25; // [rsp+0h] [rbp-68h] BYREF
  __int64 v26; // [rsp+10h] [rbp-58h] BYREF
  __m128i v27; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v28; // [rsp+28h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  while ( 1 )
  {
    if ( a3[1] )
    {
      if ( (unsigned int)sub_30B00(a1, a3) )
        break;
      if ( (a4 & 1) != 0 )
        goto LABEL_12;
      if ( *(_BYTE *)(*a3 + 4LL) == 52 )
      {
        qexit();
        return sub_2E680(1, a3, v23, v24);
      }
    }
    v7 = sub_318E0(a1, a2);
    v12 = v7;
    if ( !v7 )
      break;
    v13 = *(_BYTE *)(v7 + 4);
    if ( v13 == 2 )
    {
      sub_28F80(a1, (__int64)"rpc: no remote memory");
      goto LABEL_11;
    }
    if ( v13 <= 2u )
    {
      if ( !v13 )
        goto LABEL_13;
      sub_28F80(a1, (__int64)"rpc: remote did not understand our request");
      goto LABEL_11;
    }
    if ( v13 == 6 )
    {
      sub_CAF0((__int64)"rpc: user cancelled the operation\n");
LABEL_11:
      qfree();
LABEL_12:
      v12 = 0;
      goto LABEL_13;
    }
    if ( !*(_BYTE *)(a1 + 69) )
    {
      sub_34240((unsigned int)"Exploit packet has been detected and ignored\n", a2, v8, v9, v10, v11, v25.m128i_i8[0]);
      goto LABEL_11;
    }
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(*(_QWORD *)a1 + 56LL))(&v26, a1, v12);
    v16 = *a3;
    v17 = v26;
    v26 = 0;
    v18 = _mm_loadu_si128(&v27);
    v27 = 0;
    if ( v16 )
    {
      a3[1] = 0;
      v25 = v18;
      qfree();
      v19 = _mm_load_si128(&v25);
      v20 = v26;
      *a3 = v17;
      *(__m128i *)(a3 + 1) = v19;
      if ( v20 )
      {
        v27.m128i_i64[0] = 0;
        qfree();
      }
    }
    else
    {
      *a3 = v17;
      *(__m128i *)(a3 + 1) = v18;
    }
    qfree();
  }
  v21 = (void (*)(__int64, ...))sub_CAF0;
  if ( !*(_BYTE *)(a1 + 68) )
    v21 = (void (*)(__int64, ...))sub_34240;
  v22 = s;
  if ( *(_QWORD *)(a1 + 24) )
    v22 = *(const char **)(a1 + 16);
  v12 = 0;
  v21((__int64)"%s\n", v22);
LABEL_13:
  v14 = *(void (**)())(*(_QWORD *)a1 + 64LL);
  if ( v14 != nullsub_4 )
    ((void (__fastcall *)(__int64, __int64))v14)(a1, v12);
  return v12;
}

