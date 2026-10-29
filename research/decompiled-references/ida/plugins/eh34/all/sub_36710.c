__int64 __fastcall sub_36710(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // r15
  __int64 v5; // r14
  __int64 (__fastcall *hexdsp)(__int64, __int64, _QWORD); // rax
  __int64 v8; // rsi
  __int64 *v9; // rbp
  __int64 v10; // rsi
  __int64 v11; // rdi
  unsigned int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rcx
  __int64 (__fastcall *v15)(__int64, int); // rax
  __int64 v16; // rbx
  __int64 *v17; // rax
  __int64 v18; // r15
  __int64 *v19; // r13
  __int64 v20; // rcx
  __int64 (__fastcall *v21)(__int64, int, int); // rax
  unsigned int v22; // r14d
  unsigned int v23; // eax
  __int64 v24; // r15
  int v25; // r13d
  int v26; // r8d
  int v27; // r9d
  const char *v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rbx
  __m128i v31; // xmm0
  void (__fastcall *v33)(__int64, __int64, _QWORD); // rax
  __int64 (__fastcall *v34)(__int64, __int64, _QWORD); // rax
  __int64 (__fastcall *v35)(__int64, __int64, _QWORD); // rax
  int i; // ebx
  __int64 v37; // r13
  __int64 v38; // rdi
  __int64 (__fastcall *v39)(__int64, __int64, _QWORD); // rax
  void (__fastcall *v40)(__int64, __int64, _QWORD); // rax
  int v41; // r8d
  int v42; // r9d
  const char *v43; // rcx
  __m128i v44; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v45; // [rsp+10h] [rbp-98h]
  unsigned int v46; // [rsp+18h] [rbp-90h]
  unsigned int v47; // [rsp+1Ch] [rbp-8Ch]
  __int64 v48; // [rsp+20h] [rbp-88h]
  __int64 v49; // [rsp+28h] [rbp-80h]
  __int64 v50; // [rsp+30h] [rbp-78h] BYREF
  __int64 v51; // [rsp+38h] [rbp-70h]
  __int64 v52; // [rsp+50h] [rbp-58h] BYREF
  __m128i v53; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int64 v54; // [rsp+68h] [rbp-40h]

  v4 = a2;
  v5 = a1;
  v49 = a3;
  v48 = a4;
  v54 = __readfsqword(0x28u);
  hexdsp = (__int64 (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(a1, a2);
  v8 = a3;
  v46 = hexdsp(227, a3, 0);
  if ( *(_DWORD *)(a3 + 8) == v46 )
    goto LABEL_29;
  v45 = a1;
  v9 = v4 + 70;
  do
  {
    v10 = v46;
    v11 = (__int64)v9;
    v12 = sub_32240(v9, v46);
    v13 = v12;
    if ( v12 == -1 )
    {
      v5 = v45;
      sub_28EA0((__int64)&v50, (__int64)v4, v46);
      v43 = s1;
      if ( v51 )
        LODWORD(v43) = v50;
      sub_64B50((unsigned int)&v52, v4[22], (unsigned int)"Cannot find range for %s", (_DWORD)v43, v41, v42);
      v29 = v50;
      v30 = v52;
      v31 = _mm_loadu_si128(&v53);
      if ( !v50 )
        goto LABEL_22;
      goto LABEL_21;
    }
    v14 = v4[70] + ((__int64)(int)v12 << 6);
    if ( (*(_BYTE *)(v14 + 16) & 1) == 0 && *(_BYTE *)(v14 + 12) )
    {
      v40 = (void (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(v9, v46);
      v10 = v48;
      v11 = 205;
      v40(205, v48, v13);
    }
    v15 = *(__int64 (__fastcall **)(__int64, int))(*v4 + 104);
    if ( v15 == sub_BA60 )
    {
      if ( !v4[10] )
        goto LABEL_27;
      v16 = *(int *)(v4[9] + 24LL * (int)v46 + 8);
    }
    else
    {
      v10 = v46;
      v11 = (__int64)v4;
      v16 = (int)v15((__int64)v4, v46);
    }
    if ( (int)v16 > 0 )
    {
      v44.m128i_i64[0] = 24LL * (int)v46;
      v17 = v4;
      v18 = 0;
      v19 = v17;
      while ( 1 )
      {
        v21 = *(__int64 (__fastcall **)(__int64, int, int))(*v19 + 120);
        v22 = v21 == sub_BAA0
            ? *(_DWORD *)(*(_QWORD *)(v19[9] + v44.m128i_i64[0]) + 4 * v18)
            : v21((__int64)v19, v46, v18);
        v10 = v22;
        v11 = (__int64)v9;
        v23 = sub_32240(v9, v22);
        if ( v23 == -1 )
          break;
        v20 = v19[70] + ((__int64)(int)v23 << 6);
        if ( (*(_BYTE *)(v20 + 16) & 1) == 0 && *(_BYTE *)(v20 + 12) )
        {
          v47 = v23;
          ++v18;
          v33 = (void (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(v9, v22);
          v10 = v48;
          v11 = 205;
          v33(205, v48, v47);
          if ( v18 == v16 )
          {
LABEL_26:
            v4 = v19;
            goto LABEL_27;
          }
        }
        else if ( ++v18 == v16 )
        {
          goto LABEL_26;
        }
      }
      v24 = (__int64)v19;
      v25 = v22;
      v5 = v45;
      sub_28EA0((__int64)&v50, v24, v25);
      v28 = s1;
      if ( v51 )
        LODWORD(v28) = v50;
      sub_64B50(
        (unsigned int)&v52,
        *(_QWORD *)(v24 + 176),
        (unsigned int)"Cannot find range for %s",
        (_DWORD)v28,
        v26,
        v27);
      v29 = v50;
      v30 = v52;
      v31 = _mm_loadu_si128(&v53);
      if ( !v50 )
        goto LABEL_22;
LABEL_21:
      v44 = v31;
      v51 = 0;
      qfree(v29);
      v31 = _mm_load_si128(&v44);
LABEL_22:
      *(_QWORD *)v5 = v30;
      *(_BYTE *)(v5 + 24) = 1;
      *(__m128i *)(v5 + 8) = v31;
      return v5;
    }
LABEL_27:
    v34 = (__int64 (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(v11, v10);
    v8 = v49;
    v46 = v34(227, v49, v46 + 1);
  }
  while ( *(_DWORD *)(v49 + 8) != v46 );
  v5 = v45;
LABEL_29:
  v35 = (__int64 (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(227, v8);
  for ( i = v35(227, v48, 0); *(_DWORD *)(v48 + 8) != i; i = v39(227, v48, (unsigned int)(i + 1)) )
  {
    v37 = v4[70] + ((__int64)i << 6);
    *(_QWORD *)(v37 + 48) = 0;
    sub_34140((__int64)v4, i, 1);
    sub_28EA0((__int64)&v50, (__int64)v4, *(_DWORD *)v37);
    sub_28EA0((__int64)&v52, (__int64)v4, *(_DWORD *)(v37 + 4));
    if ( v52 )
    {
      v53.m128i_i64[0] = 0;
      qfree(v52);
    }
    v38 = v50;
    if ( v50 )
    {
      v51 = 0;
      qfree(v50);
    }
    v39 = (__int64 (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(v38, v4);
  }
  *(_BYTE *)(v5 + 24) = 0;
  return v5;
}

