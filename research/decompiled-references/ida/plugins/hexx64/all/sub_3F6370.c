__int64 __fastcall sub_3F6370(__int64 a1, __int64 a2, __m128i a3, __m128 a4)
{
  int v4; // r13d
  const char **v5; // r15
  const char *v6; // r14
  int v7; // r8d
  __int64 v8; // r15
  char **v9; // r13
  unsigned int v10; // edx
  char v11; // r12
  __int64 v13; // r14
  char *v14; // rsi
  __int64 v15; // rbp
  __int64 v16; // [rsp+8h] [rbp-70h]
  int v17; // [rsp+10h] [rbp-68h]
  _QWORD v18[11]; // [rsp+20h] [rbp-58h] BYREF

  v4 = 0;
  v5 = (const char **)&off_4E9E60;
  v18[3] = __readfsqword(0x28u);
  v16 = *(_QWORD *)(a2 + 40);
  v6 = *(const char **)(v16 + 40);
  while ( strcmp(*v5, v6) )
  {
    ++v4;
    v5 += 3;
    if ( v4 == 20 )
      return 0;
  }
  v7 = *(_DWORD *)(a2 + 68);
  v8 = v4;
  v9 = &(&off_4E9E60)[3 * v4];
  v10 = 0;
  v11 = *((_BYTE *)v9 + 12);
  if ( (((v7 != 4) + 1) & v11) != 0 )
  {
    v17 = *(_DWORD *)(a2 + 68);
    v13 = *(_QWORD *)(v16 + 72);
    sub_12B320(
      *(_QWORD *)(v13 + 24),
      *(unsigned __int64 **)(*(_QWORD *)(a1 + 40) + 112LL),
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL),
      v7,
      a3);
    sub_12B320(
      *(_QWORD *)(v13 + 24) + 80LL,
      *(unsigned __int64 **)(*(_QWORD *)(a1 + 40) + 112LL),
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL),
      v17,
      a3);
    v14 = *(char **)(v13 + 24);
    if ( v9[2] )
    {
      v15 = 25;
      if ( v17 == 4 )
        v15 = 9;
      copy_tinfo_t();
      clear_tinfo_t();
      copy_tinfo_t();
      clear_tinfo_t();
      v18[0] = v15;
      copy_tinfo_t();
      clear_tinfo_t();
      sub_11D4A0(v16 + 32);
      *(_DWORD *)(v16 + 68) = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 68LL);
      *(_DWORD *)(*(_QWORD *)(a1 + 32) + 36LL) = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 68LL);
      **(_DWORD **)(a1 + 32) = 67;
    }
    else
    {
      v18[0] = 0xFFFFFFFF00000000LL;
      v18[1] = 0;
      sub_11CA10((char *)v18, v14);
      sub_11CA10((char *)(*(_QWORD *)(a1 + 32) + 48LL), (char *)(*(_QWORD *)(v13 + 24) + 80LL));
      sub_11CA10((char *)(*(_QWORD *)(a1 + 32) + 32LL), (char *)v18);
      if ( (v11 & 4) != 0 )
        sub_1207E0(
          (char *)(*(_QWORD *)(a1 + 32) + 32LL),
          *(unsigned __int64 **)(*(_QWORD *)(a1 + 40) + 112LL),
          7,
          *(_QWORD *)(v16 + 24),
          v17,
          a3);
      **(_DWORD **)(a1 + 32) = (&off_4E9E60)[3 * v8 + 1];
      *(_BYTE *)(*(_QWORD *)(a1 + 32) + 33LL) |= 4u;
      *(_BYTE *)(*(_QWORD *)(a1 + 32) + 49LL) |= 4u;
      sub_11CDA0((__int64)v18);
    }
    if ( (v11 & 8) != 0 )
      *(_DWORD *)(*(_QWORD *)(a1 + 32) + 4LL) |= 0x10u;
    sub_15BC70(
      *(unsigned int **)(a1 + 32),
      *(unsigned __int8 **)(*(_QWORD *)(a1 + 40) + 112LL),
      0,
      0,
      nullptr,
      nullptr,
      a3,
      a4,
      0);
    return 1;
  }
  return v10;
}

