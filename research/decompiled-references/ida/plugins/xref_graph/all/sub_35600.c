void __fastcall sub_35600(_QWORD *a1, unsigned __int64 a2)
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
  unsigned __int64 v22; // r10
  __int64 v23; // rdi
  _QWORD *v24; // rdx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rbp
  unsigned __int8 *v27; // r12
  __int64 i; // rax
  unsigned __int8 v29; // bl
  _QWORD *v30; // r11
  unsigned __int8 *v31; // rax
  void **v32; // r15
  __int64 v33; // rbx
  void *v34; // rdi
  __int64 v35; // rax
  __int64 v36; // r10
  char v37; // bl
  __int64 v38; // r10
  unsigned __int64 v39; // rdi
  _QWORD *v40; // rax
  unsigned __int8 v41; // cl
  unsigned __int64 v42; // rax
  void *v43; // rdi
  char *v44; // rsi
  _QWORD *v45; // [rsp+8h] [rbp-60h]
  _QWORD *v46; // [rsp+8h] [rbp-60h]
  _QWORD *v47; // [rsp+8h] [rbp-60h]
  __int64 v48; // [rsp+8h] [rbp-60h]
  unsigned __int64 v49; // [rsp+10h] [rbp-58h]
  _QWORD *v50; // [rsp+10h] [rbp-58h]
  void **v51; // [rsp+18h] [rbp-50h]
  __int64 v52; // [rsp+20h] [rbp-48h]
  __int64 v53; // [rsp+28h] [rbp-40h]

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
      sub_35AA0();
      return;
    }
    v7 = v6 >> 7;
    v8 = (v6 >> 7) - 1;
    v9 = 144 * (v6 >> 7) + 8;
  }
  v45 = a1;
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
  v45[4] = v11;
  v14 = v5 >> 7;
  v45[2] = v6;
  if ( v5 >> 7 )
  {
    v52 = v4;
    v15 = (void **)(v4 + 128);
    v16 = v45;
    v17 = 144 * v14 + v4 + 128;
    do
    {
      v53 = v17;
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
          v25 = (v22 - 1)
              & (((0xD6E8FEB86659FD93LL
                 * (((0xD6E8FEB86659FD93LL * (*v24 ^ v20[3] ^ ((*v24 ^ v20[3]) >> 32))) >> 32)
                  ^ (0xD6E8FEB86659FD93LL * (*v24 ^ v20[3] ^ ((*v24 ^ v20[3]) >> 32))))) >> 32)
               ^ (0xD6E8FEB86659FD93LL
                * (((0xD6E8FEB86659FD93LL * (*v24 ^ v20[3] ^ ((*v24 ^ v20[3]) >> 32))) >> 32)
                 ^ (0xD6E8FEB86659FD93LL * (*v24 ^ v20[3] ^ ((*v24 ^ v20[3]) >> 32))))));
          v26 = v25 & 0x7F;
          v27 = (unsigned __int8 *)(v23 + 144 * (v25 >> 7));
LABEL_14:
          for ( i = v27[v26]; i != 255; i = *v27 )
          {
            if ( *v24 == *(_QWORD *)(*((_QWORD *)v27 + 16) + 8 * i) )
              break;
            if ( ++v26 != 128 )
              goto LABEL_14;
            v27 += 144;
            v26 = 0;
            if ( 0x8E38E38E38E38E39LL * ((__int64)&v27[-v23] >> 4) == v22 >> 7 )
              v27 = (unsigned __int8 *)v20[4];
          }
          v29 = v27[137];
          if ( v29 == v27[136] )
          {
            if ( v29 )
            {
              if ( v29 == 48 )
              {
                v37 = 80;
                v39 = 640;
                v38 = 80;
              }
              else
              {
                v36 = v29;
                v37 = v29 + 16;
                v38 = v36 + 16;
                v39 = 8 * v38;
              }
            }
            else
            {
              v37 = 48;
              v39 = 384;
              v38 = 48;
            }
            v51 = v19;
            v49 = v38;
            v46 = v24;
            v40 = (_QWORD *)operator new[](v39);
            v24 = v46;
            v41 = v27[136];
            v30 = v40;
            v42 = 0;
            v19 = v51;
            if ( !v41
              || (v44 = *((char **)v27 + 16),
                  v42 = v41,
                  *v30 = *(_QWORD *)v44,
                  v48 = 8LL * v41,
                  v30[(unsigned __int64)v48 / 8 - 1] = *(_QWORD *)&v44[v48 - 8],
                  qmemcpy(
                    (void *)((unsigned __int64)(v30 + 1) & 0xFFFFFFFFFFFFFFF8LL),
                    (const void *)(v44 - ((char *)v30 - ((unsigned __int64)(v30 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
                    8LL * (((unsigned int)v30 - (((_DWORD)v30 + 8) & 0xFFFFFFF8) + (unsigned int)v48) >> 3)),
                  v41 < v49) )
            {
              do
              {
                LOBYTE(v30[v42]) = v42 + 1;
                ++v42;
              }
              while ( v42 < v49 );
            }
            v43 = *((void **)v27 + 16);
            if ( v43 )
            {
              v50 = v30;
              v47 = v24;
              operator delete[](v43);
              v19 = v51;
              v30 = v50;
              v24 = v47;
            }
            v27[136] = v37;
            v29 = v27[137];
            *((_QWORD *)v27 + 16) = v30;
          }
          else
          {
            v30 = *((_QWORD **)v27 + 16);
          }
          v31 = (unsigned __int8 *)&v30[v29];
          v27[137] = *v31;
          v27[v26] = v29;
          *(_QWORD *)v31 = *v24;
        }
        v18 = (void **)((char *)v18 + 1);
      }
      while ( v18 != v19 );
      v16 = v20;
      v17 = v53;
      v32 = v19;
      if ( *v19 )
      {
        operator delete[](*v19);
        *v32 = nullptr;
      }
      v15 = v32 + 18;
    }
    while ( (void **)v53 != v15 );
    v4 = v52;
  }
  if ( v4 )
  {
    v33 = v4 + 144LL * *(_QWORD *)(v4 - 8);
    if ( v33 == v4 )
    {
      v35 = 0;
    }
    else
    {
      do
      {
        v34 = *(void **)(v33 - 16);
        v33 -= 144;
        if ( v34 )
          operator delete[](v34);
      }
      while ( v33 != v4 );
      v35 = 144LL * *(_QWORD *)(v4 - 8);
    }
    operator delete[]((void *)(v4 - 8), v35 + 8);
  }
}

