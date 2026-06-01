__int64 __fastcall sub_28D6B0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v5; // rax
  int tinfo_size; // eax
  char v7; // r13
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  _QWORD *v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rax
  __m128i v18; // xmm0
  __int64 v19; // [rsp+0h] [rbp-48h]
  __m128i v20; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 v21; // [rsp+18h] [rbp-30h]

  v2 = 0;
  v21 = __readfsqword(0x28u);
  if ( (get_tinfo_property() & 0x3F) == 0x2D )
  {
    v5 = *(_QWORD *)(a2 + 24);
    v19 = 0;
    v20 = 0;
    if ( (*(_QWORD *)(v5 + 48) & 0x100) != 0 )
    {
      if ( get_tinfo_pdata()
        && (tinfo_size = get_tinfo_size(),
            v7 = tinfo_size,
            v8 = *(_QWORD *)(a2 + 24) + 48LL,
            v2 = sub_2612E0(nullptr, v8, 0, 0, tinfo_size, 0),
            (_BYTE)v2) )
      {
        v11 = j__qalloc_or_throw(64, v8, v9, v10);
        *(_QWORD *)v11 = -1;
        v12 = (_QWORD *)v11;
        *(_QWORD *)(v11 + 8) = -4294967235LL;
        *(_QWORD *)(v11 + 16) = 0xFFFFFFFFLL;
        *(_QWORD *)(v11 + 40) = 0;
        *(_QWORD *)(v11 + 48) = 0;
        *(_DWORD *)(v11 + 56) = 0;
        *(_OWORD *)(v11 + 24) = 0;
        v15 = j__qalloc_or_throw(48, v8, v13, v14);
        *(_QWORD *)(v15 + 8) = 0;
        *(_QWORD *)(v15 + 16) = 0;
        *(_QWORD *)(v15 + 40) = 0;
        *(_OWORD *)(v15 + 24) = 0;
        v12[3] = v15;
        *(_QWORD *)v15 = 0;
        v16 = v12[3];
        sub_329C80(v16 + 8, 0x88888808800000uLL);
        v17 = *(_QWORD *)(v16 + 16);
        *(_BYTE *)(v16 + 15) = v7;
        *(_BYTE *)(v16 + 13) |= 0x20u;
        v18 = _mm_loadu_si128((const __m128i *)(v16 + 24));
        *(_QWORD *)(v16 + 16) = 0;
        v19 = v17;
        *(__m128i *)(v16 + 24) = _mm_loadu_si128(&v20);
        v20 = v18;
        copy_tinfo_t();
        *v12 = **(_QWORD **)(a2 + 24);
        *(_QWORD *)(a2 + 32) = v12;
        *(_DWORD *)(a2 + 8) = 22;
      }
      else
      {
        v2 = 0;
      }
      if ( v19 )
      {
        v20.m128i_i64[0] = 0;
        qfree(v19);
      }
    }
  }
  return v2;
}

