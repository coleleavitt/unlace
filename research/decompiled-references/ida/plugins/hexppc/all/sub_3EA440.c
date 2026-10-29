__int64 __fastcall sub_3EA440(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // ebx
  __int64 v6; // rax
  int v7; // edx
  __m128i v8; // xmm0
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // ecx
  __int64 v14; // [rsp+0h] [rbp-58h] BYREF
  int v15; // [rsp+8h] [rbp-50h]
  __int128 v16; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  v4 = is_call_insn();
  if ( (_BYTE)v4 )
  {
    if ( *(_BYTE *)(a2 + 1) == 7 )
    {
      if ( (unsigned __int8)sub_3EA1F0(a1, a1 + 24, a2) )
      {
        *(_BYTE *)(a1 + 864) = 1;
      }
      else
      {
        v9 = *(_QWORD *)(a1 + 800);
        *(_QWORD *)&v16 = 0xFFFFFFFF00000000LL;
        v10 = *(_QWORD *)(a2 + 16) + 16LL * *(_QWORD *)(a1 + 24);
        v11 = *(_QWORD *)(*(_QWORD *)(v9 + 24) + 16LL);
        if ( v10 != v11 )
        {
          v11 &= v10;
          if ( v10 == -1 )
            v11 = -1;
        }
        v12 = *(_QWORD *)(a1 + 832);
        LOBYTE(v16) = 6;
        v13 = 8 * *(_DWORD *)(v12 + 84);
        if ( (unsigned __int64)v13 <= 0x3F )
          v11 &= ~(-1LL << v13);
        *((_QWORD *)&v16 + 1) = v11;
        sub_1D2850(a1, 56, (unsigned __int8 *)&v16, nullptr, nullptr);
        sub_119360((__int64)&v16);
      }
    }
    else if ( a3 == -1 )
    {
      return 0;
    }
    else
    {
      v6 = *(_QWORD *)(a1 + 832);
      v14 = 0x200000001LL;
      v7 = *(_DWORD *)(v6 + 64);
      v8 = _mm_cvtsi32_si128(*(_DWORD *)(v6 + 84));
      LODWORD(v16) = 1;
      HIDWORD(v16) = 0;
      v15 = v7;
      *(_QWORD *)((char *)&v16 + 4) = _mm_unpacklo_epi32(v8, _mm_cvtsi32_si128(a3)).m128i_u64[0];
      sub_1D2850(a1, 57, (unsigned __int8 *)&v14, (unsigned __int8 *)&v16, nullptr);
      sub_119360((__int64)&v16);
      sub_119360((__int64)&v14);
    }
  }
  return v4;
}

