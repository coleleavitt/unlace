unsigned __int64 __fastcall sub_43B0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rbx
  _BYTE *v4; // r13
  signed __int64 v5; // rdx
  signed __int64 v6; // r15
  unsigned __int8 v7; // r14
  char *v8; // rax
  char *v9; // r14
  __int64 v10; // rax
  __int64 v11; // rsi
  _QWORD *v12; // rcx
  int v13; // r14d
  __int64 v14; // rax
  int v16; // [rsp+0h] [rbp-3A8h]
  __int64 v17; // [rsp+18h] [rbp-390h]
  _DWORD v18[72]; // [rsp+20h] [rbp-388h] BYREF
  _QWORD v19[35]; // [rsp+140h] [rbp-268h] BYREF
  _BYTE v20[264]; // [rsp+260h] [rbp-148h] BYREF
  unsigned __int64 v21; // [rsp+368h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  qlseek(a2, 4, 0);
  v17 = qlsize(a2);
  while ( 1 )
  {
    v16 = qlseek(a2, 0, 1);
    if ( v16 >= v17 )
      break;
    v3 = 255;
    v4 = &v18[6];
    lread(a2, v18, 20);
    v18[5] = v18[3] + v16;
    while ( 1 )
    {
      v7 = qlgetc(a2);
      lread(a2, v20, v7);
      v20[v7] = 0;
      v8 = (char *)qstrdup(v20);
      v9 = v8;
      if ( !v8 )
        break;
      if ( !*v8 )
        *v8 = 42;
      if ( v3 > 0 )
      {
        v5 = strlen(v8) + 1;
        if ( v5 > v3 )
          v5 = v3;
        v6 = v5;
        memcpy(v4, v9, v5);
        v4 += v6;
        v3 -= v6;
        *(v4 - 1) = 32;
      }
      qfree(v9);
    }
    *v4 = 0;
    qmemcpy(v19, v18, sizeof(v19));
    v10 = a1[24];
    v11 = a1[23];
    if ( a1[25] < (unsigned __int64)(v10 + 1) )
    {
      v14 = qvector_reserve(a1 + 23, v11, v10 + 1, 280);
      a1[23] = v14;
      v11 = v14;
      v10 = a1[24];
    }
    v12 = (_QWORD *)(v11 + 280 * v10);
    *v12 = v19[0];
    v12[34] = v19[34];
    qmemcpy(
      (void *)((unsigned __int64)(v12 + 1) & 0xFFFFFFFFFFFFFFF8LL),
      (const void *)((char *)v19 - ((char *)v12 - ((unsigned __int64)(v12 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
      8LL * (((unsigned int)v12 - (((_DWORD)v12 + 8) & 0xFFFFFFF8) + 280) >> 3));
    v13 = v18[4] + v16;
    ++a1[24];
    qlseek(a2, v13, 0);
  }
  return v21 - __readfsqword(0x28u);
}

