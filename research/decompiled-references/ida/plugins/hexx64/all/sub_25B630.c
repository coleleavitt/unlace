__int64 __fastcall sub_25B630(__int64 a1, _QWORD *a2, double a3)
{
  _QWORD *v3; // r14
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  size_t v7; // rbx
  __int64 result; // rax
  __int64 v9; // r13
  void *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // r15
  __int64 v14; // rbx
  __int64 v15; // rbp
  __int64 v16; // rcx
  __int64 v17; // r8
  void *v18; // rax
  __int64 v19; // [rsp+0h] [rbp-48h]
  __int64 n; // [rsp+8h] [rbp-40h]

  v3 = a2;
  *(_QWORD *)a1 = -1;
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 12) = -1;
  *(_QWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  sub_25AFF0(a1, (__int64)a2, a3);
  *(_QWORD *)(a1 + 64) = a2[8];
  v6 = a2[9];
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 72) = v6;
  *(_OWORD *)(a1 + 88) = 0;
  v7 = a2[11];
  if ( v7 )
  {
    v10 = (void *)qalloc_or_throw(a2[11], (__int64)a2, v4, v5);
    *(_QWORD *)(a1 + 80) = v10;
    a2 = (_QWORD *)a2[10];
    *(_QWORD *)(a1 + 96) = v7;
    memcpy(v10, a2, v7);
    *(_QWORD *)(a1 + 88) = v7;
  }
  result = v3[13];
  *(_QWORD *)(a1 + 112) = 0;
  *(_OWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 104) = result;
  v9 = v3[15];
  if ( v9 )
  {
    v11 = qalloc_or_throw(56 * v9, (__int64)a2, v4, v5);
    *(_QWORD *)(a1 + 112) = v11;
    v12 = v11;
    v13 = 0;
    *(_QWORD *)(a1 + 128) = v9;
    while ( 1 )
    {
      v14 = 56 * v13 + v12;
      v15 = v3[14] + 56 * v13;
      *(_QWORD *)v14 = -1;
      *(_DWORD *)(v14 + 8) = 70;
      *(_QWORD *)(v14 + 12) = -1;
      result = sub_25AA70(v14, v15, 0.0);
      *(_QWORD *)(v14 + 32) = 0;
      *(_OWORD *)(v14 + 40) = 0;
      v17 = *(_QWORD *)(v15 + 40);
      if ( v17 )
      {
        v19 = *(_QWORD *)(v15 + 40);
        n = 8 * v17;
        v18 = (void *)qalloc_or_throw(8 * v17, v15, 8 * v17, v16);
        *(_QWORD *)(v14 + 32) = v18;
        ++v13;
        *(_QWORD *)(v14 + 48) = v19;
        result = (__int64)memcpy(v18, *(const void **)(v15 + 32), n);
        *(_QWORD *)(v14 + 40) = v19;
        if ( v9 == v13 )
        {
LABEL_9:
          *(_QWORD *)(a1 + 120) = v9;
          return result;
        }
      }
      else if ( v9 == ++v13 )
      {
        goto LABEL_9;
      }
      v12 = *(_QWORD *)(a1 + 112);
    }
  }
  return result;
}

