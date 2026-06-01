__int64 __fastcall sub_94EA0(const __m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v6; // ebx
  unsigned int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rsi
  int v11; // r12d
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rsi
  int v17; // eax
  int v18; // r12d
  __int64 v19; // r13
  __int64 v20; // r13
  char *v21; // r12
  char *v22; // r13
  __int64 v23; // rax
  __int64 v24; // [rsp-10h] [rbp-F0h]
  __int64 v25; // [rsp-8h] [rbp-E8h]
  int v28; // [rsp+24h] [rbp-BCh]
  int v30; // [rsp+28h] [rbp-B8h]
  __int64 v31; // [rsp+40h] [rbp-A0h] BYREF
  __int128 v32; // [rsp+48h] [rbp-98h]
  __int64 v33; // [rsp+60h] [rbp-80h] BYREF
  __int128 v34; // [rsp+68h] [rbp-78h]
  __int64 v35[2]; // [rsp+80h] [rbp-60h] BYREF
  __int64 v36; // [rsp+90h] [rbp-50h]
  __int64 v37; // [rsp+98h] [rbp-48h]
  unsigned __int64 v38; // [rsp+A8h] [rbp-38h]

  v6 = 1;
  v38 = __readfsqword(0x28u);
  v28 = sub_944B0(a1, a2, a3, a4, 0);
  if ( v28 )
    return v6;
  v31 = 0;
  v32 = 0;
  sub_124680((__int64)v35, (__int64)a1, a3, 0);
  v8 = sub_1778B0((__int64)a1, v35, a3, a2, a3, &v31, a1[4].m128i_i32[2]);
  v9 = v24;
  v6 = v8;
  v10 = v25;
  if ( !(_BYTE)v8 )
    goto LABEL_13;
  if ( !(_QWORD)v32 )
  {
    v6 = 0;
    goto LABEL_13;
  }
  v33 = 0;
  v11 = 0;
  v12 = 0;
  v34 = 0;
  do
  {
    v13 = *(_QWORD *)(v31 + 8 * v12);
    v14 = j__qalloc_or_throw(80, v10, v31, v9);
    *(_OWORD *)(v14 + 8) = 0;
    *(_QWORD *)(v14 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v14 + 40) = 0;
    *(_QWORD *)(v14 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v14 + 56) = 0;
    *(_QWORD *)(v14 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v14 + 72) = 0;
    sub_1253A0(v14, v13);
    v15 = v34;
    v16 = v33;
    if ( *((_QWORD *)&v34 + 1) < (unsigned __int64)(v34 + 1) )
    {
      v33 = qvector_reserve((__int64)&v33, v33, v34 + 1, 8);
      v16 = v33;
      v15 = v34;
    }
    *(_QWORD *)(v16 + 8 * v15) = v14;
    v10 = v13;
    *(_QWORD *)&v34 = v34 + 1;
    v6 = sub_177750((__int64)a1, v13, (unsigned __int8 *)a3);
    if ( !(_BYTE)v6 )
    {
      if ( !under_debugger )
        sub_383060(0xC351u, 0.0);
LABEL_38:
      BUG();
    }
    v12 = ++v11;
  }
  while ( v11 < (unsigned __int64)v32 );
  v17 = sub_944B0(a1, a2, a3, a4, 0);
  v18 = v17;
  if ( !(_QWORD)v32 )
  {
    LOBYTE(v6) = v17 != 0;
    goto LABEL_11;
  }
  v30 = 0;
  v19 = 0;
  do
  {
    sub_1253A0(*(_QWORD *)(v31 + 8 * v19), *(_QWORD *)(v33 + 8 * v19));
    v20 = *(_QWORD *)(v33 + 8 * v19);
    if ( v20 )
    {
      sub_11CDA0(v20 + 64);
      sub_11CDA0(v20 + 48);
      sub_11CDA0(v20 + 32);
      j__qfree(v20);
    }
    v19 = ++v30;
  }
  while ( v30 < (unsigned __int64)v32 );
  if ( !v18 )
  {
    v6 = 0;
    goto LABEL_11;
  }
  if ( !(_QWORD)v32 )
    goto LABEL_11;
  if ( a5 )
  {
    v21 = (char *)(a5 + 64);
    v22 = (char *)(a3 + 64);
    sub_11CA10((char *)(a3 + 64), (char *)(a5 + 64));
    if ( !(_QWORD)v32 )
    {
LABEL_26:
      sub_11CA10(v22, v21);
      goto LABEL_11;
    }
  }
  v23 = 0;
  while ( 2 )
  {
    if ( !(unsigned __int8)sub_177750((__int64)a1, *(_QWORD *)(v31 + 8 * v23), (unsigned __int8 *)a3) )
    {
      if ( !under_debugger )
        sub_383060(0xC352u, 0.0);
      goto LABEL_38;
    }
    v23 = ++v28;
    if ( v28 < (unsigned __int64)v32 )
      continue;
    break;
  }
  if ( a5 )
  {
    v21 = (char *)(a5 + 64);
    v22 = (char *)(a3 + 64);
    goto LABEL_26;
  }
LABEL_11:
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    qfree(v33);
  }
LABEL_13:
  if ( v36 )
  {
    v37 = 0;
    qfree(v36);
  }
  qfree(v35[0]);
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(v31);
  }
  return v6;
}

