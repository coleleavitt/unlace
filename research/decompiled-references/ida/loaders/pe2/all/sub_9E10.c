__int64 __fastcall sub_9E10(_QWORD *a1, _DWORD *a2, char *a3, double a4)
{
  __int64 v4; // rbx
  unsigned __int64 v7; // rbx
  unsigned int v8; // r15d
  __int64 v9; // r14
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // rbx
  __int64 v18; // rbx
  unsigned int v19; // eax
  unsigned int v20; // eax
  __int64 v21; // rbp
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  unsigned int v25; // r14d
  __int64 v26; // r15
  __int64 v27; // rbx
  __int64 v28; // [rsp+0h] [rbp-78h]
  __int64 v29; // [rsp+0h] [rbp-78h]
  __int64 v30; // [rsp+0h] [rbp-78h]
  __int64 v31; // [rsp+0h] [rbp-78h]
  __int64 v32; // [rsp+0h] [rbp-78h]
  int v33; // [rsp+10h] [rbp-68h]
  __int64 v34; // [rsp+18h] [rbp-60h]
  __int64 v35; // [rsp+20h] [rbp-58h] BYREF
  __int128 v36; // [rsp+28h] [rbp-50h]
  unsigned __int64 v37; // [rsp+38h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  v4 = *(unsigned int *)(a1[1] + 120LL);
  if ( !(_DWORD)v4 )
    return 0;
  v7 = *(_QWORD *)(a1[2] + 16LL) & (qword_379D8 + v4);
  if ( !(unsigned __int8)is_loaded() || v7 >= a1[3] && v7 < a1[4] )
    return 0;
  v8 = 4;
  if ( *(_WORD *)(a1[1] + 24LL) == 523 )
    v8 = 8;
  if ( a2[7] && !(unsigned __int8)is_loaded()
    || a2[8] && !(unsigned __int8)is_loaded()
    || a2[9] && !(unsigned __int8)is_loaded() )
  {
    sub_70E0((__int64)"%a: export table is corrupted\n", a4);
    return 0;
  }
  sub_8100((__int64)&v35, a3);
  v9 = v35;
  sub_97C0();
  create_data();
  set_cmt();
  v10 = sub_72A0(a1[2], *(_QWORD *)(a1[2] + 16LL) & (v7 + 4), (__int64)"TimeDateStamp: ", a2[1]);
  create_data();
  set_cmt();
  v11 = *(_QWORD *)(a1[2] + 16LL) & (v10 + 2);
  create_data();
  set_cmt();
  v12 = *(_QWORD *)(a1[2] + 16LL) & (v11 + 2);
  create_data();
  set_cmt();
  if ( a2[3] )
  {
    sub_73A0(v12, qword_379D8, v8, 0);
    sub_7E60(*(_QWORD *)(a1[2] + 16LL) & (qword_379D8 + (unsigned int)a2[3]), 0);
  }
  v13 = *(_QWORD *)(a1[2] + 16LL) & (v12 + 4);
  create_data();
  set_cmt();
  v14 = *(_QWORD *)(a1[2] + 16LL) & (v13 + 4);
  create_data();
  set_cmt();
  v15 = *(_QWORD *)(a1[2] + 16LL) & (v14 + 4);
  create_data();
  set_cmt();
  v16 = *(_QWORD *)(a1[2] + 16LL) & (v15 + 4);
  v28 = qword_379D8;
  create_data();
  set_cmt();
  if ( (unsigned int)get_dword() )
    sub_73A0(v16, v28, v8, 0);
  v17 = *(_QWORD *)(a1[2] + 16LL) & (v16 + 4);
  v29 = qword_379D8;
  create_data();
  set_cmt();
  if ( (unsigned int)get_dword() )
    sub_73A0(v17, v29, v8, 0);
  v18 = *(_QWORD *)(a1[2] + 16LL) & (v17 + 4);
  v30 = qword_379D8;
  create_data();
  set_cmt();
  if ( (unsigned int)get_dword() )
    sub_73A0(v18, v30, v8, 0);
  v19 = a2[7];
  if ( v19 && a2[5] )
  {
    v27 = *(_QWORD *)(a1[2] + 16LL) & (qword_379D8 + v19);
    if ( !(unsigned __int8)is_loaded() || !(unsigned __int8)is_loaded() )
    {
LABEL_53:
      sub_70E0((__int64)"%a: export table is corrupted\n", a4);
      goto LABEL_23;
    }
    sub_97C0();
    create_data();
    sub_73A0(v27, qword_379D8, v8, 0);
    get_flags_ex();
    create_data();
  }
  v20 = a2[8];
  if ( v20 )
  {
    if ( !a2[6] )
      goto LABEL_23;
    v33 = a2[6];
    v22 = *(_QWORD *)(a1[2] + 16LL) & (qword_379D8 + v20);
    v31 = *(_QWORD *)(a1[2] + 16LL);
    v34 = getseg();
    if ( !v34 )
      goto LABEL_53;
    if ( !(unsigned __int8)is_loaded() )
      goto LABEL_53;
    if ( a2[6] > 0x3FFFFFFFu )
      goto LABEL_53;
    v23 = v31 & (v22 + (unsigned int)(4 * v33));
    if ( v23 < v22 || *(_QWORD *)(v34 + 8) < v23 )
      goto LABEL_53;
    sub_8100((__int64)&v35, a3);
    v24 = v35;
    a4 = 0.0;
    v35 = 0;
    v32 = v24;
    v36 = 0;
    if ( v9 )
    {
      qfree();
      if ( v35 )
      {
        *(_QWORD *)&v36 = 0;
        qfree();
      }
    }
    sub_97C0();
    create_data();
    sub_73A0(v22, qword_379D8, v8, 0);
    get_flags_ex();
    create_data();
    if ( a2[6] )
    {
      v25 = 0;
      while ( 1 )
      {
        v26 = *(_QWORD *)(a1[2] + 16LL) & (qword_379D8 + (unsigned int)get_dword());
        if ( !(unsigned __int8)is_loaded() )
          break;
        sub_7E60(v26, 0);
        ++v25;
        v22 = *(_QWORD *)(a1[2] + 16LL) & (v22 + 4);
        if ( v25 >= a2[6] )
        {
          v9 = v32;
          goto LABEL_32;
        }
      }
      v9 = v32;
      goto LABEL_53;
    }
    v9 = v32;
  }
  else
  {
LABEL_32:
    if ( a2[9] && a2[6] )
    {
      if ( (unsigned __int8)is_loaded() && (unsigned __int8)is_loaded() )
      {
        sub_8100((__int64)&v35, a3);
        v21 = v35;
        v35 = 0;
        v36 = 0;
        if ( v9 )
        {
          qfree();
          if ( v35 )
          {
            *(_QWORD *)&v36 = 0;
            qfree();
          }
        }
        sub_97C0();
        create_data();
        v9 = v21;
        goto LABEL_23;
      }
      goto LABEL_53;
    }
  }
LABEL_23:
  if ( v9 )
    qfree();
  return 0;
}

