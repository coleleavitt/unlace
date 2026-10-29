__int64 __fastcall sub_C700(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r14d
  unsigned __int64 *v4; // rax
  __int64 *v6; // rsi
  char v7; // al
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // edx
  __int64 v19; // rax
  char *v20[47]; // [rsp-3D0h] [rbp-3D8h] BYREF
  __int64 v21; // [rsp-258h] [rbp-260h] BYREF
  __int64 v22; // [rsp-250h] [rbp-258h] BYREF
  __m128i v23; // [rsp-248h] [rbp-250h]
  char v24; // [rsp-238h] [rbp-240h]
  int v25; // [rsp-234h] [rbp-23Ch]
  __int128 v26; // [rsp-230h] [rbp-238h]
  __int64 v27; // [rsp-220h] [rbp-228h]
  __int64 v28; // [rsp-218h] [rbp-220h]
  int v29; // [rsp-210h] [rbp-218h]
  int v30; // [rsp-200h] [rbp-208h] BYREF
  _QWORD *v31; // [rsp-1F8h] [rbp-200h]
  int *v32; // [rsp-1F0h] [rbp-1F8h]
  int *v33; // [rsp-1E8h] [rbp-1F0h]
  __int64 v34; // [rsp-1E0h] [rbp-1E8h]
  int v35; // [rsp-1D0h] [rbp-1D8h] BYREF
  _QWORD *v36; // [rsp-1C8h] [rbp-1D0h]
  int *v37; // [rsp-1C0h] [rbp-1C8h]
  int *v38; // [rsp-1B8h] [rbp-1C0h]
  __int64 v39; // [rsp-1B0h] [rbp-1B8h]
  __int64 v40; // [rsp-1A8h] [rbp-1B0h] BYREF
  _BYTE v41[360]; // [rsp-1A0h] [rbp-1A8h] BYREF
  unsigned __int64 v42; // [rsp-38h] [rbp-40h] BYREF

  v4 = (unsigned __int64 *)&v41[40];
  v42 = __readfsqword(0x28u);
  *(_OWORD *)v41 = -1;
  *(_QWORD *)&v41[24] = 0;
  *(_QWORD *)&v41[32] = 0;
  do
  {
    v6 = nullptr;
    *(_WORD *)v4 = 0;
    v4 += 5;
    *((_WORD *)v4 - 19) = 0;
    *((_WORD *)v4 - 18) = 0;
    *((_DWORD *)v4 - 2) = 0;
    *((_WORD *)v4 - 17) = 0;
    *((_OWORD *)v4 - 2) = 0;
    *(v4 - 2) = 0;
  }
  while ( &v42 != v4 );
  v7 = *(_BYTE *)(a2 + 1);
  *(_QWORD *)&v41[16] = a3;
  if ( v7 == 3 )
  {
    if ( *(_BYTE *)(a2 + 32) != 3 || (unsigned int)*(unsigned __int16 *)(a2 + 6) - 14 > 1 )
      return 0;
    qmemcpy(v20, v41, 0x168u);
    v6 = &v21;
    v3 = sub_AD00(
           a1,
           (char *)&v21,
           0,
           nullptr,
           0,
           0,
           (char)v20[0],
           (int)v20[1],
           v20[2],
           (unsigned __int16)v20[3],
           (int)v20[4],
           (__int64)v20[5],
           (__int64)v20[6],
           (__int64)v20[7],
           (int)v20[8],
           (int)v20[9],
           (__int64)v20[10]);
    if ( (_BYTE)v3 )
    {
LABEL_29:
      v19 = v21;
      *(_BYTE *)(a2 + 1) = 4;
      *(_QWORD *)(a2 + 16) = v19;
      return v3;
    }
    v7 = *(_BYTE *)(a2 + 1);
  }
  if ( v7 != 4 || (unsigned int)*(unsigned __int16 *)(a2 + 6) - 14 <= 1 )
    return 0;
  v24 = 0;
  v25 = 0;
  v32 = &v30;
  v33 = &v30;
  v23 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v40, (__m128i)(unsigned __int64)&v22);
  v22 = *(_QWORD *)&v41[16];
  v27 = *(_QWORD *)&v41[16];
  v28 = -1;
  v29 = 0;
  v30 = 0;
  v31 = nullptr;
  v34 = 0;
  v35 = 0;
  v36 = nullptr;
  v37 = &v35;
  v38 = &v35;
  v39 = 0;
  v26 = 0;
  *(_QWORD *)&v26 = get_func(*(_QWORD *)&v41[16]);
  if ( !(_QWORD)v26 )
  {
    *((_QWORD *)&v26 + 1) = getseg(v27);
    if ( !*((_QWORD *)&v26 + 1) )
    {
      if ( under_debugger )
        BUG();
      interr(10183);
      goto LABEL_29;
    }
  }
  while ( 1 )
  {
    if ( !(unsigned int)sub_A480(&v22, (unsigned __int64)v6, v8, v9, v10)
      || (int)decode_insn(v41, v22, v11, v12, v13, v14, 0.0, v20[46], v21, v22) <= 0 )
    {
LABEL_21:
      v3 = 0;
      goto LABEL_22;
    }
    v17 = *(unsigned __int16 *)(a2 + 6);
    if ( *(_WORD *)&v41[24] == 1
      && v41[81] == 1
      && *(_WORD *)&v41[86] == (_WORD)v17
      && v41[41] == 1
      && (unsigned int)*(unsigned __int16 *)&v41[46] - 14 <= 1 )
    {
      break;
    }
LABEL_8:
    v6 = (__int64 *)v41;
    if ( sub_94B0(a1, (__int64)v41, v17, -1, v15, v16) )
      goto LABEL_21;
  }
  qmemcpy(v20, v41, 0x168u);
  v3 = sub_AD00(
         a1,
         (char *)&v21,
         v17,
         nullptr,
         v15,
         v16,
         (char)v20[0],
         (int)v20[1],
         v20[2],
         (unsigned __int16)v20[3],
         (int)v20[4],
         (__int64)v20[5],
         (__int64)v20[6],
         (__int64)v20[7],
         (int)v20[8],
         (int)v20[9],
         (__int64)v20[10]);
  if ( !(_BYTE)v3 )
  {
    v17 = *(unsigned __int16 *)(a2 + 6);
    goto LABEL_8;
  }
  *(_WORD *)(a2 + 6) = *(_WORD *)&v41[46];
  *(_QWORD *)(a2 + 16) += v21;
LABEL_22:
  sub_8B70(v36);
  sub_8D40(v31);
  return v3;
}
