__int64 __fastcall sub_9EA00(__int128 a1)
{
  unsigned int v1; // r15d
  int v3; // r12d
  __int64 v4; // rbx
  __int64 v5; // r13
  _DWORD *v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rax
  int v9; // eax
  _QWORD v10[4]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v11[2]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v12; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v13; // [rsp+58h] [rbp-A8h]
  __int64 v14; // [rsp+68h] [rbp-98h]
  _QWORD v15[4]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v16[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v17[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v18[10]; // [rsp+B0h] [rbp-50h] BYREF

  v18[3] = __readfsqword(0x28u);
  if ( *(_BYTE *)(*((_QWORD *)&a1 + 1) + 32LL) == 4 )
  {
    v3 = *(_DWORD *)(*((_QWORD *)&a1 + 1) + 68LL);
    v4 = *((_QWORD *)&a1 + 1);
    if ( (unsigned __int8)sub_11FD80((char *)(*((_QWORD *)&a1 + 1) + 48LL), v15, 1u) )
    {
      if ( 8 * v3 - 1 == v15[0] )
      {
        v10[0] = &off_4DBDF0;
        v11[0] = 0xFFFFFFFF00000000LL;
        v12 = 0xFFFFFFFF00000000LL;
        v10[1] = a1;
        v14 = 0x4FFFFFFFFLL;
        v10[2] = 0;
        v10[3] = 0;
        v11[1] = 0;
        v13 = 0;
        v5 = sub_954F0((__int64)v10, *((__int64 *)&a1 + 1), 0);
        if ( !v5
          || (v6 = *(_DWORD **)(*((_QWORD *)&a1 + 1) + 40LL), *(_DWORD *)v5 != *v6)
          || !(unsigned int)sub_130480(
                              *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL),
                              (const __m128i *)a1,
                              *((__int64 *)&a1 + 1),
                              v6,
                              v5,
                              v5 + 32,
                              v5 + 48,
                              0) )
        {
          v1 = 0;
LABEL_9:
          v10[0] = &off_4DBDF0;
          sub_11CDA0((__int64)&v12);
          sub_11CDA0((__int64)v11);
          return v1;
        }
        v7 = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 24LL);
        v16[1] = 0;
        v16[0] = 0xFFFFFFFF00000000LL;
        v17[0] = 0xFFFFFFFF00000000LL;
        v17[1] = 0;
        v18[0] = 0xFFFFFFFF00000000LL;
        v18[1] = 0;
        sub_330970((__int64)v15, v7);
        LODWORD(v15[0]) = 8;
        sub_125180((__int64)v16, (unsigned __int8 *)(v5 + 64));
        sub_125180((__int64)v18, (unsigned __int8 *)(v5 + 64));
        v8 = *((_QWORD *)&v13 + 1);
        if ( (_DWORD)v14 == 1 )
        {
          if ( *((_QWORD *)&v13 + 1) )
          {
LABEL_14:
            *((_QWORD *)&a1 + 1) = *(_QWORD *)(v4 + 8);
            v1 = sub_132E20(a1, (__int64)v18, *(_QWORD *)(v8 + 8), v8 + 64, 0);
            if ( (_BYTE)v1
              && LOBYTE(v18[0]) != 4
              && (unsigned int)sub_944B0((const __m128i *)a1, v5, v4, (__int64)v15, 0) )
            {
              if ( v4 && sub_122240(v5, *(_QWORD *)(v4 + 8), 0) )
              {
                sub_1253A0(v4, v5);
                v4 = v5;
              }
              sub_11D890(v4, (__int64)v15);
              if ( *((_QWORD *)&v13 + 1) )
                sub_11D5A0(*((__int64 *)&v13 + 1));
              v9 = *(_DWORD *)(a1 + 24);
              BYTE1(v9) &= ~2u;
              LOBYTE(v9) = v9 | 0x80;
              *(_DWORD *)(a1 + 24) = v9;
              sub_11D5D0(v4, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL));
              *((_QWORD *)&a1 + 1) = v4;
              sub_992D0(a1, 0.0);
            }
            else
            {
              v1 = 0;
            }
            sub_11CDA0((__int64)v18);
            sub_11CDA0((__int64)v17);
            sub_11CDA0((__int64)v16);
            goto LABEL_9;
          }
        }
        else if ( *((_QWORD *)&v13 + 1) )
        {
          if ( !under_debugger )
            sub_383060(0xC9DFu, 0.0);
          BUG();
        }
        v8 = v4;
        goto LABEL_14;
      }
    }
  }
  return 0;
}

