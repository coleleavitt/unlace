__int64 __fastcall sub_17490(_QWORD *a1, __int64 a2, __int16 a3)
{
  __int64 v5; // rbp
  __int64 v6; // rax
  unsigned int v7; // edx
  __int64 v8; // rdi
  __int64 v10; // rdi
  __m128i si128; // xmm0
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rax

  v5 = a1[5];
  *(_QWORD *)(a2 + 24) = v5;
  if ( (*(_BYTE *)(a2 + 4) & 1) != 0 )
  {
    v5 += *(_QWORD *)(a2 + 8);
  }
  else
  {
    v10 = *(_QWORD *)(a2 + 16);
    if ( v10 != -1 )
      v5 = 16 * sel2para(v10, a2) + *(_QWORD *)(a2 + 24);
  }
  v6 = getseg(v5);
  v7 = *(_DWORD *)(a2 + 4) & 0xFFFFFFFE;
  if ( v6 )
  {
    v8 = *(_QWORD *)(v6 + 48);
    *(_DWORD *)(a2 + 4) = v7;
    *(_QWORD *)(a2 + 8) = 0;
    *(_QWORD *)(a2 + 16) = v8;
    if ( v8 != -1 )
      v5 -= 16 * sel2para(v8, a2);
  }
  else
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_1E280);
    *(_DWORD *)(a2 + 4) = v7;
    *(__m128i *)(a2 + 8) = si128;
  }
  *(_QWORD *)(a2 + 24) = v5;
  if ( *(_WORD *)(a1[1] + 161LL) == a3 )
  {
    v12 = a1[4];
    if ( (*(_BYTE *)(a2 + 4) & 1) != 0 )
    {
      v13 = *(_QWORD *)(a2 + 8);
    }
    else
    {
      v14 = *(_QWORD *)(a2 + 16);
      v13 = 0;
      if ( v14 != -1 )
      {
        v15 = sel2para(v14, a2);
        v5 = *(_QWORD *)(a2 + 24);
        v13 = 16 * v15;
      }
    }
    *(_QWORD *)(a2 + 8) = v12;
    *(_QWORD *)(a2 + 24) = v5 + v13 - v12;
  }
  *(_WORD *)a2 = a3;
  *(_DWORD *)(a2 + 4) = 0;
  set_fixup(a1[4], a2);
  return patch_fixup_value(a1[4], a2);
}
