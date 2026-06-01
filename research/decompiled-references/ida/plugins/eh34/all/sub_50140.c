__int64 __fastcall sub_50140(__int64 a1, __int64 a2, char **a3)
{
  char *v4; // rdx
  size_t v6; // rax
  char *v7; // r12
  __int64 v8; // rax
  size_t v9; // rax
  __int64 v10; // rax
  size_t v11; // rax
  size_t v12; // rax
  __int64 v13; // rax
  char v14; // r13
  __int64 v15; // rsi
  __int64 v16; // r13
  size_t v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  size_t v20; // rax
  size_t v21; // rax
  __int64 v22; // rax
  char v23; // r8
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rax
  size_t v27; // rax
  __int64 v28; // rax
  char v29; // r13
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v33; // [rsp+8h] [rbp-68h]
  char v34; // [rsp+17h] [rbp-59h]
  _BYTE v35[5]; // [rsp+26h] [rbp-4Ah] BYREF
  _BYTE v36[5]; // [rsp+2Bh] [rbp-45h] BYREF
  _QWORD v37[8]; // [rsp+30h] [rbp-40h] BYREF

  v37[0] = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v4 = a3[1];
  if ( v4 )
  {
    v6 = pack_dd(v35, v36, v4) - (_QWORD)v35;
    if ( v6 )
      sub_4E640((__int64 *)a1, v35, v6);
    v7 = *a3;
    v33 = (__int64)&(*a3)[72 * (_QWORD)a3[1]];
    if ( *a3 != (char *)v33 )
    {
      do
      {
        v13 = *(_QWORD *)(a1 + 8);
        v14 = *v7;
        v15 = *(_QWORD *)a1;
        if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v13 + 1) )
        {
          v26 = qvector_reserve(a1, v15, v13 + 1, 1);
          *(_QWORD *)a1 = v26;
          v15 = v26;
          v13 = *(_QWORD *)(a1 + 8);
        }
        *(_BYTE *)(v15 + v13) = v14;
        ++*(_QWORD *)(a1 + 8);
        v16 = 1 - a2;
        v17 = pack_dq(v35, v37, 1 - a2 + *((_QWORD *)v7 + 1)) - (_QWORD)v35;
        if ( v17 )
          sub_4E640((__int64 *)a1, v35, v17);
        v18 = *((_QWORD *)v7 + 2);
        v19 = v18 + v16;
        if ( v18 == -1 )
          v19 = 0;
        v20 = pack_dq(v35, v37, v19) - (_QWORD)v35;
        if ( v20 )
          sub_4E640((__int64 *)a1, v35, v20);
        v21 = pack_dd(v35, v36, *((unsigned int *)v7 + 6)) - (_QWORD)v35;
        if ( v21 )
          sub_4E640((__int64 *)a1, v35, v21);
        v22 = *(_QWORD *)(a1 + 8);
        v23 = v7[28];
        v24 = *(_QWORD *)a1;
        if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v22 + 1) )
        {
          v34 = v7[28];
          v25 = qvector_reserve(a1, v24, v22 + 1, 1);
          *(_QWORD *)a1 = v25;
          v24 = v25;
          v23 = v34;
          v22 = *(_QWORD *)(a1 + 8);
        }
        *(_BYTE *)(v24 + v22) = v23;
        ++*(_QWORD *)(a1 + 8);
        if ( *((_QWORD *)v7 + 5) )
          v8 = pack_dq(v35, v37, v16 + **((_QWORD **)v7 + 4));
        else
          v8 = pack_dq(v35, v37, 0);
        v9 = v8 - (_QWORD)v35;
        if ( v9 )
          sub_4E640((__int64 *)a1, v35, v9);
        if ( *((_QWORD *)v7 + 5) <= 1u )
          v10 = pack_dq(v35, v37, 0);
        else
          v10 = pack_dq(v35, v37, v16 + *(_QWORD *)(*((_QWORD *)v7 + 4) + 8LL));
        v11 = v10 - (_QWORD)v35;
        if ( v11 )
          sub_4E640((__int64 *)a1, v35, v11);
        v12 = pack_dd(v35, v36, *((unsigned int *)v7 + 14)) - (_QWORD)v35;
        if ( v12 )
          sub_4E640((__int64 *)a1, v35, v12);
        if ( *v7 == 3 )
        {
          v27 = pack_dd(v35, v36, *((unsigned int *)v7 + 15)) - (_QWORD)v35;
          if ( v27 )
            sub_4E640((__int64 *)a1, v35, v27);
        }
        else if ( *v7 == 4 )
        {
          v28 = *(_QWORD *)(a1 + 8);
          v29 = v7[64];
          v30 = *(_QWORD *)a1;
          if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v28 + 1) )
          {
            v31 = qvector_reserve(a1, v30, v28 + 1, 1);
            *(_QWORD *)a1 = v31;
            v30 = v31;
            v28 = *(_QWORD *)(a1 + 8);
          }
          *(_BYTE *)(v30 + v28) = v29;
          ++*(_QWORD *)(a1 + 8);
        }
        v7 += 72;
      }
      while ( (char *)v33 != v7 );
    }
  }
  return a1;
}

