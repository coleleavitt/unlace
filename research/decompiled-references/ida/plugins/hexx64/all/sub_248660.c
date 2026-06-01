__int64 __fastcall sub_248660(__int64 a1, __int64 a2, unsigned int a3, double a4)
{
  __int64 v5; // rdi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // r14
  unsigned int v11; // r13d
  __int64 v12; // rcx
  int v13; // r12d
  __int64 v15; // rdi
  __int64 v16; // r12
  int v17; // r12d
  __int64 v18; // r13
  __int64 v19; // rsi
  __int64 v20; // r12
  int tinfo_size; // edx
  int v22; // eax
  __int64 v23; // r12
  __int64 v24; // rdi
  __int64 v25; // r15
  __int64 *v26; // rdi
  __int64 v27; // rsi
  char v28; // al
  char v29; // al
  char v30; // r12
  char v31; // al
  __int64 v32; // r13
  __int64 v33; // r12
  char v34; // r12
  char v35; // r12
  __int64 v36; // [rsp+28h] [rbp-80h] BYREF
  __int64 v37; // [rsp+30h] [rbp-78h] BYREF
  __int64 tinfo_property; // [rsp+38h] [rbp-70h] BYREF
  __int128 v39; // [rsp+40h] [rbp-68h] BYREF
  __int64 v40; // [rsp+50h] [rbp-58h]
  int v41; // [rsp+58h] [rbp-50h]
  __int16 v42; // [rsp+5Ch] [rbp-4Ch]
  unsigned __int64 v43; // [rsp+68h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 24);
  v43 = __readfsqword(0x28u);
  if ( *(_DWORD *)(v5 + 8) != 51 )
    goto LABEL_14;
  v7 = *(_QWORD *)(v5 + 24);
  if ( *(_DWORD *)(v7 + 8) != 48 )
    goto LABEL_14;
  v8 = *(_QWORD *)(a1 + 32);
  v9 = 0;
  v10 = *(_QWORD *)(v7 + 24);
  v11 = a3;
  if ( *(_DWORD *)(v8 + 8) == 51 )
  {
    v12 = *(_QWORD *)(v8 + 24);
    if ( *(_DWORD *)(v12 + 8) == 48 )
      v9 = *(_QWORD *)(v12 + 24);
  }
  if ( !v10 )
  {
LABEL_14:
    v11 = 0;
    goto LABEL_15;
  }
  if ( (_BYTE)a3 )
  {
    if ( (get_tinfo_property() & 0xF) != 0xB )
    {
      v11 = 0;
      goto LABEL_8;
    }
    tinfo_property = get_tinfo_property();
    tinfo_size = get_tinfo_size();
    v22 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 40LL);
    if ( v22 == tinfo_size )
    {
      if ( (get_tinfo_property() & 0xF) == 9 )
      {
        sub_32C270(&v39, *(_QWORD *)(a2 + 112), *(_DWORD *)(*(_QWORD *)(a1 + 24) + 40LL));
        copy_tinfo_t();
        clear_tinfo_t();
      }
    }
    else
    {
      if ( v22 != *(unsigned __int8 *)(a2 + 137) && v22 != *(_QWORD *)(get_ph() + 120)
        || (get_tinfo_property() & 0xF) != 9 )
      {
        v11 = 0;
LABEL_35:
        clear_tinfo_t();
        goto LABEL_8;
      }
      sub_32C150(&v39, *(_QWORD *)(a2 + 112), *(_DWORD *)(*(_QWORD *)(a1 + 24) + 40LL));
      copy_tinfo_t();
      clear_tinfo_t();
    }
    sub_32C540(&v39, *(_QWORD *)(a2 + 112), &tinfo_property);
    copy_tinfo_t();
    clear_tinfo_t();
    sub_2441C0(*(_QWORD *)(a1 + 24), *(_QWORD *)(a2 + 112), 0, a4);
    sub_2441C0(a1, *(_QWORD *)(a2 + 112), 0, a4);
    goto LABEL_35;
  }
LABEL_8:
  if ( (unsigned int)lexcompare_tinfo() )
  {
    v5 = *(_QWORD *)(a1 + 24);
    v19 = *(_QWORD *)(v5 + 48);
    if ( (v19 & 0xE) == 0 && (v19 & 0x30) != 0 )
    {
      v20 = get_tinfo_size();
      if ( v20 != get_tinfo_size() || (get_tinfo_property() & 0xF) == 0xB )
      {
        v5 = *(_QWORD *)(a1 + 24);
      }
      else
      {
        v29 = get_tinfo_property();
        v5 = *(_QWORD *)(a1 + 24);
        if ( (v29 & 0x2F) == 0xD )
        {
          v30 = get_tinfo_property();
          v31 = get_tinfo_property();
          v5 = *(_QWORD *)(a1 + 24);
          if ( ((v31 & 0xF) == 9) == ((v30 & 0xF) == 9) )
          {
            v32 = *(_QWORD *)(v5 + 24);
            tinfo_property = 0;
            copy_tinfo_t();
            sub_245240(&v39);
            sub_246B40(v32, a2, &v39, a4);
            clear_tinfo_t();
            clear_tinfo_t();
            sub_2441C0(*(_QWORD *)(a1 + 24), *(_QWORD *)(a2 + 112), 1, a4);
            sub_2441C0(a1, *(_QWORD *)(a2 + 112), 0, a4);
            return 1;
          }
        }
      }
    }
  }
  else
  {
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 8LL) == 51 && (get_tinfo_property() & 0xF) == 0xA )
    {
      *(_QWORD *)&v39 = 0;
      *(_QWORD *)&v39 = get_tinfo_property();
      if ( (get_tinfo_property() & 0xF) != 0xB
        && !(unsigned int)verify_tinfo()
        && (unsigned __int8)sub_248500(a2, *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32), (_QWORD *)(v10 + 48), a4) )
      {
        sub_2441C0(a1, *(_QWORD *)(a2 + 112), 0, a4);
        clear_tinfo_t();
        return 1;
      }
      clear_tinfo_t();
    }
    if ( v9 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL) == 51 && (get_tinfo_property() & 0xF) == 0xA )
      {
        v28 = get_tinfo_property();
        if ( (v28 & 0xE) == 0 && (v28 & 0x30) != 0 )
        {
          get_tinfo_property();
          if ( (get_tinfo_property() & 0xF) != 0xB && !(unsigned int)verify_tinfo() )
          {
            v36 = 0;
            copy_tinfo_t();
            set_tinfo_property();
            a4 = 0.0;
            v37 = 0;
            tinfo_property = 0;
            v39 = 0;
            copy_tinfo_t();
            v40 = 0;
            copy_tinfo_t();
            v41 = 0;
            v42 = 0;
            clear_tinfo_t();
            clear_tinfo_t();
            copy_tinfo_t();
            create_tinfo();
            clear_tinfo_t();
            clear_tinfo_t();
            clear_tinfo_t();
            *(_QWORD *)&v39 = 0;
            copy_tinfo_t();
            v35 = sub_248500(a2, *(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 24), &v39, 0.0);
            clear_tinfo_t();
            clear_tinfo_t();
            if ( v35 )
            {
              sub_2441C0(*(_QWORD *)(a1 + 24), *(_QWORD *)(a2 + 112), 1, 0.0);
              sub_2441C0(a1, *(_QWORD *)(a2 + 112), 0, 0.0);
              clear_tinfo_t();
              return 1;
            }
          }
          clear_tinfo_t();
        }
      }
    }
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 8LL) == 48
      && (v23 = get_tinfo_size(), v23 == get_tinfo_size())
      && (get_tinfo_property() & 0xF) != 0xB
      && ((v24 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 48LL), (v24 & 0xE) == 0) && (v24 & 0x30) != 0
       || (v34 = get_tinfo_property(), ((get_tinfo_property() & 0xF) == 9) == ((v34 & 0xF) == 9))) )
    {
      v25 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
      v36 = 0;
      copy_tinfo_t();
      set_tinfo_property();
      a4 = 0.0;
      v37 = 0;
      tinfo_property = 0;
      v39 = 0;
      copy_tinfo_t();
      v40 = 0;
      copy_tinfo_t();
      v41 = 0;
      v42 = 0;
      clear_tinfo_t();
      clear_tinfo_t();
      copy_tinfo_t();
      create_tinfo();
      clear_tinfo_t();
      clear_tinfo_t();
      clear_tinfo_t();
      *(_QWORD *)&v39 = 0;
      copy_tinfo_t();
      LOBYTE(v25) = sub_246B40(v25, a2, &v39, 0.0);
      clear_tinfo_t();
      clear_tinfo_t();
      v5 = *(_QWORD *)(a1 + 24);
      if ( (_BYTE)v25 )
      {
        sub_2441C0(v5, *(_QWORD *)(a2 + 112), 1, 0.0);
        v26 = *(__int64 **)(a1 + 32);
        v27 = v26[3];
        goto LABEL_46;
      }
    }
    else
    {
      v5 = *(_QWORD *)(a1 + 24);
    }
  }
LABEL_15:
  LODWORD(v36) = 0;
  v13 = sub_245140(v5, &v36, &tinfo_property);
  if ( v13 != -1 )
  {
    v15 = *(_QWORD *)(a1 + 32);
    LODWORD(v37) = 0;
    if ( v13 == (unsigned int)sub_245140(v15, &v37, &v39) )
    {
      v16 = get_tinfo_size();
      if ( v16 == get_tinfo_size() )
      {
        v17 = v37;
        if ( (int)v36 <= 0 )
        {
          if ( (int)v37 <= 0 )
            return v11;
        }
        else
        {
          v18 = *(_QWORD *)(a1 + 24);
          if ( *(_DWORD *)(v18 + 8) == 51 )
          {
            sub_255850(*(__int64 **)(a1 + 24), *(_QWORD *)(v18 + 24));
            sub_255850((__int64 *)v18, *(_QWORD *)(v18 + 24));
            sub_255850((__int64 *)v18, *(_QWORD *)(v18 + 24));
          }
          if ( v17 <= 0 )
            goto LABEL_23;
        }
        v33 = *(_QWORD *)(a1 + 32);
        if ( *(_DWORD *)(v33 + 8) != 51 )
        {
LABEL_23:
          sub_2441C0(a1, *(_QWORD *)(a2 + 112), 0, a4);
          return 1;
        }
        sub_255850(*(__int64 **)(a1 + 32), *(_QWORD *)(v33 + 24));
        sub_255850((__int64 *)v33, *(_QWORD *)(v33 + 24));
        v27 = *(_QWORD *)(v33 + 24);
        v26 = (__int64 *)v33;
LABEL_46:
        sub_255850(v26, v27);
        goto LABEL_23;
      }
    }
  }
  return v11;
}

