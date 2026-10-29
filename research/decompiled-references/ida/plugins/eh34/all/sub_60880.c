unsigned __int64 __fastcall sub_60880(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 v3; // rdx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r13
  _QWORD *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 *v13; // rdi
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  bool v18; // cf
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 *v21; // rdi
  __int64 v22; // r12
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // [rsp+8h] [rbp-40h] BYREF
  __int64 v27; // [rsp+10h] [rbp-38h]
  unsigned __int64 v28; // [rsp+18h] [rbp-30h]

  v2 = *(int *)(a2 + 64);
  v3 = a1[25];
  v28 = __readfsqword(0x28u);
  v26 = 0;
  if ( v2 < v3 )
  {
LABEL_9:
    a1[25] = v2;
    return v28 - __readfsqword(0x28u);
  }
  if ( v3 < v2 )
  {
    v6 = a1[24];
    v7 = a1[26];
    v8 = a1 + 24;
    if ( (unsigned __int64)&v26 < v6 || (unsigned __int64)&v26 >= v6 + 8 * v7 )
    {
      if ( v7 >= v2 )
        goto LABEL_6;
      v11 = qvector_reserve(v8, 0, v2, 8);
      v12 = a1[26];
      v13 = (__int64 *)a1[24];
      a1[26] = v7;
      v14 = v11;
      v15 = a1[25] - 1LL;
      if ( v15 >= 0 )
      {
        v16 = v14;
        do
        {
          v17 = *v13;
          v16 += 8;
          ++v13;
          *(_QWORD *)(v16 - 8) = v17;
          v18 = v15-- == 0;
        }
        while ( !v18 );
        v13 = (__int64 *)a1[24];
      }
      qfree(v13);
      v3 = a1[25];
      a1[24] = v14;
      v6 = v14;
      a1[26] = v12;
      if ( v3 < v2 )
      {
LABEL_6:
        v9 = v26;
        while ( 1 )
        {
          *(_QWORD *)(v6 + 8 * v3++) = v9;
          if ( v2 == v3 )
            break;
          v6 = a1[24];
        }
      }
    }
    else
    {
      v27 = 0;
      if ( v7 >= v2 )
        goto LABEL_12;
      v19 = qvector_reserve(v8, 0, v2, 8);
      v20 = a1[26];
      v21 = (__int64 *)a1[24];
      a1[26] = v7;
      v22 = v19;
      v23 = a1[25] - 1LL;
      if ( v23 >= 0 )
      {
        v24 = v22;
        do
        {
          v25 = *v21;
          v24 += 8;
          ++v21;
          *(_QWORD *)(v24 - 8) = v25;
          v18 = v23-- == 0;
        }
        while ( !v18 );
        v21 = (__int64 *)a1[24];
      }
      qfree(v21);
      v3 = a1[25];
      a1[24] = v22;
      v6 = v22;
      a1[26] = v20;
      if ( v3 < v2 )
      {
LABEL_12:
        v10 = v27;
        while ( 1 )
        {
          *(_QWORD *)(v6 + 8 * v3++) = v10;
          if ( v2 == v3 )
            break;
          v6 = a1[24];
        }
      }
    }
    goto LABEL_9;
  }
  return v28 - __readfsqword(0x28u);
}

