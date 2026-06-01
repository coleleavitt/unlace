__int64 __fastcall sub_5C590(__int64 a1, __int64 **a2)
{
  unsigned __int64 v2; // rbp
  __int64 *v4; // rax
  __int64 *v5; // rbp
  __int64 v6; // r13
  __int64 v7; // rcx
  __int64 *v8; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  char v13; // r15
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // r15
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rax

  v2 = (unsigned __int64)a2[1] + *(_QWORD *)(a1 + 72);
  if ( *(_QWORD *)(a1 + 80) < v2 )
    *(_QWORD *)(a1 + 64) = qvector_reserve(a1 + 64, *(_QWORD *)(a1 + 64), v2, 8);
  if ( *(_QWORD *)(a1 + 104) < v2 )
    *(_QWORD *)(a1 + 88) = qvector_reserve(a1 + 88, *(_QWORD *)(a1 + 88), v2, 1);
  if ( (unsigned __int8)(*((_BYTE *)a2 + 24) - 10) <= 1u )
  {
    v4 = a2[1];
    v5 = *a2;
    v6 = **a2;
    v7 = 3LL * (_QWORD)v4;
    if ( v4 == (__int64 *)((char *)&dword_0 + 1) || (v8 = v5 + 3, v7 == 3) )
    {
LABEL_17:
      while ( *((_WORD *)v5 + 8) == 285 )
      {
        v16 = *(_QWORD *)(a1 + 72);
        v17 = v5[1];
        v18 = *(_QWORD *)(a1 + 64);
        if ( *(_QWORD *)(a1 + 80) < (unsigned __int64)(v16 + 1) )
        {
          v10 = qvector_reserve(a1 + 64, v18, v16 + 1, 8);
          *(_QWORD *)(a1 + 64) = v10;
          v18 = v10;
          v16 = *(_QWORD *)(a1 + 72);
        }
        *(_QWORD *)(v18 + 8 * v16) = v17;
        v11 = *(_QWORD *)(a1 + 96);
        ++*(_QWORD *)(a1 + 72);
        v12 = *(_QWORD *)(a1 + 88);
        v13 = *((_BYTE *)v5 + 18) & 1;
        if ( *(_QWORD *)(a1 + 104) < (unsigned __int64)(v11 + 1) )
        {
          v20 = qvector_reserve(a1 + 88, v12, v11 + 1, 1);
          *(_QWORD *)(a1 + 88) = v20;
          v12 = v20;
          v11 = *(_QWORD *)(a1 + 96);
        }
        *(_BYTE *)(v12 + v11) = v13;
        v14 = *(_QWORD *)(a1 + 120);
        ++*(_QWORD *)(a1 + 96);
        v15 = *(_QWORD *)(a1 + 112);
        if ( *(_QWORD *)(a1 + 128) < (unsigned __int64)(v14 + 1) )
        {
          v19 = qvector_reserve(a1 + 112, v15, v14 + 1, 8);
          *(_QWORD *)(a1 + 112) = v19;
          v15 = v19;
          v14 = *(_QWORD *)(a1 + 120);
        }
        *(_QWORD *)(v15 + 8 * v14) = v6;
        v5 += 3;
        ++*(_QWORD *)(a1 + 120);
        if ( v5 == &(*a2)[3 * (_QWORD)a2[1]] )
          goto LABEL_21;
      }
    }
    else
    {
      while ( *v8 == v6 )
      {
        v8 += 3;
        if ( v8 == &v5[v7] )
        {
          if ( v7 * 8 )
            goto LABEL_17;
LABEL_21:
          *(_QWORD *)(a1 + 144) = 0;
          *(_BYTE *)(a1 + 152) = 1;
          return 1;
        }
      }
    }
  }
  return 0;
}

