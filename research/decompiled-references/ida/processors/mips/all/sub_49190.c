__int64 __fastcall sub_49190(__int64 a1, __int64 a2, int a3, unsigned __int64 a4)
{
  __int64 v4; // rbp
  __int64 v5; // r13
  unsigned __int16 v7; // ax
  char v9; // r12
  unsigned int v10; // ebp
  double v11; // xmm0_8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 module_data; // rax
  unsigned __int8 v17; // [rsp+Fh] [rbp-39h] BYREF
  __int64 v18[7]; // [rsp+10h] [rbp-38h] BYREF

  v4 = a3;
  v5 = *(_QWORD *)(a1 + 8LL * a3 + 8);
  v18[1] = __readfsqword(0x28u);
  if ( !v5 )
  {
    v11 = switch_dbctx(*(int *)(a2 + 4LL * a3 + 16));
    module_data = get_module_data((unsigned int)dword_75804, a2, v12, v13, v14, v15, v11);
    *(_QWORD *)(a1 + 8 * v4 + 8) = module_data;
    v5 = module_data;
  }
  v7 = sub_1F160(v5, &v17, a4, v18);
  if ( v7 && ((v9 = v17, v10 = v7, (unsigned __int8)sub_1E660(v5, v7, v17)) || sub_1E5E0(v5, v10, v9)) )
    return v18[0];
  else
    return a4;
}

