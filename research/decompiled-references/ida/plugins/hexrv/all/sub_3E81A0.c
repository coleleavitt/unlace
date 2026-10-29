unsigned __int64 __fastcall sub_3E81A0(
        __int64 a1,
        _QWORD *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12,
        _DWORD *a13,
        __int64 a14)
{
  __int64 v14; // r13
  __int64 v15; // rbx
  __int64 v16; // r13
  __int64 (__fastcall *v18)(_DWORD *, unsigned int); // rcx
  int v19; // edx
  int v20; // r15d
  __int64 v21; // rax
  __int64 v22; // rsi
  unsigned int v23; // r15d
  _DWORD *v24; // rdx
  __int64 v25; // rcx
  unsigned int v26; // eax
  __int64 v27; // rax
  unsigned __int64 v28; // r15
  __int64 v29; // rsi
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __m128 v34; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v35; // [rsp+18h] [rbp-40h]

  v14 = *(_QWORD *)(a1 + 72);
  v35 = __readfsqword(0x28u);
  v15 = *(_QWORD *)(a1 + 64);
  v16 = v15 + 32 * v14;
  if ( v15 != v16 )
  {
    while ( 1 )
    {
      v23 = *(_DWORD *)(v15 + 24);
      v24 = *(_DWORD **)(a1 + 56);
      v25 = *(_QWORD *)(v15 + 16);
      v26 = v23 - 32;
      if ( v23 - 32 <= 0x1F )
        break;
      if ( v24[20] != v25 )
        goto LABEL_14;
LABEL_15:
      if ( v23 == 1 )
      {
        v31 = *(_QWORD *)(v15 + 8) + a2[17] - a2[22];
        *(_DWORD *)(a1 + 128) |= 1u;
        *(_QWORD *)(a1 + 120) = v31;
        a3 = _mm_loadh_ps((const double *)(v15 + 16));
        v34 = a3;
        sub_F3600(a2, &v34);
        v23 = *(_DWORD *)(v15 + 24);
      }
      if ( v23 - 10 <= 7 )
      {
        v27 = *(_QWORD *)(a1 + 104);
        v28 = *(_QWORD *)v15;
        v29 = *(_QWORD *)(a1 + 96);
        if ( *(_QWORD *)(a1 + 112) < (unsigned __int64)(v27 + 1) )
        {
          v32 = qvector_reserve();
          *(_QWORD *)(a1 + 96) = v32;
          v29 = v32;
          v27 = *(_QWORD *)(a1 + 104);
        }
        v15 += 32;
        *(_QWORD *)(v29 + 8 * v27) = v28;
        ++*(_QWORD *)(a1 + 104);
        if ( v16 == v15 )
          return v35 - __readfsqword(0x28u);
      }
      else
      {
        a13 = *(_DWORD **)(a1 + 56);
        v18 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)a13 + 168LL);
        if ( v18 != sub_3E48E0 )
        {
LABEL_25:
          v20 = v18(a13, v23);
LABEL_7:
          if ( v20 != -1 )
          {
            v21 = *(_QWORD *)(a1 + 16);
            v22 = *(_QWORD *)(a1 + 8);
            if ( *(_QWORD *)(a1 + 24) < (unsigned __int64)(v21 + 1) )
            {
              v33 = qvector_reserve();
              *(_QWORD *)(a1 + 8) = v33;
              v22 = v33;
              v21 = *(_QWORD *)(a1 + 16);
            }
            *(_DWORD *)(v22 + 4 * v21) = v20;
            ++*(_QWORD *)(a1 + 16);
          }
          goto LABEL_11;
        }
        if ( v23 <= 0x1F )
        {
          v20 = a13[88] + a13[20] * v23;
          goto LABEL_7;
        }
        v19 = a13[173];
        if ( v19 )
        {
          v26 = v23 - 32;
          if ( v23 - 32 <= 0x1F )
            goto LABEL_6;
        }
LABEL_11:
        v15 += 32;
        if ( v16 == v15 )
          return v35 - __readfsqword(0x28u);
      }
    }
    if ( v24[174] == v25 )
    {
      a13 = *(_DWORD **)(a1 + 56);
      v18 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v24 + 168LL);
      if ( v18 != sub_3E48E0 )
        goto LABEL_25;
      v19 = v24[173];
      if ( v19 )
      {
LABEL_6:
        v20 = a13[120] + v19 * v26;
        goto LABEL_7;
      }
      goto LABEL_11;
    }
LABEL_14:
    sub_32BE10(a2, *(_QWORD *)v15, 0x32u, v25, (__int64)a13, a14, a3, a4, a5, a6, a7, a8, a9, a10);
    v23 = *(_DWORD *)(v15 + 24);
    goto LABEL_15;
  }
  return v35 - __readfsqword(0x28u);
}

