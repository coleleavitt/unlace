unsigned __int64 __fastcall sub_CB00(__int64 *a1, char a2)
{
  __int64 v2; // rax
  __int64 (*v3)(void); // rax
  __int64 v4; // r14
  int v5; // eax
  int v6; // edx
  char **v8; // rdx
  int v9; // ecx
  __int64 v10; // [rsp+28h] [rbp-58h]
  __int64 v11; // [rsp+30h] [rbp-50h] BYREF
  __int128 v12; // [rsp+38h] [rbp-48h]
  unsigned __int64 v13; // [rsp+48h] [rbp-38h]

  v2 = *a1;
  v13 = __readfsqword(0x28u);
  v3 = *(__int64 (**)(void))(v2 + 32);
  if ( (char *)v3 == (char *)sub_A830 )
    v10 = (__int64)(a1 + 28);
  else
    v10 = v3();
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 584LL))(v10);
  v4 = *(_QWORD *)(v10 + 680);
  v5 = debug & 0x10000;
  if ( (debug & 0x10000) != 0 )
  {
    v11 = 0;
    v12 = 0;
    get_dbctx_id();
    sub_C7A0(&v11);
    sub_B4F0();
    if ( v11 )
    {
      *(_QWORD *)&v12 = 0;
      qfree();
    }
    v5 = debug & 0x10000;
  }
  if ( v4 )
  {
    a1[20] = *(_QWORD *)(v10 + 720);
    v6 = *(_DWORD *)(v10 + 768);
    *((_DWORD *)a1 + 46) = v4;
    *((_DWORD *)a1 + 42) = v6;
    a1[22] = *(_QWORD *)(v10 + 672);
    if ( !v5 )
      return v13 - __readfsqword(0x28u);
    goto LABEL_12;
  }
  if ( *(_DWORD *)(v10 + 276) == 8 )
  {
    v8 = &off_3AC00;
    v9 = 76;
  }
  else
  {
    v8 = &off_3A580;
    v9 = 52;
  }
  a1[22] = (__int64)v8;
  *((_DWORD *)a1 + 46) = v9;
  a1[20] = (__int64)off_3B8C0;
  *((_DWORD *)a1 + 42) = 1;
  if ( v5 )
  {
LABEL_12:
    v12 = 0;
    v11 = 0;
    get_dbctx_id();
    sub_C7A0(&v11);
    sub_B4F0();
    if ( v11 )
    {
      *(_QWORD *)&v12 = 0;
      qfree();
    }
  }
  return v13 - __readfsqword(0x28u);
}

