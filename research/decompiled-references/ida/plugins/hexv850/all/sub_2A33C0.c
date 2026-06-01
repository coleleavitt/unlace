unsigned __int64 __fastcall sub_2A33C0(__int64 *a1, __int64 a2, unsigned int a3, unsigned __int64 a4)
{
  __int64 v6; // rbx
  unsigned __int64 tinfo_size; // rax
  int v8; // r8d
  int v9; // r9d
  unsigned int v10; // edx
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v15; // rdx
  __int64 v16; // rsi
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  _QWORD v20[2]; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v21[2]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v22; // [rsp+18h] [rbp-60h]
  _DWORD v23[4]; // [rsp+20h] [rbp-58h] BYREF
  _DWORD v24[4]; // [rsp+30h] [rbp-48h] BYREF
  int v25; // [rsp+40h] [rbp-38h]
  unsigned __int64 v26; // [rsp+48h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  v6 = sub_24FC20(a2);
  tinfo_size = get_tinfo_size();
  v10 = *(_DWORD *)(v6 + 8);
  if ( v10 <= 0x36 )
  {
    if ( v10 <= 0x34 )
      return v26 - __readfsqword(0x28u);
    v15 = *(_QWORD *)(v6 + 24);
    if ( *(_DWORD *)(v15 + 8) != 65 )
      return v26 - __readfsqword(0x28u);
    v11 = 13 * *(_DWORD *)(v15 + 32);
    v12 = *(_QWORD *)(*(_QWORD *)(v15 + 24) + 432LL) + 104LL * *(int *)(v15 + 32);
  }
  else
  {
    if ( v10 != 65 )
      return v26 - __readfsqword(0x28u);
    v11 = 13 * *(_DWORD *)(v6 + 32);
    v12 = *(_QWORD *)(*(_QWORD *)(v6 + 24) + 432LL) + 104LL * *(int *)(v6 + 32);
  }
  if ( v12 )
  {
    v13 = *(int *)(v12 + 88);
    if ( v13 == tinfo_size && tinfo_size >= a4 )
    {
      v16 = *a1;
      v21[1] = a3;
      v21[0] = 0;
      v22 = 0;
      v20[0] = 6;
      v20[1] = v6;
      sub_29ACA0((__int64)v20, v16, v13, v11, v8, v9);
      v23[0] = 0;
      sub_29A3B0((__int64)v23, (unsigned int *)v20);
      v24[0] = 0;
      sub_29A3B0((__int64)v24, v21);
      v25 = 2;
      sub_2A2F50((__int64)a1, (__int64)v23, 0, v17, v18, v19);
      v25 = -1;
      sub_299870((__int64)v24);
      sub_299870((__int64)v23);
      sub_299870((__int64)v20);
      sub_299870((__int64)v21);
    }
  }
  return v26 - __readfsqword(0x28u);
}

