__int64 __fastcall sub_58710(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // [rsp+0h] [rbp-28h]
  __int64 v12; // [rsp+0h] [rbp-28h]
  __int64 v13; // [rsp+8h] [rbp-20h]
  __int64 v14; // [rsp+8h] [rbp-20h]
  __int64 v15; // [rsp+10h] [rbp-18h]
  __int64 v16; // [rsp+10h] [rbp-18h]

  get_dword(a2);
  v6 = (unsigned int)getinf_flag(3, 32, v2, v3, v4, v5, v11, v13, v15);
  getinf_flag(3, 32, v6, v7, v8, v9, v12, v14, v16);
  put_dword();
  return 1;
}
