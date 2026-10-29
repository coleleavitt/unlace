__int64 __fastcall sub_58A50(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // [rsp+0h] [rbp-18h]
  __int64 v15; // [rsp+0h] [rbp-18h]
  __int64 v16; // [rsp+8h] [rbp-10h]
  __int64 v17; // [rsp+8h] [rbp-10h]
  __int64 v18; // [rsp+10h] [rbp-8h]
  __int64 v19; // [rsp+10h] [rbp-8h]

  if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
  {
    v4 = *(_QWORD *)(a3 + 8);
  }
  else
  {
    v4 = 0;
    if ( *(_QWORD *)(a3 + 16) != -1 )
      v4 = 16 * sel2para();
  }
  v5 = v4 + *(_QWORD *)(a3 + 24) + *(_QWORD *)(a3 + 32);
  get_dword(a2);
  getinf_flag(3, 32, v6, v7, v8, v9, v14, v16, v18);
  getinf_flag(3, 32, (((_DWORD)v5 - (_DWORD)a2) << 29) & 0x60000000, v10, v11, v12, v15, v17, v19);
  put_dword();
  return 1;
}
