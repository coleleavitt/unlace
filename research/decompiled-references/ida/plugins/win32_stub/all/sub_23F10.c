__int64 __fastcall sub_23F10(_BYTE *a1, unsigned __int8 a2, _QWORD *a3, char a4)
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
  __int64 (*v21)(); // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __m128i v24; // [rsp+0h] [rbp-68h] BYREF
  __int64 v25; // [rsp+10h] [rbp-58h] BYREF
  __m128i v26; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  while ( 1 )
  {
    if ( a3[1] )
    {
      if ( (unsigned int)sub_265C0(a1, a3) )
        break;
      if ( (a4 & 1) != 0 )
        goto LABEL_12;
      if ( *(_BYTE *)(*a3 + 4LL) == 52 )
      {
        qexit();
        return sub_24140(1, a3, v22, v23);
      }
    }
    v7 = sub_273A0(a1, a2);
    v12 = v7;
    if ( !v7 )
      break;
    v13 = *(_BYTE *)(v7 + 4);
    if ( v13 == 2 )
    {
      sub_1EA40((__int64)a1, (__int64)"rpc: no remote memory");
      goto LABEL_11;
    }
    if ( v13 <= 2u )
    {
      if ( !v13 )
        goto LABEL_13;
      sub_1EA40((__int64)a1, (__int64)"rpc: remote did not understand our request");
      goto LABEL_11;
    }
    if ( v13 == 6 )
    {
      sub_B690();
LABEL_11:
      qfree();
LABEL_12:
      v12 = 0;
      goto LABEL_13;
    }
    if ( !a1[69] )
    {
      sub_29D00((unsigned int)"Exploit packet has been detected and ignored\n", a2, v8, v9, v10, v11, v24.m128i_i8[0]);
      goto LABEL_11;
    }
    (*(void (__fastcall **)(__int64 *, _BYTE *, __int64))(*(_QWORD *)a1 + 56LL))(&v25, a1, v12);
    v16 = *a3;
    v17 = v25;
    v25 = 0;
    v18 = _mm_loadu_si128(&v26);
    v26 = 0;
    if ( v16 )
    {
      a3[1] = 0;
      v24 = v18;
      qfree();
      v19 = _mm_load_si128(&v24);
      v20 = v25;
      *a3 = v17;
      *(__m128i *)(a3 + 1) = v19;
      if ( v20 )
      {
        v26.m128i_i64[0] = 0;
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
  v21 = sub_B690;
  if ( !a1[68] )
    v21 = (__int64 (*)())sub_29D00;
  v12 = 0;
  v21();
LABEL_13:
  v14 = *(void (**)())(*(_QWORD *)a1 + 64LL);
  if ( v14 != nullsub_4 )
    ((void (__fastcall *)(_BYTE *, __int64))v14)(a1, v12);
  return v12;
}

