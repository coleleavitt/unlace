__int64 __fastcall sub_D3C0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // r15
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned int v8; // ebx
  char *v10; // rax
  char *v11; // rsi
  __int64 *v12; // rsi
  __int64 v13; // rbx
  char v14; // r12
  __int64 func; // rax
  unsigned __int64 v17; // [rsp+18h] [rbp-268h]
  __int64 v18; // [rsp+20h] [rbp-260h]
  unsigned __int64 v19; // [rsp+28h] [rbp-258h]
  unsigned __int64 v20; // [rsp+30h] [rbp-250h]
  unsigned int v21; // [rsp+44h] [rbp-23Ch] BYREF
  unsigned int v22; // [rsp+48h] [rbp-238h] BYREF
  unsigned int v23; // [rsp+4Ch] [rbp-234h] BYREF
  __int128 v24; // [rsp+50h] [rbp-230h] BYREF
  char *v25; // [rsp+60h] [rbp-220h] BYREF
  __int128 v26; // [rsp+68h] [rbp-218h]
  __int64 v27; // [rsp+78h] [rbp-208h]
  __int128 v28; // [rsp+80h] [rbp-200h]
  _OWORD v29[3]; // [rsp+90h] [rbp-1F0h] BYREF
  __int64 v30; // [rsp+C0h] [rbp-1C0h]
  int v31; // [rsp+C8h] [rbp-1B8h]
  __int64 v32; // [rsp+D0h] [rbp-1B0h]
  char v33; // [rsp+D8h] [rbp-1A8h]
  __int128 v34; // [rsp+E0h] [rbp-1A0h] BYREF
  __int64 v35; // [rsp+F0h] [rbp-190h]
  __int64 v36; // [rsp+F8h] [rbp-188h]
  __int64 v37; // [rsp+100h] [rbp-180h]
  char v38; // [rsp+108h] [rbp-178h] BYREF
  _QWORD v39[7]; // [rsp+248h] [rbp-38h] BYREF

  v39[0] = __readfsqword(0x28u);
  v33 = 0;
  v25 = nullptr;
  v27 = 0;
  v30 = 1;
  v31 = -1;
  v32 = 0;
  v24 = 0;
  v26 = 0;
  v28 = 0;
  v29[0] = 0;
  v25 = (char *)qvector_reserve(&v25, 0, 5, 1);
  *(_QWORD *)&v26 = 5;
  strcpy(v25, "fctx");
  if ( (unsigned int)find_tinfo_udt_member(&v24, a1[2], 3) == -1 )
  {
    v11 = v25;
    if ( *((_QWORD *)&v26 + 1) <= 6u )
    {
      v25 = (char *)qvector_reserve(&v25, v25, 7, 1);
      v11 = v25;
    }
    *(_QWORD *)&v26 = 7;
    *(_DWORD *)v11 = 1667657836;
    *((_WORD *)v11 + 2) = 30836;
    v25[6] = 0;
    if ( (unsigned int)find_tinfo_udt_member(&v24, a1[2], 3) == -1 )
    {
      v8 = 0;
      goto LABEL_21;
    }
  }
  v18 = sub_9750(a1[1], (__int64)&v24, a1 + 4, a1[11], &v21, 0, 0);
  v19 = sub_9750(a1[1], (__int64)&v24, a1 + 4, a1[12], &v22, 0, 0);
  v2 = sub_9750(a1[1], (__int64)&v24, a1 + 4, a1[13], &v23, 1, 0);
  if ( v18 == -1 )
  {
    v3 = v19;
    if ( v19 == -1 )
      goto LABEL_4;
  }
  else
  {
    v3 = v19;
    v18 = sub_136B0(*a1, v18, v21);
    if ( v19 == -1 )
    {
LABEL_4:
      if ( v2 != -1 )
        goto LABEL_5;
LABEL_39:
      v17 = getinf(19);
      v20 = getinf(20);
LABEL_6:
      v5 = 1;
      while ( 1 )
      {
        v6 = sub_9750(a1[1], (__int64)&v24, a1 + 4, a1[13], &v23, 0, v5 * *(unsigned int *)(*a1 + 132));
        if ( v6 != -1 )
        {
          v4 = sub_136B0(*a1, v6, v23);
          if ( v4 != -1 && v4 < v20 && v17 < v4 && (unsigned __int8)is_loaded(v4) )
            goto LABEL_26;
        }
        v7 = v5 + 1;
        v5 = 2;
        if ( v7 == 3 )
          goto LABEL_13;
      }
    }
  }
  v19 = sub_136B0(*a1, v3, v22);
  if ( v2 == -1 )
    goto LABEL_39;
LABEL_5:
  v4 = sub_13690(*a1, v2, *(_QWORD *)(*a1 + 144));
  v17 = getinf(19);
  v20 = getinf(20);
  if ( v4 == -1 )
    goto LABEL_6;
LABEL_26:
  if ( v4 >= v20 || v17 >= v4 || !(unsigned __int8)is_loaded(v4) )
LABEL_13:
    v4 = -1;
  if ( v19 == -1 || v19 >= v20 || v17 >= v19 || !(unsigned __int8)is_loaded(v19) )
    v19 = -1;
  if ( v18 == -1 || !(unsigned __int8)is_mapped(v18) || v19 == -1 || v4 == -1 )
    goto LABEL_20;
  if ( (int)get_func_chunknum(a1[1], v4) >= 0
    || (v12 = (__int64 *)a1[1], v13 = *v12, v14 = sub_EB40(*a1, v12, v4), func = get_func(v13), a1[1] = func, !v14) )
  {
    v10 = &v38;
    v35 = -1;
    v36 = 0;
    v37 = 0;
    v34 = -1;
    do
    {
      *(_WORD *)v10 = 0;
      v10 += 40;
      *((_WORD *)v10 - 19) = 0;
      *((_WORD *)v10 - 18) = 0;
      *((_DWORD *)v10 - 2) = 0;
      *((_WORD *)v10 - 17) = 0;
      *((_OWORD *)v10 - 2) = 0;
      *((_QWORD *)v10 - 2) = 0;
    }
    while ( v39 != (_QWORD *)v10 );
    if ( (int)decode_insn(&v34, a2, v39, 0.0) > 0 )
      sub_D240(*a1, a2 + WORD1(v36), *(_QWORD *)(a1[1] + 8), v18, v19, v4, 4);
LABEL_20:
    v8 = 1;
    goto LABEL_21;
  }
  a1[1] = sub_EAB0(func);
  v8 = sub_D3C0(a1, a2);
LABEL_21:
  clear_tinfo_t(v29);
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    qfree(v27);
  }
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree(v25);
  }
  return v8;
}

