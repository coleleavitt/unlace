__int64 __fastcall sub_DAB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v5; // zf
  unsigned int v7; // r13d
  __int64 named_type_tid; // rax
  __int64 v10; // rdi
  __int64 v11; // r12
  __int64 v12; // rbp
  _QWORD *v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rdi
  char i; // al
  __int64 name_ea; // rax
  __int64 v18; // rax
  __int64 v19; // r13
  __int64 member; // [rsp+18h] [rbp-160h]
  __int64 v21; // [rsp+18h] [rbp-160h]
  __int64 v22; // [rsp+28h] [rbp-150h] BYREF
  __int64 v23[2]; // [rsp+30h] [rbp-148h] BYREF
  _QWORD v24[2]; // [rsp+40h] [rbp-138h] BYREF
  __int64 v25; // [rsp+50h] [rbp-128h] BYREF
  __int128 v26; // [rsp+58h] [rbp-120h]
  __int128 v27; // [rsp+68h] [rbp-110h]
  __int64 v28; // [rsp+78h] [rbp-100h]
  int v29; // [rsp+80h] [rbp-F8h]
  __int128 v30; // [rsp+88h] [rbp-F0h]
  __int64 v31; // [rsp+98h] [rbp-E0h]
  __int128 v32; // [rsp+A0h] [rbp-D8h] BYREF
  char *v33; // [rsp+B0h] [rbp-C8h] BYREF
  __int128 v34; // [rsp+B8h] [rbp-C0h]
  __int64 v35; // [rsp+C8h] [rbp-B0h]
  __int128 v36; // [rsp+D0h] [rbp-A8h]
  _OWORD v37[3]; // [rsp+E0h] [rbp-98h] BYREF
  __int64 v38; // [rsp+110h] [rbp-68h]
  int v39; // [rsp+118h] [rbp-60h]
  __int64 v40; // [rsp+120h] [rbp-58h]
  char v41; // [rsp+128h] [rbp-50h]
  unsigned __int64 v42; // [rsp+138h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 144) == -1;
  v42 = __readfsqword(0x28u);
  if ( v5 )
  {
    name_ea = get_name_ea(-1, "__Unwind_SjLj_Register");
    *(_QWORD *)(a1 + 144) = name_ea;
    if ( name_ea == -1 )
    {
      v18 = get_name_ea(-1, "_Unwind_SjLj_Register");
      *(_QWORD *)(a1 + 144) = v18;
      if ( v18 == -1 )
        return 0;
    }
  }
  if ( a4 != -1 && *(_QWORD *)(a1 + 144) != a4 )
  {
    return 0;
  }
  else
  {
    v23[0] = a1;
    v26 = 0;
    v27 = 0;
    v23[1] = a2;
    v24[0] = 0;
    v25 = 0;
    v28 = 0;
    v29 = 1;
    v31 = -1;
    v30 = -1;
    tinfo_get_func_frame(v24, a2);
    named_type_tid = get_named_type_tid("SjLj_Function_Context");
    v24[1] = named_type_tid;
    v22 = 0;
    if ( named_type_tid != -1
      && (unsigned __int8)get_type_by_tid(&v22, named_type_tid)
      && (unsigned __int8)get_tinfo_details(v22, 13, &v25) )
    {
      v33 = nullptr;
      v35 = 0;
      v38 = 1;
      v41 = 0;
      v39 = -1;
      v40 = 0;
      v32 = 0;
      v34 = 0;
      v36 = 0;
      v37[0] = 0;
      v33 = (char *)qvector_reserve(&v33, 0, 12, 1);
      *(_QWORD *)&v34 = 12;
      strcpy(v33, "personality");
      member = udt_type_data_t__find_member(&v25, &v32, 3);
      clear_tinfo_t(v37);
      if ( v35 )
      {
        *(_QWORD *)&v36 = 0;
        qfree(v35);
      }
      if ( v33 )
      {
        *(_QWORD *)&v34 = 0;
        qfree(v33);
      }
      v33 = nullptr;
      *(_QWORD *)&v30 = member;
      v35 = 0;
      v38 = 1;
      v39 = -1;
      v40 = 0;
      v41 = 0;
      v32 = 0;
      v34 = 0;
      v36 = 0;
      v37[0] = 0;
      v33 = (char *)qvector_reserve(&v33, 0, 5, 1);
      *(_QWORD *)&v34 = 5;
      strcpy(v33, "lsda");
      v21 = udt_type_data_t__find_member(&v25, &v32, 3);
      clear_tinfo_t(v37);
      if ( v35 )
      {
        *(_QWORD *)&v36 = 0;
        qfree(v35);
      }
      if ( v33 )
      {
        *(_QWORD *)&v34 = 0;
        qfree(v33);
      }
      v33 = nullptr;
      *((_QWORD *)&v30 + 1) = v21;
      v35 = 0;
      v38 = 1;
      v39 = -1;
      v40 = 0;
      v41 = 0;
      v32 = 0;
      v34 = 0;
      v36 = 0;
      v37[0] = 0;
      v33 = (char *)qvector_reserve(&v33, 0, 5, 1);
      *(_QWORD *)&v34 = 5;
      strcpy(v33, "jbuf");
      v19 = udt_type_data_t__find_member(&v25, &v32, 3);
      clear_tinfo_t(v37);
      if ( v35 )
      {
        *(_QWORD *)&v36 = 0;
        qfree(v35);
      }
      if ( v33 )
      {
        *(_QWORD *)&v34 = 0;
        qfree(v33);
      }
      v31 = v19;
    }
    clear_tinfo_t(&v22);
    if ( a3 == -1 )
    {
      for ( i = xrefblk_t_first_to(&v32, *(_QWORD *)(a1 + 144), 0); i; i = xrefblk_t_next_to(&v32) )
      {
        if ( (int)get_func_chunknum(a2, v32) >= 0 )
          sub_D3C0(v23, v32);
      }
      v7 = 1;
    }
    else
    {
      v7 = sub_D3C0(v23, a3);
    }
    v10 = v25;
    if ( v25 )
    {
      v11 = v26;
      if ( (_QWORD)v26 )
      {
        v12 = 0;
        do
        {
          v13 = (_QWORD *)(v10 + 144 * v12);
          clear_tinfo_t(v13 + 8);
          v14 = v13[5];
          if ( v14 )
          {
            v13[6] = 0;
            qfree(v14);
          }
          v15 = v13[2];
          if ( v15 )
          {
            v13[3] = 0;
            qfree(v15);
          }
          ++v12;
          v10 = v25;
        }
        while ( v11 != v12 );
      }
      *(_QWORD *)&v26 = 0;
      qfree(v10);
    }
    clear_tinfo_t(v24);
  }
  return v7;
}
