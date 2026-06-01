__int64 __fastcall sub_A0610(__int128 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  __int64 v3; // r14
  __int64 v4; // r8
  char *v5; // r13
  __int64 v6; // rcx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // eax
  char v13; // al
  __int64 v14; // rax
  int v15; // r8d
  int v16; // r9d
  unsigned __int8 v17; // [rsp+0h] [rbp-D8h]
  __int64 v18; // [rsp+0h] [rbp-D8h]
  char v19[16]; // [rsp+20h] [rbp-B8h] BYREF
  char v20[16]; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD v21[4]; // [rsp+40h] [rbp-98h] BYREF
  _QWORD v22[2]; // [rsp+60h] [rbp-78h] BYREF
  unsigned __int64 v23; // [rsp+70h] [rbp-68h] BYREF
  __int128 v24; // [rsp+78h] [rbp-60h]
  __int64 v25; // [rsp+88h] [rbp-50h]
  unsigned __int64 v26; // [rsp+98h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  result = 0;
  if ( *(_BYTE *)(*((_QWORD *)&a1 + 1) + 32LL) == 4 )
  {
    v2 = *((_QWORD *)&a1 + 1);
    if ( **(_DWORD **)(*((_QWORD *)&a1 + 1) + 40LL) == 5 )
    {
      v21[1] = a1;
      v22[0] = 0xFFFFFFFF00000000LL;
      v23 = 0xFFFFFFFF00000000LL;
      v21[0] = &off_4DBDF0;
      v21[2] = 0;
      v21[3] = 0;
      v22[1] = 0;
      v25 = 0xFFFFFFFFLL;
      v24 = 0;
      v3 = sub_954F0((__int64)v21, *((__int64 *)&a1 + 1), 0);
      if ( v3 )
      {
        v4 = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 40LL);
        if ( *(_DWORD *)(*((_QWORD *)&a1 + 1) + 68LL) == *(_DWORD *)(v4 + 36) / 2 )
        {
          if ( *(_DWORD *)v3 == 4 )
          {
            if ( *(_QWORD *)(v3 + 16) == *((_QWORD *)&a1 + 1) )
            {
              v5 = (char *)(v3 + 32);
              if ( (unsigned __int8)sub_1321C0((const __m128i *)a1, v3, v3 + 32, *((__int64 *)&a1 + 1), v4 + 32) )
              {
                *((_QWORD *)&a1 + 1) = v3 + 32;
                *(_QWORD *)v20 = v2;
                v14 = sub_129440(a1, (__int64)v20, 0);
                if ( v14 )
                {
                  if ( *(_DWORD *)v14 == 5 )
                  {
                    v18 = v14;
                    if ( sub_125B60((unsigned __int8 *)(v14 + 64), v3 + 32, 0) )
                    {
                      if ( sub_125B60((unsigned __int8 *)(v18 + 32), v3 + 32, 0)
                        && !(unsigned __int8)sub_93B70(a1, v18, v2, v18, v15, v16) )
                      {
                        sub_11D5A0(v18);
                        goto LABEL_12;
                      }
                    }
                  }
                }
              }
            }
          }
          else if ( *(_DWORD *)v3 == 5 && !(_DWORD)v25 )
          {
            v5 = (char *)(v3 + 32);
            if ( (unsigned __int8)sub_1321C0((const __m128i *)a1, v3, v3 + 32, *((__int64 *)&a1 + 1), v4 + 32) )
            {
              if ( !(unsigned __int8)sub_93B70(a1, v3, *((__int64 *)&a1 + 1), v6, v7, v8)
                && !(unsigned __int8)sub_A9BE0(a1, v3, *(_QWORD *)(v3 + 8), *((__int64 *)&a1 + 1)) )
              {
LABEL_12:
                sub_123A40((__int64)v19, (unsigned __int8 *)(*(_QWORD *)(v2 + 40) + 32LL), v9, v10);
                sub_123A40((__int64)v20, (unsigned __int8 *)(v3 + 64), v11, v3 + 64);
                sub_1571F0(a1, *(_QWORD *)(v3 + 8), (__int64)v20, *(_QWORD *)(v2 + 8), v2 + 64, 1);
                *(_DWORD *)v2 = 5;
                sub_11CA10((char *)(v2 + 32), v19);
                sub_11CA10((char *)(v2 + 64), v20);
                if ( *(_DWORD *)v3 == 5 )
                  sub_11D5A0(v3);
                else
                  sub_11CA10(v5, (char *)(v3 + 64));
                v12 = *(_DWORD *)(a1 + 24);
                BYTE1(v12) &= ~2u;
                LOBYTE(v12) = v12 | 0x80;
                *(_DWORD *)(a1 + 24) = v12;
                sub_11D5D0(v2, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL));
                *((_QWORD *)&a1 + 1) = v2;
                sub_992D0(a1, 0.0);
                sub_11CDA0((__int64)v20);
                sub_11CDA0((__int64)v19);
                v13 = 1;
                goto LABEL_16;
              }
            }
          }
        }
      }
      v13 = 0;
LABEL_16:
      v17 = v13;
      v21[0] = &off_4DBDF0;
      sub_11CDA0((__int64)&v23);
      sub_11CDA0((__int64)v22);
      return v17;
    }
  }
  return result;
}

