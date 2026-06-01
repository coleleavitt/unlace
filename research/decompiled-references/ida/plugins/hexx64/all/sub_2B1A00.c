_BOOL8 __fastcall sub_2B1A00(__int64 a1, __int64 a2, unsigned __int64 a3, double a4)
{
  __int64 v5; // rbx
  unsigned __int8 (***v6)(void); // rdi
  unsigned __int8 (*v7)(void); // rax
  bool (__fastcall ***v8)(__int64); // rdi
  bool (__fastcall *v9)(__int64); // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  _BOOL8 result; // rax
  __int64 v16; // rax
  int v17; // ebx
  __int64 v18; // [rsp+0h] [rbp-58h] BYREF
  __int64 v19; // [rsp+8h] [rbp-50h] BYREF
  __int128 v20; // [rsp+10h] [rbp-48h]
  __int64 v21; // [rsp+20h] [rbp-38h]
  unsigned __int64 v22; // [rsp+28h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  if ( a3 >= *(_QWORD *)(a1 + 48) )
    goto LABEL_11;
  v5 = 88 * a3;
  v6 = (unsigned __int8 (***)(void))(88 * a3 + *(_QWORD *)(a1 + 40));
  v7 = **v6;
  if ( (char *)v7 == (char *)sub_2AD660 )
  {
    if ( !(unsigned int)sub_257C40((__int64)(v6 + 1), (__int64)(v6 + 8)) )
      goto LABEL_11;
  }
  else if ( !v7() )
  {
    goto LABEL_11;
  }
  v8 = (bool (__fastcall ***)(__int64))(v5 + *(_QWORD *)(a2 + 40));
  v9 = **v8;
  if ( v9 == sub_2AD660 )
  {
    if ( (unsigned int)sub_257C40((__int64)(v8 + 1), (__int64)(v8 + 8)) )
      goto LABEL_6;
LABEL_11:
    sub_2ADE60(a4);
  }
  if ( !((unsigned __int8 (*)(void))v9)() )
    goto LABEL_11;
LABEL_6:
  v10 = v5 + *(_QWORD *)(a2 + 40);
  v11 = *(_QWORD *)(a1 + 40) + v5;
  v12 = v10;
  switch_dbctx();
  v13 = (unsigned int)sub_257C40(v11 + 8, v12 + 8);
  result = 1;
  if ( !(_DWORD)v13 )
  {
    v16 = *(_QWORD *)(v12 + 24);
    v19 = 0;
    v18 = v16;
    v20 = 0;
    sub_2AE320(&v19, v12 + 32, v13, v14);
    v21 = *(_QWORD *)(v12 + 56);
    v17 = sub_810D0(v11 + 24, (__int64)&v18);
    if ( v19 )
    {
      *(_QWORD *)&v20 = 0;
      qfree(v19);
    }
    return v17 != 0;
  }
  return result;
}

