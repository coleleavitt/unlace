__int64 __fastcall sub_155AA0(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4, double a5)
{
  _BYTE *v6; // r12
  __int64 v8; // rsi
  unsigned int v9; // r15d
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rsi
  unsigned __int8 *v14; // rbp
  double v15; // xmm0_8
  _QWORD *v16; // rax
  unsigned int v18; // [rsp+Ch] [rbp-4Ch]
  char *v19; // [rsp+10h] [rbp-48h]

  v6 = a2;
  if ( *(_BYTE *)a3 == 4
    && (unsigned __int8)sub_1205A0(*(_BYTE **)(a3 + 8), *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), 0)
    && !sub_121930(a2, a3) )
  {
    return 0;
  }
  v8 = *(int *)(a3 + 4);
  v9 = *(_DWORD *)(a3 + 4);
  v18 = sub_138140(*(_QWORD **)(a1 + 64), v8, 1, a5);
  if ( v18 == -1 )
    return 0;
  v12 = (_QWORD *)j__qalloc_or_throw(80, v8, v10, v11);
  v13 = *((_QWORD *)v6 + 3);
  v14 = (unsigned __int8 *)v12;
  v19 = (char *)(v12 + 4);
  v12[4] = 0xFFFFFFFF00000000LL;
  v12[5] = 0;
  v12[6] = 0xFFFFFFFF00000000LL;
  v12[7] = 0;
  v12[8] = 0xFFFFFFFF00000000LL;
  v12[9] = 0;
  sub_330970((__int64)v12, v13);
  *(_DWORD *)v14 = 4;
  sub_11CA10((char *)a3, v19);
  *(_BYTE *)a3 = 1;
  *(_QWORD *)&v15 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v9), _mm_cvtsi32_si128(v18)).m128i_u64[0];
  *(double *)(a3 + 4) = v15;
  sub_125180(v14 + 64, (unsigned __int8 *)a3);
  if ( sub_11E8C0((unsigned int *)v6) && (_BYTE *)a3 == v6 + 64 )
    sub_11CA10(v19, (char *)v14 + 64);
  else
    v6 = *((_BYTE **)v6 + 2);
  v16 = sub_A3160(a1, v14, (__int64)v6, v15);
  if ( a4 )
  {
    *(_DWORD *)a4 = 2;
    *(_QWORD *)(a4 + 24) = v16;
    *(_QWORD *)(a4 + 8) = a3;
    *(_QWORD *)(a4 + 16) = a1;
  }
  return 1;
}

