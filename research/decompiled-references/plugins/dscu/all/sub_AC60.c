__int64 __fastcall sub_AC60(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  const char *v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rax
  const char *v11; // [rsp+0h] [rbp-38h] BYREF
  __int128 v12; // [rsp+8h] [rbp-30h]
  unsigned __int64 v13; // [rsp+18h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  if ( (unsigned int)callui(1004, a2, a3) )
  {
    v4 = 0;
    sub_78B0((__int64)"module loading is disabled while the debugger is active");
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 104);
    v11 = nullptr;
    v12 = 0;
    if ( netnode_qsupstr(v3, &v11, 5, 83) <= 0 )
      goto LABEL_3;
    sub_5CB0((__int64)"DSCU: Please wait");
    v6 = byte_190C8;
    if ( (_QWORD)v12 )
      v6 = v11;
    v4 = reload_file_ex(v6, 0, 0);
    callui(24, 10, 0);
    if ( (_BYTE)v4 )
    {
      v7 = getinf(20);
      v8 = getinf(19);
      auto_mark_range(v8, v7, 200);
      v9 = getinf(20);
      v10 = getinf(19);
      auto_mark_range(v10, v9, 40);
    }
    else
    {
LABEL_3:
      v4 = 0;
    }
    if ( v11 )
    {
      *(_QWORD *)&v12 = 0;
      qfree(v11);
    }
  }
  return v4;
}
