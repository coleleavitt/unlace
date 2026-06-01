unsigned __int64 __fastcall sub_32FD0(__int64 a1, _QWORD *a2)
{
  __m128i v3; // xmm0
  int v4; // r12d
  int v5; // r14d
  __int64 v6; // rdi
  int v7; // eax
  __m128i v8; // xmm0
  unsigned int v9; // ebx
  int v10; // r12d
  signed int v11; // r13d
  int v12; // ebp
  __int64 v13; // r14
  char v14; // al
  int v15; // edi
  char v16; // si
  __int64 v18; // rsi
  __m128i v19; // [rsp+0h] [rbp-88h] BYREF
  int v20; // [rsp+14h] [rbp-74h]
  _QWORD *v21; // [rsp+18h] [rbp-70h]
  __int64 v22; // [rsp+20h] [rbp-68h]
  __int64 v23; // [rsp+28h] [rbp-60h]
  __m128i v24; // [rsp+30h] [rbp-58h] BYREF
  char v25; // [rsp+40h] [rbp-48h]
  unsigned __int64 v26; // [rsp+48h] [rbp-40h]

  v3 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1, (__m128i)(unsigned __int64)a1);
  v4 = 3;
  v5 = *(_DWORD *)(a1 + 212) - *(_DWORD *)(a1 + 208);
  v21 = a2;
  v6 = *(_QWORD *)(a1 + 192);
  v26 = __readfsqword(0x28u);
  v19 = v3;
  v20 = v5;
  v7 = sub_26300(v6);
  v8 = _mm_load_si128(&v19);
  BYTE4(v23) = 1;
  LODWORD(v23) = v7;
  v25 = 0;
  v19.m128i_i64[0] = (__int64)&v24;
  v24 = v8;
  sub_32950((__int64)&v24, 0, v23, 1u);
  if ( !*(_BYTE *)(a1 + 268) )
    v4 = 1;
  v9 = 0;
  v10 = v20 + v4;
  if ( v10 > 0 )
  {
    do
    {
      while ( 1 )
      {
        v11 = v9++;
        v12 = *(_DWORD *)(a1 + 208);
        v13 = *(_QWORD *)(a1 + 560) + (*(_QWORD *)(a1 + 568) << 6) - 64LL;
        v22 = sub_28D80(a1, v9);
        v14 = *(_BYTE *)(v13 + 16) & 1;
        if ( !BYTE4(v22) )
          break;
        if ( v14 && *(_BYTE *)(v13 + 12) && *(_DWORD *)(v13 + 8) == (_DWORD)v22 )
          goto LABEL_20;
        *(_DWORD *)(v13 + 4) = v11;
        sub_32950(v19.m128i_i64[0], v9, v22, 1u);
LABEL_9:
        if ( v9 == v10 )
          return v26 - __readfsqword(0x28u);
      }
      if ( v20 > v11 )
      {
        v18 = *v21 + 8LL * (v11 + v12);
        v23 = *(_QWORD *)v18;
        v15 = *(_DWORD *)v18;
        v16 = *(_BYTE *)(v18 + 4);
      }
      else
      {
        v15 = *(_DWORD *)(a1 + 472);
        v16 = 1;
      }
      if ( !v14 && *(_BYTE *)(v13 + 12) == v16 && (!v16 || v15 == *(_DWORD *)(v13 + 8)) )
      {
LABEL_20:
        *(_DWORD *)(v13 + 4) = v9;
        goto LABEL_9;
      }
      *(_DWORD *)(v13 + 4) = v11;
      LODWORD(v23) = v15;
      BYTE4(v23) = v16;
      sub_32950(v19.m128i_i64[0], v9, v23, 0);
    }
    while ( v9 != v10 );
  }
  return v26 - __readfsqword(0x28u);
}

