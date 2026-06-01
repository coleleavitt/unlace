__int64 __fastcall sub_13ABF0(__int128 a1)
{
  unsigned int v1; // r12d
  __int128 v3; // kr00_16
  _BYTE *v4; // r12
  unsigned int v5; // eax
  __m128i v6; // xmm1
  char v7; // al
  __int64 v8; // r12
  int v9; // ebx
  const char *v10; // rax
  int v11; // eax
  __int64 v12; // r13
  __int64 v13; // rsi
  __int64 v14; // r12
  __int64 v15; // rsi
  __int64 v16; // rdx
  char v17; // al
  __int64 v18; // rdi
  char v19; // al
  __m128i v20; // xmm2
  int v21; // [rsp+Ch] [rbp-BCh]
  char *v22; // [rsp+10h] [rbp-B8h]
  _BYTE v23[4]; // [rsp+20h] [rbp-A8h] BYREF
  signed int v24; // [rsp+24h] [rbp-A4h]
  unsigned __int8 *v25; // [rsp+28h] [rbp-A0h]
  __int128 v26; // [rsp+30h] [rbp-98h] BYREF
  __int64 v27; // [rsp+40h] [rbp-88h] BYREF
  __int128 v28; // [rsp+48h] [rbp-80h]
  __int128 v29; // [rsp+60h] [rbp-68h] BYREF
  __int64 v30; // [rsp+70h] [rbp-58h] BYREF
  __int128 v31; // [rsp+78h] [rbp-50h]
  unsigned __int64 v32; // [rsp+88h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  if ( *(_BYTE *)(*((_QWORD *)&a1 + 1) + 64LL) == 14 )
  {
    v3 = a1;
    if ( sub_119D00(*((unsigned int **)&a1 + 1)) )
    {
      if ( (~*(_DWORD *)(*((_QWORD *)&a1 + 1) + 4LL) & 0x200800) != 0 )
      {
        v4 = *(_BYTE **)(*((_QWORD *)&a1 + 1) + 72LL);
        if ( *v4 != v4[16] )
          goto LABEL_7;
        v16 = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 72LL);
        *((_QWORD *)&a1 + 1) = &v26;
        v26 = 0u;
        v27 = 0;
        v28 = 0;
        sub_11F2E0(a1, v16, 0, 0xFFFF0000);
        *((_QWORD *)&a1 + 1) = &v29;
        v29 = 0u;
        v30 = 0;
        v31 = 0;
        sub_11F2E0(a1, (__int64)(v4 + 16), 0, 0xFFFF0000);
        v17 = sub_5FD00(&v26, &v29);
        v18 = v30;
        if ( !v17 )
        {
          v19 = sub_312BB0(&v27, &v30);
          v18 = v30;
          if ( !v19 )
          {
            if ( v30 )
            {
              *(_QWORD *)&v31 = 0;
              qfree();
            }
            qfree();
            if ( v27 )
            {
              *(_QWORD *)&v28 = 0;
              qfree();
            }
            qfree();
LABEL_7:
            sub_11EE80((__int64)v23, (unsigned __int8 *)(*((_QWORD *)&v3 + 1) + 64LL));
            v5 = sub_133580(*(_QWORD **)(v3 + 64), v24, (*(_BYTE *)(*((_QWORD *)&v3 + 1) + 65LL) & 2) == 0);
            v1 = v5;
            if ( v5 == -1 )
            {
LABEL_11:
              sub_1181E0((__int64)v23);
              return v1;
            }
            v6 = _mm_cvtsi32_si128(v5);
            v7 = *(_BYTE *)(*((_QWORD *)&v3 + 1) + 65LL);
            LODWORD(v26) = 1;
            BYTE1(v26) = v7;
            *(_QWORD *)((char *)&v26 + 4) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v24), v6).m128i_u64[0];
            v21 = sub_139710(v3, (__int64)v23, (__int64)&v26);
            if ( v21 == 1 )
            {
              v8 = *(_QWORD *)(v3 + 64);
              if ( (*(_BYTE *)(v8 + 2) & 0x10) != 0 )
              {
LABEL_10:
                v9 = *(_DWORD *)(v3 + 72);
                v10 = (const char *)sub_1AD9E0(v23);
                sub_62520(
                  v8,
                  (*(_BYTE *)(*(_QWORD *)(v3 + 64) + 2LL) & 0x10) != 0,
                  (__int64)"deleted dest pair %s in block %d",
                  v10,
                  v9);
                v1 = 1;
                sub_1181E0((__int64)&v26);
                goto LABEL_11;
              }
            }
            else
            {
              v12 = j__qalloc_or_throw();
              v13 = *(_QWORD *)(*((_QWORD *)&v3 + 1) + 24LL);
              v22 = (char *)(v12 + 32);
              *(_QWORD *)(v12 + 32) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v12 + 40) = 0;
              *(_QWORD *)(v12 + 48) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v12 + 56) = 0;
              *(_QWORD *)(v12 + 64) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v12 + 72) = 0;
              sub_32ADE0(v12, v13);
              if ( !v21 && **((_DWORD **)&v3 + 1) == 4 && *(_BYTE *)(*((_QWORD *)&v3 + 1) + 32LL) == 1 )
              {
                v20 = _mm_cvtsi32_si128(*(_DWORD *)(*((_QWORD *)&v3 + 1) + 40LL));
                LODWORD(v29) = 1;
                *(_QWORD *)((char *)&v29 + 4) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v24), v20).m128i_u64[0];
                sub_1205C0((__int64)&v26, (unsigned __int8 *)&v29);
                sub_1181E0((__int64)&v29);
                sub_1333F0(*(_QWORD *)(v3 + 64), v1, v24);
                *(_DWORD *)(*((_QWORD *)&v3 + 1) + 4LL) = 0;
                sub_1181E0(*((_QWORD *)&v3 + 1) + 48LL);
                v14 = *((_QWORD *)&v3 + 1);
              }
              else
              {
                sub_1205C0(*((_QWORD *)&v3 + 1) + 64LL, (unsigned __int8 *)&v26);
                v14 = j__qalloc_or_throw();
                v15 = *(_QWORD *)(*((_QWORD *)&v3 + 1) + 24LL);
                *(_QWORD *)(v14 + 32) = 0xFFFFFFFF00000000LL;
                *(_QWORD *)(v14 + 40) = 0;
                *(_QWORD *)(v14 + 48) = 0xFFFFFFFF00000000LL;
                *(_QWORD *)(v14 + 56) = 0;
                *(_QWORD *)(v14 + 64) = 0xFFFFFFFF00000000LL;
                *(_QWORD *)(v14 + 72) = 0;
                sub_32ADE0(v14, v15);
              }
              *(_DWORD *)v12 = 10;
              sub_117E50(v22, (char *)&v26);
              sub_1205C0(v12 + 64, v25);
              *(_DWORD *)(v12 + 4) |= 0x200000u;
              *(_DWORD *)v14 = 11;
              sub_1205C0(v14 + 32, (unsigned __int8 *)v22);
              sub_1205C0(v14 + 64, v25 + 16);
              *(_DWORD *)(v14 + 4) |= 0x200000u;
              sub_9E5A0(v3, (_QWORD *)v12, *((__int64 *)&v3 + 1));
              if ( v14 != *((_QWORD *)&v3 + 1) )
                sub_9E5A0(v3, (_QWORD *)v14, *((__int64 *)&v3 + 1));
              v8 = *(_QWORD *)(v3 + 64);
              *(_DWORD *)(v3 + 24) |= 0x80u;
              if ( (*(_BYTE *)(v8 + 2) & 0x10) != 0 )
                goto LABEL_10;
            }
            v11 = *(_DWORD *)(v3 + 24);
            BYTE1(v11) &= ~2u;
            LOBYTE(v11) = v11 | 0x80;
            *(_DWORD *)(v3 + 24) = v11;
            goto LABEL_10;
          }
        }
        if ( v18 )
        {
          *(_QWORD *)&v31 = 0;
          qfree();
        }
        qfree();
        if ( v27 )
        {
          *(_QWORD *)&v28 = 0;
          qfree();
        }
        qfree();
      }
    }
  }
  return 0;
}

