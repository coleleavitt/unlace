__int64 __fastcall sub_B61B0(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        char *a5,
        __int64 a6,
        char a7,
        int a8,
        __int64 *a9)
{
  char *v9; // r12
  __int64 v10; // r9
  char v11; // al
  int v12; // r14d
  __int64 result; // rax
  __int64 v15; // r8
  bool v16; // r12
  _DWORD *v17; // rax
  _DWORD *v18; // r12
  int v19; // eax
  __int64 v20; // rax
  _DWORD *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdx
  unsigned __int8 v24; // al
  __int64 v25; // rdi
  int tinfo_size; // eax
  unsigned __int64 v27; // r12
  __int64 v28; // rcx
  _DWORD *v29; // rdx
  _DWORD *v30; // rax
  unsigned __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // r15
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // [rsp+8h] [rbp-98h]
  unsigned __int64 v38; // [rsp+20h] [rbp-80h]
  int v40; // [rsp+30h] [rbp-70h]
  unsigned __int8 v42; // [rsp+38h] [rbp-68h]
  __int64 v43; // [rsp+38h] [rbp-68h]
  __int64 v44; // [rsp+40h] [rbp-60h] BYREF
  __int64 v45; // [rsp+48h] [rbp-58h] BYREF
  __int64 tinfo_property; // [rsp+50h] [rbp-50h] BYREF
  _DWORD *v47; // [rsp+58h] [rbp-48h]
  unsigned __int64 v48; // [rsp+68h] [rbp-38h]

  v9 = a5;
  v10 = *(_QWORD *)(a1 + 1496);
  v11 = *a5;
  v48 = __readfsqword(0x28u);
  if ( v11 == 6 )
  {
    if ( !(unsigned __int8)sub_37BE20(v10, *((_QWORD *)a5 + 1), a2, 3) )
      return 0;
    goto LABEL_37;
  }
  v12 = a1;
  if ( !a7 )
  {
    if ( v11 == 4 )
    {
      v23 = *((_QWORD *)a5 + 1);
      if ( *(_DWORD *)v23 == 2 )
        goto LABEL_41;
      if ( (unsigned int)(*(_DWORD *)v23 - 56) > 1 || *(_BYTE *)(v23 + 64) != 8 )
        return 0;
      copy_tinfo_t();
    }
    else
    {
      v43 = v10;
      v40 = sub_1F7160(a2, &v45, a6, a5);
      if ( v40 == -1 )
        return 0;
      v25 = *(_QWORD *)(a1 + 432) + 104LL * v40;
      if ( !(unsigned __int8)sub_1C0A40(v25, v43, &v45, *((int *)v9 + 1), *(int *)(v25 + 88)) )
        return 0;
      while ( (get_tinfo_property() & 0xF) == 0xB )
      {
        tinfo_property = 0;
        tinfo_property = get_tinfo_property();
        copy_tinfo_t();
        clear_tinfo_t();
        tinfo_size = get_tinfo_size();
        if ( tinfo_size <= 0 )
          return 0;
        v45 %= tinfo_size;
      }
      v27 = v45 + *((int *)v9 + 1);
      if ( get_tinfo_size() < v27 )
        return 0;
      if ( v45 )
      {
        if ( (get_tinfo_property() & 0x2F) != 0xD )
          return 0;
        if ( !(unsigned __int8)sub_32F670(a2, v45, a8 | 2u) )
          return 0;
      }
      if ( a9 )
      {
        v28 = a9[1];
        v29 = (_DWORD *)(*a9 + 4 * v28);
        if ( (_DWORD *)*a9 == v29 )
          goto LABEL_57;
        v30 = (_DWORD *)*a9;
        while ( v40 != *v30 )
        {
          if ( v29 == ++v30 )
            goto LABEL_57;
        }
        if ( v29 == v30 )
        {
LABEL_57:
          if ( a9[2] < (unsigned __int64)(v28 + 1) )
          {
            v35 = qvector_reserve();
            v36 = a9[1];
            *a9 = v35;
            v29 = (_DWORD *)(v35 + 4 * v36);
          }
          *v29 = v40;
          ++a9[1];
        }
      }
    }
LABEL_37:
    if ( (get_tinfo_property() & 0xF) == 0xB )
    {
      tinfo_property = 0;
      tinfo_property = get_tinfo_property();
      copy_tinfo_t();
      clear_tinfo_t();
    }
    return 1;
  }
  if ( v11 == 4 )
  {
    v23 = *((_QWORD *)a5 + 1);
LABEL_41:
    tinfo_property = 0;
    v47 = nullptr;
    if ( *(_DWORD *)v23 == 2 )
      v9 = (char *)(v23 + 48);
    goto LABEL_5;
  }
  tinfo_property = 0;
  v47 = nullptr;
LABEL_5:
  result = sub_11E900(&tinfo_property, v9);
  if ( !(_BYTE)result )
    return result;
  v44 = 0;
  v15 = (__int64)v47;
  v16 = 0;
  v37 = tinfo_property;
  while ( 1 )
  {
    v38 = 0;
    if ( *(_BYTE *)v15 == 4 )
    {
      v20 = *(_QWORD *)(v15 + 8);
      if ( *(_DWORD *)v20 == 12 && *(_BYTE *)(v20 + 48) == 4 )
      {
        v21 = *(_DWORD **)(v20 + 56);
        if ( *v21 == 14 )
        {
          v22 = sub_1183E0(v21, 0);
          if ( v22 )
          {
            v38 = sub_325910(*(_QWORD *)(*(_QWORD *)(v22 + 8) + 16LL), *(unsigned int *)(v22 + 4), 0);
            v15 = *((_QWORD *)v47 + 1) + 32LL;
            v47 = (_DWORD *)v15;
          }
          else
          {
            v38 = 0;
            LODWORD(v15) = (_DWORD)v47;
          }
        }
      }
    }
    if ( !(unsigned __int8)sub_B61B0(v12, (unsigned int)&v44, a3, a4, v15, a6, v16, 0, (__int64)a9) )
      goto LABEL_33;
    v45 = 0;
    v45 = get_tinfo_property();
    copy_tinfo_t();
    clear_tinfo_t();
    if ( (unsigned __int8)*a2 )
      break;
    if ( *(_BYTE *)v47 == 4 )
      goto LABEL_33;
    if ( a9 )
      goto LABEL_33;
    v45 = a4;
    v17 = (_DWORD *)sub_124F80(a3, v47, &v45, 0);
    v18 = v17;
    if ( !v17 )
      goto LABEL_33;
    v19 = *v17;
    switch ( v19 )
    {
      case 4:
        goto LABEL_32;
      case 67:
        if ( v18[9] != v18[17] )
          goto LABEL_33;
LABEL_32:
        v15 = (__int64)(v18 + 8);
        v47 = v18 + 8;
        break;
      case 2:
        v15 = (__int64)(v18 + 12);
        v47 = v18 + 12;
        break;
      default:
        if ( (unsigned int)(v19 - 12) > 1 || !(unsigned __int8)sub_11E950(&tinfo_property, v18) )
          goto LABEL_33;
        v37 += tinfo_property;
        v15 = (__int64)v47;
        break;
    }
    v16 = *v18 == 2;
    a4 = v45;
  }
  v31 = get_tinfo_size();
  if ( v31 - 1 > 0xFFFFFFFFFFFFFFFDLL || v38 && v38 % v31 )
    goto LABEL_33;
  v32 = get_tinfo_size();
  if ( v32 <= 0 )
    goto LABEL_33;
  v33 = v37 % v32;
  if ( v33 < 0 )
    v33 += v32;
  v34 = v33;
  if ( a7 || (a8 = 0, (get_tinfo_property() & 0x2F) == 0xD) )
  {
    if ( (get_tinfo_property() & 0x2F) == 0xD )
    {
      v24 = sub_32F670(a2, v34, a8 | 2u);
      goto LABEL_34;
    }
LABEL_33:
    v24 = 0;
    goto LABEL_34;
  }
  v24 = v34 == 0;
LABEL_34:
  v42 = v24;
  clear_tinfo_t();
  return v42;
}

