__int64 __fastcall sub_F4220(__int64 a1, __int64 *a2, unsigned int a3)
{
  unsigned int v4; // eax
  __int64 v7; // r13
  unsigned int *v8; // r14
  unsigned int *v9; // r13
  __int64 v10; // rdi
  unsigned int v11; // r13d
  int v12; // eax
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  _QWORD v15[11]; // [rsp+0h] [rbp-108h] BYREF
  unsigned int *v16[3]; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int *v17[4]; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v18[2]; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v19[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v20; // [rsp+B0h] [rbp-58h]
  __int128 v21; // [rsp+B8h] [rbp-50h]
  int v22; // [rsp+C8h] [rbp-40h]
  __int16 v23; // [rsp+CCh] [rbp-3Ch]
  unsigned __int64 v24; // [rsp+D8h] [rbp-30h]

  v4 = *(_DWORD *)(a1 + 72);
  v24 = __readfsqword(0x28u);
  if ( v4 <= 0x10 )
  {
    if ( (unsigned int)getinf() != 176 )
      return 0;
  }
  else if ( v4 != 176 )
  {
    return 0;
  }
  if ( (unsigned __int64)getinf() <= 0x397 )
  {
    if ( !(unsigned __int8)getinf_flag() )
      return 0;
    netnode_check();
    v11 = netnode_altval();
    if ( v11 <= 0x74 )
      return 0;
    v12 = *(_DWORD *)(get_ph() + 4);
    if ( v12 )
    {
      v13 = (unsigned int)(v12 - 13);
      if ( (unsigned int)v13 > 0x3B )
        return 0;
      v14 = 0x800000000000005LL;
      if ( !_bittest64(&v14, v13) || v11 == 117 )
        return 0;
    }
  }
  v7 = sub_1D0B30(a1);
  sub_CCBF0((__int64)v15, *(_QWORD *)(v7 + 480), 0);
  v17[3] = (unsigned int *)v7;
  v18[0] = 0;
  v18[1] = 0;
  v19[0] = 0;
  v19[1] = 0;
  v20 = 0;
  v22 = -1;
  v23 = 0;
  v21 = 0;
  sub_DA690((__int64)v15, 0xB0u, 0, 16);
  v8 = (unsigned int *)(int)sub_60820(v18, 0);
  v9 = (unsigned int *)(int)sub_60820(v19, 0);
  if ( (_BYTE)a3
    || (char *)v9 + (unsigned __int64)v8 > &byte_1
    || (LOBYTE(a3) = v9 != nullptr && v8 != nullptr, (_BYTE)a3) )
  {
    v10 = a2[2];
    a2[1] = 0;
    if ( v10 )
    {
      a2[3] = 0;
      qfree();
      a2[2] = 0;
      a2[4] = 0;
    }
    sub_CC0E0(a2, *(_DWORD **)(a1 + 1504), v16, v8);
    sub_CC0E0(a2, *(_DWORD **)(a1 + 1504), v17, v9);
    a3 = 1;
  }
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree();
  }
  qfree();
  qfree();
  if ( v17[0] )
  {
    v17[1] = nullptr;
    qfree();
  }
  if ( v16[0] )
  {
    v16[1] = nullptr;
    qfree();
  }
  if ( v15[4] )
  {
    v15[5] = 0;
    qfree();
  }
  if ( v15[1] )
  {
    v15[2] = 0;
    qfree();
  }
  return a3;
}

