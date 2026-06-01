__int64 __fastcall py_customidamemo_t_collect_pyobject_callbacks(__int64 a1, __int64 a2)
{
  __int64 (**v3)(); // rax
  __int64 (*v4)(); // rax
  __int64 v5; // rax
  __int64 v6; // r14
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *v12; // rdi
  __int64 v13; // rdi
  const char *v14; // rdx
  int v15; // r15d
  unsigned int v16; // ebp
  __int64 v17; // r12
  __int64 v18; // rbx
  _QWORD *v19; // rax
  char v21; // [rsp-8h] [rbp-68h]
  __int64 *v22; // [rsp+0h] [rbp-60h] BYREF
  __int64 v23; // [rsp+8h] [rbp-58h] BYREF
  __int128 v24; // [rsp+10h] [rbp-50h]
  unsigned __int64 v25; // [rsp+20h] [rbp-40h]

  v3 = *(__int64 (***)())a1;
  v25 = __readfsqword(0x28u);
  v24 = 0;
  v23 = 0;
  v4 = *v3;
  if ( v4 == j__py_customidamemo_t_collect_class_callbacks_ids )
    py_customidamemo_t_collect_class_callbacks_ids(a1, &v23);
  else
    ((void (__fastcall *)(__int64, __int64 *))v4)(a1, &v23);
  v5 = v24;
  *(_DWORD *)(a1 + 8) = 0;
  v6 = v23;
  if ( !(32 * v5) )
  {
    v13 = v23;
LABEL_21:
    v16 = 1;
    goto LABEL_22;
  }
  while ( 1 )
  {
    v14 = src;
    if ( *(_QWORD *)(v6 + 8) )
      v14 = *(const char **)v6;
    PyW_TryGetAttrString(&v22, a2, v14);
    v12 = v22;
    v15 = *(_DWORD *)(v6 + 24);
    if ( !v22 )
    {
      if ( v15 <= 0 )
        goto LABEL_17;
      goto LABEL_12;
    }
    if ( v15 >= 0 )
      break;
LABEL_10:
    if ( *v12 <= 0 )
    {
      if ( under_debugger )
        BUG();
      v12 = (_QWORD *)(&loc_7704 + 1);
      interr();
LABEL_36:
      sub_6C20((__int64)v12, a2, v8, v9, v10, v11, v21);
    }
    (*(void (**)(void))(qword_24798 + 984))();
LABEL_12:
    v13 = v23;
    v6 += 32;
    if ( v6 == v23 + 32LL * (_QWORD)v24 )
      goto LABEL_21;
  }
  v7 = (*(__int64 (**)(void))(qword_24798 + 328))();
  v12 = v22;
  if ( v7 )
  {
    if ( v15 )
    {
      if ( !v22 )
        goto LABEL_12;
      *(_DWORD *)(a1 + 8) |= v15;
    }
    else if ( !v22 )
    {
      goto LABEL_12;
    }
    goto LABEL_10;
  }
  if ( v22 )
  {
    if ( *v22 <= 0 )
      goto LABEL_36;
    v16 = 0;
    (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v22);
    v13 = v23;
  }
  else
  {
LABEL_17:
    v13 = v23;
    v16 = 0;
  }
LABEL_22:
  if ( v13 )
  {
    v17 = v24;
    if ( (_QWORD)v24 )
    {
      v18 = 0;
      do
      {
        v19 = (_QWORD *)(v13 + 32 * v18);
        if ( *v19 )
        {
          v19[1] = 0;
          qfree();
          v13 = v23;
        }
        ++v18;
      }
      while ( v17 != v18 );
    }
    *(_QWORD *)&v24 = 0;
    qfree();
  }
  return v16;
}

