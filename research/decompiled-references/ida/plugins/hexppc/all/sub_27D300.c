__int64 __fastcall sub_27D300(__int64 *a1, __int64 **a2, __int64 a3)
{
  __int64 *v3; // r12
  int v6; // eax
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // edx
  int v12; // esi
  __int64 *v13; // r14
  __int64 v14; // rax
  __int64 v15; // rbp
  __int64 v16; // r12
  _QWORD v17[7]; // [rsp+0h] [rbp-38h] BYREF

  v17[1] = __readfsqword(0x28u);
  if ( !a1[2] )
    return 0;
  v3 = *a2;
  if ( a1 )
  {
    if ( a1 == v3 )
      v3 = (__int64 *)a1[1];
    if ( *((_DWORD *)v3 + 6) == 81 )
    {
      v11 = *(_DWORD *)(a3 + 16);
      if ( *(_DWORD *)v3[5] == v11 )
      {
        v12 = *((_DWORD *)v3 + 7);
        if ( v12 != -1 )
          sub_27C2D0(*(_QWORD *)(a3 + 8), v12, v11);
        v13 = (__int64 *)*v3;
        *(_QWORD *)v3[1] = *v3;
        v13[1] = v3[1];
        sub_2513D0((__int64)(v3 + 2));
        v3 = v13;
        qfree();
        --a1[2];
        ++*(_DWORD *)(a3 + 20);
      }
    }
    *a2 = v3;
  }
  if ( a1 == v3 )
  {
    if ( (__int64 *)*v3 == v3 )
      return 0;
    v3 = (__int64 *)v3[1];
    *a2 = v3;
    v6 = *((_DWORD *)v3 + 6);
    if ( v6 != 73 )
      goto LABEL_9;
LABEL_17:
    v8 = v3[5];
    v9 = *(_QWORD *)(v8 + 64);
    if ( *(_DWORD *)(v9 + 8) == 71 )
    {
      v17[0] = *(_QWORD *)(v9 + 24);
      result = sub_27D300(v17[0], v17, a3);
      if ( result )
        return result;
      v8 = v3[5];
    }
    v10 = *(_QWORD *)(v8 + 72);
    if ( v10 && *(_DWORD *)(v10 + 8) == 71 )
      return sub_27D300(*(_QWORD *)(v10 + 24), v17, a3);
    return 0;
  }
  v6 = *((_DWORD *)v3 + 6);
  if ( v6 == 73 )
    goto LABEL_17;
LABEL_9:
  if ( v6 != 83 )
  {
    if ( v6 == 71 )
      return sub_27D300(v3[5], v17, a3);
    return 0;
  }
  v17[0] = v3[5];
  result = sub_27D300(v17[0], v17, a3);
  if ( !result )
  {
    v14 = v3[5];
    v15 = *(_QWORD *)(v14 + 24);
    v16 = v15 + 48LL * *(_QWORD *)(v14 + 32);
    if ( v15 != v16 )
    {
      while ( 1 )
      {
        v17[0] = v15;
        result = sub_27D300(v15, v17, a3);
        if ( result )
          break;
        v15 += 48;
        if ( v16 == v15 )
          return 0;
      }
      return result;
    }
    return 0;
  }
  return result;
}

