__int64 __fastcall sub_1F250(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v7; // rax
  _BYTE *v8; // rdi
  _BYTE *v9; // r13
  unsigned __int8 v10; // r15
  int v11; // r12d
  __int64 v12; // r15
  unsigned int v13; // eax
  int v14; // [rsp+0h] [rbp-84h]
  _BYTE *v15; // [rsp+14h] [rbp-70h] BYREF
  _QWORD v16[2]; // [rsp+1Ch] [rbp-68h] BYREF
  _BYTE *v17; // [rsp+2Ch] [rbp-58h] BYREF
  __int128 v18; // [rsp+34h] [rbp-50h]
  unsigned __int64 v19; // [rsp+44h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  v3 = a2;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 32) = -1;
  *(_OWORD *)(a1 + 8) = 0;
  v4 = sub_1DD10();
  v5 = netnode_altval(v4, a2, 359);
  if ( v5 )
  {
    v18 = 0;
    v17 = nullptr;
    v7 = netnode_qgetblob(v4, &v17, 1, v5 - 1, 2);
    v8 = v17;
    if ( v7 > 0 )
    {
      v15 = v17;
      v9 = &v17[v18];
      if ( v17 < &v17[(unsigned __int64)v18] )
      {
        v10 = *v17;
        v15 = v17 + 1;
        v14 = v10;
        if ( v10 )
        {
          v11 = 0;
          do
          {
            v12 = v3 + unpack_dq(&v15, v9) - 1;
            v13 = unpack_dd(&v15, v9);
            v16[0] = v12;
            v3 = v12 + v13;
            v16[1] = v3;
            rangeset_t_add(a1, v16);
            ++v11;
          }
          while ( v14 != v11 );
          v8 = v17;
        }
      }
    }
    if ( v8 )
    {
      *(_QWORD *)&v18 = 0;
      qfree(v8);
    }
  }
  return a1;
}

