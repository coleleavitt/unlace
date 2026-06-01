__int64 __fastcall sub_1BA50(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rdx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rbx
  size_t v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 *v12; // r15
  __int64 v13; // rbx
  __int64 v14; // rbp
  __int64 v15; // r10
  __int64 v16; // rax
  __int64 result; // rax
  unsigned int v18; // edx
  bool v19; // dl
  unsigned __int64 v21; // rbx
  unsigned __int64 v23; // [rsp+8h] [rbp-80h]
  unsigned int v24; // [rsp+8h] [rbp-80h]
  char *v26; // [rsp+18h] [rbp-70h]
  char *v27; // [rsp+30h] [rbp-58h]

  if ( (unsigned int)(*(_DWORD *)(a4 + 32) - 2) > 3 )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  if ( *(_QWORD *)(a2 + 16) && !(unsigned __int8)rangeset_t_has_common() )
    return 0;
  v5 = *(_QWORD **)(a1 + 528);
  v6 = &v5[4 * *(_QWORD *)(a1 + 536)];
  if ( v5 == v6 )
    return 0xFFFFFFFFLL;
  while ( 1 )
  {
    if ( a3 >= *v5 )
    {
      v7 = a3 - *v5;
      if ( v5[1] >= v7 )
        break;
    }
    v5 += 4;
    if ( v6 == v5 )
      return 0xFFFFFFFFLL;
  }
  v8 = v5[2] + v7;
  if ( v8 == -1 || qlseek() != v8 )
    return 0xFFFFFFFFLL;
  v9 = *(unsigned int *)(a4 + 144);
  v27 = nullptr;
  if ( *(_DWORD *)(a4 + 144) )
  {
    v27 = (char *)qvector_reserve();
    memset(v27, 0, v9);
  }
  v10 = qlread();
  if ( v10 <= 0 )
  {
    result = 0xFFFFFFFFLL;
    if ( v27 )
      goto LABEL_35;
    return result;
  }
  v11 = 4;
  if ( *(_BYTE *)(a1 + 773) )
    v11 = 8;
  v12 = (__int64 *)v27;
  v13 = 1;
  v14 = 0;
  v26 = &v27[v10 - v11];
  while ( v26 >= (char *)v12 )
  {
    if ( *(_BYTE *)(a1 + 773) )
      v15 = *v12;
    else
      v15 = *(unsigned int *)v12;
    v23 = v15;
    v16 = sub_1B650(v15, a4);
    result = (**(__int64 (__fastcall ***)(__int64, __int64, __int64))a2)(a2, a3 + v14, v16);
    v18 = *(_DWORD *)(a4 + 32);
    if ( v18 == 4 )
    {
LABEL_30:
      _RCX = *(_QWORD *)(a4 + 152);
      v21 = _RCX & v23;
      if ( !_RCX )
        goto LABEL_34;
      __asm { tzcnt   rcx, rcx }
      v13 = v21 >> ((unsigned __int8)_RCX - 2);
      v19 = v13 != 0;
      goto LABEL_20;
    }
    if ( v18 > 4 )
    {
      if ( v18 == 5 )
      {
        v13 = (v23 >> 49) & 0x3FF8;
        v19 = ((v23 >> 49) & 0x3FF8) != 0;
        goto LABEL_20;
      }
    }
    else
    {
      if ( v18 == 2 )
        goto LABEL_30;
      if ( v18 == 3 )
      {
        v13 = 8 * ((v23 & *(_QWORD *)(a4 + 152)) >> 51);
        v19 = v13 != 0;
        goto LABEL_20;
      }
    }
    v19 = 1;
LABEL_20:
    v14 += v13;
    v12 = (__int64 *)((char *)v12 + v13);
    if ( (_DWORD)result || !v19 )
      goto LABEL_34;
  }
  result = 0;
LABEL_34:
  if ( v27 )
  {
LABEL_35:
    v24 = result;
    qfree();
    return v24;
  }
  return result;
}

