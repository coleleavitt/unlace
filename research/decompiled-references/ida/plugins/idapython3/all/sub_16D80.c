__int64 __fastcall sub_16D80(__int64 a1, __int64 **a2, const char *a3, __int64 a4, unsigned int a5, __int64 *a6)
{
  bool v8; // r13
  const char *v9; // rax
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 *v14; // r12
  __int64 v15; // r15
  __int64 v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdi
  unsigned int v23; // ebx
  __int64 v24; // rax
  __int64 v25; // r12
  __int64 i; // r14
  __int64 *v27; // rdi
  __int64 v29; // rax
  __int64 *v30; // [rsp+0h] [rbp-8C0h]
  __int64 v31; // [rsp+8h] [rbp-8B8h]
  __int64 v34; // [rsp+18h] [rbp-8A8h]
  unsigned int v35; // [rsp+24h] [rbp-89Ch]
  __int64 *v37; // [rsp+38h] [rbp-888h] BYREF
  __int64 v38; // [rsp+40h] [rbp-880h] BYREF
  __int128 v39; // [rsp+48h] [rbp-878h]
  __int64 v40; // [rsp+60h] [rbp-860h]
  __int128 v41; // [rsp+68h] [rbp-858h]
  char v42; // [rsp+80h] [rbp-840h] BYREF
  _BYTE v43[1032]; // [rsp+480h] [rbp-440h] BYREF
  unsigned __int64 v44; // [rsp+888h] [rbp-38h]

  v31 = (__int64)a2;
  v44 = __readfsqword(0x28u);
  v35 = (*(__int64 (**)(void))(qword_24798 + 536))();
  v8 = sub_6D60(a3);
  LODWORD(a2) = a5;
  v38 = 0;
  v30 = &v38;
  v39 = 0;
  if ( !(unsigned __int8)pyw_convert_idc_args(a4, a5, &v38, 0, a6) )
  {
LABEL_31:
    v23 = 0;
    goto LABEL_20;
  }
  v9 = "__main__";
  if ( v8 )
    v9 = &v42;
  v10 = (*(__int64 (__fastcall **)(const char *))(qword_24798 + 568))(v9);
  v11 = v10;
  if ( !v10 )
  {
    if ( a6 )
      sub_14130(a6);
    goto LABEL_31;
  }
  v34 = (*(__int64 (__fastcall **)(__int64))(qword_24798 + 696))(v10);
  if ( !v34 )
  {
    if ( under_debugger )
      goto LABEL_45;
    v22 = 30157;
    interr();
    goto LABEL_43;
  }
  v12 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(qword_24798 + 368))(v34, v43);
  if ( v12 )
  {
    v13 = (*(__int64 (__fastcall **)(__int64))(a1 + 520))(v12);
    v14 = (__int64 *)v13;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(qword_24798 + 1008))(v13);
    v15 = v39;
    v16 = 0;
    v40 = 0;
    v41 = 0;
    if ( (_QWORD)v39 )
    {
      v40 = qvector_reserve();
      memset((void *)(v40 + 8 * v41), 0, 8 * (v15 - v41));
      *(_QWORD *)&v41 = v15;
      v29 = 0;
      do
      {
        *(_QWORD *)(v40 + 8 * v29) = *(_QWORD *)(v38 + 8 * v29);
        ++v29;
      }
      while ( v15 != v29 );
      v16 = v40;
    }
    a2 = &v37;
    v37 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(qword_24798 + 464))(
                       v14,
                       v34,
                       0,
                       v16,
                       a5,
                       0,
                       0,
                       0,
                       0,
                       0,
                       0);
    LOBYTE(v17) = sub_15D90(v31, &v37, a6);
    v22 = (__int64)v37;
    v23 = v17;
    if ( !v37 )
      goto LABEL_13;
    if ( *v37 > 0 )
    {
      (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v37);
LABEL_13:
      v22 = v40;
      if ( v40 )
      {
        *(_QWORD *)&v41 = 0;
        qfree();
      }
      if ( !v14 )
      {
LABEL_18:
        if ( !v8 )
          goto LABEL_20;
        goto LABEL_19;
      }
      if ( *v14 > 0 )
      {
        (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v14);
        goto LABEL_18;
      }
LABEL_44:
      sub_6C20(v22, (int)a2, v18, v19, v20, v21, (char)v30);
    }
LABEL_43:
    sub_6C20(v22, (int)a2, v18, v19, v20, v21, (char)&v38);
    goto LABEL_44;
  }
  if ( a6 )
    sub_14130(a6);
  v23 = 0;
  if ( v8 )
  {
LABEL_19:
    (*(void (__fastcall **)(__int64))(qword_24798 + 984))(v11);
    goto LABEL_20;
  }
  v23 = 0;
LABEL_20:
  v24 = v38;
  if ( v38 )
  {
    v25 = v39;
    if ( (_QWORD)v39 )
    {
      for ( i = 0; v25 != i; ++i )
      {
        v27 = *(__int64 **)(v24 + 8 * i);
        if ( v27 )
        {
          if ( *v27 <= 0 )
          {
            if ( !under_debugger )
              interr();
LABEL_45:
            BUG();
          }
          (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v27);
          v24 = v38;
        }
      }
    }
    *(_QWORD *)&v39 = 0;
    qfree();
  }
  (*(void (__fastcall **)(_QWORD))(qword_24798 + 552))(v35);
  return v23;
}

