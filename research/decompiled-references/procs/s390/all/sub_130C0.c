__int64 __fastcall sub_130C0(__int64 a1)
{
  __int16 v1; // ax
  char v3; // al
  __int16 v4; // bp
  char v5; // al
  __int64 v6; // rax
  __int64 v7; // rdx
  __m128i *v8; // rax
  _QWORD v9[7]; // [rsp+10h] [rbp-38h] BYREF

  v1 = *(_WORD *)(a1 + 40);
  v9[1] = __readfsqword(0x28u);
  if ( v1 == 125 )
  {
    v8 = *(__m128i **)(a1 + 864);
    *v8 = _mm_loadu_si128((const __m128i *)(a1 + 56));
    v8[1] = _mm_loadu_si128((const __m128i *)(a1 + 72));
    v8[2].m128i_i32[0] = *(_DWORD *)(a1 + 88);
    return 1;
  }
  if ( v1 != 66 || *(_BYTE *)(a1 + 57) != 3 )
    return 0;
  v3 = sub_12700(*(_QWORD *)(a1 + 888), a1 + 16, *(unsigned __int16 *)(a1 + 62), 0, v9, 0, 0);
  v4 = *(char *)(a1 + 89);
  if ( !v3 )
  {
    if ( (unsigned __int8)sub_12700(*(_QWORD *)(a1 + 888), a1 + 16, (char)v4, 0, v9, 0, 0) )
    {
      v4 = *(_WORD *)(a1 + 62);
      goto LABEL_8;
    }
    return 0;
  }
LABEL_8:
  v5 = getinf_flag(3, 4);
  *(_BYTE *)(*(_QWORD *)(a1 + 864) + 1LL) = 1;
  *(_WORD *)(*(_QWORD *)(a1 + 864) + 6LL) = v4;
  *(_BYTE *)(*(_QWORD *)(a1 + 864) + 5LL) = v5 == 0 ? 2 : 7;
  v6 = *(_QWORD *)(a1 + 376);
  v7 = v9[0];
  *(_DWORD *)v6 |= 0x200u;
  *(_QWORD *)(v6 + 56) = v7;
  return 1;
}
