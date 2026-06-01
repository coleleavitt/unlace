__int64 __fastcall sub_F340(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // ebx
  __int64 v8; // r15
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 func; // rsi
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r13
  __int64 v25; // r12
  __int64 v26; // rbp
  __int64 v27; // rdi
  _QWORD *v28; // rax
  __int64 v29; // [rsp+10h] [rbp-A8h] BYREF
  __int128 v30; // [rsp+18h] [rbp-A0h]
  __int64 v31; // [rsp+28h] [rbp-90h] BYREF
  __int128 v32; // [rsp+30h] [rbp-88h]
  __int64 v33; // [rsp+40h] [rbp-78h]
  int v34; // [rsp+48h] [rbp-70h]
  __int64 v35; // [rsp+50h] [rbp-68h] BYREF
  __int128 v36; // [rsp+58h] [rbp-60h]
  __int64 v37; // [rsp+68h] [rbp-50h]
  __int16 v38; // [rsp+70h] [rbp-48h]
  char v39; // [rsp+72h] [rbp-46h]
  unsigned __int64 v40; // [rsp+78h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  LOBYTE(v5) = a2 >= a3 || a3 == -1;
  if ( (_BYTE)v5 )
    return v5;
  v8 = a3;
  if ( !*(_BYTE *)(a1 + 572) )
    *(_BYTE *)(a1 + 572) = 1;
  v39 = 0;
  v29 = 0;
  v31 = 0;
  v33 = -1;
  v34 = -1;
  v35 = 0;
  v38 = 360;
  v30 = 0;
  v32 = 0;
  v36 = 0;
  v29 = qvector_reserve(&v29, 0, 1, 16);
  v11 = 16 * v30 + v29;
  *(_OWORD *)v11 = 0;
  *(_QWORD *)&v30 = v30 + 1;
  *(_QWORD *)v11 = a2;
  *(_QWORD *)(v11 + 8) = v8;
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(v31);
    v31 = 0;
    *((_QWORD *)&v32 + 1) = 0;
  }
  v34 = -1;
  v33 = -1;
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v35);
    v35 = 0;
    *((_QWORD *)&v36 + 1) = 0;
  }
  v12 = v32;
  v13 = v31;
  v37 = -1;
  if ( *((_QWORD *)&v32 + 1) < (unsigned __int64)(v32 + 1) )
  {
    v31 = qvector_reserve(&v31, v31, v32 + 1, 16);
    v13 = v31;
    v12 = v32;
  }
  v14 = 16 * v12 + v13;
  v15 = v8;
  *(_OWORD *)v14 = 0;
  *(_QWORD *)&v32 = v32 + 1;
  if ( a4 != -1 )
  {
    v8 = a4;
    v15 = -1;
  }
  *(_QWORD *)(v14 + 8) = v15;
  *(_QWORD *)v14 = v8;
  if ( (unsigned __int64)(a5 - 2) <= 0xFFFFFFFFFFFFFFFCLL )
  {
    v17 = v36;
    v18 = v35;
    if ( *((_QWORD *)&v36 + 1) < (unsigned __int64)(v36 + 1) )
    {
      v35 = qvector_reserve(&v35, v35, v36 + 1, 16);
      v18 = v35;
      v17 = v36;
    }
    v19 = 16 * v17 + v18;
    *(_OWORD *)v19 = 0;
    *(_QWORD *)&v36 = v36 + 1;
    *(_QWORD *)v19 = a5;
    *(_QWORD *)(v19 + 8) = -1;
    if ( (unsigned int)add_tryblk(&v29) )
      goto LABEL_21;
    if ( a4 == -1 )
    {
LABEL_29:
      if ( (unsigned __int8)is_mapped(a5) )
      {
        set_abits(a5, 0x20000000);
        if ( (get_flags_ex(a5, 4, v20) & 0x600) == 0 )
          create_insn(a5, 0);
        func = get_func(a2);
        if ( func )
        {
          if ( (unsigned __int8)sub_EB40(a1, func, a5) )
          {
            v22 = (_QWORD *)get_func(a2);
            sub_EAB0(v22);
          }
        }
        else
        {
          auto_apply_tail(a5, a2);
        }
      }
      goto LABEL_20;
    }
LABEL_16:
    set_abits(a4, 0x20000000);
    v16 = get_func(a2);
    if ( v16 )
    {
      if ( (unsigned __int8)sub_EB40(a1, v16, a4) )
      {
        v28 = (_QWORD *)get_func(a2);
        sub_EAB0(v28);
      }
    }
    else
    {
      auto_apply_tail(a4, a2);
    }
    if ( (unsigned __int64)(a5 - 2) > 0xFFFFFFFFFFFFFFFCLL )
      goto LABEL_20;
    goto LABEL_29;
  }
  v37 = a5;
  if ( !(unsigned int)add_tryblk(&v29) )
  {
    if ( a4 == -1 )
    {
LABEL_20:
      v5 = 1;
      goto LABEL_21;
    }
    goto LABEL_16;
  }
LABEL_21:
  if ( HIBYTE(v38) == 2 )
  {
    v23 = v31;
    if ( v31 )
    {
      v24 = v32;
      if ( (_QWORD)v32 )
      {
        v25 = 0;
        v26 = 0;
        do
        {
          v27 = *(_QWORD *)(v23 + v25);
          if ( v27 )
          {
            *(_QWORD *)(v23 + v25 + 8) = 0;
            qfree(v27);
            v23 = v31;
          }
          ++v26;
          v25 += 56;
        }
        while ( v24 != v26 );
      }
      *(_QWORD *)&v32 = 0;
      qfree(v23);
    }
  }
  else if ( HIBYTE(v38) == 1 )
  {
    if ( v35 )
    {
      *(_QWORD *)&v36 = 0;
      qfree(v35);
    }
    if ( v31 )
    {
      *(_QWORD *)&v32 = 0;
      qfree(v31);
    }
  }
  HIBYTE(v38) = 0;
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree(v29);
  }
  return v5;
}

