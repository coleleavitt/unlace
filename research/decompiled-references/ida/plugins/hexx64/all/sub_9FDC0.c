__int64 __fastcall sub_9FDC0(__int128 a1)
{
  unsigned int v1; // r14d
  unsigned int *v2; // r15
  __int64 v3; // rbx
  unsigned __int64 v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  int v7; // r14d
  __int64 v8; // rax
  __int64 v9; // rax
  _DWORD *v10; // rax
  __int64 v11; // r12
  __int64 v12; // rax
  int v13; // r10d
  __int64 v14; // r14
  int v16; // eax
  __int64 v17; // [rsp-10h] [rbp-120h]
  unsigned int v18; // [rsp+4h] [rbp-10Ch]
  __int64 v19; // [rsp+8h] [rbp-108h]
  int v20; // [rsp+18h] [rbp-F8h]
  char *v21; // [rsp+18h] [rbp-F8h]
  int v22; // [rsp+18h] [rbp-F8h]
  unsigned int v23; // [rsp+20h] [rbp-F0h]
  int v24; // [rsp+20h] [rbp-F0h]
  _QWORD v25[4]; // [rsp+30h] [rbp-E0h] BYREF
  _QWORD v26[2]; // [rsp+50h] [rbp-C0h] BYREF
  unsigned __int64 v27; // [rsp+60h] [rbp-B0h] BYREF
  __int128 v28; // [rsp+68h] [rbp-A8h]
  __int64 v29; // [rsp+78h] [rbp-98h]
  unsigned int v30; // [rsp+80h] [rbp-90h] BYREF
  __int128 v31; // [rsp+88h] [rbp-88h]
  _QWORD v32[2]; // [rsp+A0h] [rbp-70h] BYREF
  _QWORD v33[2]; // [rsp+B0h] [rbp-60h] BYREF
  _QWORD v34[10]; // [rsp+C0h] [rbp-50h] BYREF

  v34[3] = __readfsqword(0x28u);
  if ( *(_BYTE *)(*((_QWORD *)&a1 + 1) + 32LL) != 4 )
    return 0;
  v2 = *(unsigned int **)(*((_QWORD *)&a1 + 1) + 40LL);
  v3 = *((_QWORD *)&a1 + 1);
  v4 = *v2;
  if ( (unsigned int)v4 > 0x21 )
    return 0;
  v5 = 0x306385000LL;
  LOBYTE(v1) = _bittest64(&v5, v4);
  if ( (_BYTE)v1 || (_DWORD)v4 == 13 )
  {
    v6 = *(_DWORD *)(*((_QWORD *)&a1 + 1) + 36LL);
    v23 = *v2;
    v7 = *(_DWORD *)(*((_QWORD *)&a1 + 1) + 68LL);
    v25[2] = 0;
    v20 = v6;
    v8 = *(_QWORD *)(a1 + 480);
    v25[1] = a1;
    v25[0] = &off_4DBDF0;
    v9 = *(_QWORD *)(v8 + 112);
    v28 = 0;
    v25[3] = 0;
    v19 = v9;
    v26[0] = 0xFFFFFFFF00000000LL;
    v27 = 0xFFFFFFFF00000000LL;
    v26[1] = 0;
    v29 = 0x2FFFFFFFFLL;
    v10 = (_DWORD *)sub_954F0((__int64)v25, *((__int64 *)&a1 + 1), 0);
    v11 = (__int64)v10;
    if ( !v10 )
      goto LABEL_19;
    if ( *v10 != v23 )
      goto LABEL_19;
    v18 = v23;
    v24 = v20 - v7;
    if ( v10[17] < v20 - v7 )
      goto LABEL_19;
    v12 = sub_958B0((__int64)v25);
    v13 = v20 - v7;
    v14 = v12;
    if ( v12 )
    {
      if ( (_DWORD)v29 )
        goto LABEL_19;
      if ( *((_QWORD *)&v28 + 1) )
        goto LABEL_19;
      if ( v12 != v11 )
        goto LABEL_19;
      if ( v18 != 13 )
        goto LABEL_19;
      if ( *((_BYTE *)v2 + 48) != 14 )
        goto LABEL_19;
      if ( *((_BYTE *)v2 + 32) != 14 )
        goto LABEL_19;
      *((_QWORD *)&a1 + 1) = *((_QWORD *)v2 + 7);
      v21 = *((char **)&a1 + 1);
      if ( !sub_125B60((unsigned __int8 *)(v12 + 64), *((__int64 *)&a1 + 1), 0)
        || !(unsigned __int8)sub_12EA80(v19, (const __m128i *)a1, v14, v14 + 32, v3, *((_QWORD *)v2 + 5), 0) )
      {
        goto LABEL_19;
      }
      sub_123A40((__int64)&v30, (unsigned __int8 *)(v14 + 48), v17, *((__int64 *)&a1 + 1));
      *((_QWORD *)&a1 + 1) = v14;
      if ( !(unsigned __int8)sub_155D40(a1, (__int64)&v30, v14, (__int64)v2, 0)
        || (sub_11CA10(v21, (char *)&v30), sub_958B0((__int64)v25)) )
      {
        sub_11CDA0((__int64)&v30);
LABEL_19:
        v1 = 0;
LABEL_20:
        v25[0] = &off_4DBDF0;
        sub_11CDA0((__int64)&v27);
        sub_11CDA0((__int64)v26);
        return v1;
      }
      sub_11CDA0((__int64)&v30);
      v13 = v24;
    }
    v22 = v13;
    v32[0] = 0xFFFFFFFF00000000LL;
    v32[1] = 0;
    v33[0] = 0xFFFFFFFF00000000LL;
    v33[1] = 0;
    v34[0] = 0xFFFFFFFF00000000LL;
    v34[1] = 0;
    v31 = 0;
    sub_1253A0((__int64)&v30, v11);
    if ( SHIDWORD(v34[0]) > v22 )
      sub_12B6F0((__int64)&v30, v19, 10, v22, 1);
    v1 = sub_132040((const __m128i *)a1, v11, (int *)&v30, v3, v2);
    if ( (_BYTE)v1
      && (sub_125180((__int64)v32, (unsigned __int8 *)v2 + 32),
          sub_125180((__int64)v33, (unsigned __int8 *)v2 + 48),
          v30 = *v2,
          sub_1571F0(a1, v11, (__int64)v34, v3, v3 + 64, 1),
          (unsigned int)sub_944B0((const __m128i *)a1, v3, v11, (__int64)&v30, 0)) )
    {
      sub_1253A0(v11, (__int64)&v30);
      sub_11D5A0(v3);
      v16 = *(_DWORD *)(a1 + 24);
      BYTE1(v16) &= ~2u;
      LOBYTE(v16) = v16 | 0x80;
      *(_DWORD *)(a1 + 24) = v16;
      sub_11D5D0(v11, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL));
      *((_QWORD *)&a1 + 1) = v11;
      sub_992D0(a1, 0.0);
    }
    else
    {
      v1 = 0;
    }
    sub_11CDA0((__int64)v34);
    sub_11CDA0((__int64)v33);
    sub_11CDA0((__int64)v32);
    goto LABEL_20;
  }
  return v1;
}

