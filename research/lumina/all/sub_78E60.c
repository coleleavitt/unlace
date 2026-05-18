void __fastcall sub_78E60(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rbx
  void *v10; // rax
  void *v11; // rax
  void *v12; // rax
  void *v13; // rax
  void *v14; // rax
  void *v15; // rax
  void *v16; // rax
  size_t ne; // [rsp+0h] [rbp-48h]
  size_t nf; // [rsp+0h] [rbp-48h]
  size_t nd; // [rsp+0h] [rbp-48h]
  size_t nc; // [rsp+0h] [rbp-48h]
  size_t nb; // [rsp+0h] [rbp-48h]
  size_t na; // [rsp+0h] [rbp-48h]
  size_t n; // [rsp+0h] [rbp-48h]
  __int64 v24; // [rsp+8h] [rbp-40h]

  if ( a1[2] < a2 )
    *a1 = sub_1987B0(a1, *a1, a2, 216);
  v4 = a1[1];
  if ( v4 < a2 )
  {
    v5 = 216 * v4;
    do
    {
      while ( 1 )
      {
        v9 = v5 + *a1;
        *(_DWORD *)v9 = *(_DWORD *)a3;
        *(_QWORD *)(v9 + 8) = 0;
        *(_OWORD *)(v9 + 16) = 0;
        if ( *(_QWORD *)(a3 + 16) )
        {
          ne = *(_QWORD *)(a3 + 16);
          v10 = (void *)sub_198760(ne);
          *(_QWORD *)(v9 + 8) = v10;
          *(_QWORD *)(v9 + 24) = ne;
          memcpy(v10, *(const void **)(a3 + 8), ne);
          *(_QWORD *)(v9 + 16) = ne;
        }
        *(_QWORD *)(v9 + 32) = 0;
        *(_OWORD *)(v9 + 40) = 0;
        if ( *(_QWORD *)(a3 + 40) )
        {
          n = *(_QWORD *)(a3 + 40);
          v16 = (void *)sub_198760(n);
          *(_QWORD *)(v9 + 32) = v16;
          *(_QWORD *)(v9 + 48) = n;
          memcpy(v16, *(const void **)(a3 + 32), n);
          *(_QWORD *)(v9 + 40) = n;
        }
        *(_QWORD *)(v9 + 56) = 0;
        *(_OWORD *)(v9 + 64) = 0;
        if ( *(_QWORD *)(a3 + 64) )
        {
          na = *(_QWORD *)(a3 + 64);
          v15 = (void *)sub_198760(na);
          *(_QWORD *)(v9 + 56) = v15;
          *(_QWORD *)(v9 + 72) = na;
          memcpy(v15, *(const void **)(a3 + 56), na);
          *(_QWORD *)(v9 + 64) = na;
        }
        *(_QWORD *)(v9 + 80) = 0;
        *(_OWORD *)(v9 + 88) = 0;
        if ( *(_QWORD *)(a3 + 88) )
        {
          nb = *(_QWORD *)(a3 + 88);
          v14 = (void *)sub_198760(nb);
          *(_QWORD *)(v9 + 80) = v14;
          *(_QWORD *)(v9 + 96) = nb;
          memcpy(v14, *(const void **)(a3 + 80), nb);
          *(_QWORD *)(v9 + 88) = nb;
        }
        *(_QWORD *)(v9 + 104) = 0;
        *(_OWORD *)(v9 + 112) = 0;
        if ( *(_QWORD *)(a3 + 112) )
        {
          nc = *(_QWORD *)(a3 + 112);
          v13 = (void *)sub_198760(nc);
          *(_QWORD *)(v9 + 104) = v13;
          *(_QWORD *)(v9 + 120) = nc;
          memcpy(v13, *(const void **)(a3 + 104), nc);
          *(_QWORD *)(v9 + 112) = nc;
        }
        *(_DWORD *)(v9 + 128) = *(_DWORD *)(a3 + 128);
        *(_QWORD *)(v9 + 136) = *(_QWORD *)(a3 + 136);
        *(_DWORD *)(v9 + 144) = *(_DWORD *)(a3 + 144);
        v6 = *(_QWORD *)(a3 + 152);
        *(_QWORD *)(v9 + 160) = 0;
        *(_QWORD *)(v9 + 152) = v6;
        *(_OWORD *)(v9 + 168) = 0;
        if ( *(_QWORD *)(a3 + 168) )
        {
          nd = *(_QWORD *)(a3 + 168);
          v12 = (void *)sub_198760(nd);
          *(_QWORD *)(v9 + 160) = v12;
          *(_QWORD *)(v9 + 176) = nd;
          memcpy(v12, *(const void **)(a3 + 160), nd);
          *(_QWORD *)(v9 + 168) = nd;
        }
        v7 = *(_DWORD *)(a3 + 184);
        *(_QWORD *)(v9 + 192) = 0;
        *(_OWORD *)(v9 + 200) = 0;
        *(_DWORD *)(v9 + 184) = v7;
        v8 = *(_QWORD *)(a3 + 200);
        if ( v8 )
          break;
        ++v4;
        v5 += 216;
        if ( a2 == v4 )
          goto LABEL_20;
      }
      nf = *(_QWORD *)(a3 + 200);
      v24 = 24 * v8;
      v11 = (void *)sub_198760(24 * v8);
      ++v4;
      *(_QWORD *)(v9 + 192) = v11;
      v5 += 216;
      *(_QWORD *)(v9 + 208) = nf;
      memcpy(v11, *(const void **)(a3 + 192), v24);
      *(_QWORD *)(v9 + 200) = nf;
    }
    while ( a2 != v4 );
  }
LABEL_20:
  a1[1] = a2;
}
