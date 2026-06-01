__int64 __fastcall sub_13F7B0(__int64 a1, __int64 a2, double a3)
{
  unsigned int v3; // r12d
  __int64 v7; // rdx
  __int64 v8; // rcx
  _BYTE *v9; // r12
  unsigned int v10; // eax
  __m128i v11; // xmm1
  char v12; // al
  unsigned __int64 v13; // xmm0_8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r12
  int v17; // eax
  __int64 v18; // r13
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r12
  __int64 v23; // rsi
  __int64 v24; // rdx
  char v25; // al
  __int64 v26; // rdi
  char v27; // al
  __m128i v28; // xmm2
  unsigned __int8 *v29; // [rsp+0h] [rbp-C8h]
  int v30; // [rsp+Ch] [rbp-BCh]
  char *v31; // [rsp+10h] [rbp-B8h]
  _BYTE v32[4]; // [rsp+20h] [rbp-A8h] BYREF
  signed int v33; // [rsp+24h] [rbp-A4h]
  unsigned __int8 *v34; // [rsp+28h] [rbp-A0h]
  __int128 v35; // [rsp+30h] [rbp-98h] BYREF
  unsigned __int64 *v36; // [rsp+40h] [rbp-88h] BYREF
  __int128 v37; // [rsp+48h] [rbp-80h]
  __int128 v38; // [rsp+60h] [rbp-68h] BYREF
  __int64 v39; // [rsp+70h] [rbp-58h] BYREF
  __int128 v40; // [rsp+78h] [rbp-50h]
  unsigned __int64 v41; // [rsp+88h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a2 + 64) == 14 && sub_11E8C0((unsigned int *)a2) && (~*(_DWORD *)(a2 + 4) & 0x200800) != 0 )
  {
    v9 = *(_BYTE **)(a2 + 72);
    if ( *v9 != v9[16] )
      goto LABEL_7;
    v24 = *(_QWORD *)(a2 + 72);
    v35 = 0u;
    v36 = nullptr;
    v37 = 0;
    sub_123EA0(a1, (__int64 *)&v35, v24, 0, 0xFFFF0000, 0.0);
    a3 = 0.0;
    v38 = 0u;
    v39 = 0;
    v40 = 0;
    sub_123EA0(a1, (__int64 *)&v38, (__int64)(v9 + 16), 0, 0xFFFF0000, 0.0);
    v25 = sub_64780(&v35, &v38);
    v26 = v39;
    if ( !v25 )
    {
      v27 = sub_318470(&v36, (__int64)&v39);
      v26 = v39;
      if ( !v27 )
      {
        if ( v39 )
        {
          *(_QWORD *)&v40 = 0;
          qfree(v39);
        }
        qfree(v38);
        if ( v36 )
        {
          *(_QWORD *)&v37 = 0;
          qfree((__int64)v36);
        }
        qfree(v35);
LABEL_7:
        v29 = (unsigned __int8 *)(a2 + 64);
        sub_123A40((__int64)v32, (unsigned __int8 *)(a2 + 64), v7, v8);
        v10 = sub_138140(*(_QWORD **)(a1 + 64), v33, (*(_BYTE *)(a2 + 65) & 2) == 0, a3);
        v3 = v10;
        if ( v10 == -1 )
        {
LABEL_11:
          sub_11CDA0((__int64)v32);
          return v3;
        }
        v11 = _mm_cvtsi32_si128(v10);
        v12 = *(_BYTE *)(a2 + 65);
        LODWORD(v35) = 1;
        v13 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v33), v11).m128i_u64[0];
        BYTE1(v35) = v12;
        *(_QWORD *)((char *)&v35 + 4) = v13;
        v30 = sub_13E2D0(a1, a2, (__int64)v32, (__int64)&v35, *(double *)&v13, (__m128)v11);
        if ( v30 == 1 )
        {
          v16 = *(_QWORD *)(a1 + 64);
          if ( (*(_BYTE *)(v16 + 2) & 0x10) != 0 )
          {
LABEL_10:
            sub_1B26E0((unsigned __int64)v32);
            sub_66FA0(v16, (*(_BYTE *)(*(_QWORD *)(a1 + 64) + 2LL) & 0x10) != 0);
            v3 = 1;
            sub_11CDA0((__int64)&v35);
            goto LABEL_11;
          }
        }
        else
        {
          v18 = j__qalloc_or_throw(80, a2, v14, v15);
          v19 = *(_QWORD *)(a2 + 24);
          v31 = (char *)(v18 + 32);
          *(_QWORD *)(v18 + 32) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v18 + 40) = 0;
          *(_QWORD *)(v18 + 48) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v18 + 56) = 0;
          *(_QWORD *)(v18 + 64) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v18 + 72) = 0;
          sub_330970(v18, v19);
          if ( !v30 && *(_DWORD *)a2 == 4 && *(_BYTE *)(a2 + 32) == 1 )
          {
            v28 = _mm_cvtsi32_si128(*(_DWORD *)(a2 + 40));
            LODWORD(v38) = 1;
            v13 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v33), v28).m128i_u64[0];
            *(_QWORD *)((char *)&v38 + 4) = v13;
            sub_125180((unsigned __int8 *)&v35, (unsigned __int8 *)&v38);
            sub_11CDA0((__int64)&v38);
            sub_137FB0(*(_QWORD *)(a1 + 64), v3, v33, *(double *)&v13, (__m128)v11);
            *(_DWORD *)(a2 + 4) = 0;
            sub_11CDA0(a2 + 48);
            v22 = a2;
          }
          else
          {
            sub_125180(v29, (unsigned __int8 *)&v35);
            v22 = j__qalloc_or_throw(80, (__int64)&v35, v20, v21);
            v23 = *(_QWORD *)(a2 + 24);
            *(_QWORD *)(v22 + 32) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v22 + 40) = 0;
            *(_QWORD *)(v22 + 48) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v22 + 56) = 0;
            *(_QWORD *)(v22 + 64) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v22 + 72) = 0;
            sub_330970(v22, v23);
          }
          *(_DWORD *)v18 = 10;
          sub_11CA10(v31, (char *)&v35);
          sub_125180((unsigned __int8 *)(v18 + 64), v34);
          *(_DWORD *)(v18 + 4) |= 0x200000u;
          *(_DWORD *)v22 = 11;
          sub_125180((unsigned __int8 *)(v22 + 32), (unsigned __int8 *)v31);
          sub_125180((unsigned __int8 *)(v22 + 64), v34 + 16);
          *(_DWORD *)(v22 + 4) |= 0x200000u;
          sub_A3160(a1, (_QWORD *)v18, a2, *(double *)&v13);
          if ( v22 != a2 )
            sub_A3160(a1, (_QWORD *)v22, a2, *(double *)&v13);
          v16 = *(_QWORD *)(a1 + 64);
          *(_DWORD *)(a1 + 24) |= 0x80u;
          if ( (*(_BYTE *)(v16 + 2) & 0x10) != 0 )
            goto LABEL_10;
        }
        v17 = *(_DWORD *)(a1 + 24);
        BYTE1(v17) &= ~2u;
        LOBYTE(v17) = v17 | 0x80;
        *(_DWORD *)(a1 + 24) = v17;
        goto LABEL_10;
      }
    }
    if ( v26 )
    {
      *(_QWORD *)&v40 = 0;
      qfree(v26);
    }
    qfree(v38);
    if ( v36 )
    {
      *(_QWORD *)&v37 = 0;
      qfree((__int64)v36);
    }
    qfree(v35);
  }
  return 0;
}

