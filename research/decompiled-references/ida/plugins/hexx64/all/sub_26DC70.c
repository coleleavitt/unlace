__int64 __fastcall sub_26DC70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v5; // r12
  __int64 *v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // r13d
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbp
  __int64 v24; // [rsp+8h] [rbp-50h]
  __int64 *v25; // [rsp+10h] [rbp-48h]
  __int64 v26; // [rsp+18h] [rbp-40h]

  v5 = 0;
  v6 = *(__int64 **)(a1 + 56);
  v26 = a2;
  v25 = &v6[4 * *(_QWORD *)(a1 + 64)];
  if ( v25 != v6 )
  {
    while ( 1 )
    {
      v12 = j__qalloc_or_throw(64, a2, a3, a4);
      a2 = *v6;
      *(_QWORD *)v12 = -1;
      v13 = v12;
      *(_DWORD *)(v12 + 8) = 0;
      *(_QWORD *)(v12 + 12) = -1;
      *(_QWORD *)(v12 + 48) = 0;
      *(_DWORD *)(v12 + 56) = 0;
      sub_25AFF0(v12, a2, a5);
      v14 = v6[3];
      v15 = -v14;
      if ( v14 > 0 )
        v15 = v6[3];
      if ( v15 != 1 )
        goto LABEL_10;
      if ( v14 == -1 )
        break;
LABEL_11:
      if ( v5 )
      {
LABEL_3:
        v7 = 2;
        v10 = (v14 == -1) + 35;
        if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 2u )
        {
          v7 = 2;
          if ( v10 == ((unsigned __int8)((get_tinfo_property() & 0xF) - 10) > 2u) + 35 )
          {
            v7 = *(_QWORD *)a1;
            sub_246B40(v13, *(_QWORD *)a1, (_QWORD *)(*(_QWORD *)a1 + 280LL), a5);
          }
        }
        v6 += 4;
        v11 = j__qalloc_or_throw(64, v7, v8, v9);
        *(_QWORD *)v11 = -1;
        *(_QWORD *)(v11 + 24) = v5;
        *(_DWORD *)(v11 + 8) = v10;
        *(_QWORD *)(v11 + 12) = -1;
        *(_QWORD *)(v11 + 32) = v13;
        *(_QWORD *)(v11 + 40) = 0;
        *(_QWORD *)(v11 + 48) = 0;
        *(_DWORD *)(v11 + 56) = 0;
        v24 = v11;
        *(_QWORD *)v11 = *(v6 - 3);
        a2 = *(_QWORD *)(*(_QWORD *)a1 + 112LL);
        sub_2441C0(v11, a2, 0, a5);
        *(_DWORD *)(v24 + 56) |= 1u;
        v5 = v24;
        if ( v25 == v6 )
          goto LABEL_13;
      }
      else
      {
        v5 = v13;
        v6 += 4;
        if ( v25 == v6 )
          goto LABEL_13;
      }
    }
    if ( v5 )
      goto LABEL_3;
LABEL_10:
    a2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL);
    v16 = sub_26A690(v13, a2, (__int64)(v6 + 1), v6[3], a5);
    *(_DWORD *)(v16 + 56) |= 1u;
    v13 = v16;
    goto LABEL_11;
  }
LABEL_13:
  if ( !*(_BYTE *)(a1 + 452) )
    return sub_269F60(
             v5,
             *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
             *(_QWORD *)(a1 + 104),
             *(_DWORD *)(a1 + 112),
             v26,
             a5);
  v17 = j__qalloc_or_throw(64, a2, a3, a4);
  v18 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)v17 = -1;
  v19 = v17;
  *(_DWORD *)(v17 + 8) = 0;
  *(_QWORD *)(v17 + 12) = -1;
  *(_QWORD *)(v17 + 48) = 0;
  *(_DWORD *)(v17 + 56) = 0;
  sub_25AFF0(v17, v18, a5);
  if ( v5 )
  {
    v22 = j__qalloc_or_throw(64, v18, v20, v21);
    *(_QWORD *)(v22 + 32) = v19;
    *(_QWORD *)v22 = -1;
    v19 = v22;
    *(_DWORD *)(v22 + 8) = 35;
    *(_QWORD *)(v22 + 12) = -1;
    *(_QWORD *)(v22 + 24) = v5;
    *(_QWORD *)(v22 + 40) = 0;
    *(_QWORD *)(v22 + 48) = 0;
    *(_DWORD *)(v22 + 56) = 0;
    sub_2441C0(v22, *(_QWORD *)(*(_QWORD *)a1 + 112LL), 0, a5);
    *(_DWORD *)(v22 + 56) |= 1u;
  }
  return v19;
}

