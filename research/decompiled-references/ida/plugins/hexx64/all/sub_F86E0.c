__int64 __fastcall sub_F86E0(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 *v3; // rbp
  unsigned int v5; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r13
  unsigned int *v11; // r14
  unsigned int *v12; // r13
  __int64 v13; // rdi
  unsigned int v14; // r13d
  int v15; // eax
  unsigned __int64 v16; // rax
  __int64 v17; // [rsp+0h] [rbp-108h] BYREF
  __int64 v18; // [rsp+8h] [rbp-100h]
  __int64 v19; // [rsp+10h] [rbp-F8h]
  __int64 v20; // [rsp+20h] [rbp-E8h]
  __int64 v21; // [rsp+28h] [rbp-E0h]
  unsigned int *v22[3]; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int *v23[4]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v24[2]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v25[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v26; // [rsp+B0h] [rbp-58h]
  __int128 v27; // [rsp+B8h] [rbp-50h]
  int v28; // [rsp+C8h] [rbp-40h]
  __int16 v29; // [rsp+CCh] [rbp-3Ch]
  unsigned __int64 v30; // [rsp+D8h] [rbp-30h]

  v3 = a2;
  v5 = *(_DWORD *)(a1 + 72);
  v30 = __readfsqword(0x28u);
  if ( v5 <= 0x10 )
  {
    if ( (unsigned int)getinf() != 176 )
      return 0;
  }
  else if ( v5 != 176 )
  {
    return 0;
  }
  if ( (unsigned __int64)getinf() <= 0x397 )
  {
    if ( !(unsigned __int8)getinf_flag() )
      return 0;
    netnode_check();
    a2 = nullptr;
    v14 = netnode_altval();
    if ( v14 <= 0x74 )
      return 0;
    v15 = *(_DWORD *)(get_ph() + 4);
    if ( v15 )
    {
      v16 = (unsigned int)(v15 - 13);
      if ( (unsigned int)v16 > 0x3B )
        return 0;
      v8 = 0x800000000000005LL;
      if ( !_bittest64(&v8, v16) || v14 == 117 )
        return 0;
    }
  }
  v10 = sub_1D5170(a1, (__int64)a2, v8, v9);
  sub_D10B0((__int64)&v17, *(_QWORD *)(v10 + 480), 0);
  v23[3] = (unsigned int *)v10;
  v24[0] = 0;
  v24[1] = 0;
  v25[0] = 0;
  v25[1] = 0;
  v26 = 0;
  v28 = -1;
  v29 = 0;
  v27 = 0;
  sub_DEB50((__int64)&v17, 0xB0u, 0, 16);
  v11 = (unsigned int *)(int)sub_64BA0(v24, 0);
  v12 = (unsigned int *)(int)sub_64BA0(v25, 0);
  if ( (_BYTE)a3
    || (char *)v12 + (unsigned __int64)v11 > &byte_1
    || (LOBYTE(a3) = v12 != nullptr && v11 != nullptr, (_BYTE)a3) )
  {
    v13 = v3[2];
    v3[1] = 0;
    if ( v13 )
    {
      v3[3] = 0;
      qfree(v13);
      v3[2] = 0;
      v3[4] = 0;
    }
    sub_D05A0(v3, *(_DWORD **)(a1 + 1504), v22, v11, 0.0);
    sub_D05A0(v3, *(_DWORD **)(a1 + 1504), v23, v12, 0.0);
    a3 = 1;
  }
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree(v26);
  }
  qfree(v25[0]);
  qfree(v24[0]);
  if ( v23[0] )
  {
    v23[1] = nullptr;
    qfree((__int64)v23[0]);
  }
  if ( v22[0] )
  {
    v22[1] = nullptr;
    qfree((__int64)v22[0]);
  }
  if ( v20 )
  {
    v21 = 0;
    qfree(v20);
  }
  if ( v18 )
  {
    v19 = 0;
    qfree(v18);
  }
  return a3;
}

