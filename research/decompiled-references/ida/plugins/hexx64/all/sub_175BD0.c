__int64 __fastcall sub_175BD0(__int64 a1, __int64 a2, __m128i a3)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  unsigned __int64 *v6; // r13
  int v7; // eax
  int v8; // r13d
  int v9; // eax
  unsigned int v10; // r12d
  __int64 v11; // rax
  char v12; // bp
  char v13; // al
  char v15; // dl
  int v16; // eax
  int v17; // r12d
  __int64 v18; // rax
  int v19; // eax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // [rsp+0h] [rbp-98h] BYREF
  int v24; // [rsp+4h] [rbp-94h] BYREF
  unsigned __int8 *v25; // [rsp+8h] [rbp-90h] BYREF
  char v26[8]; // [rsp+10h] [rbp-88h] BYREF
  __int128 v27; // [rsp+18h] [rbp-80h]
  _QWORD v28[2]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v29[2]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v30[9]; // [rsp+50h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(a1 + 56);
  v30[3] = __readfsqword(0x28u);
  v6 = *(unsigned __int64 **)(v4 + 1504);
  v7 = *(_DWORD *)a2;
  if ( *(_DWORD *)v5 == 62 )
  {
    if ( v7 == 1 || v7 == 4 )
    {
      if ( *(_QWORD *)(v5 + 24) == *(_QWORD *)(a2 + 24) )
      {
        if ( sub_1255D0((unsigned __int8 *)(v5 + 64), (__int64)v6, a2 + 32, 0, *(double *)a3.m128i_i64) )
        {
          if ( *(_DWORD *)a2 != 1 )
          {
LABEL_30:
            v10 = 1;
            sub_125180((unsigned __int8 *)(a2 + 32), (unsigned __int8 *)(*(_QWORD *)(a1 + 56) + 32LL));
            sub_125180((unsigned __int8 *)(a2 + 48), (unsigned __int8 *)(*(_QWORD *)(a1 + 56) + 48LL));
            *(_DWORD *)a2 = 62;
            sub_11D5A0(*(_QWORD *)(a1 + 56));
            return v10;
          }
          if ( *(_BYTE *)(a2 + 64) != 1 || !sub_64930(v6 + 13, *(_DWORD *)(a2 + 72)) )
          {
            v20 = *(_DWORD *)(a2 + 4);
            if ( (v20 & 0x10) == 0 )
            {
              BYTE1(v20) |= 0x10u;
              *(_DWORD *)(a2 + 4) = v20;
              goto LABEL_30;
            }
          }
        }
        return 0;
      }
      if ( !under_debugger )
        sub_383060(0xC563u, *(double *)a3.m128i_i64);
    }
    else if ( !under_debugger )
    {
      sub_383060(0xC562u, *(double *)a3.m128i_i64);
    }
    BUG();
  }
  if ( (unsigned int)(v7 - 19) <= 1 )
  {
    v24 = -1;
    v15 = sub_11E2C0((int **)a2, &v23, &v24, 1);
    v16 = v24;
    if ( !v15 || (v16 = sub_11CA90(v23 + v24, *(double *)a3.m128i_i64), v24 = v16, *(_DWORD *)(a2 + 36) != v16) )
    {
      if ( v16 != -1 )
      {
        v17 = sub_64B20(a1 + 272);
        v18 = sub_317010((__int64 *)(a1 + 288));
        if ( v24 == v18 + v17 )
        {
          if ( *(_DWORD *)a2 == 19 )
          {
            if ( sub_11C8A0(a2, &v25) )
            {
              sub_123A40((__int64)v26, v25, v21, v22);
              if ( (unsigned __int8)sub_12AB50((unsigned int **)v25, v6, v24, 1, a3) )
              {
                v10 = sub_175BD0(a1, a2);
                if ( v10 )
                {
                  sub_1207E0((char *)v25, v6, 9, *(_QWORD *)(a2 + 24), *(_DWORD *)(a2 + 68), a3);
                  sub_11CDA0((__int64)v26);
                  return v10;
                }
              }
              sub_11CA10((char *)v25, v26);
              sub_11CDA0((__int64)v26);
            }
            goto LABEL_3;
          }
          if ( (*(_BYTE *)(a2 + 5) & 8) == 0 )
          {
            a3.m128i_i64[0] = 0;
            v28[0] = 0xFFFFFFFF00000000LL;
            v28[1] = 0;
            v29[0] = 0xFFFFFFFF00000000LL;
            v29[1] = 0;
            v30[0] = 0xFFFFFFFF00000000LL;
            v30[1] = 0;
            v27 = 0;
            sub_1253A0((__int64)v26, a2);
            if ( (unsigned __int8)sub_1221A0(a2, (__int64)v6, v24, 273, 1) )
            {
              v19 = sub_175BD0(a1, a2);
              v10 = v19;
              if ( v19 > 0 )
              {
                sub_12B6F0(a2, v6, 9, -1, 1, (__m128i)0LL);
                sub_125180((unsigned __int8 *)(a2 + 64), (unsigned __int8 *)v30);
              }
              else if ( !v19 )
              {
                goto LABEL_21;
              }
              sub_11CDA0((__int64)v30);
              sub_11CDA0((__int64)v29);
              sub_11CDA0((__int64)v28);
              return v10;
            }
LABEL_21:
            sub_1253A0(a2, (__int64)v26);
            sub_11CDA0((__int64)v30);
            sub_11CDA0((__int64)v29);
            sub_11CDA0((__int64)v28);
          }
        }
      }
    }
  }
LABEL_3:
  ++*(_DWORD *)(a1 + 336);
  v8 = *(_DWORD *)(a1 + 44);
  *(_BYTE *)(a1 + 348) = 0;
  v9 = sub_11E900((_BYTE *)a2, a1);
  --*(_DWORD *)(a1 + 336);
  v10 = v9;
  if ( (unsigned int)(v9 + 3) > 1 && v9 != -4 )
  {
    if ( v9 > 0 )
    {
      v11 = *(_QWORD *)(a1 + 320);
      if ( v11 != *(_QWORD *)(a1 + 328) )
      {
        if ( *(_BYTE *)(a1 + 351) != 1 && v11 )
        {
          v12 = *(_DWORD *)(a1 + 344) == 1;
          v13 = sub_11CC50(
                  (unsigned __int8 *)(*(_QWORD *)(a1 + 56) + 64LL),
                  *(_QWORD *)(v11 + 480),
                  0,
                  *(double *)a3.m128i_i64);
          *(_BYTE *)(a1 + 349) = sub_AB6D0(
                                   *(__m128i **)(a1 + 320),
                                   *(unsigned int **)(a1 + 56),
                                   (unsigned int)*(_QWORD *)(a1 + 56) + 64,
                                   3 * (unsigned int)(v12 == v13) + 4,
                                   *(double *)a3.m128i_i64);
        }
        *(_DWORD *)(a1 + 344) = 0;
      }
    }
    return (unsigned int)(*(_DWORD *)(a1 + 44) - v8);
  }
  return v10;
}

