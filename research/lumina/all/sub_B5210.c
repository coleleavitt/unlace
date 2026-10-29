void __fastcall sub_B5210(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // rbx
  __int64 v7; // rax
  void *v8; // rax
  void *v9; // rax
  void *v10; // rax
  size_t na; // [rsp+8h] [rbp-40h]
  size_t nb; // [rsp+8h] [rbp-40h]
  size_t n; // [rsp+8h] [rbp-40h]

  if ( a1[2] < a2 )
    *a1 = sub_1987B0(a1, *a1, a2, 88);
  v4 = a1[1];
  if ( v4 < a2 )
  {
    v5 = 88 * v4;
    do
    {
      while ( 1 )
      {
        v6 = v5 + *a1;
        *(_DWORD *)v6 = *(_DWORD *)a3;
        *(_BYTE *)(v6 + 4) = *(_BYTE *)(a3 + 4);
        v7 = *(_QWORD *)(a3 + 8);
        *(_QWORD *)(v6 + 16) = 0;
        *(_QWORD *)(v6 + 8) = v7;
        *(_OWORD *)(v6 + 24) = 0;
        if ( *(_QWORD *)(a3 + 24) )
        {
          na = *(_QWORD *)(a3 + 24);
          v8 = (void *)sub_198760(na);
          *(_QWORD *)(v6 + 16) = v8;
          *(_QWORD *)(v6 + 32) = na;
          memcpy(v8, *(const void **)(a3 + 16), na);
          *(_QWORD *)(v6 + 24) = na;
        }
        *(_QWORD *)(v6 + 40) = 0;
        *(_OWORD *)(v6 + 48) = 0;
        if ( *(_QWORD *)(a3 + 48) )
        {
          n = *(_QWORD *)(a3 + 48);
          v10 = (void *)sub_198760(n);
          *(_QWORD *)(v6 + 40) = v10;
          *(_QWORD *)(v6 + 56) = n;
          memcpy(v10, *(const void **)(a3 + 40), n);
          *(_QWORD *)(v6 + 48) = n;
        }
        *(_QWORD *)(v6 + 64) = 0;
        *(_OWORD *)(v6 + 72) = 0;
        if ( *(_QWORD *)(a3 + 72) )
          break;
        ++v4;
        v5 += 88;
        if ( a2 == v4 )
          goto LABEL_12;
      }
      nb = *(_QWORD *)(a3 + 72);
      v9 = (void *)sub_198760(nb);
      *(_QWORD *)(v6 + 64) = v9;
      ++v4;
      v5 += 88;
      *(_QWORD *)(v6 + 80) = nb;
      memcpy(v9, *(const void **)(a3 + 64), nb);
      *(_QWORD *)(v6 + 72) = nb;
    }
    while ( a2 != v4 );
  }
LABEL_12:
  a1[1] = a2;
}
