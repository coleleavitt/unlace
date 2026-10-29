__int64 __fastcall sub_CAE0(__int64 a1, __int64 a2)
{
  __int16 v3; // ax
  char v4; // dl
  __int64 result; // rax
  char v6; // dl
  __m128i v7; // xmm0
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdi
  __m128i v11; // xmm0
  _OWORD v12[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v13; // [rsp+20h] [rbp-28h]
  unsigned __int64 v14; // [rsp+28h] [rbp-20h]

  v3 = *(_WORD *)(a1 + 40);
  v14 = __readfsqword(0x28u);
  if ( (unsigned __int16)(v3 - 46) <= 1u || v3 == 44 )
    goto LABEL_11;
  v4 = *(_BYTE *)(a1 + 57);
  if ( v4 == 1 )
  {
    if ( *(_WORD *)(a1 + 62) > 0xFu )
      return 0;
  }
  else if ( v4 != 4 )
  {
    result = 0;
    if ( v4 != 3 || *(_BYTE *)(a1 + 88) )
      return result;
  }
  v6 = *(_BYTE *)(a1 + 97);
  if ( v6 == 1 )
  {
    if ( *(_WORD *)(a1 + 102) <= 0xFu )
    {
LABEL_11:
      v7 = _mm_loadu_si128((const __m128i *)(a1 + 56));
      v8 = *(_QWORD *)(a1 + 88);
      v9 = *(_QWORD *)(a1 + 32);
      v10 = *(_QWORD *)(a1 + 888);
      v12[0] = v7;
      v11 = _mm_loadu_si128((const __m128i *)(a1 + 72));
      v13 = v8;
      v12[1] = v11;
      sub_C700(v10, (__int64)v12, v9);
      return set_moved_jpt(a1, a1 + 96, v12, a2, 10, 10);
    }
    return 0;
  }
  if ( v6 == 4 )
    goto LABEL_11;
  result = 0;
  if ( v6 == 3 && !*(_BYTE *)(a1 + 128) )
    goto LABEL_11;
  return result;
}

