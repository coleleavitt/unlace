__int64 __fastcall sub_45620(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r13
  __int64 i; // rbp
  _QWORD *v4; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  int v7; // r12d
  int v8; // eax
  __int64 v9; // r15
  unsigned int j; // r13d
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // r14
  __int64 v14; // r14
  __int64 v15; // rbp
  int k; // ebp
  unsigned int v17; // ebx
  unsigned __int64 v19; // [rsp+10h] [rbp-188h] BYREF
  __int128 v20; // [rsp+18h] [rbp-180h]
  __int64 v21; // [rsp+30h] [rbp-168h]
  __int128 v22; // [rsp+38h] [rbp-160h]
  __int64 v23; // [rsp+50h] [rbp-148h] BYREF
  __int64 v24; // [rsp+58h] [rbp-140h]
  __int128 v25; // [rsp+60h] [rbp-138h]
  __int64 v26; // [rsp+70h] [rbp-128h]
  __int128 v27; // [rsp+78h] [rbp-120h]
  __int64 v28; // [rsp+88h] [rbp-110h]
  __int128 v29; // [rsp+90h] [rbp-108h]
  __int64 v30; // [rsp+A0h] [rbp-F8h]
  __int128 v31; // [rsp+A8h] [rbp-F0h]
  __int64 v32; // [rsp+B8h] [rbp-E0h]
  __int128 v33; // [rsp+C0h] [rbp-D8h]
  __int64 v34; // [rsp+D0h] [rbp-C8h]
  __int128 v35; // [rsp+D8h] [rbp-C0h]
  __int64 v36; // [rsp+E8h] [rbp-B0h]
  __int128 v37; // [rsp+F0h] [rbp-A8h]
  __int64 v38; // [rsp+100h] [rbp-98h]
  __int128 v39; // [rsp+108h] [rbp-90h]
  __int64 v40; // [rsp+118h] [rbp-80h]
  __int128 v41; // [rsp+120h] [rbp-78h]
  __int64 v42; // [rsp+130h] [rbp-68h]
  __int64 v43; // [rsp+138h] [rbp-60h]
  __int64 v44; // [rsp+140h] [rbp-58h]
  char v45; // [rsp+148h] [rbp-50h]
  unsigned __int64 v46; // [rsp+158h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 184);
  v46 = __readfsqword(0x28u);
  if ( v1 )
  {
    v2 = *(_QWORD *)(a1 + 192);
    if ( v2 )
    {
      for ( i = 0; i != v2; ++i )
      {
        v4 = (_QWORD *)(v1 + 80 * i);
        if ( *v4 )
        {
          v4[1] = 0;
          qfree();
          v1 = *(_QWORD *)(a1 + 184);
        }
      }
    }
    *(_QWORD *)(a1 + 192) = 0;
    qfree();
    *(_QWORD *)(a1 + 184) = 0;
    *(_QWORD *)(a1 + 200) = 0;
  }
  v5 = *(_QWORD *)a1;
  v6 = *(_QWORD *)(a1 + 256);
  v19 = 0;
  v23 = v5;
  v44 = a1 + 272;
  v24 = 0;
  v26 = 0;
  v28 = 0;
  v30 = 0;
  v32 = 0;
  v34 = 0;
  v36 = 0;
  v38 = 0;
  v40 = 0;
  v42 = a1 + 8;
  v43 = a1 + 184;
  v45 = 0;
  v20 = 0;
  v25 = 0;
  v27 = 0;
  v29 = 0;
  v31 = 0;
  v33 = 0;
  v35 = 0;
  v37 = 0;
  v39 = 0;
  v41 = 0;
  sub_442C0(&v23, &v19, v6, 0);
  v7 = *(_DWORD *)(a1 + 104);
  v21 = 0;
  v22 = 0;
  v21 = qvector_reserve();
  *(_DWORD *)(v21 + 4 * v22) = 0;
  v8 = v22 + 1;
  *(_QWORD *)&v22 = v22 + 1;
  if ( v7 <= 1 )
  {
    v13 = v8;
    if ( v8 <= 0 )
      goto LABEL_26;
  }
  else
  {
    v9 = 64;
    for ( j = 1; j != v7; ++j )
    {
      while ( *(_DWORD *)(*(_QWORD *)(a1 + 80) + v9 + 48) || (unsigned __int8)sub_79340(a1 + 112, a1 + 160, a1 + 8, j) )
      {
        ++j;
        v9 += 64;
        if ( j == v7 )
          goto LABEL_16;
      }
      v11 = v22;
      v12 = v21;
      if ( *((_QWORD *)&v22 + 1) < (unsigned __int64)(v22 + 1) )
      {
        v21 = qvector_reserve();
        v12 = v21;
        v11 = v22;
      }
      *(_DWORD *)(v12 + 4 * v11) = j;
      v9 += 64;
      *(_QWORD *)&v22 = v22 + 1;
    }
LABEL_16:
    v13 = (int)v22;
    if ( (int)v22 <= 0 )
      goto LABEL_22;
  }
  v14 = 4 * v13;
  v15 = 0;
  do
  {
    while ( !(unsigned __int8)sub_427C0((__int64 *)a1, *(_DWORD *)(v21 + v15), 0) )
    {
      v15 += 4;
      if ( v15 == v14 )
        goto LABEL_21;
    }
    sub_43290(a1);
    v15 += 4;
  }
  while ( v15 != v14 );
LABEL_21:
  if ( v7 > 1 )
  {
LABEL_22:
    for ( k = 1; k != v7; ++k )
    {
      while ( !(unsigned __int8)sub_427C0((__int64 *)a1, k, 0) )
      {
        if ( v7 == ++k )
          goto LABEL_26;
      }
      sub_43290(a1);
    }
  }
LABEL_26:
  v17 = sub_43300((_QWORD *)a1);
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree();
  }
  if ( v40 )
  {
    *(_QWORD *)&v41 = 0;
    qfree();
  }
  if ( v38 )
  {
    *(_QWORD *)&v39 = 0;
    qfree();
  }
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree();
  }
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    qfree();
  }
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree();
  }
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree();
  }
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree();
  }
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree();
  }
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree();
  }
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree();
  }
  return v17;
}

