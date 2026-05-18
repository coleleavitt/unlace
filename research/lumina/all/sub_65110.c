_QWORD *__fastcall sub_65110(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r15
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r14
  void *v13; // rax
  void *v14; // rax
  void *v15; // rax
  unsigned __int64 v17; // [rsp+8h] [rbp-60h]
  __int64 v18; // [rsp+10h] [rbp-58h]
  size_t nb; // [rsp+18h] [rbp-50h]
  size_t na; // [rsp+18h] [rbp-50h]
  size_t n; // [rsp+18h] [rbp-50h]

  if ( a1[2] < a2 )
    *a1 = sub_1987B0(a1, *a1, a2, 176);
  v4 = a1[1];
  v17 = v4;
  if ( v4 < a2 )
  {
    v18 = 176 * v4;
    do
    {
      v5 = *a1 + v18;
      sub_4CC80(v5, a3);
      *(_QWORD *)(v5 + 152) = 0;
      *(_OWORD *)(v5 + 160) = 0;
      v6 = *(_QWORD *)(a3 + 160);
      if ( v6 )
      {
        v7 = sub_198760(88 * v6);
        *(_QWORD *)(v5 + 152) = v7;
        v8 = v7;
        v9 = 0;
        *(_QWORD *)(v5 + 168) = v6;
        while ( 1 )
        {
          v10 = 88 * v9 + v8;
          v11 = *(_QWORD *)(a3 + 152) + 88 * v9;
          *(_QWORD *)v10 = 0;
          v12 = v11;
          *(_OWORD *)(v10 + 8) = 0;
          if ( *(_QWORD *)(v11 + 8) )
          {
            nb = *(_QWORD *)(v11 + 8);
            v13 = (void *)sub_198760(nb);
            *(_QWORD *)v10 = v13;
            *(_QWORD *)(v10 + 16) = nb;
            memcpy(v13, *(const void **)v12, nb);
            *(_QWORD *)(v10 + 8) = nb;
          }
          *(_QWORD *)(v10 + 24) = 0;
          *(_OWORD *)(v10 + 32) = 0;
          if ( *(_QWORD *)(v12 + 32) )
          {
            n = *(_QWORD *)(v12 + 32);
            v15 = (void *)sub_198760(n);
            *(_QWORD *)(v10 + 24) = v15;
            *(_QWORD *)(v10 + 40) = n;
            memcpy(v15, *(const void **)(v12 + 24), n);
            *(_QWORD *)(v10 + 32) = n;
          }
          *(_QWORD *)(v10 + 48) = 0;
          *(_OWORD *)(v10 + 56) = 0;
          if ( *(_QWORD *)(v12 + 56) )
          {
            na = *(_QWORD *)(v12 + 56);
            v14 = (void *)sub_198760(na);
            *(_QWORD *)(v10 + 48) = v14;
            *(_QWORD *)(v10 + 64) = na;
            memcpy(v14, *(const void **)(v12 + 48), na);
            *(_QWORD *)(v10 + 56) = na;
          }
          ++v9;
          *(_QWORD *)(v10 + 72) = *(_QWORD *)(v12 + 72);
          *(_QWORD *)(v10 + 80) = *(_QWORD *)(v12 + 80);
          if ( v6 == v9 )
            break;
          v8 = *(_QWORD *)(v5 + 152);
        }
        *(_QWORD *)(v5 + 160) = v6;
      }
      ++v17;
      v18 += 176;
    }
    while ( a2 != v17 );
  }
  a1[1] = a2;
  return a1;
}
