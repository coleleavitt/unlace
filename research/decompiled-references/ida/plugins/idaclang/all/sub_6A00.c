unsigned __int64 __fastcall sub_6A00(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 *v4; // rdi
  _QWORD *v5; // rdx
  int v6; // eax
  unsigned __int64 v8; // rbp
  __int64 v9; // r12
  const char *v10; // r13
  __int64 v11; // rsi
  unsigned int v12; // edx
  __int64 v13; // rax
  unsigned __int64 v14; // r12
  __int64 v15; // rbp
  const char *v16; // r13
  _DWORD *v17; // rsi
  const char *v18; // rcx
  const char *v19; // rdx
  __int64 v20; // [rsp+0h] [rbp-68h] BYREF
  __int128 v21; // [rsp+8h] [rbp-60h]
  __int64 v22; // [rsp+20h] [rbp-48h] BYREF
  __int128 v23; // [rsp+28h] [rbp-40h]
  unsigned __int64 v24; // [rsp+38h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  v20 = 0;
  v21 = 0;
  v3 = getinf(5);
  v4 = nullptr;
  v5 = nullptr;
  switch ( v3 )
  {
    case 18:
      if ( *((_QWORD *)&v21 + 1) <= 8u )
      {
        a2 = v20;
        v4 = &v20;
        v20 = qvector_reserve(&v20, v20, 9, 1);
        v5 = (_QWORD *)v20;
      }
      *(_QWORD *)&v21 = 9;
      *v5 = 0x78756E696C2D6370LL;
      *(_BYTE *)(v20 + 8) = 0;
      break;
    case 25:
      if ( *((_QWORD *)&v21 + 1) <= 0xCu )
      {
        a2 = v20;
        v4 = &v20;
        v20 = qvector_reserve(&v20, v20, 13, 1);
        v5 = (_QWORD *)v20;
      }
      *(_QWORD *)&v21 = 13;
      qmemcpy(v5, "apple-darwin", 12);
      *(_BYTE *)(v20 + 12) = 0;
      break;
    case 11:
      if ( *((_QWORD *)&v21 + 1) <= 8u )
      {
        a2 = v20;
        v4 = &v20;
        v20 = qvector_reserve(&v20, v20, 9, 1);
        v5 = (_QWORD *)v20;
      }
      *(_QWORD *)&v21 = 9;
      *v5 = 0x32336E69772D6370LL;
      *(_BYTE *)(v20 + 8) = 0;
      break;
    default:
      goto LABEL_15;
  }
  v22 = 0;
  v23 = 0;
  v6 = *(_DWORD *)(get_ph(v4, a2) + 4);
  if ( !v6 )
  {
    if ( (unsigned __int8)getinf_flag(3, 4) )
    {
      v14 = 7;
      v15 = 6;
      v16 = "x86_64";
    }
    else
    {
      v14 = 5;
      v15 = 4;
      v16 = "i386";
    }
    v17 = (_DWORD *)v22;
    if ( *((_QWORD *)&v23 + 1) < v14 )
    {
      v22 = qvector_reserve(&v22, v22, v14, 1);
      v17 = (_DWORD *)v22;
    }
    *(_QWORD *)&v23 = v14;
    *v17 = *(_DWORD *)v16;
    *(_DWORD *)((char *)v17 + (unsigned int)v15 - 4) = *(_DWORD *)&v16[(unsigned int)v15 - 4];
    *(_BYTE *)(v22 + v15) = 0;
LABEL_33:
    v18 = s1;
    if ( (_QWORD)v21 )
      v18 = (const char *)v20;
    v19 = s1;
    if ( (_QWORD)v23 )
      v19 = (const char *)v22;
    sub_6940((__int64 *)(a1 + 8), (__int64)"-target %s-%s", v19, v18);
    if ( v22 )
    {
      *(_QWORD *)&v23 = 0;
      qfree(v22);
    }
    v4 = (__int64 *)v20;
    if ( v20 )
      goto LABEL_16;
    return v24 - __readfsqword(0x28u);
  }
  if ( v6 == 13 )
  {
    if ( (unsigned __int8)getinf_flag(3, 4) )
    {
      v8 = 6;
      v9 = 5;
      v10 = "arm64";
    }
    else
    {
      v8 = 4;
      v9 = 3;
      v10 = "arm";
    }
    v11 = v22;
    if ( *((_QWORD *)&v23 + 1) < v8 )
    {
      v22 = qvector_reserve(&v22, v22, v8, 1);
      v11 = v22;
    }
    *(_QWORD *)&v23 = v8;
    v12 = 0;
    do
    {
      v13 = v12++;
      *(_BYTE *)(v11 + v13) = v10[v13];
    }
    while ( v12 < (unsigned int)v9 );
    *(_BYTE *)(v22 + v9) = 0;
    goto LABEL_33;
  }
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v22);
  }
  v4 = (__int64 *)v20;
LABEL_15:
  if ( v4 )
  {
LABEL_16:
    *(_QWORD *)&v21 = 0;
    qfree(v4);
  }
  return v24 - __readfsqword(0x28u);
}

