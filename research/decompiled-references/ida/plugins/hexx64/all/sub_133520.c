char __fastcall sub_133520(__int128 a1, __int64 a2, _BYTE *a3, _BYTE *a4, __m128i a5, __m128 a6)
{
  char result; // al
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbp
  int v13; // r12d
  __int16 v14; // di
  __int16 v15; // si
  int v16; // ecx
  __int64 v17; // rdx
  char v18; // [rsp+Fh] [rbp-49h]
  char v19; // [rsp+Fh] [rbp-49h]
  __int64 v20; // [rsp+10h] [rbp-48h] BYREF
  __int64 v21; // [rsp+18h] [rbp-40h]
  unsigned __int64 v22; // [rsp+28h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  sub_1217B0((const __m128i *)a1, *((__int64 *)&a1 + 1), a2, *(double *)a5.m128i_i64);
  sub_1215C0(a1, a3, a4, *(double *)a5.m128i_i64);
  if ( *(_BYTE *)a2 != 4 )
  {
    if ( *(_DWORD *)a4 == 4 )
      return sub_132E20(a1, a2, (__int64)a3, (__int64)(a4 + 32), 0, a5, a6);
    return 0;
  }
  result = sub_132410((const __m128i *)a1, *((_BYTE **)&a1 + 1), *(_QWORD *)(a2 + 8), a3, (__int64)a4, 0, a5, a6);
  if ( !result )
    return 0;
  v12 = *(_QWORD *)(a2 + 8);
  v13 = *(_DWORD *)(v12 + 68);
  *(_DWORD *)(a2 + 4) = v13;
  if ( *(_DWORD *)v12 == 4 )
  {
    if ( a2 )
    {
      v18 = result;
      v21 = 0;
      sub_123A40((__int64)&v20, (unsigned __int8 *)(v12 + 32), v10, v11);
      v14 = *(_WORD *)a2;
      v15 = *(_WORD *)(a2 + 2);
      v16 = *(_DWORD *)(a2 + 4);
      *(_QWORD *)a2 = v20;
      v17 = *(_QWORD *)(a2 + 8);
      LOWORD(v20) = v14;
      *(_QWORD *)(a2 + 8) = v21;
      WORD1(v20) = v15;
      HIDWORD(v20) = v16;
      v21 = v17;
      sub_11CDA0((__int64)&v20);
      return v18;
    }
  }
  else
  {
    v19 = result;
    sub_11CDA0(v12 + 64);
    *(_DWORD *)(v12 + 68) = v13;
    return v19;
  }
  return result;
}

