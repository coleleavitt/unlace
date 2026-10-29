__int64 __fastcall pyvar_walk_seq(__int64 *a1, const char *a2, __int64 a3, unsigned __int64 a4)
{
  __int64 *v4; // r12
  __int64 v6; // rax
  __int64 v7; // r14
  char IsSequenceType; // dl
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r13
  const char *v15; // rbp
  __int64 v16; // rdx
  __int64 (*v17)(void); // rcx
  __int64 *v18; // rbx
  __int64 *v19; // rax
  __int64 **v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 *v23; // rax
  const char *v25; // [rsp+0h] [rbp-88h]
  __int64 *v27; // [rsp+18h] [rbp-70h]
  __int64 *v28; // [rsp+18h] [rbp-70h]
  __int64 *v29; // [rsp+28h] [rbp-60h] BYREF
  const char *v30; // [rsp+30h] [rbp-58h] BYREF
  __int128 v31; // [rsp+38h] [rbp-50h]
  unsigned __int64 v32; // [rsp+48h] [rbp-40h]

  v4 = a1;
  v25 = a2;
  v32 = __readfsqword(0x28u);
  if ( a1 )
    (*(void (**)(void))(qword_24798 + 1008))();
  v6 = qword_24798;
  v7 = a1[1];
  if ( *(_QWORD *)(qword_24798 + 1104) == v7 )
    goto LABEL_43;
  IsSequenceType = PyW_IsSequenceType(a1);
  v6 = qword_24798;
  if ( !IsSequenceType )
  {
    a2 = "Object is not a sequence";
    a1 = **(__int64 ***)(qword_24798 + 1088);
    (*(void (__fastcall **)(__int64 *, const char *))(qword_24798 + 448))(a1, "Object is not a sequence");
    goto LABEL_38;
  }
  v7 = *(_QWORD *)(qword_24798 + 1104);
  v9 = a1[1];
  if ( v7 == v9 )
  {
LABEL_43:
    v14 = (*(__int64 (__fastcall **)(__int64 *))(v6 + 616))(a1);
    v9 = v7;
  }
  else
  {
    v14 = (*(__int64 (__fastcall **)(__int64 *))(qword_24798 + 856))(a1);
  }
  if ( v14 > a4 )
    v14 = a4;
  if ( v14 > 0 )
  {
    v15 = nullptr;
    while ( 1 )
    {
      v29 = nullptr;
      a2 = v15;
      v20 = (__int64 **)v4;
      if ( v7 == v9 )
        break;
      v18 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *, const char *))(qword_24798 + 840))(v4, v15);
      v19 = v29;
      v29 = v18;
      if ( v18 )
      {
        v27 = v19;
        (*(void (__fastcall **)(__int64 *))(qword_24798 + 1008))(v18);
        if ( v27 )
          (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v27);
        if ( *v18 <= 0 )
          goto LABEL_54;
LABEL_15:
        v20 = (__int64 **)v18;
        (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v18);
        goto LABEL_16;
      }
      if ( !v19 )
      {
LABEL_33:
        v21 = qword_24798;
LABEL_34:
        if ( (*(__int64 (__fastcall **)(__int64 **, const char *, __int64, __int64 (*)(void)))(v21 + 424))(
               v20,
               a2,
               v16,
               v17) )
        {
          goto LABEL_35;
        }
        v31 = 0;
        v30 = nullptr;
        sub_14130((__int64 *)&v30);
        a2 = src;
        if ( (_QWORD)v31 )
          a2 = v30;
        (*(void (__fastcall **)(_QWORD, const char *))(qword_24798 + 448))(**(_QWORD **)(qword_24798 + 1088), a2);
        if ( !v30 )
        {
LABEL_35:
          a1 = v29;
          if ( !v29 )
            goto LABEL_38;
        }
        else
        {
          *(_QWORD *)&v31 = 0;
          qfree();
          a1 = v29;
          if ( !v29 )
          {
LABEL_38:
            v14 = -1;
            goto LABEL_39;
          }
        }
        if ( *a1 > 0 )
        {
          (*(void (**)(void))(qword_24798 + 984))();
          goto LABEL_38;
        }
        sub_6C20((__int64)a1, (int)a2, v10, v11, v12, v13, (char)v25);
LABEL_59:
        sub_6C20((__int64)a1, (int)a2, v10, v11, v12, v13, (char)v25);
      }
      v20 = (__int64 **)v19;
      (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v19);
LABEL_16:
      if ( !v29 )
        goto LABEL_33;
      v20 = &v29;
      a2 = v15;
      v16 = ((unsigned int (__fastcall *)(__int64 **, const char *, __int64))v25)(&v29, v15, a3);
      v21 = qword_24798;
      v17 = *(__int64 (**)(void))(qword_24798 + 424);
      if ( (_DWORD)v16 != 1 )
        goto LABEL_34;
      if ( v17() )
      {
        if ( !under_debugger )
        {
          interr();
LABEL_52:
          if ( !under_debugger )
          {
            interr();
LABEL_54:
            if ( !under_debugger )
            {
              interr();
LABEL_56:
              if ( !under_debugger )
                interr();
            }
          }
        }
        BUG();
      }
      a1 = v29;
      if ( v29 )
      {
        if ( *v29 <= 0 )
          goto LABEL_52;
        (*(void (**)(void))(qword_24798 + 984))();
      }
      if ( ++v15 == (const char *)v14 )
        goto LABEL_39;
    }
    v22 = (*(__int64 (__fastcall **)(__int64 *, const char *))(qword_24798 + 584))(v4, v15);
    v18 = (__int64 *)v22;
    if ( !v22 )
    {
      v20 = (__int64 **)v29;
      v21 = qword_24798;
      v29 = nullptr;
      if ( !v20 )
        goto LABEL_34;
      (*(void (**)(void))(qword_24798 + 984))();
      goto LABEL_16;
    }
    (*(void (__fastcall **)(__int64))(qword_24798 + 1008))(v22);
    v23 = v29;
    v29 = v18;
    v28 = v23;
    (*(void (__fastcall **)(__int64 *))(qword_24798 + 1008))(v18);
    if ( v28 )
      (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v28);
    if ( *v18 <= 0 )
      goto LABEL_56;
    goto LABEL_15;
  }
LABEL_39:
  if ( v4 )
  {
    if ( *v4 <= 0 )
      goto LABEL_59;
    (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v4);
  }
  return v14;
}

