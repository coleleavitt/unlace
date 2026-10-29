__int64 __fastcall sub_3F4EC0(__int64 a1, __int64 a2, unsigned int a3, double a4)
{
  unsigned __int64 v4; // rbp
  bool v5; // zf
  char v7; // al
  __int64 v8; // rax
  int v9; // ecx
  int v10; // eax
  __m128i v11; // xmm0
  __int64 v13; // [rsp+0h] [rbp-58h] BYREF
  int v14; // [rsp+8h] [rbp-50h]
  __int128 v15; // [rsp+10h] [rbp-48h] BYREF
  char v16; // [rsp+21h] [rbp-37h]
  unsigned __int64 v17; // [rsp+28h] [rbp-30h]

  v4 = -1;
  v5 = *(_BYTE *)(a2 + 41) == 7;
  v17 = __readfsqword(0x28u);
  if ( v5 )
    v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 24LL) + 16LL)
       & (16LL * *(_QWORD *)a2 + (*(_QWORD *)(a2 + 56) & 0xFFFFFFFFFFFFFFFELL));
  if ( *(_WORD *)(a2 + 24) == 4 && (unsigned __int8)is_mapped() )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) != 8 )
    {
      if ( (unsigned __int8)xrefblk_t_first_from() )
      {
        while ( *((_QWORD *)&v15 + 1) != v4 || v16 != 17 )
        {
          if ( !(unsigned __int8)xrefblk_t_next_from() )
            return 0;
        }
        goto LABEL_5;
      }
      return 0;
    }
  }
  else if ( !(unsigned __int8)is_call_insn() )
  {
    return 0;
  }
LABEL_5:
  v7 = *(_BYTE *)(a2 + 41);
  if ( v7 == 1 )
  {
    v10 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 64LL);
    v13 = 0x200000001LL;
    v14 = v10;
    v11 = _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL) + 84LL));
    LODWORD(v15) = 1;
    HIDWORD(v15) = 0;
    *(_QWORD *)((char *)&v15 + 4) = _mm_unpacklo_epi32(v11, _mm_cvtsi32_si128(a3)).m128i_u64[0];
    sub_1D5E90(a1, 57, (unsigned __int8 *)&v13, (unsigned __int8 *)&v15, nullptr);
    sub_11C7E0((__int64)&v15);
    sub_11C7E0((__int64)&v13);
  }
  else
  {
    if ( v7 != 7 )
    {
      if ( !under_debugger )
        sub_3835A0(0xC35Bu, a4);
      BUG();
    }
    v8 = *(_QWORD *)(a1 + 832);
    *(_QWORD *)&v15 = -4294967290LL;
    v9 = 8 * *(_DWORD *)(v8 + 84);
    if ( (unsigned __int64)v9 <= 0x3F )
      v4 &= ~(-1LL << v9);
    *((_QWORD *)&v15 + 1) = v4;
    sub_1D5E90(a1, 56, (unsigned __int8 *)&v15, nullptr, nullptr);
    sub_11C7E0((__int64)&v15);
  }
  return 1;
}

