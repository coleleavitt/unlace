__int64 __fastcall sub_97480(__int128 a1)
{
  unsigned int v1; // ebp
  __int64 v3; // r13
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned __int8 *v8; // r11
  __int64 v9; // rax
  int v10; // r8d
  int v11; // r9d
  unsigned int v12; // eax
  __int64 v13; // rdx
  int v14; // r8d
  int v15; // [rsp+0h] [rbp-C8h]
  _QWORD *v16; // [rsp+8h] [rbp-C0h]
  unsigned __int8 *v17; // [rsp+10h] [rbp-B8h]
  unsigned __int8 *v18; // [rsp+10h] [rbp-B8h]
  __int64 v19; // [rsp+10h] [rbp-B8h]
  int v20; // [rsp+18h] [rbp-B0h]
  __int64 v21; // [rsp+18h] [rbp-B0h]
  __int64 v22; // [rsp+20h] [rbp-A8h] BYREF
  char *v23; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v24[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v25; // [rsp+40h] [rbp-88h]
  __int128 v26; // [rsp+48h] [rbp-80h]
  __int64 v27[3]; // [rsp+60h] [rbp-68h] BYREF
  __int128 v28; // [rsp+78h] [rbp-50h]
  unsigned __int64 v29; // [rsp+88h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  if ( *(int *)(*((_QWORD *)&a1 + 1) + 36LL) > 4 )
    return 0;
  v3 = *((_QWORD *)&a1 + 1) + 64LL;
  v4 = *((_QWORD *)&a1 + 1);
  v1 = sub_120170(*((_QWORD *)&a1 + 1) + 64LL, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL));
  if ( (_BYTE)v1 )
    return 0;
  v5 = sub_11C8A0(*((__int64 *)&a1 + 1), &v23);
  v6 = v5;
  if ( !v5 )
    return 0;
  v7 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 16LL), *(_DWORD *)(v5 + 4), 1);
  if ( (v7 & (v7 - 1)) != 0 )
  {
    return 0;
  }
  else
  {
    *((_QWORD *)&a1 + 1) = v24;
    v24[0] = 0;
    v24[1] = 0;
    v25 = 0;
    v26 = 0;
    sub_123EA0(a1, (__int64)v23, 0, 0xFFFF0000);
    v8 = (unsigned __int8 *)sub_124CC0(a1, v24, v4, 0, 0, 1u);
    if ( v8 )
    {
      if ( *((_DWORD *)v8 + 9) == *(_DWORD *)(v4 + 36) && (unsigned int)(*(_DWORD *)v8 - 23) <= 1 )
      {
        v17 = v8;
        if ( (unsigned __int8)sub_152630((__int64)v8, (_DWORD *)&v22 + 1) )
        {
          v9 = 1LL << (8 * v17[36] - BYTE4(v22));
          if ( (unsigned __int64)(8 * *((_DWORD *)v17 + 9) - HIDWORD(v22)) >= 0x40 )
            v9 = 0;
          if ( v9 == v7 )
          {
            if ( sub_125B60(v17 + 32, (__int64)v23, 0) )
            {
              v20 = (int)v17;
              v18 = v17 + 64;
              if ( !sub_11EFE0((unsigned __int8 *)v23, v18, 2u) )
              {
                memset(v27, 0, sizeof(v27));
                v28 = 0;
                sub_127FE0(a1, (__int64)v27, (__int64)v18, 0, v10, v11, v15, (int)v24, (int)v18, v20, v22);
                LOBYTE(v12) = sub_B02D0(a1, v16, (__int64)v27, v21, v4);
                v1 = v12;
                if ( (_BYTE)v12 )
                {
                  v13 = 8;
                  *((_QWORD *)&a1 + 1) = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
                  v14 = 2 * *(_DWORD *)(v6 + 4);
                  *(_DWORD *)(v6 + 4) = v14;
                  if ( *(_DWORD *)v21 == 23 )
                    v13 = 9;
                  sub_1207E0(v23, *((__int64 *)&a1 + 1), v13, *(_QWORD *)(v21 + 24), v14);
                  sub_1571F0(a1, v4, v3, v21, v19, 1);
                  sub_11D5D0(v4, SDWORD2(a1));
                  sub_11D5A0(v21);
                }
                sub_93B40(v27);
              }
            }
          }
        }
      }
    }
    if ( v25 )
    {
      *(_QWORD *)&v26 = 0;
      qfree(v25);
    }
    qfree(v24[0]);
  }
  return v1;
}

