__int64 __fastcall sub_119B0(__int64 *a1, __int64 *a2, unsigned int *a3, int *a4, __int64 a5, unsigned int a6)
{
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned int v11; // eax
  unsigned int v12; // r15d
  int _32bit; // eax
  __int64 v15; // rdx
  char v16; // al
  unsigned int v17; // r8d
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rax
  int v21; // eax
  unsigned int v22; // r8d
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r9
  unsigned __int64 v27; // rax
  __int64 (__fastcall *v28)(__int64 *, __int64 *, unsigned __int64); // r9
  __int64 v29; // rdx
  char v30; // al
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  char v34; // al
  __int64 (__fastcall *v35)(__int64 *, __int64 *, __int64); // r9
  __int64 v36; // rdx
  char v37; // al
  char v38; // al
  int v39; // [rsp+4h] [rbp-64h]
  unsigned int v40; // [rsp+4h] [rbp-64h]
  unsigned int v41; // [rsp+4h] [rbp-64h]
  __int64 v42; // [rsp+10h] [rbp-58h] BYREF
  __int64 v43; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v44[9]; // [rsp+20h] [rbp-48h] BYREF

  v8 = a1[35];
  v9 = *a1;
  v44[1] = __readfsqword(0x28u);
  v42 = 0;
  v11 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, __int64))(v9 + 144))(a1, &v42, a5 + v8);
  if ( !(_BYTE)v11 )
    return 0;
  if ( !v42 )
    return 0;
  v12 = v11;
  _32bit = get_32bit();
  if ( _32bit == -1 )
    return 0;
  v43 = 0;
  if ( _32bit >= 0 )
  {
    if ( a6 == 2 )
    {
      v15 = a1[39];
    }
    else if ( a6 > 2 )
    {
      v15 = -1;
      if ( a6 == 3 )
        v15 = a1[40];
    }
    else if ( a6 )
    {
      v15 = a1[38];
    }
    else
    {
      v15 = a1[37];
    }
    v39 = _32bit;
    v16 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, __int64))(*a1 + 136))(a1, &v43, v42 + v15);
    v17 = v39;
    if ( v16 )
      goto LABEL_12;
    return 0;
  }
  v40 = _32bit;
  v21 = sub_D110(a1[1]);
  v22 = v40;
  if ( v21 )
  {
    if ( v21 != 1 )
      return 0;
    v23 = a1[49] + v42;
    v24 = *a1;
    v44[0] = 0;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD *, __int64))(v24 + 136))(a1, v44, v23) )
      return 0;
    v26 = *a1;
    v22 = v40;
    if ( (v44[0] & 1) == 0 )
    {
      v35 = *(__int64 (__fastcall **)(__int64 *, __int64 *, __int64))(v26 + 136);
      if ( a6 == 2 )
      {
        v36 = a1[39];
      }
      else if ( a6 > 2 )
      {
        v36 = -1;
        if ( a6 == 3 )
          v36 = a1[40];
      }
      else if ( a6 )
      {
        v36 = a1[38];
      }
      else
      {
        v36 = a1[37];
      }
      v37 = v35(a1, &v43, v44[0] + v36);
      v17 = v40;
      if ( v37 )
        goto LABEL_12;
      return 0;
    }
    v27 = v44[0] & 0xFFFFFFFFFFFFFFFELL;
    v44[0] &= ~1uLL;
    if ( a6 == 2 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD *, unsigned __int64, __int64, _QWORD))(v26 + 144))(
              a1,
              v44,
              a1[50] + v27,
              v25,
              v40) )
        return 0;
      v38 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, __int64))(*a1 + 136))(a1, &v43, a1[39] + v44[0]);
      v17 = v40;
      if ( !v38 )
        return 0;
LABEL_26:
      v18 = v43;
      v31 = v43 & 3;
      if ( v31 == 1 )
      {
        v19 = 1;
        goto LABEL_13;
      }
      if ( v31 == 2 )
      {
        v19 = 2;
        goto LABEL_13;
      }
      if ( (v43 & 3) == 0 )
      {
        v19 = 0;
        goto LABEL_13;
      }
      return 0;
    }
    v28 = *(__int64 (__fastcall **)(__int64 *, __int64 *, unsigned __int64))(v26 + 136);
    if ( a6 == 1 )
    {
      v29 = a1[52];
    }
    else if ( a6 == 3 )
    {
      v29 = a1[53];
    }
    else
    {
      v29 = -1;
      if ( !a6 )
        v29 = a1[51];
    }
LABEL_25:
    v41 = v22;
    v30 = v28(a1, &v43, v27 + v29);
    v17 = v41;
    if ( !v30 )
      return 0;
    goto LABEL_26;
  }
  v32 = *a1;
  v29 = v42;
  if ( a6 != 2 )
  {
    v28 = *(__int64 (__fastcall **)(__int64 *, __int64 *, unsigned __int64))(v32 + 136);
    if ( a6 == 1 )
    {
      v27 = a1[47];
    }
    else if ( a6 == 3 )
    {
      v27 = a1[48];
    }
    else
    {
      v27 = -1;
      if ( !a6 )
        v27 = a1[46];
    }
    goto LABEL_25;
  }
  v33 = a1[45] + v42;
  v44[0] = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD *, __int64))(v32 + 144))(a1, v44, v33) )
    return 0;
  v34 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, __int64))(*a1 + 136))(a1, &v43, a1[39] + v44[0]);
  v17 = v40;
  if ( !v34 )
    return 0;
LABEL_12:
  v18 = v43;
  v19 = (2 * (_BYTE)v43) & 2;
LABEL_13:
  *a4 = v19;
  v20 = -8;
  if ( *((_DWORD *)a1 + 186) == 4 )
    v20 = -4;
  *a2 = v18 & v20;
  *a3 = v17;
  return v12;
}
