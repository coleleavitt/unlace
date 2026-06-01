__int64 __fastcall sub_2693F0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 *v3; // rbp
  int v4; // r13d
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rbx
  __int64 v15; // rbp
  __int64 v17; // [rsp+8h] [rbp-50h]
  __int64 *v18; // [rsp+10h] [rbp-48h]

  v2 = 0;
  v3 = *(__int64 **)(a1 + 56);
  v18 = &v3[4 * *(_QWORD *)(a1 + 64)];
  if ( v18 != v3 )
  {
    while ( 1 )
    {
      v6 = j__qalloc_or_throw();
      v7 = *v3;
      *(_QWORD *)v6 = -1;
      v8 = v6;
      *(_DWORD *)(v6 + 8) = 0;
      *(_QWORD *)(v6 + 12) = -1;
      *(_QWORD *)(v6 + 48) = 0;
      *(_DWORD *)(v6 + 56) = 0;
      sub_256770(v6, v7);
      v9 = v3[3];
      v10 = -v9;
      if ( v9 > 0 )
        v10 = v3[3];
      if ( v10 != 1 )
        goto LABEL_10;
      if ( v9 == -1 )
        break;
LABEL_11:
      if ( v2 )
      {
LABEL_3:
        v4 = (v9 == -1) + 35;
        if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 2u
          && v4 == ((unsigned __int8)((get_tinfo_property() & 0xF) - 10) > 2u) + 35 )
        {
          sub_2422C0(v8, *(_QWORD *)a1, (_QWORD *)(*(_QWORD *)a1 + 280LL));
        }
        v3 += 4;
        v5 = j__qalloc_or_throw();
        *(_QWORD *)v5 = -1;
        *(_QWORD *)(v5 + 24) = v2;
        *(_DWORD *)(v5 + 8) = v4;
        *(_QWORD *)(v5 + 12) = -1;
        *(_QWORD *)(v5 + 32) = v8;
        *(_QWORD *)(v5 + 40) = 0;
        *(_QWORD *)(v5 + 48) = 0;
        *(_DWORD *)(v5 + 56) = 0;
        v17 = v5;
        *(_QWORD *)v5 = *(v3 - 3);
        sub_23F940(v5, *(_QWORD *)(*(_QWORD *)a1 + 112LL), 0);
        *(_DWORD *)(v17 + 56) |= 1u;
        v2 = v17;
        if ( v18 == v3 )
          goto LABEL_13;
      }
      else
      {
        v2 = v8;
        v3 += 4;
        if ( v18 == v3 )
          goto LABEL_13;
      }
    }
    if ( v2 )
      goto LABEL_3;
LABEL_10:
    v11 = sub_265E10(v8, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL), (__int64)(v3 + 1), v3[3]);
    *(_DWORD *)(v11 + 56) |= 1u;
    v8 = v11;
    goto LABEL_11;
  }
LABEL_13:
  if ( !*(_BYTE *)(a1 + 452) )
    return sub_2656E0(v2, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL), *(_QWORD *)(a1 + 104), *(_DWORD *)(a1 + 112), a2);
  v12 = j__qalloc_or_throw();
  v13 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)v12 = -1;
  v14 = v12;
  *(_DWORD *)(v12 + 8) = 0;
  *(_QWORD *)(v12 + 12) = -1;
  *(_QWORD *)(v12 + 48) = 0;
  *(_DWORD *)(v12 + 56) = 0;
  sub_256770(v12, v13);
  if ( v2 )
  {
    v15 = j__qalloc_or_throw();
    *(_QWORD *)(v15 + 32) = v14;
    *(_QWORD *)v15 = -1;
    v14 = v15;
    *(_DWORD *)(v15 + 8) = 35;
    *(_QWORD *)(v15 + 12) = -1;
    *(_QWORD *)(v15 + 24) = v2;
    *(_QWORD *)(v15 + 40) = 0;
    *(_QWORD *)(v15 + 48) = 0;
    *(_DWORD *)(v15 + 56) = 0;
    sub_23F940(v15, *(_QWORD *)(*(_QWORD *)a1 + 112LL), 0);
    *(_DWORD *)(v15 + 56) |= 1u;
  }
  return v14;
}

