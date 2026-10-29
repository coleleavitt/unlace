__int64 __fastcall sub_1A3E00(__int64 a1, __int64 a2, int *a3, double a4)
{
  int v5; // eax
  __int64 result; // rax
  __int64 v8; // r13
  __int64 v9; // rdi
  int v10; // edi
  unsigned __int64 v11; // rax
  int v12; // r13d
  int v13; // r14d
  int v14; // edx
  void *v15; // r12
  __int64 v16; // rcx
  __int64 v17; // rdx
  __m128i v18; // xmm0
  __int64 v19; // rdi
  size_t v20; // rbx
  __m128i v21; // [rsp+0h] [rbp-48h] BYREF
  __int64 v22[7]; // [rsp+10h] [rbp-38h] BYREF

  v5 = *a3;
  v22[1] = __readfsqword(0x28u);
  if ( v5 != 12 )
    goto LABEL_2;
  if ( !sub_125B60((unsigned __int8 *)a3 + 32, *(_QWORD *)(a1 + 16), 0, a4)
    || !sub_125B60((unsigned __int8 *)a3 + 64, *(_QWORD *)(a1 + 16), 0, a4) )
  {
    v5 = *a3;
LABEL_2:
    if ( v5 != 20 )
      return 0;
    v8 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 64LL) + 1504LL) + 80LL);
    if ( !(unsigned __int8)sub_11FD80((char *)a3 + 48, v22, 1) )
      return 0;
    if ( v22[0] + v8 )
      return 0;
    if ( *((_BYTE *)a3 + 32) != 4 )
      return 0;
    v9 = *((_QWORD *)a3 + 5);
    if ( *(_DWORD *)v9 != 12 )
      return 0;
    if ( !sub_125B60((unsigned __int8 *)(v9 + 32), *(_QWORD *)(a1 + 16), 0, a4) )
      return 0;
    if ( !(unsigned __int8)sub_11FD80((char *)(*((_QWORD *)a3 + 5) + 48LL), v22, 1) )
      return 0;
    if ( !sub_125B60((unsigned __int8 *)a3 + 64, *(_QWORD *)(a1 + 16), 0, a4) )
      return 0;
    v10 = v22[0];
    if ( v22[0] < 0 )
      return 0;
    v11 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 64LL) + 1504LL) + 80LL);
    v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 64LL) + 1504LL) + 80LL);
    if ( v11 < v22[0] )
    {
      v10 = LODWORD(v22[0]) - v11;
      v22[0] -= v11;
    }
    v13 = v10 + v11 - 1;
    v14 = round_up_power2();
    if ( v14 > (v13 & -v12) )
      v14 = v13 & -v12;
    *(_DWORD *)(a1 + 240) = v14;
    goto LABEL_24;
  }
  if ( *(_BYTE *)(a1 + 244) )
  {
    result = 0xFFFFFFFFLL;
    if ( *(_QWORD *)(a1 + 56) )
      return result;
  }
  if ( !(unsigned __int8)sub_1A3D40((_DWORD *)a1, (char *)a3 + 48) )
    return (unsigned int)-*(unsigned __int8 *)(a1 + 244);
LABEL_24:
  *(_QWORD *)(a1 + 48) = a2;
  v15 = nullptr;
  *(_QWORD *)(a1 + 56) = a3;
  sub_648D0((__int64 *)(a1 + 160), (const void **)(a1 + 200), a4);
  v17 = *(_QWORD *)(a1 + 224);
  v18 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v17, (__m128i)(unsigned __int64)v17);
  if ( v17 )
  {
    v21 = v18;
    v20 = 16 * v17;
    v15 = (void *)qalloc_or_throw(16 * v17, a1 + 200, v17, v16);
    memcpy(v15, *(const void **)(a1 + 216), v20);
    v18 = _mm_load_si128(&v21);
  }
  v19 = *(_QWORD *)(a1 + 176);
  if ( v19 )
  {
    *(_QWORD *)(a1 + 184) = 0;
    v21 = v18;
    qfree(v19);
    v18 = _mm_load_si128(&v21);
  }
  *(_QWORD *)(a1 + 176) = v15;
  *(__m128i *)(a1 + 184) = v18;
  return 1;
}

