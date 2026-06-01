unsigned __int64 __fastcall sub_3E200(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // r13
  int _32bit; // eax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rax
  _BYTE *v10; // rsi
  __int64 v11; // rdx
  size_t v12; // r8
  __int64 v13; // r9
  __int64 v14; // r13
  void *v15; // rsi
  __int64 v16; // rdx
  size_t v17; // r8
  void *v18; // r13
  int v19; // eax
  unsigned __int64 v20; // rax
  int v21; // r12d
  unsigned __int64 v22; // rax
  __int64 v23; // r15
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r14
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // r15
  unsigned int v31; // r13d
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rbx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rax
  bool v36; // [rsp+Fh] [rbp-2A9h]
  int v37; // [rsp+10h] [rbp-2A8h]
  _BYTE *v38; // [rsp+10h] [rbp-2A8h]
  __int64 v39; // [rsp+10h] [rbp-2A8h]
  int v40; // [rsp+18h] [rbp-2A0h]
  size_t v41; // [rsp+18h] [rbp-2A0h]
  __int64 v42; // [rsp+28h] [rbp-290h]
  void *v43; // [rsp+30h] [rbp-288h] BYREF
  __int128 v44; // [rsp+38h] [rbp-280h]
  void *src; // [rsp+50h] [rbp-268h] BYREF
  __int128 v46; // [rsp+58h] [rbp-260h]
  char v47; // [rsp+70h] [rbp-248h]
  unsigned __int64 v48; // [rsp+278h] [rbp-40h]

  v3 = a2 + 4;
  v48 = __readfsqword(0x28u);
  sub_19130();
  _32bit = get_32bit();
  v36 = _32bit != -822415874 && _32bit != -17958194;
  v5 = getinf();
  if ( v5 < a2 || v3 < v5 )
    create_32bit_data();
  v6 = a2 + 8;
  set_cmt();
  num_flag();
  set_op_type();
  v37 = get_32bit();
  v7 = getinf();
  if ( v7 < v3 || v6 < v7 )
    create_32bit_data();
  v8 = a2 + 12;
  set_cmt();
  v40 = get_32bit();
  v9 = getinf();
  if ( v9 < v6 || v8 < v9 )
    create_32bit_data();
  set_cmt();
  v43 = nullptr;
  src = nullptr;
  v44 = 0;
  v46 = 0;
  sub_3CE10(v37, v40, (__int64 *)&v43, (__int64 *)&src, 1);
  v10 = v43;
  if ( (_QWORD)v44 )
  {
    v11 = v44 + 10;
    v12 = v44 - 1;
    v13 = v44 + 9;
    if ( *((_QWORD *)&v44 + 1) >= (unsigned __int64)(v44 + 10) )
      goto LABEL_9;
  }
  else
  {
    if ( *((_QWORD *)&v44 + 1) > 0xAu )
    {
      *(_QWORD *)&v44 = 11;
      *((_BYTE *)v43 + 10) = 0;
      goto LABEL_11;
    }
    v12 = 0;
    v11 = 11;
    v13 = 10;
  }
  v42 = v13;
  v41 = v12;
  v39 = v11;
  v43 = (void *)qvector_reserve();
  v13 = v42;
  v10 = v43;
  v12 = v41;
  v11 = v39;
LABEL_9:
  *(_QWORD *)&v44 = v11;
  v10[v13] = 0;
  v10 = v43;
  if ( v12 )
  {
    v38 = v43;
    memmove((char *)v43 + 10, v43, v12);
    v10 = v38;
  }
LABEL_11:
  qmemcpy(v10, "CPU type: ", 10);
  set_cmt();
  v14 = v46;
  v15 = src;
  if ( (unsigned __int64)v46 <= 1 )
  {
    if ( *((_QWORD *)&v46 + 1) <= 0xBu )
    {
      src = (void *)qvector_reserve();
      v15 = src;
    }
    *(_QWORD *)&v46 = 12;
    qmemcpy(v15, "CPU subtype", 11);
    *((_BYTE *)src + 11) = 0;
  }
  else
  {
    v16 = v46 + 13;
    v17 = v46 - 1;
    if ( *((_QWORD *)&v46 + 1) < (unsigned __int64)(v46 + 13) )
    {
      src = (void *)qvector_reserve();
      v17 = v14 - 1;
      v15 = src;
      v16 = v14 + 13;
    }
    *(_QWORD *)&v46 = v16;
    *((_BYTE *)v15 + v14 + 12) = 0;
    v18 = src;
    memmove((char *)src + 13, src, v17);
    qmemcpy(v18, "CPU subtype: ", 13);
  }
  set_cmt();
  v19 = get_32bit();
  sub_117C0(v19);
  qsnprintf();
  v20 = getinf();
  if ( v20 < v8 || a2 + 16 < v20 )
    create_32bit_data();
  if ( v47 )
    set_cmt();
  num_flag();
  set_op_type();
  v21 = get_32bit();
  v22 = getinf();
  if ( v22 < a2 + 16 || a2 + 20 < v22 )
    create_32bit_data();
  set_cmt();
  num_flag();
  set_op_type();
  v23 = (unsigned int)get_32bit();
  v24 = getinf();
  if ( v24 < a2 + 20 || a2 + 24 < v24 )
    create_32bit_data();
  set_cmt();
  num_flag();
  set_op_type();
  v25 = getinf();
  if ( v25 < a2 + 24 || a2 + 28 < v25 )
    create_32bit_data();
  set_cmt();
  v26 = a2 + 28;
  num_flag();
  set_op_type();
  if ( v36 )
  {
    v35 = getinf();
    if ( v35 < v26 || a2 + 32 < v35 )
      create_32bit_data();
    set_cmt();
    num_flag();
    set_op_type();
    v26 = a2 + 32;
  }
  if ( v21 < 0 || v21 && ((unsigned int)v21 > 0x1FFFFFFF || (unsigned int)v23 < 8 * v21) )
  {
    sub_196C0((__int64)"Inconsistent number and size of load commands");
LABEL_31:
    v26 = -1;
    goto LABEL_32;
  }
  v28 = getseg();
  if ( !v28 )
  {
    sub_196C0((__int64)"Cannot create load commands outside of segment range");
    goto LABEL_31;
  }
  v29 = *(_QWORD *)(v28 + 8);
  v30 = v26 + v23;
  if ( v30 > v29 )
    v30 = v29;
  if ( v26 < v30 && v21 )
  {
    v31 = 0;
    while ( (unsigned __int8)is_loaded() )
    {
      v32 = sub_21940(a1, v26);
      v33 = v32;
      if ( v26 >= v32 )
      {
        sub_196C0((__int64)"Cannot format the load command at address 0x%a");
        goto LABEL_31;
      }
      if ( v30 < v32 )
      {
        sub_196C0((__int64)"Format the load command at address 0x%a exceeds segment's size");
        goto LABEL_31;
      }
      ++v31;
      if ( v32 >= v30 || v31 >= v21 )
        goto LABEL_58;
      v26 = v32;
    }
  }
  if ( v30 >= v26 )
  {
    v33 = v26;
LABEL_58:
    v34 = getinf();
    if ( v34 < v33 || v30 < v34 )
      create_data();
    v26 = v30 + v30 - v33;
  }
LABEL_32:
  if ( src )
  {
    *(_QWORD *)&v46 = 0;
    qfree();
  }
  if ( v43 )
  {
    *(_QWORD *)&v44 = 0;
    qfree();
  }
  return v26;
}

