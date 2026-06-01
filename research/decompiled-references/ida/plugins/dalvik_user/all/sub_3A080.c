__int64 __fastcall sub_3A080(_DWORD *a1, const char *a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // rbx
  __int64 v6; // rax
  __int64 *v7; // rbp
  __int64 v8; // r13
  _QWORD *v9; // rax
  const char *v10; // rdx
  __int64 result; // rax
  int v12; // r9d
  unsigned __int8 *v13; // r8
  char v14; // al
  const char *(__fastcall *v15)(__int64); // rax
  __int64 v16; // rax
  _BYTE *v17; // rax
  unsigned __int8 v18; // [rsp+Fh] [rbp-59h]
  unsigned __int8 *v19; // [rsp+10h] [rbp-58h] BYREF
  __int128 v20; // [rsp+18h] [rbp-50h]
  unsigned __int64 v21; // [rsp+28h] [rbp-40h]

  v4 = (__int64)a2;
  v21 = __readfsqword(0x28u);
  v6 = sub_135E0(a1, a2);
  v7 = *((__int64 **)a2 + 1);
  v8 = v6;
  if ( (debug & 0x40000) != 0 )
  {
    v9 = (_QWORD *)v7[6];
    v10 = nptr;
    if ( v9[5] )
    {
      v10 = (const char *)v9[4];
      a2 = nptr;
      if ( !v9[2] )
        goto LABEL_4;
    }
    else
    {
      a2 = nptr;
      if ( !v9[2] )
      {
LABEL_4:
        sub_111A0((__int64)"DEXSIP: aloc_var_read_value %s`%s\n", a2, v10);
        goto LABEL_5;
      }
    }
    a2 = (const char *)v9[1];
    goto LABEL_4;
  }
LABEL_5:
  if ( !*(_BYTE *)(v7[6] + 88) || !(unsigned __int8)sub_33190((__int64)v7, (__int64)a2) )
    return 0;
  v19 = nullptr;
  v20 = 0;
  if ( (unsigned __int8)sub_36D30((__int64 *)&v19, a4) )
  {
    v13 = (unsigned __int8 *)nptr;
    if ( (_QWORD)v20 )
      v13 = v19;
    v14 = sub_27EB0(v8, v7[6], v7[4], v7[5], v13, v12);
  }
  else
  {
    v15 = *(const char *(__fastcall **)(__int64))(*v7 + 32);
    if ( v15 == sub_30380 )
    {
      v16 = v7[6];
      if ( !*(_QWORD *)(v16 + 40) )
        goto LABEL_14;
      v17 = *(_BYTE **)(v16 + 32);
    }
    else
    {
      v17 = (_BYTE *)v15((__int64)v7);
    }
    if ( !*v17 )
      goto LABEL_14;
    v14 = sub_27EB0(v8, v7[6], v7[4], v7[5], nullptr, v12);
  }
  if ( !v14 )
  {
LABEL_14:
    result = 0;
    goto LABEL_15;
  }
  result = sub_39E90(a1, v4);
LABEL_15:
  if ( v19 )
  {
    v18 = result;
    *(_QWORD *)&v20 = 0;
    qfree();
    return v18;
  }
  return result;
}

