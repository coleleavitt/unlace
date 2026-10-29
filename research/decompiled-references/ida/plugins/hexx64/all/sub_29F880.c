__int64 __fastcall sub_29F880(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rax
  __int64 *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 result; // rax
  int v8; // r12d
  __int64 v9; // [rsp+8h] [rbp-40h] BYREF
  unsigned int v10[2]; // [rsp+10h] [rbp-38h] BYREF
  __int64 v11; // [rsp+18h] [rbp-30h]
  unsigned __int64 v12; // [rsp+28h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  if ( *(_DWORD *)a1 != 2 )
    return 0;
  v3 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)v3 != 3 )
    return 0;
  v4 = *(__int64 **)(v3 + 8);
  if ( !v4 || v4[1] != 1 )
    return 0;
  v5 = *v4;
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 8) + 24LL;
    if ( !*(_QWORD *)v6 )
      goto LABEL_7;
    return 0;
  }
  v6 = 24;
LABEL_7:
  result = 0;
  if ( *(_DWORD *)(v6 + 8) == 1 )
  {
    v8 = *(_DWORD *)(a1 + 4);
    sub_32C540(&v9, a2, (_QWORD *)(v6 + 16));
    v10[0] = 1;
    v10[1] = v8 & 4;
    v11 = 0;
    copy_tinfo_t();
    sub_29F770(a1, v10, a3);
    sub_29EC30((__int64)v10, a3);
    clear_tinfo_t();
    return 1;
  }
  return result;
}

