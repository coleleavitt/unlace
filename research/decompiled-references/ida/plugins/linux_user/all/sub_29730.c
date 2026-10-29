__int64 __fastcall sub_29730(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  int v4; // edx
  __int64 result; // rax
  unsigned __int8 v6; // al
  char v7; // dl
  __m128i v8; // xmm0
  __int64 v9; // rax
  __m128i v10; // xmm1
  __int64 v11; // [rsp+0h] [rbp-88h] BYREF
  __int128 v12; // [rsp+8h] [rbp-80h]
  __int64 v13; // [rsp+18h] [rbp-70h]
  __int128 v14; // [rsp+20h] [rbp-68h]
  __int64 v15; // [rsp+30h] [rbp-58h]
  __int128 v16; // [rsp+38h] [rbp-50h]
  __int128 v17; // [rsp+48h] [rbp-40h]
  int v18; // [rsp+58h] [rbp-30h]
  __int16 v19; // [rsp+5Ch] [rbp-2Ch]
  char v20; // [rsp+5Eh] [rbp-2Ah]
  unsigned __int64 v21; // [rsp+68h] [rbp-20h]

  v3 = *(_QWORD *)(a2 + 24);
  v21 = __readfsqword(0x28u);
  v11 = 0;
  v13 = 0;
  v15 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v12 = 0;
  v14 = 0;
  v16 = 0;
  v17 = 0;
  if ( v3 )
  {
    *(_QWORD *)(a2 + 32) = 0;
    qfree();
  }
  if ( *(_QWORD *)a2 )
  {
    *(_QWORD *)(a2 + 8) = 0;
    qfree();
  }
  sub_266A0(a2, (__int64)&v11);
  v4 = sub_270C0(*(_QWORD *)(a1 + 8), a2 + 48);
  result = 0;
  if ( v4 != -1 )
  {
    v6 = *(_BYTE *)(a2 + 52);
    v7 = v6 >> 4;
    if ( v6 > 0x2Fu )
    {
      if ( *(_WORD *)(*(_QWORD *)(a1 + 8) + 522LL) == 40 && v7 == 14 )
      {
        v7 = 2;
      }
      else if ( (unsigned __int8)v7 <= 9u )
      {
        v7 = -2;
      }
    }
    *(_BYTE *)(a2 + 92) = v7;
    v8 = _mm_loadl_epi64((const __m128i *)(a2 + 64));
    *(_BYTE *)(a2 + 93) = v6 & 0xF;
    v9 = *(_QWORD *)(a2 + 56);
    *(_DWORD *)(a2 + 88) = 0;
    v10 = (__m128i)(unsigned __int64)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 608LL) + v9);
    result = 1;
    *(__m128i *)(a2 + 72) = _mm_unpacklo_epi64(v8, v10);
  }
  return result;
}

