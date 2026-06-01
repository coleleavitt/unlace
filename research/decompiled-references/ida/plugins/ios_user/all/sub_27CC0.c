__int64 __fastcall sub_27CC0(__int64 a1, __int64 *a2)
{
  __int64 *v2; // r12
  __int64 v3; // r13
  __int64 v5; // r11
  __m128i v6; // xmm0
  __int64 v7; // rax
  __int64 v8; // r10
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r15
  __int64 v12; // r14
  __int64 v13; // rsi
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 *v16; // r12
  unsigned __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // r13
  __int64 v20; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __m128i v24; // [rsp+0h] [rbp-78h] BYREF
  __int64 v25; // [rsp+10h] [rbp-68h]
  __int64 v26; // [rsp+18h] [rbp-60h]
  __int64 v27; // [rsp+20h] [rbp-58h]
  __int64 v28; // [rsp+28h] [rbp-50h]
  int v29; // [rsp+34h] [rbp-44h]
  unsigned __int64 v30; // [rsp+38h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 48) )
  {
    sub_130A0((__int64)"Found a 32-bit segment in 64-bit program, ignoring it");
  }
  else
  {
    v2 = *(__int64 **)(a1 + 24);
    v3 = *((unsigned int *)a2 + 6);
    v5 = *a2;
    v6 = _mm_loadu_si128((const __m128i *)(a2 + 1));
    v7 = v2[1];
    v8 = *((unsigned int *)a2 + 7);
    v9 = *((unsigned int *)a2 + 8);
    v10 = *((unsigned int *)a2 + 9);
    v11 = a2[5];
    v12 = a2[6];
    v13 = *v2;
    v14 = *(_QWORD *)(a1 + 40) + v3;
    if ( v2[2] < (unsigned __int64)(v7 + 1) )
    {
      v28 = v5;
      v27 = v10;
      v26 = v9;
      v25 = v8;
      v24 = v6;
      v23 = qvector_reserve();
      v5 = v28;
      v10 = v27;
      *v2 = v23;
      v13 = v23;
      v9 = v26;
      v7 = v2[1];
      v8 = v25;
      v6 = _mm_load_si128(&v24);
    }
    v15 = v13 + 72 * v7;
    *(_QWORD *)(v15 + 24) = v14;
    *(__m128i *)(v15 + 8) = v6;
    *(_QWORD *)v15 = v5;
    *(_QWORD *)(v15 + 32) = v8;
    *(_QWORD *)(v15 + 40) = v9;
    *(_QWORD *)(v15 + 48) = v10;
    *(_QWORD *)(v15 + 56) = v11;
    *(_QWORD *)(v15 + 64) = v12;
    ++v2[1];
    v16 = *(__int64 **)(a1 + 32);
    v17 = v16[2];
    v18 = *v16;
    v19 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL);
    v20 = v16[1];
    v29 = v19;
    if ( v17 < v20 + 1 )
    {
      v22 = qvector_reserve();
      *v16 = v22;
      v18 = v22;
      v20 = v16[1];
    }
    *(_DWORD *)(v18 + 4 * v20) = v19;
    ++v16[1];
    *(_DWORD *)(a1 + 52) = *((_DWORD *)a2 + 12);
  }
  return 0;
}

