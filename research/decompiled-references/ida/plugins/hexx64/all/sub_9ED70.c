__int64 __fastcall sub_9ED70(__int128 a1)
{
  __int128 v1; // kr00_16
  __int64 v2; // rax
  unsigned int v3; // r13d
  char *v5; // rdi
  __int64 v6; // rax
  int *v7; // rax
  __int64 v8; // r15
  int v9; // eax
  __int64 v10; // rcx
  int v11; // r8d
  int v12; // r9d
  __int128 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  char v17; // al
  __int128 v18; // rdi
  __int64 v19; // [rsp-8h] [rbp-158h]
  char v20; // [rsp+17h] [rbp-139h]
  char v21; // [rsp+20h] [rbp-130h]
  __int64 v22; // [rsp+28h] [rbp-128h]
  unsigned __int8 v23; // [rsp+47h] [rbp-109h] BYREF
  __int64 v24; // [rsp+48h] [rbp-108h] BYREF
  __int64 v25; // [rsp+50h] [rbp-100h] BYREF
  unsigned __int8 *v26; // [rsp+58h] [rbp-F8h] BYREF
  _QWORD v27[2]; // [rsp+60h] [rbp-F0h] BYREF
  _QWORD v28[2]; // [rsp+70h] [rbp-E0h] BYREF
  char v29[4]; // [rsp+80h] [rbp-D0h] BYREF
  int v30; // [rsp+84h] [rbp-CCh]
  __int64 v31; // [rsp+90h] [rbp-C0h] BYREF
  __int128 v32; // [rsp+98h] [rbp-B8h]
  __int128 v33; // [rsp+A8h] [rbp-A8h]
  _QWORD v34[4]; // [rsp+C0h] [rbp-90h] BYREF
  _QWORD v35[2]; // [rsp+E0h] [rbp-70h] BYREF
  unsigned __int64 v36; // [rsp+F0h] [rbp-60h] BYREF
  __int128 v37; // [rsp+F8h] [rbp-58h]
  __int64 v38; // [rsp+108h] [rbp-48h]
  unsigned __int64 v39; // [rsp+118h] [rbp-38h]

  v1 = a1;
  v39 = __readfsqword(0x28u);
  v24 = *((_QWORD *)&a1 + 1);
  *((_QWORD *)&a1 + 1) = &v24;
  v27[1] = 0;
  v27[0] = 0xFFFFFFFF00000000LL;
  *((_QWORD *)&a1 + 1) = sub_93440(a1, (__int64)v27, &v23, 1);
  if ( *((_QWORD *)&a1 + 1) )
  {
    v25 = v24;
    v2 = sub_129440(a1, (__int64)&v25, 0);
    if ( v2 )
    {
      if ( (*(_BYTE *)(v2 + 4) & 0x10) == 0 && *(_DWORD *)v2 == v23 + 32 )
      {
        v5 = (char *)sub_11C8A0(v2, &v26);
        if ( v5 )
        {
          v3 = sub_11FD80(v5, v34, 0);
          if ( (_BYTE)v3 )
          {
            if ( !v34[0] )
            {
              v6 = *(_QWORD *)(*(_QWORD *)(v1 + 480) + 112LL);
              v34[1] = v1;
              v34[2] = 0;
              v22 = v6;
              v34[0] = &off_4DBDF0;
              v35[0] = 0xFFFFFFFF00000000LL;
              v36 = 0xFFFFFFFF00000000LL;
              v34[3] = 0;
              v35[1] = 0;
              v38 = 0xFFFFFFFFLL;
              v37 = 0;
              v7 = (int *)sub_954F0((__int64)v34, *((__int64 *)&v1 + 1), 0);
              v8 = (__int64)v7;
              if ( !v7 || (_DWORD)v38 )
              {
                v3 = 0;
                goto LABEL_16;
              }
              v28[1] = 0;
              v28[0] = 0xFFFFFFFF00000000LL;
              v9 = *v7;
              if ( v9 == 5 )
              {
                sub_125180((__int64)v28, (unsigned __int8 *)(v8 + 32));
              }
              else
              {
                if ( v9 != 10 )
                {
LABEL_14:
                  v3 = 0;
LABEL_15:
                  sub_11CDA0((__int64)v28);
LABEL_16:
                  v34[0] = &off_4DBDF0;
                  sub_11CDA0((__int64)&v36);
                  sub_11CDA0((__int64)v35);
                  goto LABEL_6;
                }
                sub_1262E0((__int64)v28, (unsigned __int8 *)v8);
                v21 = sub_125B60(v26, (__int64)v28, 0);
                sub_1207E0((char *)v28, v22, 5, *(_QWORD *)(v8 + 24), SHIDWORD(v28[0]));
                if ( v21 )
                {
LABEL_19:
                  if ( LOBYTE(v27[0])
                    && !(unsigned __int8)sub_130BC0((const __m128i *)v1, v8, (__int64)v28, v24, (__int64)v27, 0)
                    || v24 != *((_QWORD *)&v1 + 1)
                    && (unsigned __int8)sub_93B70(v1, v24, *((__int64 *)&v1 + 1), v10, v11, v12) )
                  {
                    goto LABEL_14;
                  }
                  v32 = 0;
                  v31 = 0;
                  v33 = 0;
                  if ( (unsigned __int8)sub_93B70(v1, v8, *((__int64 *)&v1 + 1), v10, v11, v12)
                    || (unsigned __int8)sub_A9BE0(v1, v8, *(_QWORD *)(v8 + 8), *((__int64 *)&v1 + 1)) )
                  {
                    *((_QWORD *)&v18 + 1) = v8;
                    *(_QWORD *)&v18 = v1;
                    v20 = 0;
                    if ( !(unsigned __int8)sub_155D40(v18, (__int64)v28, v8, *((__int64 *)&v1 + 1), (__int64)&v31) )
                      goto LABEL_40;
                  }
                  else
                  {
                    v20 = v3;
                  }
                  *((_QWORD *)&v13 + 1) = v24;
                  if ( v24 == *((_QWORD *)&v1 + 1)
                    || !LOBYTE(v27[0])
                    || (*(_QWORD *)&v13 = v1,
                        (unsigned __int8)sub_155D40(v13, (__int64)v27, v24, *((__int64 *)&v1 + 1), 0)) )
                  {
                    sub_1558B0((int *)&v31);
                    sub_123A40((__int64)v29, (unsigned __int8 *)(v8 + 64), v14, v15);
                    sub_1571F0(
                      v1,
                      *(_QWORD *)(v8 + 8),
                      (__int64)v29,
                      *(_QWORD *)(*((_QWORD *)&v1 + 1) + 8LL),
                      *((_QWORD *)&v1 + 1) + 64LL,
                      1);
                    if ( LOBYTE(v27[0]) )
                    {
                      sub_1571F0(v1, v8, (__int64)v28, v24, (__int64)v27, 4);
                      sub_12AB50(
                        (unsigned __int8 *)v28,
                        *(_QWORD *)(*(_QWORD *)(v1 + 480) + 112LL),
                        SHIDWORD(v28[0]),
                        2);
                    }
                    else
                    {
                      sub_1207E0((char *)v28, v22, 9, *(_QWORD *)(v8 + 24), v30);
                    }
                    if ( **((_DWORD **)&v1 + 1) == 13 )
                      sub_11CDA0(*((_QWORD *)&v1 + 1) + 48LL);
                    **((_DWORD **)&v1 + 1) = 5;
                    sub_11CA10((char *)(*((_QWORD *)&v1 + 1) + 32LL), (char *)v28);
                    sub_11CA10((char *)(*((_QWORD *)&v1 + 1) + 64LL), v29);
                    if ( v20 )
                      sub_11D5A0(v8);
                    v16 = *(_DWORD *)(v1 + 24);
                    BYTE1(v16) &= ~2u;
                    LOBYTE(v16) = v16 | 0x80;
                    *(_DWORD *)(v1 + 24) = v16;
                    sub_11D5D0(*((__int64 *)&v1 + 1), *(_QWORD *)(*(_QWORD *)(v1 + 480) + 112LL));
                    sub_992D0(v1, 0.0);
                    sub_11CDA0((__int64)v29);
                    goto LABEL_34;
                  }
LABEL_40:
                  v3 = 0;
LABEL_34:
                  sub_155800((unsigned int *)&v31);
                  goto LABEL_15;
                }
              }
              if ( !sub_125B60(v26, v8 + 64, 0) )
              {
                v17 = sub_12EA80(v22, (const __m128i *)v1, v8, (__int64)v28, v25, (__int64)v26, 0);
                v10 = v19;
                if ( !v17 )
                  goto LABEL_14;
              }
              goto LABEL_19;
            }
          }
        }
      }
    }
  }
  v3 = 0;
LABEL_6:
  sub_11CDA0((__int64)v27);
  return v3;
}

