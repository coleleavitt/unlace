unsigned __int64 __fastcall sub_9250(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, unsigned int a6)
{
  __int64 v9; // rbp
  __int64 v10; // rbp
  __int64 v11; // rbp
  __int64 v12; // r13
  __int64 v13; // rax
  unsigned __int64 v14; // rbp
  __int64 qword; // rax
  __int64 v16; // rdx
  __int64 v17; // r13
  signed __int64 v18; // r13
  __int64 v19; // rax
  signed __int64 v20; // rbp
  __int64 v21; // r12
  unsigned int v22; // eax
  __int64 v23; // r12
  unsigned int v24; // eax
  __int64 v26; // [rsp+8h] [rbp-470h]
  __int64 v28; // [rsp+18h] [rbp-460h]
  __int64 v29; // [rsp+28h] [rbp-450h]
  unsigned __int64 v30; // [rsp+438h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  qsnprintf();
  set_name();
  create_data();
  set_cmt();
  v9 = *(_QWORD *)(a1 + 16) & (a2 + 4);
  create_data();
  if ( a3[1] )
  {
    sub_73A0(v9, a5, a6, 0);
    sub_7E60(*(_QWORD *)(a1 + 16) & (a5 + (unsigned int)a3[1]), 0);
  }
  v10 = *(_QWORD *)(a1 + 16) & (v9 + 4);
  create_data();
  set_cmt();
  if ( a3[2] )
  {
    sub_73A0(v10, a5, a6, 0);
    create_data();
    qsnprintf();
    set_name();
  }
  v11 = *(_QWORD *)(a1 + 16) & (v10 + 4);
  create_data();
  set_cmt();
  if ( (unsigned int)get_dword() )
    sub_73A0(v11, a5, a6, 0);
  v29 = *(_QWORD *)(a1 + 16) & (v11 + 4);
  create_data();
  set_cmt();
  if ( (unsigned int)get_dword() )
    sub_73A0(v29, a5, a6, 0);
  v12 = *(_QWORD *)(a1 + 16) & (a5 + (unsigned int)a3[4]);
  v13 = getseg();
  v26 = v13;
  if ( v13 )
  {
    v14 = v12 + (int)a6;
    if ( *(_QWORD *)(v13 + 8) >= v14 )
    {
      while ( 1 )
      {
        v12 = v14 - (int)a6;
        if ( !(unsigned __int8)is_loaded() )
          break;
        if ( a6 == 4 )
        {
          LODWORD(qword) = get_dword();
          v16 = *(_QWORD *)(a1 + 16);
          qword = (unsigned int)qword;
          if ( !(_DWORD)qword )
            break;
        }
        else
        {
          qword = get_qword();
          v16 = *(_QWORD *)(a1 + 16);
          if ( !qword )
            break;
        }
        v17 = v16 & (a5 + qword);
        create_data();
        sub_7E60(*(_QWORD *)(a1 + 16) & (v17 + 2), 0);
        if ( *(_QWORD *)(v26 + 8) < (int)a6 + v14 )
          goto LABEL_19;
        v14 += (int)a6;
      }
    }
    v14 = v12;
LABEL_19:
    v18 = 0;
    v19 = a5 + (unsigned int)a3[4];
    v20 = v14 - v19;
    v28 = *(_QWORD *)(a1 + 16) & v19;
    sub_7EF0(a1, v28, v20, a6);
    if ( v20 > 0 )
    {
      do
      {
        if ( (get_byte() & 0x80u) == 0LL )
          sub_73A0(*(_QWORD *)(a1 + 16) & (v28 + v18), a5, a6, 0);
        v18 += (int)a6;
      }
      while ( v20 > v18 );
    }
    v21 = *(_QWORD *)(a1 + 16) & (v29 + 4);
    create_data();
    set_cmt();
    if ( (unsigned int)get_dword() )
      sub_73A0(v21, a5, a6, 0);
    v22 = a3[5];
    if ( v22 )
      sub_7EF0(a1, *(_QWORD *)(a1 + 16) & (a5 + v22), v20, a6);
    v23 = *(_QWORD *)(a1 + 16) & (v21 + 4);
    create_data();
    set_cmt();
    if ( (unsigned int)get_dword() )
      sub_73A0(v23, a5, a6, 0);
    v24 = a3[6];
    if ( v24 )
      sub_7EF0(a1, *(_QWORD *)(a1 + 16) & (a5 + v24), v20, a6);
    sub_72A0(a1, *(_QWORD *)(a1 + 16) & (v23 + 4), (__int64)"Time stamp: ", a3[7]);
  }
  return v30 - __readfsqword(0x28u);
}

