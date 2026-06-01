_QWORD *sub_D310()
{
  __int64 v0; // rbx
  _QWORD *v1; // rbx
  __int64 *v2; // rsi
  __int64 v3; // rax
  __int64 (__fastcall *v5)(_QWORD *); // rax
  __int64 ph; // r13
  __int64 v7; // [rsp+20h] [rbp-130h] BYREF
  __int128 v8; // [rsp+28h] [rbp-128h]
  __int16 v9; // [rsp+7Ch] [rbp-D4h]
  unsigned __int64 v10; // [rsp+118h] [rbp-38h]

  v10 = __readfsqword(0x28u);
  v0 = qalloc_or_throw();
  sub_C4F0(v0);
  *(_QWORD *)v0 = &off_38828;
  *(_QWORD *)(v0 + 104) = off_38880;
  sub_1F050(v0 + 224, "win32");
  *(_QWORD *)(v0 + 1280) = 0;
  *(_QWORD *)(v0 + 224) = off_39318;
  *(_QWORD *)(v0 + 1088) = off_39590;
  *(_OWORD *)(v0 + 1288) = 0;
  v1 = (_QWORD *)set_module_data();
  if ( (*(_DWORD *)debug & 0x10000) != 0 )
  {
    v8 = 0;
    v7 = 0;
    get_dbctx_id();
    sub_C7A0(&v7);
    sub_B4F0();
    if ( v7 )
    {
      *(_QWORD *)&v8 = 0;
      qfree();
    }
  }
  netnode_check();
  v2 = (_QWORD *)(&dword_0 + 1);
  if ( netnode_altval() )
    goto LABEL_5;
  if ( !(unsigned __int8)netnode_inited()
    || (unsigned __int8)is_miniidb()
    || (v2 = &qword_100, (unsigned __int8)getinf_flag()) )
  {
    v3 = v1[19];
    if ( (v3 & 1) != 0 )
    {
LABEL_6:
      *((_BYTE *)v1 + 201) = 11;
      v1[141] = sub_B330;
      v1[19] = v3 | 0x140000000000LL;
      if ( (*(_DWORD *)debug & 0x10000) != 0 )
      {
        v7 = 0;
        v8 = 0;
        get_dbctx_id();
        sub_C7A0(&v7);
        sub_B4F0();
        if ( v7 )
        {
          *(_QWORD *)&v8 = 0;
          qfree();
        }
      }
      hook_event_listener();
      dbg = v1 + 15;
      return v1;
    }
  }
  else
  {
    ph = get_ph();
    if ( (unsigned int)getinf() == 11 && (unsigned int)(*(_DWORD *)(ph + 4) + 1) <= 1 )
    {
      netnode_check();
      v2 = &v7;
      if ( netnode_valobj() > 0 && ((unsigned __int16)(v9 - 2) <= 1u || !v9) )
      {
LABEL_5:
        v3 = v1[19];
        goto LABEL_6;
      }
    }
  }
  if ( v1 )
  {
    v5 = *(__int64 (__fastcall **)(_QWORD *))(*v1 + 16LL);
    if ( v5 != sub_CAC0 )
    {
      ((void (__fastcall *)(_QWORD *, __int64 *, double))v5)(v1, v2, 0.0);
      return nullptr;
    }
    sub_C860(v1);
    qfree();
  }
  return nullptr;
}

