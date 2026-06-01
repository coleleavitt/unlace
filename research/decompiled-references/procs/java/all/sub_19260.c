unsigned __int64 sub_19260(__int64 a1, __int64 a2, ...)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v5; // rbx
  __int64 v6; // r12
  __int64 v7; // rdi
  __int64 v8; // rbp
  __int64 v10; // [rsp+8h] [rbp-510h] BYREF
  __int64 v11; // [rsp+10h] [rbp-508h] BYREF
  gcc_va_list va; // [rsp+18h] [rbp-500h] BYREF
  char v13[1032]; // [rsp+30h] [rbp-4E8h] BYREF
  unsigned __int64 v14; // [rsp+438h] [rbp-E0h]
  __int64 v15; // [rsp+450h] [rbp-C8h]
  __int64 v16; // [rsp+458h] [rbp-C0h]
  __int64 v17; // [rsp+460h] [rbp-B8h]
  __int64 v18; // [rsp+468h] [rbp-B0h]

  va_start(va, a2);
  v15 = va_arg(va, _QWORD);
  v16 = va_arg(va, _QWORD);
  v17 = va_arg(va, _QWORD);
  v2 = v17;
  v18 = va_arg(va, _QWORD);
  v3 = v18;
  va_end(va);
  va_start(va, a2);
  v14 = __readfsqword(0x28u);
  ++*(_DWORD *)(a1 + 33348);
  v5 = (int)qvsnprintf(v13, 1024, a2, va, v2, v3);
  sub_E500((__int64)"%s", v13);
  if ( (_DWORD)v5 )
  {
    while ( v13[(int)v5 - 1] <= 32 )
    {
      if ( (_DWORD)v5 == 1 )
        return v14 - __readfsqword(0x28u);
      v5 = (int)v5 - 1;
    }
    if ( (int)v5 > 1024 )
    {
      v5 = 1024;
      memset(&v13[1021], 46, 3);
    }
    v10 = -1;
    v6 = *(_QWORD *)(a1 + 33101);
    if ( v6 )
    {
      v10 = *(_QWORD *)(a1 + 33101);
      v7 = v10;
      v6 = netnode_altval(v10, 0, 65);
      v8 = v6 + 1;
    }
    else
    {
      netnode_check(&v10, 0, 0, 1);
      v7 = v10;
      *(_QWORD *)(a1 + 33101) = v10;
      v8 = 1;
    }
    netnode_supset(v7, v6, v13, v5, 83);
    v11 = v8;
    netnode_supset(v10, 0, &v11, 8, 65);
  }
  return v14 - __readfsqword(0x28u);
}
