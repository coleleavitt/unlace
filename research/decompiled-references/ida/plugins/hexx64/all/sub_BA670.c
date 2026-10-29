__int64 __fastcall sub_BA670(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        char *a5,
        _QWORD **a6,
        char a7,
        int a8,
        __int64 *a9)
{
  char *v9; // r12
  __int64 v11; // r9
  char v12; // al
  __int64 result; // rax
  __int64 v16; // r8
  char v17; // r12
  __int128 v18; // rdi
  _DWORD *v19; // rax
  _DWORD *v20; // r12
  int v21; // eax
  __int64 v22; // rax
  _DWORD *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rdx
  unsigned __int8 v26; // al
  __int64 v27; // rdi
  int tinfo_size; // eax
  unsigned __int64 v29; // r12
  __int64 v30; // rcx
  _DWORD *v31; // rdx
  _DWORD *v32; // rax
  unsigned __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // r15
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // [rsp+8h] [rbp-98h]
  unsigned __int64 v40; // [rsp+20h] [rbp-80h]
  int v42; // [rsp+30h] [rbp-70h]
  unsigned __int8 v44; // [rsp+38h] [rbp-68h]
  __int64 v45; // [rsp+38h] [rbp-68h]
  __int64 v46; // [rsp+40h] [rbp-60h] BYREF
  __int64 v47; // [rsp+48h] [rbp-58h] BYREF
  __int64 tinfo_property; // [rsp+50h] [rbp-50h] BYREF
  _DWORD *v49; // [rsp+58h] [rbp-48h]
  unsigned __int64 v50; // [rsp+68h] [rbp-38h]

  v9 = a5;
  v11 = *(_QWORD *)(a1 + 1496);
  v12 = *a5;
  v50 = __readfsqword(0x28u);
  if ( v12 == 6 )
  {
    if ( !(unsigned __int8)sub_3810A0(v11, *((_QWORD *)a5 + 1), (__int64)a2, 3) )
      return 0;
    goto LABEL_37;
  }
  if ( !a7 )
  {
    if ( v12 == 4 )
    {
      v25 = *((_QWORD *)a5 + 1);
      if ( *(_DWORD *)v25 == 2 )
        goto LABEL_41;
      if ( (unsigned int)(*(_DWORD *)v25 - 56) > 1 || *(_BYTE *)(v25 + 64) != 8 )
        return 0;
      copy_tinfo_t();
    }
    else
    {
      v45 = v11;
      v42 = sub_1FBD60((__int64)a2, &v47, a6, (unsigned __int64)a5);
      if ( v42 == -1 )
        return 0;
      v27 = *(_QWORD *)(a1 + 432) + 104LL * v42;
      if ( !(unsigned __int8)sub_1C50C0(v27, v45, &v47, *((int *)v9 + 1), *(int *)(v27 + 88)) )
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
        v47 %= tinfo_size;
      }
      v29 = v47 + *((int *)v9 + 1);
      if ( get_tinfo_size() < v29 )
        return 0;
      if ( v47 )
      {
        if ( (get_tinfo_property() & 0x2F) != 0xD )
          return 0;
        if ( !(unsigned __int8)sub_334C10(a2, v47, a8 | 2u) )
          return 0;
      }
      if ( a9 )
      {
        v30 = a9[1];
        v31 = (_DWORD *)(*a9 + 4 * v30);
        if ( (_DWORD *)*a9 == v31 )
          goto LABEL_57;
        v32 = (_DWORD *)*a9;
        while ( v42 != *v32 )
        {
          if ( v31 == ++v32 )
            goto LABEL_57;
        }
        if ( v31 == v32 )
        {
LABEL_57:
          if ( a9[2] < (unsigned __int64)(v30 + 1) )
          {
            v37 = qvector_reserve((__int64)a9, *a9, v30 + 1, 4);
            v38 = a9[1];
            *a9 = v37;
            v31 = (_DWORD *)(v37 + 4 * v38);
          }
          *v31 = v42;
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
  if ( v12 == 4 )
  {
    v25 = *((_QWORD *)a5 + 1);
LABEL_41:
    tinfo_property = 0;
    v49 = nullptr;
    if ( *(_DWORD *)v25 == 2 )
      v9 = (char *)(v25 + 48);
    goto LABEL_5;
  }
  tinfo_property = 0;
  v49 = nullptr;
LABEL_5:
  result = sub_122DC0(&tinfo_property, (__int64)v9);
  if ( !(_BYTE)result )
    return result;
  v46 = 0;
  v16 = (__int64)v49;
  v17 = 0;
  v39 = tinfo_property;
  while ( 1 )
  {
    v40 = 0;
    if ( *(_BYTE *)v16 == 4 )
    {
      v22 = *(_QWORD *)(v16 + 8);
      if ( *(_DWORD *)v22 == 12 && *(_BYTE *)(v22 + 48) == 4 )
      {
        v23 = *(_DWORD **)(v22 + 56);
        if ( *v23 == 14 )
        {
          v24 = sub_11C8A0((__int64)v23, nullptr);
          if ( v24 )
          {
            v40 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v24 + 8) + 16LL), *(_DWORD *)(v24 + 4), 0);
            v16 = *((_QWORD *)v49 + 1) + 32LL;
            v49 = (_DWORD *)v16;
          }
          else
          {
            v40 = 0;
            v16 = (__int64)v49;
          }
        }
      }
    }
    if ( !(unsigned __int8)sub_BA670(a1, &v46, a3, a4, (char *)v16, (__int64)a6, v17, 0, a9) )
      goto LABEL_33;
    v47 = 0;
    v47 = get_tinfo_property();
    copy_tinfo_t();
    clear_tinfo_t();
    if ( (unsigned __int8)*a2 )
      break;
    *((_QWORD *)&v18 + 1) = v49;
    if ( *(_BYTE *)v49 == 4 )
      goto LABEL_33;
    if ( a9 )
      goto LABEL_33;
    *(_QWORD *)&v18 = a3;
    v47 = a4;
    v19 = (_DWORD *)sub_129440(v18, (__int64)&v47, 0);
    v20 = v19;
    if ( !v19 )
      goto LABEL_33;
    v21 = *v19;
    switch ( v21 )
    {
      case 4:
        goto LABEL_32;
      case 67:
        if ( v20[9] != v20[17] )
          goto LABEL_33;
LABEL_32:
        v16 = (__int64)(v20 + 8);
        v49 = v20 + 8;
        break;
      case 2:
        v16 = (__int64)(v20 + 12);
        v49 = v20 + 12;
        break;
      default:
        if ( (unsigned int)(v21 - 12) > 1 || !(unsigned __int8)sub_122E10(&tinfo_property, v20) )
          goto LABEL_33;
        v39 += tinfo_property;
        v16 = (__int64)v49;
        break;
    }
    v17 = *v20 == 2;
    a4 = v47;
  }
  v33 = get_tinfo_size();
  if ( v33 - 1 > 0xFFFFFFFFFFFFFFFDLL || v40 && v40 % v33 )
    goto LABEL_33;
  v34 = get_tinfo_size();
  if ( v34 <= 0 )
    goto LABEL_33;
  v35 = v39 % v34;
  if ( v35 < 0 )
    v35 += v34;
  v36 = v35;
  if ( a7 || (a8 = 0, (get_tinfo_property() & 0x2F) == 0xD) )
  {
    if ( (get_tinfo_property() & 0x2F) == 0xD )
    {
      v26 = sub_334C10(a2, v36, a8 | 2u);
      goto LABEL_34;
    }
LABEL_33:
    v26 = 0;
    goto LABEL_34;
  }
  v26 = v36 == 0;
LABEL_34:
  v44 = v26;
  clear_tinfo_t();
  return v44;
}

