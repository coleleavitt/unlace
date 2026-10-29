__int64 __fastcall sub_F1C0(__int64 a1, __int64 a2, __int64 *a3)
{
  char *v4; // rax
  __int64 v5; // r13
  unsigned int v6; // r13d
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // esi
  __int64 v12; // r14
  __int64 i; // r9
  __int64 v14; // r9
  __int64 v15; // rsi
  __int64 v16; // r14
  __int64 v17; // r8
  __int64 v18; // [rsp+0h] [rbp-1F8h] BYREF
  __int64 v19; // [rsp+8h] [rbp-1F0h] BYREF
  __int64 v20; // [rsp+10h] [rbp-1E8h] BYREF
  __int128 v21; // [rsp+18h] [rbp-1E0h]
  __int64 v22; // [rsp+30h] [rbp-1C8h] BYREF
  __int128 v23; // [rsp+38h] [rbp-1C0h]
  __int128 v24; // [rsp+50h] [rbp-1A8h] BYREF
  __int64 v25; // [rsp+60h] [rbp-198h]
  __int64 v26; // [rsp+68h] [rbp-190h]
  __int64 v27; // [rsp+70h] [rbp-188h]
  char v28; // [rsp+78h] [rbp-180h] BYREF
  unsigned __int8 v29[6]; // [rsp+A0h] [rbp-158h] BYREF
  __int16 v30; // [rsp+A6h] [rbp-152h]
  _BYTE v31[8]; // [rsp+C8h] [rbp-130h] BYREF
  __int64 v32; // [rsp+D0h] [rbp-128h]
  _QWORD v33[8]; // [rsp+1B8h] [rbp-40h] BYREF

  v33[0] = __readfsqword(0x28u);
  v4 = &v28;
  v24 = -1;
  v25 = -1;
  v26 = 0;
  v27 = 0;
  do
  {
    *(_WORD *)v4 = 0;
    v4 += 40;
    *((_WORD *)v4 - 19) = 0;
    *((_WORD *)v4 - 18) = 0;
    *((_DWORD *)v4 - 2) = 0;
    *((_WORD *)v4 - 17) = 0;
    *((_OWORD *)v4 - 2) = 0;
    *((_QWORD *)v4 - 2) = 0;
  }
  while ( v4 != (char *)v33 );
  if ( !(unsigned int)decode_insn(&v24, a2, v33, 0.0) )
    return (unsigned int)-1;
  v5 = a3[1];
  v20 = 0;
  v21 = 0;
  if ( (_DWORD)v5
    && (v20 = qvector_reserve(&v20, 0, (int)v5, 4),
        memset((void *)(v20 + 4 * v21), 0, 4 * ((int)v5 - (_QWORD)v21)),
        *(_QWORD *)&v21 = (int)v5,
        (int)v5 > 0) )
  {
    v8 = (unsigned int)(v5 - 1);
    v9 = 0;
    v10 = 0;
    do
    {
      v11 = *(unsigned __int16 *)(*a3 + v10 + 8);
      v10 += 80;
      *(_DWORD *)(v20 + v9) = v11;
      v9 += 4;
    }
    while ( 4 * v8 + 4 != v9 );
    v12 = v20;
    if ( !(unsigned __int8)is_call_insn(&v24) )
    {
      for ( i = 0; !sub_CF60(a1, (__int64)&v24, *(_DWORD *)(v12 + 4 * i)); i = v14 + 1 )
      {
        if ( v14 == v8 )
          goto LABEL_6;
      }
      v6 = v14;
      v15 = *a3;
      v18 = 0;
      v16 = 80LL * (int)v14;
      copy_tinfo_t(&v18, v16 + v15 + 64);
      v17 = *(_QWORD *)(*a3 + v16 + 16);
      v19 = v17;
      if ( (_WORD)v26 == 21 )
        goto LABEL_24;
      if ( (unsigned __int16)v26 > 0x15u )
      {
        if ( (_WORD)v26 != 27 )
          goto LABEL_22;
      }
      else if ( (_WORD)v26 != 1 )
      {
        if ( (_WORD)v26 != 19 )
        {
LABEL_22:
          v6 |= 0x80000000;
LABEL_23:
          clear_tinfo_t(&v18);
          goto LABEL_7;
        }
LABEL_24:
        if ( v29[1] == 1 && v30 == 28 && v31[1] && (unsigned __int8)remove_tinfo_pointer(&v18, &v19, 0) )
          apply_tinfo_to_stkarg(&v24, v31, v32, &v18, v19);
        goto LABEL_23;
      }
      v23 = 0;
      v22 = 0;
      sub_ECC0(a1, &v24, v29, (__int64)&v18, v17, (__int64)&v22);
      if ( v22 )
      {
        *(_QWORD *)&v23 = 0;
        qfree(v22);
      }
      goto LABEL_23;
    }
  }
  else if ( !(unsigned __int8)is_call_insn(&v24) )
  {
LABEL_6:
    v6 = -1;
    goto LABEL_7;
  }
  v6 = -2;
LABEL_7:
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree(v20);
  }
  return v6;
}

