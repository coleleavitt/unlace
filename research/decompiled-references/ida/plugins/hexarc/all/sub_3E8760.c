__int64 __fastcall sub_3E8760(__int64 a1)
{
  __int64 v1; // rbp
  unsigned int v3; // eax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // r13
  int v10; // ecx
  __int64 v11; // rdi
  char **v12; // r15
  int dtype_size; // r14d
  int v14; // eax
  bool v15; // cc
  int v16; // eax
  __int64 v17; // r13
  __int64 v18; // rax
  int v19; // eax
  char *v20; // r13
  int v21; // eax
  int v22; // ebx
  __int64 v23; // r13
  _QWORD *v24; // rax
  __int64 v25; // rsi
  _QWORD *v26; // r15
  __int64 v27; // rbp
  char *v28; // r14
  __int64 v29; // rsi
  unsigned int v30; // [rsp+10h] [rbp-88h]
  unsigned __int8 *v31; // [rsp+10h] [rbp-88h]
  char *v32; // [rsp+18h] [rbp-80h]
  _DWORD v33[4]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v34; // [rsp+30h] [rbp-68h] BYREF
  int v35; // [rsp+38h] [rbp-60h]
  unsigned __int64 v36; // [rsp+40h] [rbp-58h] BYREF
  __int64 v37; // [rsp+48h] [rbp-50h]
  unsigned __int64 v38; // [rsp+58h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 32);
  v38 = __readfsqword(0x28u);
  v3 = *(_DWORD *)v1;
  if ( *(_DWORD *)v1 == 54 )
  {
    if ( *(_BYTE *)(v1 + 64) == 1 && *(_DWORD *)(v1 + 72) == 132 )
    {
      sub_329340(*(_QWORD *)(a1 + 16), v1);
      ++*(_DWORD *)(a1 + 48);
    }
    return 0;
  }
  if ( v3 <= 0x36 )
  {
    if ( v3 == 12 )
    {
      if ( !(unsigned __int8)sub_3E86D0(*(_QWORD *)(a1 + 40), v1, &v34, &v36)
        || *(_BYTE *)(*(_QWORD *)(a1 + 40) + 376LL) && (v34 == -1 || v36 == -1) )
      {
        return 0;
      }
      v7 = v34 + v36;
    }
    else
    {
      if ( v3 != 13 )
        return 0;
      if ( *(_BYTE *)(v1 + 32) == 1
        && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 64LL) + 1184LL) == *(_DWORD *)(v1 + 40)
        && (unsigned __int8)sub_1196C0((char *)(v1 + 48), &v34, 1u) )
      {
        v37 = 0;
        v36 = 0xFFFFFFFF00000000LL;
        sub_11FC20((__int64)&v36, (unsigned __int8 *)v1);
        if ( (unsigned __int8)sub_136120(*(_QWORD *)(a1 + 16), (__int64)&v36, (int *)v1, 0, (__int64)&v36, 0xFFFFFFFF) )
        {
          sub_116290((char *)&v36, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 64LL) + 1504LL));
          sub_116350((char *)(v1 + 32), (char *)&v36);
          sub_1166E0(v1 + 48);
          *(_DWORD *)v1 = 4;
          ++*(_DWORD *)(a1 + 48);
          sub_1166E0((__int64)&v36);
          return 0;
        }
        sub_1166E0((__int64)&v36);
      }
      if ( !(unsigned __int8)sub_3E86D0(*(_QWORD *)(a1 + 40), v1, &v34, &v36) )
        return 0;
      v5 = *(_QWORD *)(a1 + 40);
      if ( *(_BYTE *)(v5 + 376) && (v36 == -1 || v34 == -1) )
      {
        v6 = *(_QWORD *)(v5 + 352);
        if ( v36 != v6 && v34 != v6 )
          return 0;
      }
      v7 = v34 - v36;
    }
    v34 = v7;
    *(_DWORD *)v1 = 4;
    v8 = *(_QWORD *)(a1 + 40);
    v9 = v34;
    sub_1166E0(v1 + 32);
    *(_BYTE *)(v1 + 32) = 6;
    v10 = 8 * *(_DWORD *)(v8 + 84);
    if ( (unsigned __int64)v10 <= 0x3F )
      v9 &= ~(-1LL << v10);
    *(_QWORD *)(v1 + 40) = v9;
    sub_116290((char *)(v1 + 32), *(_QWORD *)(a1 + 40));
    sub_1166E0(v1 + 48);
    ++*(_DWORD *)(a1 + 48);
    return 0;
  }
  if ( v3 == 56 )
  {
    if ( *(_BYTE *)(v1 + 32) == 6 )
    {
      v11 = *(_QWORD *)(v1 + 40);
      goto LABEL_27;
    }
    return 0;
  }
  if ( v3 != 57 || *(_BYTE *)(v1 + 48) != 6 )
    return 0;
  v11 = *(_QWORD *)(v1 + 56);
LABEL_27:
  v12 = sub_3E24B0(v11, nullptr);
  if ( !v12 )
    return 0;
  dtype_size = get_dtype_size();
  if ( *(_QWORD *)(a1 + 24) != v1 && ((_BYTE)v12[2] & 1) != 0 )
    return 0;
  v33[2] = 8;
  v14 = *((_DWORD *)v12 + 2);
  v34 = 1;
  v33[0] = 1;
  v15 = (unsigned int)(v14 - 22) <= 2;
  v16 = 1;
  v33[1] = dtype_size;
  if ( !v15 )
    v16 = dtype_size;
  HIDWORD(v34) = v16;
  v35 = dtype_size + 8;
  if ( !*(_BYTE *)(v1 + 64) )
  {
    v32 = (char *)(v1 + 32);
    sub_11EAC0(v1 + 32, (unsigned __int8 *)v33);
    v20 = (char *)(v1 + 48);
    sub_11EAC0(v1 + 48, (unsigned __int8 *)&v34);
    v31 = (unsigned __int8 *)(v1 + 64);
    sub_11EAC0(v1 + 64, (unsigned __int8 *)v33);
LABEL_47:
    *(_DWORD *)v1 = *((_DWORD *)v12 + 2);
    v21 = *((_DWORD *)v12 + 4);
    if ( (v21 & 4) != 0 )
    {
      sub_116350(v32, v20);
      v21 = *((_DWORD *)v12 + 4);
    }
    if ( (v21 & 2) != 0 )
      sub_11A350((__int64)v20, *(_QWORD *)(a1 + 40), 10, *(_DWORD *)(v1 + 36), *(_QWORD *)(v1 + 24), 0);
    if ( *(_QWORD *)(a1 + 24) == v1 )
    {
      if ( ((_BYTE)v12[2] & 1) != 0 )
      {
        LODWORD(v36) = 1;
        HIDWORD(v36) = dtype_size;
        LODWORD(v37) = 272;
        sub_11EAC0((__int64)v31, (unsigned __int8 *)&v36);
        sub_1166E0((__int64)&v36);
        v23 = j__qalloc_or_throw();
        *(_OWORD *)(v23 + 8) = 0;
        *(_QWORD *)(v23 + 32) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v23 + 40) = 0;
        *(_QWORD *)(v23 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v23 + 56) = 0;
        *(_QWORD *)(v23 + 64) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v23 + 72) = 0;
        sub_11ECE0(v23, v1);
        *(_DWORD *)v23 = *((_DWORD *)v12 + 2) + 2;
        sub_116350((char *)(v23 + 64), (char *)&v34);
        sub_9CAA0(*(_QWORD *)(a1 + 16), (_QWORD *)v23, v1);
        v24 = (_QWORD *)j__qalloc_or_throw();
        v25 = *(_QWORD *)(v1 + 24);
        v26 = v24;
        v27 = (__int64)(v24 + 4);
        v24[5] = 0;
        v28 = (char *)(v24 + 8);
        v24[7] = 0;
        v24[4] = 0xFFFFFFFF00000000LL;
        v24[6] = 0xFFFFFFFF00000000LL;
        v24[8] = 0xFFFFFFFF00000000LL;
        v24[9] = 0;
        sub_329320((__int64)v24, v25);
        *(_DWORD *)v26 = 4;
        sub_11EAC0(v27, v31);
        sub_116350(v28, (char *)v33);
        sub_9CAA0(*(_QWORD *)(a1 + 16), v26, v23);
      }
    }
    else
    {
      v22 = *(_DWORD *)(v1 + 68);
      sub_1166E0((__int64)v31);
      *(_DWORD *)(v1 + 68) = v22;
    }
    v19 = 1;
    goto LABEL_37;
  }
  v17 = *(_QWORD *)(v1 + 72);
  if ( *(_QWORD *)(v17 + 32) == 2 )
  {
    v18 = *(_QWORD *)(v17 + 24);
    if ( *(_DWORD *)(v18 + 4) == dtype_size && *(_DWORD *)(v18 + 84) == dtype_size && dtype_size == get_tinfo_size() )
    {
      v32 = (char *)(v1 + 32);
      sub_116350((char *)(v1 + 32), *(char **)(v17 + 24));
      v29 = *(_QWORD *)(v17 + 24);
      v20 = (char *)(v1 + 48);
      sub_116350((char *)(v1 + 48), (char *)(v29 + 80));
      v31 = (unsigned __int8 *)(v1 + 64);
      sub_11EAC0(v1 + 64, (unsigned __int8 *)v33);
      goto LABEL_47;
    }
  }
  v19 = 0;
LABEL_37:
  v30 = v19;
  sub_1166E0((__int64)&v34);
  sub_1166E0((__int64)v33);
  return v30;
}

