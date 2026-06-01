unsigned __int64 __fastcall sub_265320(__int64 a1, void **a2, unsigned int a3, _QWORD *a4)
{
  __int64 *v6; // r14
  __int64 v7; // rax
  __int64 *v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // r15
  __int64 v15; // [rsp+0h] [rbp-58h] BYREF
  __int128 v16; // [rsp+8h] [rbp-50h]
  unsigned __int64 v17; // [rsp+18h] [rbp-40h]

  v6 = *(__int64 **)a1;
  v7 = *(_QWORD *)(a1 + 8);
  v17 = __readfsqword(0x28u);
  v15 = 0;
  v9 = &v6[v7];
  v16 = 0;
  if ( v9 != v6 )
  {
    v10 = 0;
    v11 = 0;
    while ( 1 )
    {
      v13 = *v6;
      if ( !v11 )
        break;
      if ( v13 == get_item_end() )
      {
        v11 = v16;
        v10 = v15;
        v12 = v16 + 1;
      }
      else
      {
        sub_265050(&v15, a2, a3, a4);
        *(_QWORD *)&v16 = 0;
        v10 = v15;
        v12 = 1;
        v11 = 0;
      }
      if ( *((_QWORD *)&v16 + 1) < v12 )
        goto LABEL_10;
LABEL_6:
      *(_QWORD *)(v10 + 8 * v11) = v13;
      ++v6;
      v11 = v16 + 1;
      *(_QWORD *)&v16 = v16 + 1;
      if ( v9 == v6 )
        goto LABEL_12;
      v10 = v15;
    }
    v12 = 1;
    if ( *((_QWORD *)&v16 + 1) )
      goto LABEL_6;
LABEL_10:
    v15 = qvector_reserve((__int64)&v15, v10, v12, 8);
    v11 = v16;
    v10 = v15;
    goto LABEL_6;
  }
LABEL_12:
  sub_265050(&v15, a2, a3, a4);
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v15);
  }
  return v17 - __readfsqword(0x28u);
}

