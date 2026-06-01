void __fastcall sub_24B90(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rax
  __int64 v4; // r12
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rbp
  __int64 v7; // r13
  __int64 v8; // r14
  unsigned __int64 v9; // rdi
  __int64 *v10; // rax
  _QWORD *v11; // rsi
  __int64 v12; // rdx
  _OWORD *v13; // rax
  unsigned __int64 v14; // rax
  void **v15; // r15
  _QWORD *v16; // rbx
  __int64 v17; // r12
  void **v18; // r14
  void **v19; // r9
  _QWORD *v20; // r15
  __int64 v21; // rax
  unsigned __int64 v22; // rdi
  __int64 v23; // r10
  _QWORD *v24; // rdx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rbp
  unsigned __int8 *v28; // r12
  __int64 i; // rax
  unsigned __int8 v30; // bl
  _QWORD *v31; // r11
  unsigned __int8 *v32; // rax
  void **v33; // r15
  __int64 v34; // rbx
  void *v35; // rdi
  __int64 v36; // rax
  __int64 v37; // r10
  char v38; // bl
  __int64 v39; // r10
  unsigned __int64 v40; // rdi
  _QWORD *v41; // rax
  unsigned __int8 v42; // cl
  unsigned __int64 v43; // rax
  void *v44; // rdi
  char *v45; // rsi
  _QWORD *v46; // [rsp+8h] [rbp-60h]
  _QWORD *v47; // [rsp+8h] [rbp-60h]
  _QWORD *v48; // [rsp+8h] [rbp-60h]
  __int64 v49; // [rsp+8h] [rbp-60h]
  unsigned __int64 v50; // [rsp+10h] [rbp-58h]
  _QWORD *v51; // [rsp+10h] [rbp-58h]
  void **v52; // [rsp+18h] [rbp-50h]
  __int64 v53; // [rsp+20h] [rbp-48h]
  __int64 v54; // [rsp+28h] [rbp-40h]

  v3 = a2;
  if ( !a2 )
    v3 = a1[1];
  if ( v3 <= 0x40 )
  {
    v4 = a1[4];
    v5 = a1[2];
    v8 = 0;
    v9 = 152;
    v7 = 1;
    v6 = 128;
  }
  else
  {
    _BitScanReverse64(&v3, v3);
    LODWORD(v3) = v3 ^ 0x3F;
    if ( (int)v3 <= 1 || (v4 = a1[4], v5 = a1[2], v6 = 1LL << (65 - (unsigned __int8)v3), v6 > 0x71C71C71C71C7180LL) )
    {
      QT::qBadAlloc();
      sub_25030();
      return;
    }
    v7 = v6 >> 7;
    v8 = (v6 >> 7) - 1;
    v9 = 144 * (v6 >> 7) + 8;
  }
  v46 = a1;
  v10 = (__int64 *)operator new[](v9);
  v11 = v10 + 1;
  *v10 = v7;
  v12 = (__int64)&v10[18 * v8 + 19];
  v13 = v10 + 1;
  do
  {
    *v13 = -1;
    v13 += 9;
    *((_QWORD *)v13 - 2) = 0;
    *((_WORD *)v13 - 4) = 0;
    *(v13 - 8) = -1;
    *(v13 - 7) = -1;
    *(v13 - 6) = -1;
    *(v13 - 5) = -1;
    *(v13 - 4) = -1;
    *(v13 - 3) = -1;
    *(v13 - 2) = -1;
  }
  while ( (_OWORD *)v12 != v13 );
  v46[4] = v11;
  v14 = v5 >> 7;
  v46[2] = v6;
  if ( v5 >> 7 )
  {
    v53 = v4;
    v15 = (void **)(v4 + 128);
    v16 = v46;
    v17 = 144 * v14 + v4 + 128;
    do
    {
      v54 = v17;
      v18 = v15 - 16;
      v19 = v15;
      v20 = v16;
      do
      {
        v21 = *(unsigned __int8 *)v18;
        if ( (_BYTE)v21 != 0xFF )
        {
          v22 = v20[2];
          v23 = v20[4];
          v24 = (char *)*v19 + 8 * v21;
          v25 = 0xD6E8FEB86659FD93LL
              * (((0xD6E8FEB86659FD93LL * (*v24 ^ HIDWORD(*v24))) >> 32)
               ^ (0xD6E8FEB86659FD93LL * (*v24 ^ HIDWORD(*v24))));
          v26 = (v22 - 1) & (HIDWORD(v25) ^ v25 ^ v20[3]);
          v27 = v26 & 0x7F;
          v28 = (unsigned __int8 *)(v23 + 144 * (v26 >> 7));
LABEL_14:
          for ( i = v28[v27]; i != 255; i = *v28 )
          {
            if ( *v24 == *(_QWORD *)(*((_QWORD *)v28 + 16) + 8 * i) )
              break;
            if ( ++v27 != 128 )
              goto LABEL_14;
            v28 += 144;
            v27 = 0;
            if ( 0x8E38E38E38E38E39LL * ((__int64)&v28[-v23] >> 4) == v22 >> 7 )
              v28 = (unsigned __int8 *)v20[4];
          }
          v30 = v28[137];
          if ( v30 == v28[136] )
          {
            if ( v30 )
            {
              if ( v30 == 48 )
              {
                v38 = 80;
                v40 = 640;
                v39 = 80;
              }
              else
              {
                v37 = v30;
                v38 = v30 + 16;
                v39 = v37 + 16;
                v40 = 8 * v39;
              }
            }
            else
            {
              v38 = 48;
              v40 = 384;
              v39 = 48;
            }
            v52 = v19;
            v50 = v39;
            v47 = v24;
            v41 = (_QWORD *)operator new[](v40);
            v24 = v47;
            v42 = v28[136];
            v31 = v41;
            v43 = 0;
            v19 = v52;
            if ( !v42
              || (v45 = *((char **)v28 + 16),
                  v43 = v42,
                  *v31 = *(_QWORD *)v45,
                  v49 = 8LL * v42,
                  v31[(unsigned __int64)v49 / 8 - 1] = *(_QWORD *)&v45[v49 - 8],
                  qmemcpy(
                    (void *)((unsigned __int64)(v31 + 1) & 0xFFFFFFFFFFFFFFF8LL),
                    (const void *)(v45 - ((char *)v31 - ((unsigned __int64)(v31 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
                    8LL * (((unsigned int)v31 - (((_DWORD)v31 + 8) & 0xFFFFFFF8) + (unsigned int)v49) >> 3)),
                  v42 < v50) )
            {
              do
              {
                LOBYTE(v31[v43]) = v43 + 1;
                ++v43;
              }
              while ( v43 < v50 );
            }
            v44 = *((void **)v28 + 16);
            if ( v44 )
            {
              v51 = v31;
              v48 = v24;
              operator delete[](v44);
              v19 = v52;
              v31 = v51;
              v24 = v48;
            }
            v28[136] = v38;
            v30 = v28[137];
            *((_QWORD *)v28 + 16) = v31;
          }
          else
          {
            v31 = *((_QWORD **)v28 + 16);
          }
          v32 = (unsigned __int8 *)&v31[v30];
          v28[137] = *v32;
          v28[v27] = v30;
          *(_QWORD *)v32 = *v24;
        }
        v18 = (void **)((char *)v18 + 1);
      }
      while ( v18 != v19 );
      v16 = v20;
      v17 = v54;
      v33 = v19;
      if ( *v19 )
      {
        operator delete[](*v19);
        *v33 = nullptr;
      }
      v15 = v33 + 18;
    }
    while ( (void **)v54 != v15 );
    v4 = v53;
  }
  if ( v4 )
  {
    v34 = v4 + 144LL * *(_QWORD *)(v4 - 8);
    if ( v34 == v4 )
    {
      v36 = 0;
    }
    else
    {
      do
      {
        v35 = *(void **)(v34 - 16);
        v34 -= 144;
        if ( v35 )
          operator delete[](v35);
      }
      while ( v34 != v4 );
      v36 = 144LL * *(_QWORD *)(v4 - 8);
    }
    operator delete[]((void *)(v4 - 8), v36 + 8);
  }
}

