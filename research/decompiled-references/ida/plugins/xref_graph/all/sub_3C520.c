unsigned __int64 __fastcall sub_3C520(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // r12
  _QWORD *v5; // rbp
  _QWORD *v7; // rax
  __m128i v8; // xmm0
  unsigned int v9; // edx
  __m128i v10; // xmm0
  _QWORD v12[2]; // [rsp+0h] [rbp-58h] BYREF
  __m128i v13; // [rsp+10h] [rbp-48h]
  unsigned __int64 v14; // [rsp+28h] [rbp-30h]

  v4 = (_QWORD *)(a1 + 80);
  v5 = (_QWORD *)(a1 + 176);
  v14 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 8) = 0x7FF000004LL;
  *(_QWORD *)(a1 + 40) = "Choose xref to add";
  *(_OWORD *)(a1 + 16) = -1;
  v7 = v4;
  v8 = _mm_loadl_epi64((const __m128i *)&off_4C238);
  *(_QWORD *)a1 = &unk_4D520;
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 48) = 7;
  *(_DWORD *)(a1 + 72) = -1;
  *(__m128i *)(a1 + 56) = _mm_unpacklo_epi64(v8, (__m128i)(unsigned __int64)off_4C200);
  do
  {
    *v7 = 0;
    v7 += 3;
    *((_OWORD *)v7 - 1) = 0;
  }
  while ( v5 != v7 );
  *(_DWORD *)(a1 + 176) = 0;
  v9 = *(_DWORD *)(a1 + 12);
  if ( ((v9 >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(a1 + 11) != 0xFF )
    {
      if ( !under_debugger )
        interr(3449);
      BUG();
    }
    *(_BYTE *)(a1 + 11) = ((v9 >> 19) & 0x3F) - 1;
    *(_DWORD *)(a1 + 12) = v9 & 0xFE07FFFF;
  }
  v12[0] = a1;
  *(_OWORD *)(a1 + 200) = 0;
  *(_QWORD *)a1 = xref_chooser_t___vtable;
  *(_OWORD *)(a1 + 224) = 0;
  *(_OWORD *)(a1 + 248) = 0;
  v10 = _mm_loadl_epi64((const __m128i *)&off_4C240);
  *(_QWORD *)(a1 + 184) = a2;
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 240) = 0;
  v12[1] = 0;
  v13 = _mm_unpacklo_epi64(v10, (__m128i)(unsigned __int64)sub_3DD40);
  sub_1FBE0(a3, 511, (__int64)v12);
  if ( v13.m128i_i64[0] )
    ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v13.m128i_i64[0])(v12, v12, 3);
  return v14 - __readfsqword(0x28u);
}

