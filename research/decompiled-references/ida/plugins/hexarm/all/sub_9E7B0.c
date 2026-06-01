__int64 __fastcall sub_9E7B0(__int64 a1, __int64 a2)
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
  v3 = sub_92E80(a1, &v18, (__int64)v21, &v17, 1);
  if ( v3 )
  {
    v19 = v18;
    v4 = sub_128E80(a1, v3, &v19, 0);
    if ( v4 )
    {
      if ( (*(_BYTE *)(v4 + 4) & 0x10) == 0 && *(_DWORD *)v4 == v17 + 32 )
      {
        v7 = sub_11C2E0(v4, &v20);
        if ( v7 )
        {
          v5 = sub_11F7C0(v7, v28, 0);
          if ( (_BYTE)v5 )
          {
            if ( !v28[0] )
            {
              v8 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
              v28[1] = a1;
              v28[2] = 0;
              v15 = v8;
              v28[0] = &off_4D64B0;
              v29[0] = 0xFFFFFFFF00000000LL;
              v30 = 0xFFFFFFFF00000000LL;
              v28[3] = 0;
              v29[1] = 0;
              v32 = 0xFFFFFFFFLL;
              v31 = 0;
              v9 = (int *)sub_94F30((__int64)v28, a2, 0);
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
                sub_124BC0(v22);
              }
              else
              {
                if ( v11 != 10 )
                {
LABEL_14:
                  v5 = 0;
LABEL_15:
                  sub_11C7E0(v22);
LABEL_16:
                  v28[0] = &off_4D64B0;
                  sub_11C7E0(&v30);
                  sub_11C7E0(v29);
                  goto LABEL_6;
                }
                sub_125D20(v22, v10);
                v14 = sub_1255A0(v20, v22, 0);
                sub_120220(v22, v15, 5, *(_QWORD *)(v10 + 24), HIDWORD(v22[0]));
                if ( v14 )
                {
LABEL_19:
                  if ( LOBYTE(v21[0]) && !(unsigned __int8)sub_130600(a1, v10, v22, v18, v21, 0)
                    || v18 != (int *)a2 && (unsigned __int8)sub_935B0(a1, (__int64)v18, a2) )
                  {
                    goto LABEL_14;
                  }
                  v26 = 0;
                  v25 = 0;
                  v27 = 0;
                  if ( (unsigned __int8)sub_935B0(a1, v10, a2)
                    || (unsigned __int8)sub_A9620(a1, v10, *(_QWORD *)(v10 + 8), a2) )
                  {
                    v13 = 0;
                    if ( !(unsigned __int8)sub_155780(a1, v10, v22, v10, a2, &v25) )
                      goto LABEL_40;
                  }
                  else
                  {
                    v13 = v5;
                  }
                  if ( v18 == (int *)a2 || !LOBYTE(v21[0]) || (unsigned __int8)sub_155780(a1, v18, v21, v18, a2, 0) )
                  {
                    sub_1552F0(&v25);
                    sub_123480(v23, v10 + 64);
                    sub_156C30(a1, *(_QWORD *)(v10 + 8), v23, *(_QWORD *)(a2 + 8), a2 + 64, 1);
                    if ( LOBYTE(v21[0]) )
                    {
                      sub_156C30(a1, v10, v22, v18, v21, 4);
                      sub_12A590(v22, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), HIDWORD(v22[0]), 2);
                    }
                    else
                    {
                      sub_120220(v22, v15, 9, *(_QWORD *)(v10 + 24), v24);
                    }
                    if ( *(_DWORD *)a2 == 13 )
                      sub_11C7E0(a2 + 48);
                    *(_DWORD *)a2 = 5;
                    sub_11C450(a2 + 32, v22);
                    sub_11C450(a2 + 64, v23);
                    if ( v13 )
                      sub_11CFE0(v10);
                    v12 = *(_DWORD *)(a1 + 24);
                    BYTE1(v12) &= ~2u;
                    LOBYTE(v12) = v12 | 0x80;
                    *(_DWORD *)(a1 + 24) = v12;
                    sub_11D010(a2, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL));
                    sub_98D10(a1, a2);
                    sub_11C7E0(v23);
                    goto LABEL_34;
                  }
LABEL_40:
                  v5 = 0;
LABEL_34:
                  sub_155240(&v25);
                  goto LABEL_15;
                }
              }
              if ( !(unsigned __int8)sub_1255A0(v20, v10 + 64, 0)
                && !(unsigned __int8)sub_12E4C0(v15, a1, v10, (unsigned int)v22, (_DWORD)v19, v20, 0) )
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
  sub_11C7E0(v21);
  return v5;
}

