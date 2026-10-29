__int64 __fastcall sub_280F80(__int64 a1, __int64 *a2, __int64 a3, double a4)
{
  __int64 v4; // r12
  int v8; // eax
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // edx
  int v14; // esi
  __int64 v15; // r14
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rbp
  __int64 v19; // r12
  __int64 v20[7]; // [rsp+0h] [rbp-38h] BYREF

  v20[1] = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 16) )
    return 0;
  v4 = *a2;
  if ( a1 )
  {
    if ( a1 == v4 )
      v4 = *(_QWORD *)(a1 + 8);
    if ( *(_DWORD *)(v4 + 24) == 81 )
    {
      v13 = *(_DWORD *)(a3 + 16);
      if ( **(_DWORD **)(v4 + 40) == v13 )
      {
        v14 = *(_DWORD *)(v4 + 28);
        if ( v14 != -1 )
          sub_27FF50(*(_QWORD *)(a3 + 8), v14, v13);
        v15 = *(_QWORD *)v4;
        **(_QWORD **)(v4 + 8) = *(_QWORD *)v4;
        *(_QWORD *)(v15 + 8) = *(_QWORD *)(v4 + 8);
        sub_255050(v4 + 16, a4);
        v16 = v4;
        v4 = v15;
        qfree(v16);
        --*(_QWORD *)(a1 + 16);
        ++*(_DWORD *)(a3 + 20);
      }
    }
    *a2 = v4;
  }
  if ( a1 == v4 )
  {
    if ( *(_QWORD *)v4 == v4 )
      return 0;
    v4 = *(_QWORD *)(v4 + 8);
    *a2 = v4;
    v8 = *(_DWORD *)(v4 + 24);
    if ( v8 != 73 )
      goto LABEL_9;
LABEL_17:
    v10 = *(_QWORD *)(v4 + 40);
    v11 = *(_QWORD *)(v10 + 64);
    if ( *(_DWORD *)(v11 + 8) == 71 )
    {
      v20[0] = *(_QWORD *)(v11 + 24);
      result = sub_280F80(v20[0], v20, a3);
      if ( result )
        return result;
      v10 = *(_QWORD *)(v4 + 40);
    }
    v12 = *(_QWORD *)(v10 + 72);
    if ( v12 && *(_DWORD *)(v12 + 8) == 71 )
      return sub_280F80(*(_QWORD *)(v12 + 24), v20, a3);
    return 0;
  }
  v8 = *(_DWORD *)(v4 + 24);
  if ( v8 == 73 )
    goto LABEL_17;
LABEL_9:
  if ( v8 != 83 )
  {
    if ( v8 == 71 )
      return sub_280F80(*(_QWORD *)(v4 + 40), v20, a3);
    return 0;
  }
  v20[0] = *(_QWORD *)(v4 + 40);
  result = sub_280F80(v20[0], v20, a3);
  if ( !result )
  {
    v17 = *(_QWORD *)(v4 + 40);
    v18 = *(_QWORD *)(v17 + 24);
    v19 = v18 + 48LL * *(_QWORD *)(v17 + 32);
    if ( v18 != v19 )
    {
      while ( 1 )
      {
        v20[0] = v18;
        result = sub_280F80(v18, v20, a3);
        if ( result )
          break;
        v18 += 48;
        if ( v19 == v18 )
          return 0;
      }
      return result;
    }
    return 0;
  }
  return result;
}

