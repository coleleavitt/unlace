__int64 __fastcall sub_7DF0(__int64 a1, __int64 *a2)
{
  __int64 *v2; // r12
  __int64 v3; // r13
  __int64 v6; // r11
  __m128i v7; // xmm0
  __int64 v8; // rax
  __int64 v9; // r10
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r15
  __int64 v13; // r14
  __int64 v14; // rsi
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 *v17; // r12
  unsigned __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // r13
  __int64 v21; // rax
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rax
  __m128i v26; // [rsp+0h] [rbp-78h] BYREF
  __int64 v27; // [rsp+10h] [rbp-68h]
  __int64 v28; // [rsp+18h] [rbp-60h]
  __int64 v29; // [rsp+20h] [rbp-58h]
  __int64 v30; // [rsp+28h] [rbp-50h]
  int v31; // [rsp+34h] [rbp-44h]
  unsigned __int64 v32; // [rsp+38h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 48) )
  {
    sub_78B0((__int64)"Found a 32-bit segment in 64-bit program, ignoring it");
  }
  else
  {
    v2 = *(__int64 **)(a1 + 24);
    v3 = *((unsigned int *)a2 + 6);
    v6 = *a2;
    v7 = _mm_loadu_si128((const __m128i *)(a2 + 1));
    v8 = v2[1];
    v9 = *((unsigned int *)a2 + 7);
    v10 = *((unsigned int *)a2 + 8);
    v11 = *((unsigned int *)a2 + 9);
    v12 = a2[5];
    v13 = a2[6];
    v14 = *v2;
    v15 = *(_QWORD *)(a1 + 40) + v3;
    if ( v2[2] < (unsigned __int64)(v8 + 1) )
    {
      v24 = *(_QWORD *)(a1 + 24);
      v30 = v6;
      v29 = v11;
      v28 = v10;
      v27 = v9;
      v26 = v7;
      v25 = qvector_reserve(v24, v14, v8 + 1, 72, v11, v10);
      v6 = v30;
      v11 = v29;
      *v2 = v25;
      v14 = v25;
      v10 = v28;
      v8 = v2[1];
      v9 = v27;
      v7 = _mm_load_si128(&v26);
    }
    v16 = v14 + 72 * v8;
    *(_QWORD *)(v16 + 24) = v15;
    *(__m128i *)(v16 + 8) = v7;
    *(_QWORD *)v16 = v6;
    *(_QWORD *)(v16 + 32) = v9;
    *(_QWORD *)(v16 + 40) = v10;
    *(_QWORD *)(v16 + 48) = v11;
    *(_QWORD *)(v16 + 56) = v12;
    *(_QWORD *)(v16 + 64) = v13;
    ++v2[1];
    v17 = *(__int64 **)(a1 + 32);
    v18 = v17[2];
    v19 = *v17;
    v20 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL);
    v21 = v17[1];
    v31 = v20;
    if ( v18 < v21 + 1 )
    {
      v23 = qvector_reserve(v17, v19, v21 + 1, 4, v11, v10);
      *v17 = v23;
      v19 = v23;
      v21 = v17[1];
    }
    *(_DWORD *)(v19 + 4 * v21) = v20;
    ++v17[1];
    *(_DWORD *)(a1 + 52) = *((_DWORD *)a2 + 12);
  }
  return 0;
}

