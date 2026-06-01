__int64 __fastcall sub_288AB0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v4; // rax
  unsigned int tinfo_size; // eax
  char v6; // r13
  __int64 v7; // rax
  _QWORD *v8; // r12
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rax
  __m128i v12; // xmm0
  __int64 v13; // [rsp+0h] [rbp-48h]
  __m128i v14; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-30h]

  v2 = 0;
  v15 = __readfsqword(0x28u);
  if ( (get_tinfo_property() & 0x3F) == 0x2D )
  {
    v4 = *(_QWORD *)(a2 + 24);
    v13 = 0;
    v14 = 0;
    if ( (*(_QWORD *)(v4 + 48) & 0x100) != 0 )
    {
      if ( get_tinfo_pdata()
        && (tinfo_size = get_tinfo_size(),
            v6 = tinfo_size,
            v2 = sub_25C6E0(nullptr, *(_QWORD *)(a2 + 24) + 48LL, 0, 0, tinfo_size, 0),
            (_BYTE)v2) )
      {
        v7 = j__qalloc_or_throw();
        *(_QWORD *)v7 = -1;
        v8 = (_QWORD *)v7;
        *(_QWORD *)(v7 + 8) = -4294967235LL;
        *(_QWORD *)(v7 + 16) = 0xFFFFFFFFLL;
        *(_QWORD *)(v7 + 40) = 0;
        *(_QWORD *)(v7 + 48) = 0;
        *(_DWORD *)(v7 + 56) = 0;
        *(_OWORD *)(v7 + 24) = 0;
        v9 = j__qalloc_or_throw();
        *(_QWORD *)(v9 + 8) = 0;
        *(_QWORD *)(v9 + 16) = 0;
        *(_QWORD *)(v9 + 40) = 0;
        *(_OWORD *)(v9 + 24) = 0;
        v8[3] = v9;
        *(_QWORD *)v9 = 0;
        v10 = v8[3];
        sub_324B80(v10 + 8, 0x88888808800000LL);
        v11 = *(_QWORD *)(v10 + 16);
        *(_BYTE *)(v10 + 15) = v6;
        *(_BYTE *)(v10 + 13) |= 0x20u;
        v12 = _mm_loadu_si128((const __m128i *)(v10 + 24));
        *(_QWORD *)(v10 + 16) = 0;
        v13 = v11;
        *(__m128i *)(v10 + 24) = _mm_loadu_si128(&v14);
        v14 = v12;
        copy_tinfo_t();
        *v8 = **(_QWORD **)(a2 + 24);
        *(_QWORD *)(a2 + 32) = v8;
        *(_DWORD *)(a2 + 8) = 22;
      }
      else
      {
        v2 = 0;
      }
      if ( v13 )
      {
        v14.m128i_i64[0] = 0;
        qfree();
      }
    }
  }
  return v2;
}

