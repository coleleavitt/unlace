unsigned __int64 __fastcall sub_3EE680(_QWORD *a1, int a2, int a3, int a4, int a5)
{
  __int64 v6; // rax
  int v7; // edx
  __int64 v8; // rdi
  int *v9; // rax
  int v10; // ebp
  unsigned __int8 *v11; // rax
  unsigned int *v12; // rbx
  __int64 v13; // rcx
  unsigned int *v14; // rdx
  unsigned int v15; // eax
  __m128i v17; // xmm1
  _QWORD *v18; // rcx
  __m128i v19; // xmm0
  int v20; // r9d
  __m128i v21; // xmm1
  _QWORD *v22; // rdi
  __m128i v23; // xmm0
  __int64 v24; // rcx
  unsigned int dtype_size; // eax
  int v26; // [rsp+8h] [rbp-B0h]
  int v27; // [rsp+Ch] [rbp-ACh]
  unsigned int *v28; // [rsp+10h] [rbp-A8h]
  int v29; // [rsp+18h] [rbp-A0h]
  _DWORD v30[3]; // [rsp+28h] [rbp-90h]
  _DWORD v31[3]; // [rsp+34h] [rbp-84h] BYREF
  unsigned __int8 v32[4]; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 v33; // [rsp+44h] [rbp-74h]
  unsigned __int8 v34[16]; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int8 v35[16]; // [rsp+60h] [rbp-58h] BYREF
  char v36; // [rsp+70h] [rbp-48h] BYREF
  unsigned __int64 v37; // [rsp+78h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  v6 = 0;
  v30[0] = a3;
  v7 = 0;
  v30[1] = a4;
  v30[2] = a5;
  do
  {
    if ( v30[v6] != -1 && ((dword_40A6A0[v6] & a2) != 0 || (dword_40A6C0[v6] & a2) != 0) )
    {
      v8 = v7++;
      v31[v8] = v6;
    }
    ++v6;
  }
  while ( v6 != 3 );
  if ( v7 <= 0 )
  {
LABEL_23:
    v10 = -1;
  }
  else
  {
    v9 = v31;
    while ( 1 )
    {
      v10 = *v9;
      if ( (unsigned int)*v9 <= 7 && (dword_40A6C0[v10] & a2) != 0 )
        break;
      if ( ++v9 == &v31[v7] )
        goto LABEL_23;
    }
  }
  v11 = v32;
  do
  {
    *((_DWORD *)v11 + 1) = -1;
    v11 += 16;
    *((_WORD *)v11 - 8) = 0;
    *((_WORD *)v11 - 7) = 0;
    *((_QWORD *)v11 - 1) = 0;
  }
  while ( v11 != (unsigned __int8 *)&v36 );
  if ( v10 != -1 )
  {
    v17 = _mm_cvtsi32_si128(v30[v10]);
    v18 = &a1[5 * v10];
    if ( ((*((_BYTE *)v18 + 65) - 2) & 0xFD) != 0 )
    {
      if ( *((_BYTE *)v18 + 69) == 10 )
      {
        v19 = _mm_cvtsi32_si128(*(_DWORD *)(a1[104] + 80LL));
      }
      else
      {
        v26 = v7;
        v17 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v17));
        v19 = _mm_cvtsi32_si128(get_dtype_size());
        v7 = v26;
      }
    }
    else
    {
      v19 = _mm_cvtsi32_si128(*(_DWORD *)(a1[104] + 84LL));
    }
    v32[0] = 1;
    v33 = _mm_unpacklo_epi32(v19, v17).m128i_u64[0];
  }
  if ( v7 > 0 )
  {
    v12 = v31;
    v13 = 1;
    v14 = &v31[v7];
    do
    {
      while ( 1 )
      {
        v15 = *v12;
        if ( v10 != *v12 && v15 <= 7 && (dword_40A6A0[v15] & a2) != 0 && (int)v13 <= 2 )
          break;
        if ( ++v12 == v14 )
          goto LABEL_21;
      }
      v20 = v13 + 1;
      v21 = _mm_cvtsi32_si128(v30[v15]);
      v22 = &a1[5 * (int)v15];
      if ( ((*((_BYTE *)v22 + 65) - 2) & 0xFD) != 0 )
      {
        if ( *((_BYTE *)v22 + 69) == 10 )
        {
          v23 = _mm_cvtsi32_si128(*(_DWORD *)(a1[104] + 80LL));
        }
        else
        {
          v28 = v14;
          v29 = v13 + 1;
          v27 = v13;
          dtype_size = get_dtype_size();
          v14 = v28;
          v23 = _mm_cvtsi32_si128(dtype_size);
          v20 = v29;
          v13 = v27;
          v21 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v21));
        }
      }
      else
      {
        v23 = _mm_cvtsi32_si128(*(_DWORD *)(a1[104] + 84LL));
      }
      v24 = 16 * v13;
      ++v12;
      v32[v24] = 1;
      *(_QWORD *)&v32[v24 + 4] = _mm_unpacklo_epi32(v23, v21).m128i_u64[0];
      v13 = v20;
    }
    while ( v12 != v14 );
  }
LABEL_21:
  sub_3EBC10((__int64)a1, 62, v34, v35, v32);
  sub_175140((_QWORD *)(a1[1] + 1000LL), a1 + 5);
  sub_1181E0((__int64)v35);
  sub_1181E0((__int64)v34);
  sub_1181E0((__int64)v32);
  return v37 - __readfsqword(0x28u);
}

