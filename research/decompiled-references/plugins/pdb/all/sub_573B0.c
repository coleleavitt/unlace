__int64 __fastcall sub_573B0(__int64 a1, __m128i *a2)
{
  unsigned int v2; // ebp
  unsigned int v3; // r14d
  void *v4; // rdi
  void (*v5)(void); // rax
  void (*v6)(void); // rax
  __int64 *v8; // rbx
  __int64 v9; // rsi
  __m128i si128; // xmm0
  __int64 v11; // rax
  void *v12; // [rsp+0h] [rbp-A8h] BYREF
  void *v13; // [rsp+8h] [rbp-A0h] BYREF
  unsigned int v14; // [rsp+10h] [rbp-98h] BYREF
  unsigned int v15; // [rsp+14h] [rbp-94h]
  unsigned int v16; // [rsp+18h] [rbp-90h]
  __m128i v17; // [rsp+1Ch] [rbp-8Ch] BYREF
  _BYTE v18[8]; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v19; // [rsp+38h] [rbp-70h]
  unsigned __int64 v20; // [rsp+78h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  (*(void (__fastcall **)(void **, _QWORD, __int64))(**(_QWORD **)(a1 + 608) + 24LL))(&v12, *(_QWORD *)(a1 + 608), 1);
  if ( !v12 || (unsigned __int64)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v12 + 24LL))(v12) <= 0x1B )
  {
    v8 = *(__int64 **)(a1 + 600);
    v9 = *v8;
    if ( (unsigned __int64)v8[2] <= 0x17 )
    {
      v11 = qvector_reserve(v8, v9, 24, 1);
      *v8 = v11;
      v9 = v11;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_94100);
    v8[1] = 24;
    *(__m128i *)v9 = si128;
    *(_QWORD *)(v9 + 15) = 0x657A6973206D6165LL;
    *(_BYTE *)(*v8 + 23) = 0;
    goto LABEL_15;
  }
  v2 = (*(__int64 (__fastcall **)(void *, unsigned int *, __int64))(*(_QWORD *)v12 + 48LL))(v12, &v14, 28);
  if ( !(_BYTE)v2 || v14 <= 0x131084C )
  {
    sub_37FD0(*(__int64 **)(a1 + 600), (__int64)"Unsupported PDB stream version %d", v14);
LABEL_15:
    v2 = 0;
    goto LABEL_16;
  }
  v3 = v16;
  (*(void (__fastcall **)(void **, _QWORD, __int64))(**(_QWORD **)(a1 + 608) + 24LL))(&v13, *(_QWORD *)(a1 + 608), 3);
  if ( v13 )
  {
    if ( (unsigned __int64)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v13 + 24LL))(v13) > 0x3F
      && (*(unsigned __int8 (__fastcall **)(void *, _BYTE *, __int64))(*(_QWORD *)v13 + 48LL))(v13, v18, 64) )
    {
      v3 = v19;
    }
    v4 = v13;
    if ( a2 )
    {
      *a2 = _mm_loadu_si128(&v17);
      a2[1].m128i_i64[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v15), _mm_cvtsi32_si128(v3)).m128i_u64[0];
    }
    if ( v4 )
    {
      v5 = *(void (**)(void))(*(_QWORD *)v4 + 8LL);
      if ( (char *)v5 == (char *)sub_54910 )
        operator delete(v4, 0x40u);
      else
        v5();
    }
  }
  else if ( a2 )
  {
    *a2 = _mm_loadu_si128(&v17);
    a2[1].m128i_i64[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v15), _mm_cvtsi32_si128(v3)).m128i_u64[0];
  }
LABEL_16:
  if ( v12 )
  {
    v6 = *(void (**)(void))(*(_QWORD *)v12 + 8LL);
    if ( (char *)v6 == (char *)sub_54910 )
      operator delete(v12, 0x40u);
    else
      v6();
  }
  return v2;
}
