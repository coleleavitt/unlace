__int64 __fastcall sub_22940(_QWORD *a1, unsigned __int8 *a2, __int64 a3)
{
  unsigned __int8 *v4; // rbp
  __int64 v5; // rbx
  unsigned __int8 *v6; // r13
  __int64 v7; // r12
  __int64 v8; // rcx
  unsigned __int8 *v9; // rsi
  __int64 result; // rax
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int8 *v16; // rcx
  __int64 v17; // r15
  _QWORD *v18; // r8
  unsigned __int8 *v19; // rsi
  __int64 v20; // rdi
  _QWORD *v21; // rcx
  __int64 v22; // r10
  char v23; // r15
  __int64 v24; // r10
  unsigned __int64 v25; // rdi
  _QWORD *v26; // rax
  unsigned __int8 v27; // cl
  unsigned __int64 v28; // rax
  void *v29; // rdi
  char *v30; // rsi
  __int64 v31; // rcx
  unsigned __int64 v32; // [rsp+8h] [rbp-40h]
  _QWORD *v33; // [rsp+8h] [rbp-40h]

  v4 = a2;
  v5 = a3;
  v6 = a2;
  v7 = a3;
  v8 = a2[a3];
  a2[a3] = -1;
  *(_BYTE *)(*((_QWORD *)a2 + 16) + 8 * v8) = a2[137];
  a2[137] = v8;
  v9 = (unsigned __int8 *)a1[4];
  --a1[1];
LABEL_2:
  while ( ++v5 != 128 )
  {
LABEL_3:
    result = v4[v5];
    if ( result == 255 )
      return result;
LABEL_4:
    v11 = a1[2];
    v12 = *(_QWORD *)(*((_QWORD *)v4 + 16) + 8 * result);
    v13 = ((0xD6E8FEB86659FD93LL * (v12 ^ HIDWORD(v12))) >> 32) ^ (0xD6E8FEB86659FD93LL * (v12 ^ HIDWORD(v12)));
    v14 = (v11 - 1) & (((0xD6E8FEB86659FD93LL * v13) >> 32) ^ (0xD6E8FEB86659FD93LL * v13) ^ a1[3]);
    v15 = v14 & 0x7F;
    v16 = &v9[144 * (v14 >> 7)];
    while ( v5 != v15 || v16 != v4 )
    {
      if ( v7 == v15 && v6 == v16 )
      {
        if ( v6 == v4 )
        {
          v6[v7] = v6[v5];
          v7 = v5;
          v6[v5] = -1;
          v9 = (unsigned __int8 *)a1[4];
          goto LABEL_2;
        }
        v17 = v6[137];
        if ( (_BYTE)v17 == v6[136] )
        {
          if ( (_BYTE)v17 )
          {
            if ( (_BYTE)v17 == 48 )
            {
              v23 = 80;
              v25 = 640;
              v24 = 80;
            }
            else
            {
              v22 = (unsigned __int8)v17;
              v23 = v17 + 16;
              v24 = v22 + 16;
              v25 = 8 * v24;
            }
          }
          else
          {
            v23 = 48;
            v25 = 384;
            v24 = 48;
          }
          v32 = v24;
          v26 = (_QWORD *)operator new[](v25);
          v27 = v6[136];
          v18 = v26;
          v28 = 0;
          if ( !v27
            || (v30 = *((char **)v6 + 16),
                v28 = v27,
                v31 = 8LL * v27,
                *v18 = *(_QWORD *)v30,
                v18[(unsigned __int64)v31 / 8 - 1] = *(_QWORD *)&v30[v31 - 8],
                qmemcpy(
                  (void *)((unsigned __int64)(v18 + 1) & 0xFFFFFFFFFFFFFFF8LL),
                  (const void *)(v30 - ((char *)v18 - ((unsigned __int64)(v18 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
                  8LL * (((unsigned int)v18 - (((_DWORD)v18 + 8) & 0xFFFFFFF8) + (unsigned int)v31) >> 3)),
                v28 < v32) )
          {
            do
            {
              LOBYTE(v18[v28]) = v28 + 1;
              ++v28;
            }
            while ( v28 < v32 );
          }
          v29 = *((void **)v6 + 16);
          if ( v29 )
          {
            v33 = v18;
            operator delete[](v29);
            v18 = v33;
          }
          v6[136] = v23;
          v17 = v6[137];
          *((_QWORD *)v6 + 16) = v18;
        }
        else
        {
          v18 = *((_QWORD **)v6 + 16);
        }
        v19 = (unsigned __int8 *)&v18[v17];
        v6[v7] = v17;
        v7 = v5;
        v6[137] = *v19;
        v20 = v4[v5];
        v6 = v4;
        v4[v5++] = -1;
        v21 = (_QWORD *)(*((_QWORD *)v4 + 16) + 8 * v20);
        *(_QWORD *)v19 = *v21;
        *(_BYTE *)v21 = v4[137];
        v4[137] = v20;
        v9 = (unsigned __int8 *)a1[4];
        if ( v5 != 128 )
          goto LABEL_3;
        goto LABEL_17;
      }
      if ( ++v15 == 128 )
      {
        v16 += 144;
        v15 = 0;
        if ( 0x8E38E38E38E38E39LL * ((v16 - v9) >> 4) == v11 >> 7 )
          v16 = v9;
      }
    }
  }
LABEL_17:
  v4 += 144;
  v5 = 0;
  if ( 0x8E38E38E38E38E39LL * ((v4 - v9) >> 4) == a1[2] >> 7 )
    v4 = v9;
  result = *v4;
  if ( result != 255 )
    goto LABEL_4;
  return result;
}
