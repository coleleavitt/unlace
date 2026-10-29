unsigned __int64 __fastcall sub_2A4A70(__int64 a1, __int64 a2, __int64 a3)
{
  const char *v3; // rax
  __int64 v5; // rdx
  __int64 tinfo_size; // r15
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  __int64 v17; // [rsp+18h] [rbp-B0h] BYREF
  _QWORD v18[2]; // [rsp+20h] [rbp-A8h] BYREF
  __int16 v19; // [rsp+30h] [rbp-98h]
  _QWORD v20[2]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v21[2]; // [rsp+50h] [rbp-78h] BYREF
  _DWORD v22[4]; // [rsp+60h] [rbp-68h] BYREF
  _DWORD v23[4]; // [rsp+70h] [rbp-58h] BYREF
  int v24; // [rsp+80h] [rbp-48h]
  unsigned __int64 v25; // [rsp+88h] [rbp-40h]

  v3 = s1;
  v25 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a3 + 24);
  v17 = 0;
  if ( *(_QWORD *)(v5 + 24) )
    v3 = *(const char **)(v5 + 16);
  if ( !v3 )
    goto LABEL_8;
  v18[1] = v3;
  v19 = 256;
  v18[0] = get_idati();
  if ( !(unsigned __int8)create_tinfo() )
    goto LABEL_8;
  tinfo_size = get_tinfo_size();
  if ( *(_DWORD *)(a3 + 8) != 61 )
    sub_2946B0(0, v17);
  if ( tinfo_size != sub_250E30(*(__int64 **)(a3 + 24)) )
  {
    sub_327290(v18, *(_QWORD *)(*(_QWORD *)a1 + 112LL), &v17);
    v21[0] = 1;
    v21[1] = 0;
    copy_tinfo_t();
    v7 = sub_2503C0(a2);
    v8 = *(_QWORD *)a1;
    v20[1] = v7;
    v20[0] = 6;
    sub_29B460((__int64)v20, v8, v9, v10, v11, v12);
    v22[0] = 0;
    sub_29AB70((__int64)v22, (unsigned int *)v20);
    v23[0] = 0;
    sub_29AB70((__int64)v23, (unsigned int *)v21);
    v24 = 1;
    sub_2A3710(a1, (__int64)v22, 0, v13, v14, v15);
    v24 = -1;
    sub_29A030((__int64)v23);
    sub_29A030((__int64)v22);
    sub_29A030((__int64)v20);
    sub_29A030((__int64)v21);
    clear_tinfo_t();
    clear_tinfo_t();
  }
  else
  {
LABEL_8:
    clear_tinfo_t();
  }
  return v25 - __readfsqword(0x28u);
}

