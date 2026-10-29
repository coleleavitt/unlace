__int64 __fastcall sub_C810(_QWORD *a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v5; // rsi
  unsigned int v7; // eax
  unsigned int v8; // ebx
  unsigned int **func; // rdi
  unsigned int *v11; // rax
  __int64 v12; // rdx
  unsigned int *v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned int *v16; // rdx
  unsigned int *v17; // rcx
  __int64 v18; // r15
  unsigned __int64 v19; // r12
  __int64 frame_var; // r15
  __int64 v21; // rax
  unsigned int v22; // edx
  void *v23; // rcx
  unsigned __int64 v24; // [rsp+8h] [rbp-80h]
  _QWORD *v25; // [rsp+10h] [rbp-78h]
  unsigned __int64 v26; // [rsp+18h] [rbp-70h]
  __int64 v27; // [rsp+28h] [rbp-60h] BYREF
  void *v28; // [rsp+30h] [rbp-58h] BYREF
  __int128 v29; // [rsp+38h] [rbp-50h]
  unsigned __int64 v30; // [rsp+48h] [rbp-40h]

  v5 = 512;
  v30 = __readfsqword(0x28u);
  v7 = getinf_flag(10, 512);
  if ( !(_BYTE)v7 )
    return 0;
  v8 = v7;
  if ( (unsigned int)get_auto_state() != 40 )
    return 0;
  func = (unsigned int **)get_func(*(_QWORD *)(a2 + 16));
  if ( !func )
    return 0;
  v11 = (unsigned int *)a1[26];
  v12 = 16LL * a1[27];
  v13 = &v11[(unsigned __int64)v12 / 4];
  v14 = v12 >> 6;
  v15 = v12 >> 4;
  if ( v14 <= 0 )
  {
LABEL_31:
    switch ( v15 )
    {
      case 2LL:
        v16 = *func;
        break;
      case 3LL:
        v16 = *func;
        v17 = (unsigned int *)*v11;
        if ( v17 == *func )
          goto LABEL_13;
        v11 += 4;
        break;
      case 1LL:
        v16 = *func;
        goto LABEL_35;
      default:
        return 0;
    }
    v17 = (unsigned int *)*v11;
    if ( v17 == v16 )
      goto LABEL_13;
    v11 += 4;
LABEL_35:
    v17 = (unsigned int *)*v11;
    if ( v17 != v16 )
      return 0;
    goto LABEL_13;
  }
  v16 = *func;
  v17 = &v11[16 * v14];
  while ( 1 )
  {
    v5 = *v11;
    if ( (unsigned int *)v5 == v16 )
      break;
    v5 = v11[4];
    if ( v16 == (unsigned int *)v5 )
    {
      v11 += 4;
      break;
    }
    v5 = v11[8];
    if ( v16 == (unsigned int *)v5 )
    {
      v11 += 8;
      break;
    }
    v5 = v11[12];
    if ( v16 == (unsigned int *)v5 )
    {
      v11 += 12;
      break;
    }
    v11 += 16;
    if ( v11 == v17 )
    {
      v15 = ((char *)v13 - (char *)v11) >> 4;
      goto LABEL_31;
    }
  }
LABEL_13:
  if ( v13 != v11 )
  {
    v25 = (_QWORD *)(a1[23] + 48LL * v11[2]);
    v24 = v25[1];
    v18 = a2 + 40LL * (a3 + 1);
    v19 = *(_QWORD *)(a2 + 40LL * a3 + 48);
    if ( (v19 & 7) != 0 )
    {
      if ( !under_debugger )
        interr(10487, v5, v16, v17);
      BUG();
    }
    v27 = 0;
    if ( get_frame_var(&v27, 0, a2, v18, v19) == -1 )
    {
      if ( !(unsigned __int8)insn_create_stkvar(a2, v18, v19, 0)
        || (frame_var = get_frame_var(&v27, 0, a2, v18, v19), frame_var == -1) )
      {
        v8 = 0;
        goto LABEL_17;
      }
      v26 = v19 >> 3;
      v21 = 17;
      if ( v19 >> 3 < v24 )
      {
        v22 = *(_DWORD *)(*v25 + (v19 & 0xFFFFFFFFFFFFFFF8LL));
        if ( v22 >= 0xFFFFFFFC )
          v21 = byte_1DA68[v22 + 4];
      }
      v28 = (void *)v21;
      set_tinfo_property4(&v27, 12, frame_var, &v28, 0, 0);
      clear_tinfo_t(&v28);
      v28 = nullptr;
      v29 = 0;
      if ( v26 >= v24 )
        sub_C750((__int64 *)&v28, (__int64)"$local%zu", v26 - v24);
      else
        sub_C750((__int64 *)&v28, (__int64)"$param%zu", v26);
      v23 = &unk_1DA78;
      if ( (_QWORD)v29 )
        v23 = v28;
      set_tinfo_property4(&v27, 11, frame_var, v23, 0, 0);
      if ( v28 )
      {
        *(_QWORD *)&v29 = 0;
        qfree(v28);
      }
    }
    op_stkvar(*(_QWORD *)(a2 + 16), *(unsigned __int8 *)(a2 + 40LL * a3 + 40));
LABEL_17:
    clear_tinfo_t(&v27);
    return v8;
  }
  return 0;
}

