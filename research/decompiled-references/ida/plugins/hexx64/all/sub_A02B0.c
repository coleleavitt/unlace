__int64 __fastcall sub_A02B0(__int128 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r13
  unsigned int v3; // r15d
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rbp
  unsigned int v8; // r13d
  int v9; // eax
  __int64 v10; // [rsp+8h] [rbp-120h]
  int v11; // [rsp+18h] [rbp-110h]
  int v12; // [rsp+3Ch] [rbp-ECh] BYREF
  __int64 v13; // [rsp+40h] [rbp-E8h] BYREF
  __int128 v14; // [rsp+48h] [rbp-E0h]
  _QWORD v15[2]; // [rsp+60h] [rbp-C8h] BYREF
  _QWORD v16[2]; // [rsp+70h] [rbp-B8h] BYREF
  _QWORD v17[2]; // [rsp+80h] [rbp-A8h] BYREF
  _QWORD v18[4]; // [rsp+90h] [rbp-98h] BYREF
  _QWORD v19[2]; // [rsp+B0h] [rbp-78h] BYREF
  unsigned __int64 v20; // [rsp+C0h] [rbp-68h] BYREF
  __int128 v21; // [rsp+C8h] [rbp-60h]
  __int64 v22; // [rsp+D8h] [rbp-50h]
  int v23; // [rsp+E0h] [rbp-48h]
  unsigned __int64 v24; // [rsp+E8h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  if ( **((_DWORD **)&a1 + 1) == 10
    && (v1 = *((_QWORD *)&a1 + 1), *(_BYTE *)(*((_QWORD *)&a1 + 1) + 32LL) == 4)
    && (v2 = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 40LL)) != 0
    && *(_DWORD *)v2 == 23
    && (unsigned __int8)sub_152630(v2, &v12)
    && (v10 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL),
        v3 = sub_127420(*((_QWORD *)&a1 + 1) + 64LL, v10, (unsigned __int8 *)(v2 + 32), v5),
        !(_BYTE)v3) )
  {
    v18[0] = &off_4DBE48;
    v19[0] = 0xFFFFFFFF00000000LL;
    v20 = 0xFFFFFFFF00000000LL;
    v18[1] = a1;
    v22 = 0xFFFFFFFFLL;
    v18[2] = 0;
    v18[3] = 0;
    v19[1] = 0;
    v23 = 24;
    v21 = 0;
    v6 = sub_954F0((__int64)v18, *((__int64 *)&a1 + 1), 1);
    v7 = v6;
    if ( v6 )
    {
      v11 = v12;
      if ( (unsigned __int8)sub_11FD80((char *)(v6 + 48), &v13, 0) )
      {
        if ( v11 == v13 && (unsigned __int8)sub_1301F0((const __m128i *)a1, v7, v7 + 32, *((__int64 *)&a1 + 1), v2 + 32) )
        {
          v15[0] = 0xFFFFFFFF00000000LL;
          v15[1] = 0;
          v16[0] = 0xFFFFFFFF00000000LL;
          v16[1] = 0;
          v17[0] = 0xFFFFFFFF00000000LL;
          v17[1] = 0;
          v14 = 0;
          sub_1253A0((__int64)&v13, *((__int64 *)&a1 + 1));
          LODWORD(v13) = 24;
          sub_125180((__int64)v15, (unsigned __int8 *)(v2 + 32));
          sub_11D2F0((__int64)v16, *(const __m128i **)(v2 + 56), 1);
          sub_125180((__int64)v17, (unsigned __int8 *)(*((_QWORD *)&a1 + 1) + 64LL));
          *((_QWORD *)&a1 + 1) = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 8LL);
          v8 = sub_132E20(a1, (__int64)v17, *(_QWORD *)(v7 + 8), v7 + 64, 1u);
          if ( (_BYTE)v8 )
          {
            sub_11D5D0((__int64)&v13, v10);
            if ( (unsigned int)sub_944B0((const __m128i *)a1, v7, v1, (__int64)&v13, 0) )
            {
              sub_179140(a1, v1);
              sub_179140(a1, v7);
              sub_11D5A0(v7);
              sub_1253A0(v1, (__int64)&v13);
              v9 = *(_DWORD *)(a1 + 24);
              BYTE1(v9) &= ~2u;
              LOBYTE(v9) = v9 | 0x80;
              *(_DWORD *)(a1 + 24) = v9;
              sub_11D5D0(v1, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL));
              *((_QWORD *)&a1 + 1) = v1;
              sub_992D0(a1, 0.0);
              v3 = v8;
            }
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
  else
  {
    return 0;
  }
  return v3;
}

