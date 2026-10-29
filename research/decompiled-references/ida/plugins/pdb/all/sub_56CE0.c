__int64 __fastcall sub_56CE0(__int64 a1, __int64 *a2, __int64 **a3)
{
  int v5; // r12d
  unsigned __int64 v6; // r12
  int v7; // r12d
  unsigned int v8; // r13d
  __int64 v9; // rsi
  int v10; // r8d
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 *v14; // rbx
  __int64 v15; // rsi
  __m128i v16; // xmm0
  __int64 v17; // rax
  __int64 *v18; // rbx
  __int64 v19; // rax
  __int64 *v20; // rdi
  __int64 (__fastcall *v21)(__int64 *, __int64); // rbp
  __int64 v22; // rax
  __int64 *v23; // rbx
  __m128i *v24; // rsi
  __m128i si128; // xmm0
  __int64 v26; // rax
  int v27; // [rsp+Ch] [rbp-6Ch]
  int v28; // [rsp+18h] [rbp-60h] BYREF
  int v29; // [rsp+20h] [rbp-58h] BYREF
  int v30; // [rsp+24h] [rbp-54h]
  unsigned int v31; // [rsp+28h] [rbp-50h]
  unsigned int v32; // [rsp+2Ch] [rbp-4Ch]
  unsigned __int64 v33; // [rsp+38h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  if ( !*a3 )
  {
    v23 = *(__int64 **)(a1 + 600);
    v24 = (__m128i *)*v23;
    if ( (unsigned __int64)v23[2] <= 0x12 )
    {
      v26 = qvector_reserve(*(_QWORD *)(a1 + 600), v24, 19, 1);
      *v23 = v26;
      v24 = (__m128i *)v26;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_94090);
    v23[1] = 19;
    v24[1].m128i_i16[0] = 28001;
    *v24 = si128;
    *(_BYTE *)(*v23 + 18) = 0;
    return 0;
  }
  v5 = (*(__int64 (__fastcall **)(__int64 *))(**a3 + 24))(*a3);
  v6 = v5 - (*(unsigned int (__fastcall **)(__int64 *))(**a3 + 32))(*a3);
  if ( (unsigned int)v6 <= 0xF )
    goto LABEL_16;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, int *, __int64))(**a3 + 48))(*a3, &v29, 16) )
    return 0;
  if ( v29 != -1 || v30 != -248575718 )
  {
    sub_37FD0(*(__int64 **)(a1 + 600), (__int64)"Unsupported version %X:%X of GSIHash stream", v29, v30);
    return 0;
  }
  if ( v6 < v32 + (unsigned __int64)v31 + 16 || (v31 & 7) != 0 )
  {
LABEL_16:
    v14 = *(__int64 **)(a1 + 600);
    v15 = *v14;
    if ( (unsigned __int64)v14[2] <= 0x1E )
    {
      v17 = qvector_reserve(*(_QWORD *)(a1 + 600), v15, 31, 1);
      *v14 = v17;
      v15 = v17;
    }
    v16 = _mm_load_si128((const __m128i *)&xmmword_940A0);
    v14[1] = 31;
    *(__m128i *)v15 = v16;
    *(__m128i *)(v15 + 14) = _mm_load_si128((const __m128i *)&xmmword_940B0);
    *(_BYTE *)(*v14 + 30) = 0;
    return 0;
  }
  v7 = 0;
  v8 = v31 >> 3;
  if ( v31 >> 3 )
  {
    do
    {
      if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, int *, __int64))(**a3 + 48))(*a3, &v28, 8) )
        break;
      v9 = *a2;
      v10 = v28 - 1;
      v11 = a2[1];
      if ( a2[2] < (unsigned __int64)(v11 + 1) )
      {
        v27 = v28 - 1;
        v12 = qvector_reserve(a2, v9, v11 + 1, 4);
        v10 = v27;
        *a2 = v12;
        v9 = v12;
        v11 = a2[1];
      }
      ++v7;
      *(_DWORD *)(v9 + 4 * v11) = v10;
      ++a2[1];
    }
    while ( v7 != v8 );
  }
  v18 = *a3;
  v19 = **a3;
  v20 = *a3;
  v21 = *(__int64 (__fastcall **)(__int64 *, __int64))(v19 + 40);
  v22 = (*(__int64 (__fastcall **)(__int64 *))(v19 + 32))(v20);
  return v21(v18, v22 + v32);
}

