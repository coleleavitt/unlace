__int64 __fastcall sub_1430(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  const char *file_ext; // rdi
  __int64 v11; // rax
  __m128i si128; // xmm0
  __int64 v13; // rax
  unsigned __int16 v14; // [rsp+6h] [rbp-42h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  v7 = qlsize(a3);
  if ( (v7 & 0x1FF) != 0 )
    return 0;
  v8 = v7;
  if ( !v7 )
    return 0;
  qlseek(a3, 32, 0);
  lreadbytes(a3, &v14, 2, 0);
  if ( v8 < v14 )
    return 0;
  if ( v14 <= 0xFFu )
    return 0;
  if ( (v14 & 1) != 0 )
    return 0;
  lreadbytes(a3, &v14, 2, 0);
  if ( v8 < v14 )
    return 0;
  qlseek(a3, 40, 0);
  lreadbytes(a3, &v14, 2, 0);
  if ( (v14 & 1) != 0 )
    return 0;
  if ( v8 < v14 )
    return 0;
  file_ext = (const char *)get_file_ext(a4);
  if ( !file_ext || strcasecmp(file_ext, "sav") )
    return 0;
  if ( a1[2] <= 0x15u )
    *a1 = qvector_reserve(a1, *a1, 22, 1);
  v11 = *a1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3130);
  a1[1] = 22;
  *(__m128i *)v11 = si128;
  *(_QWORD *)(v11 + 13) = 0x656C69662D766173LL;
  *(_BYTE *)(*a1 + 21LL) = 0;
  if ( a2[2] <= 5u )
    *a2 = qvector_reserve(a2, *a2, 6, 1);
  a2[1] = 6;
  v13 = *a2;
  *(_DWORD *)v13 = 829449328;
  *(_BYTE *)(v13 + 4) = 49;
  *(_BYTE *)(*a2 + 5LL) = 0;
  return 17;
}

