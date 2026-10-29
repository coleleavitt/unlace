__int64 __fastcall sub_51980(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        _DWORD *a4,
        _BYTE *a5,
        __int64 a6,
        double a7,
        __m128i a8,
        __m128i a9)
{
  __m128i *v12; // rax
  _BYTE v14[360]; // [rsp-168h] [rbp-1B8h] BYREF
  __m128i v15; // [rsp+0h] [rbp-50h]
  __m128i v16; // [rsp+10h] [rbp-40h]
  __int64 v17; // [rsp+20h] [rbp-30h]

  if ( *a5 )
  {
    v15 = _mm_loadu_si128((const __m128i *)(a1 + 96));
    v16 = _mm_loadu_si128((const __m128i *)(a1 + 112));
    v17 = *(_QWORD *)(a1 + 128);
    qmemcpy(v14, (const void *)(a1 + 16), sizeof(v14));
    if ( (unsigned __int8)sub_50170(
                            *(_QWORD *)(a1 + 888),
                            a2,
                            a3,
                            1,
                            (__int64)a5,
                            a6,
                            v14[0],
                            *(int *)&v14[8],
                            *(unsigned __int64 *)&v14[16],
                            *(__int16 *)&v14[24],
                            *(int *)&v14[32],
                            v14[40],
                            *(int *)&v14[48],
                            *(int *)&v14[56],
                            *(int *)&v14[64],
                            *(int *)&v14[72],
                            v16,
                            *(__int128 *)&v14[80],
                            *(int *)&v14[96],
                            *(int *)&v14[104],
                            *(int *)&v14[112],
                            *(int *)&v14[120],
                            *(int *)&v14[128],
                            *(int *)&v14[136],
                            *(int *)&v14[144],
                            *(int *)&v14[152],
                            *(int *)&v14[160],
                            *(int *)&v14[168],
                            *(int *)&v14[176],
                            *(int *)&v14[184],
                            *(int *)&v14[192],
                            *(int *)&v14[200],
                            *(int *)&v14[208],
                            *(int *)&v14[216],
                            *(int *)&v14[224],
                            *(int *)&v14[232],
                            *(int *)&v14[240],
                            *(int *)&v14[248],
                            *(int *)&v14[256],
                            *(int *)&v14[264],
                            *(int *)&v14[272],
                            *(int *)&v14[280],
                            *(int *)&v14[288],
                            *(int *)&v14[296],
                            *(int *)&v14[304],
                            *(int *)&v14[312],
                            *(int *)&v14[320],
                            *(int *)&v14[328],
                            *(int *)&v14[336],
                            a8,
                            a9,
                            *(__int64 *)&v14[344]) )
    {
      *a4 = *(unsigned __int16 *)(a1 + 102);
      return 1;
    }
  }
  if ( *(_BYTE *)(a1 + 57) == 1 && (*(_BYTE *)(a1 + 97) != 1 || *(_WORD *)(a1 + 102) != *(_WORD *)(a1 + 62)) )
  {
    v15 = _mm_loadu_si128((const __m128i *)(a1 + 56));
    v16 = _mm_loadu_si128((const __m128i *)(a1 + 72));
    v17 = *(_QWORD *)(a1 + 88);
    qmemcpy(v14, (const void *)(a1 + 16), sizeof(v14));
    if ( (unsigned __int8)sub_50170(
                            *(_QWORD *)(a1 + 888),
                            a2,
                            a3,
                            0,
                            (__int64)a5,
                            a6,
                            v14[0],
                            *(int *)&v14[8],
                            *(unsigned __int64 *)&v14[16],
                            *(__int16 *)&v14[24],
                            *(int *)&v14[32],
                            v14[40],
                            *(int *)&v14[48],
                            *(int *)&v14[56],
                            *(int *)&v14[64],
                            *(int *)&v14[72],
                            v16,
                            *(__int128 *)&v14[80],
                            *(int *)&v14[96],
                            *(int *)&v14[104],
                            *(int *)&v14[112],
                            *(int *)&v14[120],
                            *(int *)&v14[128],
                            *(int *)&v14[136],
                            *(int *)&v14[144],
                            *(int *)&v14[152],
                            *(int *)&v14[160],
                            *(int *)&v14[168],
                            *(int *)&v14[176],
                            *(int *)&v14[184],
                            *(int *)&v14[192],
                            *(int *)&v14[200],
                            *(int *)&v14[208],
                            *(int *)&v14[216],
                            *(int *)&v14[224],
                            *(int *)&v14[232],
                            *(int *)&v14[240],
                            *(int *)&v14[248],
                            *(int *)&v14[256],
                            *(int *)&v14[264],
                            *(int *)&v14[272],
                            *(int *)&v14[280],
                            *(int *)&v14[288],
                            *(int *)&v14[296],
                            *(int *)&v14[304],
                            *(int *)&v14[312],
                            *(int *)&v14[320],
                            *(int *)&v14[328],
                            *(int *)&v14[336],
                            a8,
                            a9,
                            *(__int64 *)&v14[344]) )
    {
      *a4 = *(unsigned __int16 *)(a1 + 62);
      v12 = *(__m128i **)(a1 + 864);
      *v12 = _mm_loadu_si128((const __m128i *)(a1 + 96));
      v12[1] = _mm_loadu_si128((const __m128i *)(a1 + 112));
      v12[2].m128i_i32[0] = *(_DWORD *)(a1 + 128);
      *a5 = 0;
      return 1;
    }
  }
  return 0;
}

