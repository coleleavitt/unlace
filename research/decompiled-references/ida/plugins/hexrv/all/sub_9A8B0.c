__int64 __fastcall sub_9A8B0(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  unsigned int v5; // r13d
  __int64 v7; // rdi
  __int64 v8; // rax
  int *v9; // rax
  __int64 v10; // r15
  int v11; // eax
  int v12; // eax
  char v13; // [rsp+17h] [rbp-139h]
  char v14; // [rsp+20h] [rbp-130h]
  __int64 v15; // [rsp+28h] [rbp-128h]
  unsigned __int8 v17; // [rsp+47h] [rbp-109h] BYREF
  int *v18; // [rsp+48h] [rbp-108h] BYREF
  int *v19; // [rsp+50h] [rbp-100h] BYREF
  __int64 v20; // [rsp+58h] [rbp-F8h] BYREF
  _QWORD v21[2]; // [rsp+60h] [rbp-F0h] BYREF
  _QWORD v22[2]; // [rsp+70h] [rbp-E0h] BYREF
  _BYTE v23[4]; // [rsp+80h] [rbp-D0h] BYREF
  unsigned int v24; // [rsp+84h] [rbp-CCh]
  __int64 v25; // [rsp+90h] [rbp-C0h] BYREF
  __int128 v26; // [rsp+98h] [rbp-B8h]
  __int128 v27; // [rsp+A8h] [rbp-A8h]
  _QWORD v28[4]; // [rsp+C0h] [rbp-90h] BYREF
  _QWORD v29[2]; // [rsp+E0h] [rbp-70h] BYREF
  unsigned __int64 v30; // [rsp+F0h] [rbp-60h] BYREF
  __int128 v31; // [rsp+F8h] [rbp-58h]
  __int64 v32; // [rsp+108h] [rbp-48h]
  unsigned __int64 v33; // [rsp+118h] [rbp-38h]

  v33 = __readfsqword(0x28u);
  v18 = (int *)a2;
  v21[1] = 0;
  v21[0] = 0xFFFFFFFF00000000LL;
  v3 = sub_8EF80(a1, &v18, (__int64)v21, &v17, 1);
  if ( v3 )
  {
    v19 = v18;
    v4 = sub_124F80(a1, v3, &v19, 0);
    if ( v4 )
    {
      if ( (*(_BYTE *)(v4 + 4) & 0x10) == 0 && *(_DWORD *)v4 == v17 + 32 )
      {
        v7 = sub_1183E0(v4, &v20);
        if ( v7 )
        {
          v5 = sub_11B8C0(v7, v28, 0);
          if ( (_BYTE)v5 )
          {
            if ( !v28[0] )
            {
              v8 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
              v28[1] = a1;
              v28[2] = 0;
              v15 = v8;
              v28[0] = &off_4AE870;
              v29[0] = 0xFFFFFFFF00000000LL;
              v30 = 0xFFFFFFFF00000000LL;
              v28[3] = 0;
              v29[1] = 0;
              v32 = 0xFFFFFFFFLL;
              v31 = 0;
              v9 = (int *)sub_91030((__int64)v28, a2, 0);
              v10 = (__int64)v9;
              if ( !v9 || (_DWORD)v32 )
              {
                v5 = 0;
                goto LABEL_16;
              }
              v22[1] = 0;
              v22[0] = 0xFFFFFFFF00000000LL;
              v11 = *v9;
              if ( v11 == 5 )
              {
                sub_120CC0(v22);
              }
              else
              {
                if ( v11 != 10 )
                {
LABEL_14:
                  v5 = 0;
LABEL_15:
                  sub_1188E0(v22);
LABEL_16:
                  v28[0] = &off_4AE870;
                  sub_1188E0(&v30);
                  sub_1188E0(v29);
                  goto LABEL_6;
                }
                sub_121E20(v22, v10);
                v14 = sub_1216A0(v20, v22, 0);
                sub_11C320(v22, v15, 5, *(_QWORD *)(v10 + 24), HIDWORD(v22[0]));
                if ( v14 )
                {
LABEL_19:
                  if ( LOBYTE(v21[0]) && !(unsigned __int8)sub_12C700(a1, v10, v22, v18, v21, 0)
                    || v18 != (int *)a2 && (unsigned __int8)sub_8F6B0(a1, (__int64)v18, a2) )
                  {
                    goto LABEL_14;
                  }
                  v26 = 0;
                  v25 = 0;
                  v27 = 0;
                  if ( (unsigned __int8)sub_8F6B0(a1, v10, a2)
                    || (unsigned __int8)sub_A5720(a1, v10, *(_QWORD *)(v10 + 8), a2) )
                  {
                    v13 = 0;
                    if ( !(unsigned __int8)sub_151880(a1, v10, v22, v10, a2, &v25) )
                      goto LABEL_40;
                  }
                  else
                  {
                    v13 = v5;
                  }
                  if ( v18 == (int *)a2 || !LOBYTE(v21[0]) || (unsigned __int8)sub_151880(a1, v18, v21, v18, a2, 0) )
                  {
                    sub_1513F0(&v25);
                    sub_11F580(v23, v10 + 64);
                    sub_152D30(a1, *(_QWORD *)(v10 + 8), v23, *(_QWORD *)(a2 + 8), a2 + 64, 1);
                    if ( LOBYTE(v21[0]) )
                    {
                      sub_152D30(a1, v10, v22, v18, v21, 4);
                      sub_126690(v22, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), HIDWORD(v22[0]), 2);
                    }
                    else
                    {
                      sub_11C320(v22, v15, 9, *(_QWORD *)(v10 + 24), v24);
                    }
                    if ( *(_DWORD *)a2 == 13 )
                      sub_1188E0(a2 + 48);
                    *(_DWORD *)a2 = 5;
                    sub_118550(a2 + 32, v22);
                    sub_118550(a2 + 64, v23);
                    if ( v13 )
                      sub_1190E0(v10);
                    v12 = *(_DWORD *)(a1 + 24);
                    BYTE1(v12) &= ~2u;
                    LOBYTE(v12) = v12 | 0x80;
                    *(_DWORD *)(a1 + 24) = v12;
                    sub_119110(a2, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL));
                    sub_94E10(a1, a2);
                    sub_1188E0(v23);
                    goto LABEL_34;
                  }
LABEL_40:
                  v5 = 0;
LABEL_34:
                  sub_151340(&v25);
                  goto LABEL_15;
                }
              }
              if ( !(unsigned __int8)sub_1216A0(v20, v10 + 64, 0)
                && !(unsigned __int8)sub_12A5C0(v15, a1, v10, (unsigned int)v22, (_DWORD)v19, v20, 0) )
              {
                goto LABEL_14;
              }
              goto LABEL_19;
            }
          }
        }
      }
    }
  }
  v5 = 0;
LABEL_6:
  sub_1188E0(v21);
  return v5;
}

