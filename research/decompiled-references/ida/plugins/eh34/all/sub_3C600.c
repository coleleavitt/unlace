__int64 __fastcall sub_3C600(__int64 a1, __int64 a2, __int64 a3)
{
  bool v3; // zf
  int v5; // eax
  __m128i v7; // xmm0
  int v8; // eax
  __m128i v9; // [rsp+0h] [rbp-48h] BYREF
  char v10; // [rsp+18h] [rbp-30h]
  unsigned __int64 v11; // [rsp+28h] [rbp-20h]

  v3 = *(_BYTE *)(a2 + 1985) == 0xFF;
  v11 = __readfsqword(0x28u);
  if ( v3 )
    goto LABEL_17;
  if ( *(_DWORD *)(a2 + 1992) )
  {
    if ( !(unsigned int)sub_576C0(a3) )
      goto LABEL_4;
LABEL_12:
    nullsub_42(a3, "c:\\temp\\prealloc-bypass.txt");
    v5 = *(_DWORD *)(a2 + 1992);
    if ( v5 )
      goto LABEL_5;
    goto LABEL_8;
  }
  nullsub_42(a3, "c:\\temp\\prealloc.txt");
  if ( (unsigned int)sub_576C0(a3) )
    goto LABEL_12;
LABEL_4:
  v5 = *(_DWORD *)(a2 + 1992);
  if ( !v5 )
  {
LABEL_8:
    if ( !*(_DWORD *)(*(_QWORD *)(a2 + 32) + 24LL) )
    {
      *(_DWORD *)(a2 + 1992) = 1;
      goto LABEL_10;
    }
    sub_39180((__int64)&v9, a2, a3);
    if ( v10 )
      goto LABEL_11;
LABEL_17:
    v8 = *(_DWORD *)(a2 + 1992);
    *(_DWORD *)(a2 + 1992) = v8 + 1;
    if ( v8 )
      goto LABEL_6;
LABEL_10:
    sub_3B540(&v9, a2, a3);
    if ( !v10 )
      goto LABEL_6;
LABEL_11:
    *(_QWORD *)a1 = v9.m128i_i64[0];
    v7 = _mm_loadu_si128((const __m128i *)&v9.m128i_u64[1]);
    *(_BYTE *)(a1 + 24) = 1;
    *(__m128i *)(a1 + 8) = v7;
    return a1;
  }
LABEL_5:
  *(_DWORD *)(a2 + 1992) = v5 + 1;
LABEL_6:
  *(_DWORD *)a1 = 0;
  *(_BYTE *)(a1 + 24) = 0;
  return a1;
}

