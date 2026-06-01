unsigned __int64 __fastcall sub_3E7D60(
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
        __int64 a13,
        __int64 a14)
{
  __int64 v14; // rbp
  __int64 v15; // r14
  __int64 v16; // rbp
  _DWORD *v19; // rdi
  __int64 (__fastcall *v20)(_DWORD *, unsigned int); // rax
  int v21; // ebx
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rsi
  int v25; // edx
  __int64 v26; // rax
  int v27; // edx
  unsigned int v28; // edx
  __int64 v29; // rax
  __m128 v31; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v32; // [rsp+28h] [rbp-40h]

  v14 = *(_QWORD *)(a1 + 72);
  v32 = __readfsqword(0x28u);
  v15 = *(_QWORD *)(a1 + 64);
  v16 = v15 + 32 * v14;
  while ( v16 != v15 )
  {
    if ( *(_QWORD *)(v15 + 16) != 4 )
      sub_32B650(a2, *(_QWORD *)v15, 0x32u, a12, a13, a14, a3, a4, a5, a6, a7, a8, a9, a10);
    v24 = *(unsigned int *)(v15 + 24);
    if ( (_DWORD)v24 == 31 || (_DWORD)v24 == 48 )
    {
      v25 = *(_DWORD *)(a1 + 112);
      v26 = *(_QWORD *)(v15 + 8) + a2[17] - a2[22];
      if ( (_DWORD)v24 == 31 )
      {
        *(_QWORD *)(a1 + 96) = v26;
        v27 = v25 | 1;
      }
      else
      {
        *(_QWORD *)(a1 + 104) = v26;
        v27 = v25 | 4;
      }
      *(_DWORD *)(a1 + 112) = v27;
      a3 = _mm_loadh_ps((const double *)(v15 + 16));
      v31 = a3;
      sub_F2F00(a2, &v31);
      v19 = *(_DWORD **)(a1 + 56);
      v28 = *(_DWORD *)(v15 + 24);
      v24 = v28;
      v20 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v19 + 168LL);
      if ( v20 != sub_3E40F0 )
      {
LABEL_23:
        v21 = v20(v19, v24);
LABEL_7:
        if ( v21 != -1 )
        {
          v22 = *(_QWORD *)(a1 + 16);
          v23 = *(_QWORD *)(a1 + 8);
          if ( *(_QWORD *)(a1 + 24) < (unsigned __int64)(v22 + 1) )
          {
            v29 = qvector_reserve();
            *(_QWORD *)(a1 + 8) = v29;
            v23 = v29;
            v22 = *(_QWORD *)(a1 + 16);
          }
          *(_DWORD *)(v23 + 4 * v22) = v21;
          ++*(_QWORD *)(a1 + 16);
        }
        goto LABEL_11;
      }
      if ( v28 <= 0x1F )
        goto LABEL_22;
      if ( v28 == 48 )
      {
        v21 = v19[120];
        goto LABEL_7;
      }
    }
    else
    {
      v19 = *(_DWORD **)(a1 + 56);
      v20 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v19 + 168LL);
      if ( v20 != sub_3E40F0 )
        goto LABEL_23;
      if ( (unsigned int)v24 <= 0x1F )
      {
LABEL_22:
        v21 = v19[20] * v24 + v19[88];
        goto LABEL_7;
      }
    }
    if ( (_DWORD)v24 == 49 )
    {
      v21 = v19[121];
      goto LABEL_7;
    }
LABEL_11:
    v15 += 32;
  }
  return v32 - __readfsqword(0x28u);
}

