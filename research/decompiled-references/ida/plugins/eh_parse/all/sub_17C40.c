unsigned __int64 __fastcall sub_17C40(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __m128i v3; // xmm0
  unsigned __int64 v4; // rbx
  __m128i v5; // xmm1
  double v6; // xmm0_8
  __int64 v9; // rsi
  unsigned int v10; // eax
  __int64 v11; // r12
  _BOOL8 v13; // rdx
  __int64 v14; // rdx
  int v15; // esi
  __int64 v16; // rsi
  char v17; // [rsp+10h] [rbp-478h]
  __int64 v18; // [rsp+10h] [rbp-478h]
  __int64 v19; // [rsp+10h] [rbp-478h]
  __int64 v20; // [rsp+18h] [rbp-470h]
  unsigned __int64 v21; // [rsp+20h] [rbp-468h]
  int v22; // [rsp+2Ch] [rbp-45Ch]
  unsigned int v23; // [rsp+38h] [rbp-450h] BYREF
  unsigned int v24; // [rsp+3Ch] [rbp-44Ch]
  _BYTE v25[1032]; // [rsp+40h] [rbp-448h] BYREF
  unsigned __int64 v26; // [rsp+448h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  v3 = _mm_loadu_si128((const __m128i *)(a1 + 40));
  v4 = v3.m128i_i64[0];
  v5 = _mm_srli_si128(v3, 8);
  *(_QWORD *)&v6 = _mm_add_epi64(v3, v5).m128i_u64[0];
  if ( v4 < *(_QWORD *)&v6 )
  {
    v22 = 4 * (a3 == 0xAA64) + 4;
    v21 = 0x57uLL >> ((unsigned __int8)a3 + 94);
    do
    {
      while ( 1 )
      {
        create_data(v4, 0x20000000, 4, -1);
        create_data(v4 + 4, 0x20000000, 4, -1);
        lread(a2, &v23, 8);
        v10 = v23;
        if ( !v23 )
          return v26 - __readfsqword(0x28u);
        if ( a3 == 450 )
        {
LABEL_18:
          if ( (v23 & 1) != 0 )
          {
            v10 = v23 & 0xFFFFFFFE;
            v13 = 1;
            v23 &= ~1u;
          }
          else
          {
            v13 = (v24 & 0x40000000) == 0;
          }
          sub_7FF0(0x57u, v10, v13);
          v10 = v23;
          goto LABEL_15;
        }
        if ( a3 <= 0x1C2u )
        {
          if ( a3 > 0x1A8u )
          {
            if ( a3 == 448 )
              goto LABEL_18;
          }
          else if ( a3 > 0x1A1u && (v21 & 1) != 0 )
          {
            goto LABEL_15;
          }
LABEL_21:
          op_offset(v4, 0, 2, -1, 0, 0);
          v19 = v23;
          v20 = v23 + 1LL;
          auto_mark_range(v23, v20, 20);
          auto_mark_range(v19, v20, 30);
          set_cmt(v4, "Function start", 0);
          v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL) + 16LL);
          v15 = (v24 & 0x40000000) == 0 ? 2 : 4;
          qsnprintf(
            v25,
            1024,
            "Function end: %a, prolog end: %a, 32-bit: %u, has EH: %u",
            v6,
            *(double *)v5.m128i_i64,
            v14 & (v23 + v15 * ((v24 >> 8) & 0x3FFFFF)),
            v14 & (v23 + v15 * (unsigned __int8)v24));
          set_cmt(v4, "Function start", 0);
          set_cmt(v4 + 4, v25, 0);
          goto LABEL_8;
        }
        if ( a3 != 498 )
          break;
        v10 = _byteswap_ulong(v23);
        v23 = v10;
        v24 = _byteswap_ulong(v24);
LABEL_15:
        v11 = v10;
        v4 += 8LL;
        v18 = v10 + 1LL;
        auto_mark_range(v10, v18, 20);
        auto_mark_range(v11, v18, 30);
        if ( v4 >= *(_QWORD *)&v6 )
          return v26 - __readfsqword(0x28u);
      }
      if ( a3 == 0xAA64 )
      {
        v16 = *(_QWORD *)(a1 + 32);
        v23 &= ~1u;
        sub_15EB0(v4, v16, 8, 1);
        if ( (v24 & 3) == 0 )
          goto LABEL_24;
      }
      else
      {
        if ( a3 != 452 )
          goto LABEL_21;
        v9 = *(_QWORD *)(a1 + 32);
        v17 = v23;
        v23 &= ~1u;
        sub_15EB0(v4, v9, 4, 1);
        sub_7FF0(
          0x57u,
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL) + 16LL) & (*(_QWORD *)(a1 + 32) + v23),
          v17 & 1);
        if ( (v24 & 3) == 0 )
LABEL_24:
          sub_15EB0(v4 + 4, *(_QWORD *)(a1 + 32), v22, 0);
      }
      set_cmt(v4 + 4, "Unwind information", 0);
LABEL_8:
      v4 += 8LL;
    }
    while ( v4 < *(_QWORD *)&v6 );
  }
  return v26 - __readfsqword(0x28u);
}

