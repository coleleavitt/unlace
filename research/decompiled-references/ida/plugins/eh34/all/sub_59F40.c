__int64 __fastcall sub_59F40(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 *a5)
{
  __int64 v5; // rax
  __int64 v8; // r13
  unsigned int v9; // r14d
  unsigned __int8 (__fastcall *hexdsp)(__int64, __int64, const char *); // rax
  int v13; // r9d
  __int64 *v14; // r8
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // r15
  unsigned __int64 v18; // rsi
  __int64 v19; // r12
  void (__fastcall *v20)(__int64, __int64); // rax
  __int64 (__fastcall *v21)(__int64, __int64); // rax
  int v22; // eax
  __int64 v23; // rcx
  int v24; // r9d
  unsigned int v25; // r8d
  const char *v26; // rdx
  __m128i v27; // xmm0
  __m128i v28; // xmm0
  __int64 v29; // r12
  __int64 (__fastcall *v30)(__int64, __int64); // rax
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rbp
  char **v34; // rdi
  char **v35; // rbp
  void (__fastcall *v36)(__int64, char **, _QWORD); // rax
  __int64 v37; // rax
  int v38; // eax
  unsigned __int64 v40; // [rsp+18h] [rbp-60h] BYREF
  __int64 v41; // [rsp+20h] [rbp-58h] BYREF
  __m128i v42; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v43; // [rsp+38h] [rbp-40h]

  v5 = *(_QWORD *)(a4 + 56);
  v43 = __readfsqword(0x28u);
  if ( !v5 )
    goto LABEL_3;
  if ( *(_DWORD *)v5 != 55 )
    goto LABEL_3;
  v8 = *(_QWORD *)(v5 + 16);
  if ( !v8 )
    goto LABEL_3;
  v9 = *(_DWORD *)(a4 + 72);
  hexdsp = (unsigned __int8 (__fastcall *)(__int64, __int64, const char *))get_hexdsp(a1, a2);
  if ( !hexdsp(347, v8, "__eh34_try_continuation") )
    goto LABEL_3;
  v14 = a5;
  if ( *(_BYTE *)(v8 + 64) != 8 )
  {
    sub_64B50((unsigned int)&v41, *a2, (unsigned int)"%a[%d]: unfinalized call", *(_QWORD *)(a4 + 32), v9, v13);
LABEL_14:
    *(_QWORD *)a1 = v41;
    v28 = _mm_loadu_si128(&v42);
    *(_BYTE *)(a1 + 24) = 1;
    *(__m128i *)(a1 + 8) = v28;
    return a1;
  }
  v15 = *(_QWORD *)(v8 + 72);
  v16 = *(_QWORD *)(v15 + 32);
  if ( !v16 )
  {
    v29 = *a2;
    v30 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(347, v8);
    v31 = v30(338, v8);
    sub_64B50((unsigned int)&v41, v29, (unsigned int)"%a[%d]: call %s has no args", *(_QWORD *)(a4 + 32), v9, v31);
    goto LABEL_14;
  }
  v17 = *(_QWORD *)(v15 + 24);
  v18 = *(_QWORD *)v17 & 0xFFFFFFFF000000FFLL;
  if ( v18 != 0x400000002LL || *(_BYTE *)(v17 + 24) != 20 )
  {
    v19 = *a2;
    v20 = (void (__fastcall *)(__int64, __int64))get_hexdsp(347, v18);
    v20(310, v17);
    v21 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(310, v17);
    v22 = v21(338, v8);
    v23 = *(_QWORD *)(a4 + 32);
    v24 = v22;
    v25 = v9;
    v26 = "%a[%d]: call %s arg %d[%s] not 32-bit int numeric";
LABEL_12:
    sub_64B50((unsigned int)&v41, v19, (_DWORD)v26, v23, v25, v24);
    *(_QWORD *)a1 = v41;
    v27 = _mm_loadu_si128(&v42);
    *(_BYTE *)(a1 + 24) = 1;
    *(__m128i *)(a1 + 8) = v27;
    return a1;
  }
  v40 = -1;
  v32 = *(_QWORD *)(*(_QWORD *)(v17 + 8) + 16LL);
  if ( v16 > 2 )
  {
    if ( (*(_QWORD *)(v17 + 80) & 0xFFFFFFFF000000FFLL) != 0x80000000ALL
      || (v37 = *(_QWORD *)(v17 + 88), *(_BYTE *)v37 != 6) )
    {
      v19 = *a2;
      sub_57680(v17 + 80, 0x400000002LL);
      v38 = sub_576A0(v8, 0x400000002LL);
      v23 = *(_QWORD *)(a4 + 32);
      v25 = v9;
      v24 = v38;
      v26 = "%a[%d]: call %s arg %d[%s] not RTTI ea";
      goto LABEL_12;
    }
    v40 = *(_QWORD *)(v37 + 8);
  }
  v33 = (int)v32;
  if ( (int)v32 >= (unsigned __int64)a5[1] )
  {
    sub_59650(a5, (int)v32 + 1);
    v14 = a5;
  }
  v34 = (char **)(*v14 + (v33 << 7) + 72);
  v35 = sub_58750(v34, &v40);
  v36 = (void (__fastcall *)(__int64, char **, _QWORD))get_hexdsp(v34, &v40);
  v36(205, v35 + 1, v9);
LABEL_3:
  *(_BYTE *)(a1 + 24) = 0;
  return a1;
}

