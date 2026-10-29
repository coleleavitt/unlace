__int64 __fastcall sub_107D0(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int16 v6; // ax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v10[45]; // [rsp-170h] [rbp-1C8h] BYREF
  __int64 v11; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-50h] BYREF
  __m128i v13[2]; // [rsp+10h] [rbp-48h] BYREF
  __int64 v14; // [rsp+30h] [rbp-28h]
  unsigned __int64 v15; // [rsp+38h] [rbp-20h]

  v6 = *(_WORD *)(a1 + 40);
  v15 = __readfsqword(0x28u);
  if ( v6 == 38 )
  {
    if ( *(_BYTE *)(a1 + 57) != 5 || a2 != 1 )
      return 0;
    if ( (unsigned __int8)same_value_jpt(a1, a1 + 96, 0) )
    {
      v8 = *(_QWORD *)(a1 + 64);
      goto LABEL_6;
    }
    v6 = *(_WORD *)(a1 + 40);
  }
  if ( ((v6 - 35) & 0xFFFD) == 0 )
  {
    v13[0] = _mm_loadu_si128((const __m128i *)(a1 + 40LL * (1 - a2) + 56));
    v7 = *(_QWORD *)(a1 + 40LL * (1 - a2) + 88);
    v13[1] = _mm_loadu_si128((const __m128i *)(a1 + 40LL * (1 - a2) + 72));
    v14 = v7;
    qmemcpy(v10, (const void *)(a1 + 16), sizeof(v10));
    if ( (unsigned __int8)sub_F9F0(
                            *(_QWORD *)(a1 + 888),
                            &v11,
                            &v12,
                            v13,
                            (__int64)v13,
                            a6,
                            v10[0],
                            v10[1],
                            v10[2],
                            v10[3],
                            v10[4],
                            *(__int128 *)&v10[5],
                            *(__int128 *)&v10[7],
                            v10[9],
                            v10[10],
                            v10[11],
                            v10[12],
                            v10[13],
                            v10[14],
                            v10[15]) )
    {
      if ( (unsigned __int8)same_value_jpt(a1, a1 + 40LL * a2 + 56, 0) )
      {
        LOWORD(v8) = v11;
LABEL_6:
        *(_WORD *)(*(_QWORD *)(a1 + 376) + 4LL) = v8;
        return 1;
      }
    }
  }
  return 0;
}
