unsigned __int64 __fastcall sub_2D280(_WORD *a1, __int64 a2, char a3)
{
  __int64 v4; // r12
  __int64 v6; // rdi
  char v7; // al
  __int64 v8; // rdi
  char v9; // al
  _QWORD *v10; // rbx
  __int64 v11; // rdi
  __int64 v13; // rbx
  unsigned __int64 auto_state; // rax
  __int64 v15; // rdi
  __int64 v16; // r8
  _QWORD *v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rsi
  unsigned __int64 *v22; // rdx
  __int64 v23; // r13
  unsigned __int64 v24; // rbp
  unsigned __int64 *v25; // rax
  __int16 v26; // ax
  unsigned __int64 *v27; // rax
  _QWORD *v28; // rax
  char v30; // [rsp+3h] [rbp-20Dh]
  unsigned __int64 v31; // [rsp+8h] [rbp-208h]
  __int64 v32; // [rsp+28h] [rbp-1E8h] BYREF
  __int128 v33; // [rsp+30h] [rbp-1E0h]
  char v34; // [rsp+40h] [rbp-1D0h]
  _QWORD *v35; // [rsp+48h] [rbp-1C8h] BYREF
  __int128 v36; // [rsp+50h] [rbp-1C0h]
  char v37; // [rsp+60h] [rbp-1B0h]
  __int128 v38; // [rsp+68h] [rbp-1A8h]
  __int64 v39; // [rsp+78h] [rbp-198h]
  __int64 v40; // [rsp+80h] [rbp-190h]
  __int64 v41; // [rsp+88h] [rbp-188h]
  _BYTE v42[46]; // [rsp+90h] [rbp-180h] BYREF
  unsigned __int16 v43; // [rsp+BEh] [rbp-152h]
  __int64 v44; // [rsp+C8h] [rbp-148h]
  unsigned __int64 v45; // [rsp+1D0h] [rbp-40h] BYREF

  v4 = (__int64)(a1 + 4);
  v6 = *(_QWORD *)a1;
  v45 = __readfsqword(0x28u);
  v34 = 0;
  v32 = 0;
  v33 = 0;
  sub_83660(v6, &v32, v4, a2, 0xFFFFFFFFLL);
  if ( (unsigned __int8)(v34 - 10) <= 1u )
  {
    auto_state = get_auto_state();
    v15 = v33;
    v16 = v32;
    v17 = (_QWORD *)v32;
    v18 = 24 * v33;
    if ( (unsigned int)auto_state > 0x19 || (v19 = 34603009, v30 = 0, !_bittest64(&v19, auto_state)) )
    {
      if ( v34 )
      {
        if ( (_QWORD)v33 == 1 || (v28 = (_QWORD *)(v32 + 24), v18 == 24) )
        {
          v30 = 1;
          v35 = 0;
          v36 = 0;
          goto LABEL_23;
        }
        while ( *(_QWORD *)v32 == *v28 )
        {
          v28 += 3;
          if ( v28 == (_QWORD *)(v32 + v18) )
          {
            v30 = 1;
            goto LABEL_22;
          }
        }
      }
      v30 = 0;
    }
LABEL_22:
    v35 = 0;
    v36 = 0;
    if ( !v18 )
    {
LABEL_73:
      clear_tinfo_t();
      goto LABEL_5;
    }
LABEL_23:
    v20 = 0;
    v21 = 0;
    v31 = -1;
    while ( 1 )
    {
      v22 = (unsigned __int64 *)(v21 + 8 * v20);
      v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 32LL) + 16LL) & (*v17 ^ -(__int64)(a1[16] == 25));
      v24 = v23 & 0xFFFFFFFFFFFFFFFELL;
      if ( v22 == (unsigned __int64 *)v21 )
        goto LABEL_55;
      v25 = (unsigned __int64 *)v21;
      while ( v24 != *v25 )
      {
        if ( v22 == ++v25 )
          goto LABEL_55;
      }
      if ( v25 == v22 )
      {
LABEL_55:
        if ( *((_QWORD *)&v36 + 1) < (unsigned __int64)(v20 + 1) )
        {
          v35 = (_QWORD *)qvector_reserve((__int64)&v35, v21, v20 + 1, 8);
          v22 = &v35[v36];
        }
        *v22 = v24;
        *(_QWORD *)&v36 = v36 + 1;
        if ( v24 > 1 || (unsigned int)getinf(5) == 18 && !(unsigned __int8)sub_21F70(0) )
        {
          sub_260B0(*(_QWORD *)a1, v4, v23, *((_DWORD *)a1 + 8) != (_DWORD)&loc_20017);
          sub_26200((__int64)a1, v24, a3, 0);
          if ( v30 && *((_BYTE *)a1 + 89) != 2 )
            netnode_supset();
          if ( a3 && (unsigned __int8)get_tinfo() )
          {
            copy_tinfo_t();
            v31 = v23 & 0xFFFFFFFFFFFFFFFELL;
          }
          clear_tinfo_t();
        }
        v15 = v33;
        v16 = v32;
      }
      v17 += 3;
      if ( v17 == (_QWORD *)(v16 + 24 * v15) )
        break;
      v21 = (__int64)v35;
      v20 = v36;
    }
    if ( v31 != -1 )
      auto_apply_type();
    if ( v35 )
    {
      *(_QWORD *)&v36 = 0;
      qfree((__int64)v35);
    }
    goto LABEL_73;
  }
  if ( v34 == 4 && a1[16] == 471 )
  {
    v26 = *(_WORD *)(v32 + 16);
    if ( v26 == 30 || v26 == 484 )
    {
      v39 = -1;
      v27 = (unsigned __int64 *)v42;
      v40 = 0;
      v41 = 0;
      v38 = -1;
      do
      {
        *(_WORD *)v27 = 0;
        v27 += 5;
        *((_WORD *)v27 - 19) = 0;
        *((_WORD *)v27 - 18) = 0;
        *((_DWORD *)v27 - 2) = 0;
        *((_WORD *)v27 - 17) = 0;
        *((_OWORD *)v27 - 2) = 0;
        *(v27 - 2) = 0;
      }
      while ( v27 != &v45 );
      if ( (int)decode_insn() > 0 && v42[41] == 4 && !v44 )
      {
        if ( (unsigned __int8)sub_81DB0(*(_QWORD *)a1, &v35, v39, v43, 0) )
        {
          if ( (unsigned __int8)is_spec_ea() )
          {
            insn_add_cref();
            if ( *((_BYTE *)a1 + 368) )
            {
              if ( (a1[20] & 0xF) == 0xE && (get_aflags() & 0x400000) != 0 )
              {
                *((_BYTE *)a1 + 368) = 0;
                set_noret_insn();
                if ( v32 )
                {
                  *(_QWORD *)&v33 = 0;
                  qfree(v32);
                }
                return v45 - __readfsqword(0x28u);
              }
            }
          }
        }
      }
    }
  }
  netnode_supdel();
LABEL_5:
  v7 = *(_BYTE *)(a2 + 1);
  if ( v7 == 1 )
  {
    v13 = v32;
    if ( (unsigned __int8)(v34 - 10) <= 1u || (v11 = v32, v34 == 4) )
    {
      if ( 24LL * (_QWORD)v33 )
      {
        do
        {
          sub_2A500(*(_QWORD *)a1, v13);
          v11 = v32;
          v13 += 24;
        }
        while ( v13 != v32 + 24LL * (_QWORD)v33 );
      }
      else
      {
        v11 = v32;
      }
    }
  }
  else
  {
    if ( (unsigned __int8)(v7 - 2) <= 2u )
    {
      v8 = *(_QWORD *)a1;
      v35 = 0;
      v37 = 0;
      v36 = 0;
      v9 = sub_82140(v8, &v35, a2, v4, 1, 0);
      v10 = v35;
      if ( v9 && (unsigned __int8)(v37 - 10) <= 1u && 24LL * (_QWORD)v36 )
      {
        do
        {
          sub_2A420(*(_QWORD *)a1, *v10 & *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 32LL) + 16LL), -1);
          v10 += 3;
        }
        while ( v10 != &v35[3 * (_QWORD)v36] );
        v10 = v35;
      }
      if ( v10 )
      {
        *(_QWORD *)&v36 = 0;
        qfree((__int64)v10);
      }
    }
    v11 = v32;
  }
  if ( v11 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v11);
  }
  return v45 - __readfsqword(0x28u);
}
