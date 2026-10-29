__int64 __fastcall sub_3EA730(__int64 a1, unsigned __int8 *a2, unsigned __int8 *a3, __int64 a4)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v8; // rcx
  unsigned int v9; // r14d
  int v10; // eax
  unsigned int dtype_size; // eax
  int v13; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v14; // [rsp+4h] [rbp-54h]
  unsigned __int64 v15; // [rsp+18h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(unsigned __int8 *)(v4 + 144);
  if ( (_BYTE)v5 )
  {
    v8 = 66;
    if ( _bittest64(&v8, *(_BYTE *)(v4 + 128) & 0xF) )
    {
      v9 = *(_DWORD *)(*(_QWORD *)(v4 + 112) + 380LL);
      v10 = *(_DWORD *)(a4 + 16);
      if ( (v10 & 0x40) == 0 )
      {
        v13 = 1;
        HIDWORD(v14) = 8;
        LODWORD(v14) = get_dtype_size();
        sub_125180(a2, (unsigned __int8 *)&v13);
        sub_11CDA0((__int64)&v13);
        v10 = *(_DWORD *)(a4 + 16);
      }
      if ( (v10 & 1) != 0 )
      {
        dtype_size = get_dtype_size();
        v13 = 1;
        v14 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(dtype_size), _mm_cvtsi32_si128(v9)).m128i_u64[0];
        sub_125180(a3, (unsigned __int8 *)&v13);
        sub_11CDA0((__int64)&v13);
      }
    }
    else
    {
      return 0;
    }
  }
  return v5;
}

