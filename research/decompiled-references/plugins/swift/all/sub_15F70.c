__int64 __fastcall sub_15F70(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v5; // rax
  int v6; // ecx
  unsigned int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // rdi
  _QWORD *v10; // rbp
  __int64 v11; // rsi
  _BYTE *v12; // r12
  _DWORD *v13; // rax
  __int64 ph; // rax
  unsigned int *v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // rsi
  const char *v21; // r12
  const char **v22; // rax
  const char *v23; // rbp
  __int64 v24; // rdi
  _QWORD **v25; // rax
  _BYTE **v26; // rcx
  __int64 v27; // rax
  const char **v28; // rcx

  if ( a2 != 52 )
  {
    if ( a2 != 67 )
    {
      if ( a2 == 9 )
        *(_BYTE *)(*(_QWORD *)(a1 + 16) + 244LL) = 0;
      return 0;
    }
    v5 = *(_QWORD *)(a1 + 16);
    v6 = *(_DWORD *)(v5 + 240);
    if ( (v6 & 1) == 0 || !*(_QWORD *)(v5 + 136) || (v6 & 0x80) == 0 )
      return 0;
    v7 = *a3;
    if ( *a3 > 0x2F )
    {
      v25 = *((_QWORD ***)a3 + 1);
      v26 = (_BYTE **)(v25 + 1);
      *((_QWORD *)a3 + 1) = v25 + 1;
      v10 = *v25;
    }
    else
    {
      v8 = *((_QWORD *)a3 + 2);
      v9 = v7 + 8;
      *a3 = v9;
      v10 = *(_QWORD **)(v8 + v7);
      if ( (unsigned int)v9 <= 0x2F )
      {
        v11 = v7 + 16;
        *a3 = v11;
        v12 = *(_BYTE **)(v8 + v9);
        if ( (unsigned int)v11 <= 0x2F )
        {
          v13 = (_DWORD *)(v11 + v8);
          *a3 = v7 + 24;
LABEL_13:
          if ( *v13 && v10 == (_QWORD *)get_std_dirtree(1) && v12 && *v12 == 47 )
            sub_10DE0(*(_QWORD *)(a1 + 16), v10, (__int64)(v12 + 1));
          return 0;
        }
        v13 = *((_DWORD **)a3 + 1);
LABEL_34:
        *((_QWORD *)a3 + 1) = v13 + 2;
        goto LABEL_13;
      }
      v26 = *((_BYTE ***)a3 + 1);
    }
    v13 = v26 + 1;
    *((_QWORD *)a3 + 1) = v26 + 1;
    v12 = *v26;
    goto LABEL_34;
  }
  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 16) + 245LL) )
    return 0;
  if ( !(unsigned __int8)getinf_flag(3, 4) )
    return 0;
  ph = get_ph();
  v15 = a3;
  if ( *(_DWORD *)(ph + 4) )
  {
    v27 = get_ph();
    v15 = a3;
    if ( *(_DWORD *)(v27 + 4) != 13 )
      return 0;
  }
  v16 = *(_QWORD *)(a1 + 16);
  v17 = *(_DWORD *)(v16 + 240);
  if ( (v17 & 0x60) == 0 || (v17 & 1) == 0 || !*(_QWORD *)(v16 + 136) )
    return 0;
  v18 = *v15;
  if ( *v15 > 0x2F )
  {
    v28 = *((const char ***)v15 + 1);
    v22 = v28 + 1;
    *((_QWORD *)v15 + 1) = v28 + 1;
    v21 = *v28;
LABEL_38:
    *((_QWORD *)v15 + 1) = v22 + 1;
    goto LABEL_27;
  }
  v19 = *((_QWORD *)v15 + 2);
  v20 = v18 + 8;
  *v15 = v20;
  v21 = *(const char **)(v19 + v18);
  if ( (unsigned int)v20 > 0x2F )
  {
    v22 = *((const char ***)v15 + 1);
    goto LABEL_38;
  }
  v22 = (const char **)(v20 + v19);
  *v15 = v18 + 16;
LABEL_27:
  v23 = *v22;
  if ( *v22 && *v23 )
  {
    v24 = *(_QWORD *)(a1 + 16);
    if ( !*(_BYTE *)(v24 + 246) )
    {
      sub_141D0(v24);
      v24 = *(_QWORD *)(a1 + 16);
    }
    sub_15CE0(v24, v23, v21);
  }
  return 0;
}
