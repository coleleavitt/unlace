__int64 __fastcall sub_2C7C0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v5; // rax
  __int64 v6; // rsi
  unsigned __int64 *v7; // rax
  __int64 v9; // r14
  void (__fastcall *hexdsp)(__int64, __int64); // rax
  __int64 v11; // [rsp+8h] [rbp-1E8h] BYREF
  __int128 v12; // [rsp+10h] [rbp-1E0h]
  __int64 v13; // [rsp+20h] [rbp-1D0h]
  __int128 v14; // [rsp+28h] [rbp-1C8h]
  __m128i si128; // [rsp+38h] [rbp-1B8h]
  __int64 v16; // [rsp+48h] [rbp-1A8h]
  char v17; // [rsp+50h] [rbp-1A0h]
  __int128 v18; // [rsp+58h] [rbp-198h]
  __int64 v19; // [rsp+68h] [rbp-188h]
  __int64 v20; // [rsp+70h] [rbp-180h]
  __int64 v21; // [rsp+78h] [rbp-178h]
  char v22; // [rsp+80h] [rbp-170h] BYREF
  unsigned __int64 v23; // [rsp+1C0h] [rbp-30h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v23 = __readfsqword(0x28u);
  v12 = 0;
  v14 = 0;
  v11 = 0;
  v13 = 0;
  v16 = -1;
  v17 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_31B80);
  if ( (unsigned __int8)sub_2BFC0(v3, (__int64)&v11, a2) )
  {
    v5 = v16;
    if ( v16 != -1 )
    {
      v6 = *(_QWORD *)(a2 + 24);
      if ( *(_DWORD *)(v6 + 8) == 68 )
      {
        copy_tinfo_t();
        v9 = *(_QWORD *)(a2 + 24);
        hexdsp = (void (__fastcall *)(__int64, __int64))get_hexdsp();
        hexdsp(467, v9);
        *(_DWORD *)(*(_QWORD *)(a2 + 24) + 8LL) = 64;
        *(_DWORD *)(*(_QWORD *)(a2 + 24) + 40LL) = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 856LL);
        copy_tinfo_t();
        clear_tinfo_t();
        v6 = *(_QWORD *)(a2 + 24);
        v5 = v16;
      }
      *(_QWORD *)(v6 + 24) = v5;
      v7 = (unsigned __int64 *)&v22;
      v19 = -1;
      v20 = 0;
      v21 = 0;
      v18 = -1;
      do
      {
        *(_WORD *)v7 = 0;
        v7 += 5;
        *((_WORD *)v7 - 19) = 0;
        *((_WORD *)v7 - 18) = 0;
        *((_DWORD *)v7 - 2) = 0;
        *((_WORD *)v7 - 17) = 0;
        *((_OWORD *)v7 - 2) = 0;
        *(v7 - 2) = 0;
      }
      while ( &v23 != v7 );
      if ( (get_flags_ex() & 0x600) == 0x200 )
        prev_not_tail();
      if ( (int)decode_insn() > 0 && ((unsigned __int8)is_call_insn() || get_first_fcref_from() != -1) )
        add_cref();
      *(_BYTE *)(a1 + 72) = 1;
    }
  }
  clear_tinfo_t();
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree();
  }
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree();
  }
  return 0;
}
