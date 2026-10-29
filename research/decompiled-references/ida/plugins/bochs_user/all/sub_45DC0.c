__int64 __fastcall sub_45DC0(__int64 a1, const char *a2)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 current_extlang; // r14
  unsigned __int8 (__fastcall *v8)(char *, const char *, _QWORD, _QWORD, const char **); // rax
  const char *v9; // rdx
  unsigned int v10; // [rsp+4h] [rbp-9Ch]
  int v11; // [rsp+14h] [rbp-8Ch] BYREF
  const char *v12; // [rsp+18h] [rbp-88h] BYREF
  __int128 v13; // [rsp+20h] [rbp-80h]
  char v14[8]; // [rsp+38h] [rbp-68h] BYREF
  __int128 v15; // [rsp+40h] [rbp-60h]
  __int64 v16; // [rsp+50h] [rbp-50h]
  unsigned __int64 v17; // [rsp+60h] [rbp-40h]

  v2 = *(_DWORD *)(a1 + 316);
  v17 = __readfsqword(0x28u);
  v14[0] = 2;
  v11 = v2;
  v16 = 0;
  v15 = 0;
  v10 = callui(1082, 0xFFFFFFFFLL, &v11, 0x7FFF);
  *(_BYTE *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  if ( (unsigned __int8)callui(27, 0xFFFFFFFFLL, v3, v4) )
  {
    sub_45250(a1);
    goto LABEL_3;
  }
  v12 = nullptr;
  v13 = 0;
  current_extlang = get_current_extlang();
  v8 = *(unsigned __int8 (__fastcall **)(char *, const char *, _QWORD, _QWORD, const char **))(current_extlang + 56);
  if ( !v8 )
  {
    sub_F490((__int64 *)&v12);
    goto LABEL_8;
  }
  if ( !v8(v14, a2, 0, 0, &v12) )
  {
LABEL_8:
    sub_45250(a1);
    v9 = s1;
    if ( (_QWORD)v13 )
      v9 = v12;
    sub_EBD0((__int64)"API script \"%s\" caused runtime error, execution suspended:\n>%s<\n", a2, v9);
  }
  if ( current_extlang )
    --*(_DWORD *)(current_extlang + 12);
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree();
  }
LABEL_3:
  callui(1082, v10, &v11, 0x7FFF);
  if ( !*(_BYTE *)a1 )
  {
    idcv_long();
    v5 = 0;
    if ( !(_QWORD)v15 )
      goto LABEL_5;
    sub_EBD0((__int64)"API script \"%s\" has suspended execution\n", a2);
  }
  v5 = 1;
LABEL_5:
  free_idcv();
  return v5;
}

