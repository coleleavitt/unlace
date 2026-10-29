__int64 __fastcall sub_34F70(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4)
{
  __int64 v4; // r15
  unsigned int v5; // r12d
  void (__fastcall *hexdsp)(__int64, __int64, _QWORD); // rax
  __int64 (__fastcall *v7)(__int64, int); // rax
  int v8; // r9d
  __int64 v9; // r13
  __int64 i; // r14
  int v11; // edx
  void (__fastcall *v12)(__int64, __int64, _QWORD); // rax
  __int64 (__fastcall *v13)(__int64, int, int); // rax
  __int64 (__fastcall *v14)(__int64, __int64, _QWORD); // rax
  int j; // ebx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 (__fastcall *v18)(__int64, __int64, _QWORD); // rax
  unsigned __int64 *v19; // rbp
  __m128i v21; // xmm0
  unsigned int v22; // [rsp+4h] [rbp-94h]
  __int64 v25; // [rsp+18h] [rbp-80h]
  __int64 v26; // [rsp+30h] [rbp-68h] BYREF
  __m128i v27; // [rsp+38h] [rbp-60h] BYREF
  char v28; // [rsp+48h] [rbp-50h]
  unsigned __int64 v29; // [rsp+58h] [rbp-40h]

  v4 = a2;
  v25 = a1;
  v29 = __readfsqword(0x28u);
  v5 = *a3;
  if ( (int)*a3 <= (int)a3[1] )
  {
    while ( 1 )
    {
      hexdsp = (void (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(a1, a2);
      a2 = a4;
      a1 = 205;
      hexdsp(205, a4, v5);
      v7 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v4 + 96LL);
      if ( v7 != sub_BA40 )
        break;
      if ( *(_QWORD *)(v4 + 56) )
      {
        v8 = *(_DWORD *)(*(_QWORD *)(v4 + 48) + 24LL * (int)v5 + 8);
        goto LABEL_5;
      }
LABEL_14:
      if ( (int)a3[1] < (int)++v5 )
        goto LABEL_15;
    }
    a2 = v5;
    a1 = v4;
    v8 = v7(v4, v5);
LABEL_5:
    if ( v8 > 0 )
    {
      v9 = v8;
      for ( i = 0; i != v9; ++i )
      {
        v13 = *(__int64 (__fastcall **)(__int64, int, int))(*(_QWORD *)v4 + 112LL);
        if ( v13 == sub_BA80 )
        {
          v11 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 48) + 24LL * (int)v5) + 4 * i);
        }
        else
        {
          a2 = v5;
          a1 = v4;
          v11 = v13(v4, v5, i);
        }
        if ( v11 > 0 )
        {
          v22 = v11;
          if ( *(_DWORD *)(v4 + 204) >= v11 )
          {
            v12 = (void (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(a1, a2);
            a2 = a4;
            a1 = 205;
            v12(205, a4, v22);
          }
        }
      }
    }
    goto LABEL_14;
  }
LABEL_15:
  v14 = (__int64 (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(a1, a2);
  for ( j = v14(227, a4, 0); *(_DWORD *)(a4 + 8) != j; j = v18(227, a4, (unsigned int)(j + 1)) )
  {
    v19 = (unsigned __int64 *)(*(_QWORD *)(v4 + 584) + 32LL * j);
    v19[1] = 0;
    if ( *(_BYTE *)(v4 + 672) && *(_DWORD *)(v4 + 652) <= j && *(_DWORD *)(v4 + 656) >= j
      || (v16 = v4 + 560,
          v17 = (unsigned int)j,
          (unsigned __int8)((unsigned __int64)sub_322C0((__int64 *)(v4 + 560), j) >> 32)) )
    {
      sub_33800((__int64)&v26, v4, j, v19);
      if ( v28 )
      {
        v21 = _mm_loadu_si128(&v27);
        *(_QWORD *)v25 = v26;
        *(_BYTE *)(v25 + 24) = 1;
        *(__m128i *)(v25 + 8) = v21;
        return v25;
      }
      v16 = v4;
      v17 = a3[2];
      *(_DWORD *)(*(_QWORD *)(v4 + 608) + 4LL * j) = sub_33BB0(v4, v17, v19);
    }
    v18 = (__int64 (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(v16, v17);
  }
  *(_BYTE *)(v25 + 24) = 0;
  return v25;
}

