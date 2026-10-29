__int64 __fastcall sub_512E0(__int64 a1, double a2, __m128i a3, __m128i a4)
{
  unsigned int v4; // eax
  char v5; // r12
  unsigned int v6; // ebp
  __int64 v8; // rax
  __int16 v9; // cx
  int v10; // eax
  __m128i *v11; // rax
  int v12; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  LOBYTE(v4) = sub_481C0(*(_QWORD *)(a1 + 888), a1 + 16);
  if ( !(_BYTE)v4 )
    return 0;
  v5 = *(_BYTE *)(a1 + 57);
  v6 = v4;
  if ( (unsigned __int8)(v5 - 3) <= 1u || *(_BYTE *)(a1 + 88) && v5 == 2 )
  {
    if ( !(unsigned __int8)sub_50E40(a1, a1 + 56, 0, -1, 0xFFFFFFFFFFFFFFFFLL, 0xFFFFFFFFFFFFFFFFLL, a2, a3, a4) )
      return 0;
    *(_WORD *)(a1 + 513) = 257;
LABEL_11:
    v8 = *(_QWORD *)(a1 + 864);
    *(_BYTE *)(a1 + 981) = (*(_WORD *)(a1 + 40) & 0xFFFD) == 16;
    *(_QWORD *)(v8 + 40) = 25600;
    *(_QWORD *)(v8 + 64) = 0;
    *(_DWORD *)(v8 + 72) = 0;
    *(_OWORD *)(v8 + 48) = 0;
    return v6;
  }
  if ( v5 == 1 )
  {
    v11 = *(__m128i **)(a1 + 864);
    *v11 = _mm_loadu_si128((const __m128i *)(a1 + 56));
    v11[1] = _mm_loadu_si128((const __m128i *)(a1 + 72));
    v11[2].m128i_i32[0] = *(_DWORD *)(a1 + 88);
    goto LABEL_11;
  }
  if ( v5 == 7 )
  {
    if ( (unsigned int)sub_7A600(*(_QWORD *)(a1 + 888), a1 + 16, &v12) == 1 )
    {
      v9 = v12;
      v10 = *(_DWORD *)(a1 + 44) & 0x1018;
      if ( v10 != 4112 )
        v5 = 2 - (v10 == 4096 || v10 == 8);
      *(_BYTE *)(*(_QWORD *)(a1 + 864) + 1LL) = 1;
      *(_WORD *)(*(_QWORD *)(a1 + 864) + 6LL) = v9;
      *(_BYTE *)(*(_QWORD *)(a1 + 864) + 5LL) = v5;
    }
    goto LABEL_11;
  }
  return 0;
}

