__int64 __fastcall sub_9CFB0(__int128 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r13
  unsigned int v3; // r15d
  __int64 v4; // r12
  __int64 v5; // rax
  int v7; // eax
  char v8; // [rsp+Fh] [rbp-F1h]
  _QWORD v9[4]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v10[2]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v11; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v12; // [rsp+58h] [rbp-A8h]
  __int64 v13; // [rsp+68h] [rbp-98h]
  int v14; // [rsp+70h] [rbp-90h] BYREF
  __int128 v15; // [rsp+78h] [rbp-88h]
  _QWORD v16[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v17[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v18[10]; // [rsp+B0h] [rbp-50h] BYREF

  v18[3] = __readfsqword(0x28u);
  if ( **((_DWORD **)&a1 + 1) != 11 )
    return 0;
  v1 = *((_QWORD *)&a1 + 1);
  if ( *(_BYTE *)(*((_QWORD *)&a1 + 1) + 32LL) != 4 )
    return 0;
  v2 = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 40LL);
  if ( !v2 )
    return 0;
  v3 = 0;
  if ( (unsigned int)(*(_DWORD *)v2 - 8) <= 1 )
  {
    v9[0] = &off_4DBDF0;
    v10[0] = 0xFFFFFFFF00000000LL;
    v11 = 0xFFFFFFFF00000000LL;
    v9[1] = a1;
    v13 = 0xFFFFFFFFLL;
    v9[2] = 0;
    v9[3] = 0;
    v10[1] = 0;
    v12 = 0;
    v4 = sub_954F0((__int64)v9, *((__int64 *)&a1 + 1), 0);
    if ( v4 )
    {
      v5 = *(_QWORD *)(a1 + 480);
      if ( *(_BYTE *)(v2 + 32) == 4 )
      {
        v8 = sub_125B90((unsigned __int8 *)v4, *(_QWORD *)(v5 + 112), *(unsigned int **)(v2 + 40), 0);
        if ( v8 )
          goto LABEL_14;
      }
      else if ( *(_DWORD *)v4 == *(_DWORD *)v2
             && (unsigned __int8)sub_12EA80(
                                   *(_QWORD *)(v5 + 112),
                                   (const __m128i *)a1,
                                   *((__int64 *)&a1 + 1),
                                   v2 + 32,
                                   v4,
                                   v4 + 32,
                                   0) )
      {
        v8 = 0;
        v2 = v4;
LABEL_14:
        v16[1] = 0;
        v16[0] = 0xFFFFFFFF00000000LL;
        v17[0] = 0xFFFFFFFF00000000LL;
        v18[0] = 0xFFFFFFFF00000000LL;
        v17[1] = 0;
        v18[1] = 0;
        v15 = 0;
        sub_1253A0((__int64)&v14, v2);
        sub_125180((__int64)v18, (unsigned __int8 *)(v4 + 64));
        *((_QWORD *)&a1 + 1) = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 8LL);
        v3 = sub_132E20(a1, (__int64)v18, *(_QWORD *)(v1 + 8), v1 + 64, 0);
        if ( !(_BYTE)v3 || LOBYTE(v18[0]) == 4 )
          goto LABEL_22;
        if ( v8 && HIDWORD(v16[0]) == HIDWORD(v18[0]) )
          v14 = 4;
        if ( (unsigned int)sub_944B0((const __m128i *)a1, v4, v1, (__int64)&v14, 0) )
        {
          sub_1253A0(v1, (__int64)&v14);
          *(_QWORD *)(v1 + 24) = *(_QWORD *)(v4 + 24);
          sub_11D5A0(v4);
          v7 = *(_DWORD *)(a1 + 24);
          BYTE1(v7) &= ~2u;
          LOBYTE(v7) = v7 | 0x80;
          *(_DWORD *)(a1 + 24) = v7;
          sub_11D5D0(v1, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL));
          *((_QWORD *)&a1 + 1) = v1;
          sub_992D0(a1, 0.0);
        }
        else
        {
LABEL_22:
          v3 = 0;
        }
        sub_11CDA0((__int64)v18);
        sub_11CDA0((__int64)v17);
        sub_11CDA0((__int64)v16);
        goto LABEL_9;
      }
    }
    v3 = 0;
LABEL_9:
    v9[0] = &off_4DBDF0;
    sub_11CDA0((__int64)&v11);
    sub_11CDA0((__int64)v10);
  }
  return v3;
}

