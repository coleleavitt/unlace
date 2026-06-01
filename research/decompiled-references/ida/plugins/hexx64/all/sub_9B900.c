__int64 __fastcall sub_9B900(__int128 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v8; // rax
  __int64 v9; // r14
  unsigned __int8 v10; // r13
  int v11; // eax
  unsigned __int8 v12; // [rsp+1Fh] [rbp-E1h]
  int v13; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v14; // [rsp+28h] [rbp-D8h]
  _QWORD v15[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v16[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v17[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v18[4]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v19[2]; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v20; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v21; // [rsp+A8h] [rbp-58h]
  __int64 v22; // [rsp+B8h] [rbp-48h]
  int v23; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v24; // [rsp+C8h] [rbp-38h]

  v5 = *(_QWORD *)(a1 + 480);
  v24 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(v5 + 112);
  v12 = sub_1205A0(*((_BYTE **)&a1 + 1), v6, 0, a3, a4, a5);
  if ( v12 )
  {
    return 0;
  }
  else
  {
    v18[1] = a1;
    v19[0] = 0xFFFFFFFF00000000LL;
    v20 = 0xFFFFFFFF00000000LL;
    v18[0] = &off_4DBE48;
    v22 = 0xFFFFFFFFLL;
    v18[2] = 0;
    v18[3] = 0;
    v19[1] = 0;
    v23 = 10;
    v21 = 0;
    v8 = sub_954F0((__int64)v18, *((__int64 *)&a1 + 1), 0);
    v9 = v8;
    if ( v8 )
    {
      v10 = sub_12EA80(v6, (const __m128i *)a1, *((__int64 *)&a1 + 1), *((_QWORD *)&a1 + 1) + 32LL, v8, v8 + 32, 0);
      if ( v10 )
      {
        if ( *(_DWORD *)(*((_QWORD *)&a1 + 1) + 36LL) == 2 * *(_DWORD *)(*((_QWORD *)&a1 + 1) + 68LL) )
        {
          v15[1] = 0;
          v15[0] = 0xFFFFFFFF00000000LL;
          v16[0] = 0xFFFFFFFF00000000LL;
          v17[0] = 0xFFFFFFFF00000000LL;
          v16[1] = 0;
          v17[1] = 0;
          v14 = 0;
          sub_1253A0((__int64)&v13, v9);
          sub_1571F0(
            a1,
            *(_QWORD *)(v9 + 8),
            (__int64)v17,
            *(_QWORD *)(*((_QWORD *)&a1 + 1) + 8LL),
            *((_QWORD *)&a1 + 1) + 64LL,
            1);
          v13 = 4;
          if ( (unsigned int)sub_944B0((const __m128i *)a1, *((__int64 *)&a1 + 1), v9, (__int64)&v13, 0) )
          {
            sub_1253A0(v9, (__int64)&v13);
            sub_11D5A0(*((__int64 *)&a1 + 1));
            v11 = *(_DWORD *)(a1 + 24);
            BYTE1(v11) &= ~2u;
            LOBYTE(v11) = v11 | 0x80;
            *(_DWORD *)(a1 + 24) = v11;
            sub_11D5D0(v9, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL));
            *((_QWORD *)&a1 + 1) = v9;
            sub_992D0(a1, 0.0);
            if ( (*(_BYTE *)(v9 + 33) & 2) != 0 )
              *(_BYTE *)(v9 + 65) |= 2u;
            v12 = v10;
          }
          sub_11CDA0((__int64)v17);
          sub_11CDA0((__int64)v16);
          sub_11CDA0((__int64)v15);
        }
      }
    }
    v18[0] = &off_4DBDF0;
    sub_11CDA0((__int64)&v20);
    sub_11CDA0((__int64)v19);
  }
  return v12;
}

