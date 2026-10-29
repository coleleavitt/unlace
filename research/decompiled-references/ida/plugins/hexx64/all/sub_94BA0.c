__int64 __fastcall sub_94BA0(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v5; // r15
  unsigned int v6; // r14d
  int v8; // edx
  int v9; // esi
  __int64 v10; // rdi
  __int64 v11; // rdx
  _DWORD *v12; // rax
  _DWORD *v13; // r12
  __int64 v14; // r14
  unsigned __int8 *v15; // rdi
  int v16; // eax
  char v17; // r15
  __int64 v18; // rax
  __int64 v19; // rbx
  int v20; // eax
  int v21; // [rsp+4h] [rbp-6Ch]
  __int64 v23; // [rsp+10h] [rbp-60h] BYREF
  __int64 v24; // [rsp+18h] [rbp-58h]
  __int64 v25; // [rsp+20h] [rbp-50h]
  __int128 v26; // [rsp+28h] [rbp-48h]
  unsigned __int64 v27; // [rsp+38h] [rbp-38h]

  v27 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(a1 + 112) && *(_DWORD *)(a1 + 72) )
    return 0;
  v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 480LL) + 112LL);
  if ( *(_DWORD *)a3 == 14 )
  {
    v13 = (_DWORD *)a3;
    v14 = 0;
  }
  else
  {
    if ( *(_DWORD *)a3 != 4 || *(_BYTE *)(a3 + 32) != 1 )
      return 0;
    v8 = *(_DWORD *)(a3 + 36);
    v9 = *(_DWORD *)(a3 + 40);
    v23 = 0;
    v24 = 0;
    sub_63E80(&v23, v9, v8, a4);
    v10 = *(_QWORD *)(a1 + 8);
    v25 = 0;
    v11 = *(_QWORD *)(a3 + 16);
    v26 = 0;
    v12 = (_DWORD *)sub_129150(v10, &v23, v11, 0, 0, 0, 0x101u);
    v13 = v12;
    if ( !v12 || *v12 != 14 )
    {
      if ( v25 )
      {
        *(_QWORD *)&v26 = 0;
        qfree(v25);
      }
      qfree(v23);
      return 0;
    }
    if ( v25 )
    {
      *(_QWORD *)&v26 = 0;
      qfree(v25);
    }
    qfree(v23);
    v14 = a3;
  }
  v21 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 36LL);
  if ( v13[9] < v21
    || !(unsigned int)sub_130480(
                        v5,
                        *(const __m128i **)(a1 + 8),
                        (__int64)v13,
                        v13,
                        *(_QWORD *)(a1 + 88),
                        *(_QWORD *)(a1 + 96),
                        *(_QWORD *)(a1 + 104),
                        3) )
  {
    return 0;
  }
  v24 = 0;
  v23 = 0xFFFFFFFF00000000LL;
  v15 = (unsigned __int8 *)(a3 + 64);
  if ( v13[17] > v21 )
  {
    sub_125180((__int64)&v23, (unsigned __int8 *)(a3 + 64));
    v15 = (unsigned __int8 *)&v23;
    if ( !(unsigned __int8)sub_1272B0((unsigned __int64)&v23, v5, v21, 0) )
      goto LABEL_27;
  }
  if ( !sub_125B60(v15, a1 + 32, 0) )
    goto LABEL_27;
  if ( v14 )
    v13 = (_DWORD *)v14;
  v16 = sub_944B0(*(const __m128i **)(a1 + 8), (__int64)v13, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 80), 0);
  v17 = v16;
  if ( !v16 )
    goto LABEL_27;
  if ( !v14 )
    v14 = *(_QWORD *)(a1 + 16);
  v6 = sub_1321C0(
         *(const __m128i **)(a1 + 8),
         v14,
         a1 + 32,
         *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL),
         *(_QWORD *)(a1 + 80) + 64LL);
  if ( (_BYTE)v6 )
  {
    v18 = *(_QWORD *)(a1 + 64);
    if ( v18 )
    {
      sub_125180(v18 + 32, (unsigned __int8 *)(a1 + 48));
      sub_125180(*(_QWORD *)(a1 + 64) + 64LL, (unsigned __int8 *)(*(_QWORD *)(a1 + 16) + 64LL));
      sub_125180(*(_QWORD *)(a1 + 16) + 64LL, (unsigned __int8 *)(a1 + 48));
    }
    else if ( (v17 & 2) != 0 )
    {
      v19 = *(_QWORD *)(a1 + 8);
      sub_11D5A0((__int64)v13);
      v20 = *(_DWORD *)(v19 + 24);
      BYTE1(v20) &= ~2u;
      LOBYTE(v20) = v20 | 0x80;
      *(_DWORD *)(v19 + 24) = v20;
    }
  }
  else
  {
LABEL_27:
    v6 = 0;
  }
  sub_11CDA0((__int64)&v23);
  return v6;
}

