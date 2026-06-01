__int64 __fastcall sub_3C8AA0(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // r15
  unsigned __int8 *v9; // r14
  __int64 result; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rbp
  __int64 v14; // rdx
  unsigned __int64 v15; // r12
  int *v16; // rdi
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // [rsp+8h] [rbp-40h]

  v8 = a1[2];
  v9 = *(unsigned __int8 **)(*(_QWORD *)(a1[6] + 136) + 24 * a3);
  result = *v9;
  if ( (_BYTE)result == 4 )
  {
    v22 = -1;
    if ( v8 == *(_QWORD *)(*((_QWORD *)v9 + 1) + 24LL) )
      goto LABEL_9;
  }
  else
  {
    v24 = a1[6];
    if ( v8 == -1 )
      goto LABEL_9;
    if ( (_BYTE)result != 2 )
    {
      if ( a2 != 2 )
        return result;
LABEL_7:
      result = *((_QWORD *)v9 + 2);
LABEL_8:
      if ( result != v8 )
        return result;
      goto LABEL_9;
    }
    if ( !(unsigned __int8)is_mapped() || !*(_QWORD *)(v24 + 24) || !rangeset_t_find_range() )
    {
LABEL_6:
      v8 = a1[2];
      result = -1;
      if ( a2 != 2 )
        goto LABEL_8;
      goto LABEL_7;
    }
    v22 = **((_QWORD **)v9 + 1);
  }
  if ( v8 != v22 )
    goto LABEL_6;
LABEL_9:
  v11 = sub_3C74D0(*a1, a4, a5);
  v13 = v12;
  v14 = a1[4];
  v15 = v11;
  while ( v14 )
  {
    v16 = *(int **)(a1[3] + 8 * v14 - 8);
    if ( *(_QWORD *)v16 != a1[1] )
      break;
    if ( v16[3] != 82 )
      break;
    v17 = v16[4];
    if ( v17 < v15 )
      break;
    if ( v13 < v16[5] + (int)v17 )
      break;
    if ( v16 )
    {
      operator delete(v16, 0x18u);
      v14 = a1[4];
      if ( !v14 )
        break;
    }
    a1[4] = --v14;
  }
  v18 = operator new(0x18u);
  v19 = a1[3];
  v20 = v18;
  v21 = a1[1];
  *(_QWORD *)(v20 + 16) = -1;
  *(_QWORD *)v20 = v21;
  *(_QWORD *)(v20 + 8) = 0x5200000001LL;
  result = a1[4];
  if ( a1[5] < (unsigned __int64)(result + 1) )
  {
    v23 = qvector_reserve();
    a1[3] = v23;
    v19 = v23;
    result = a1[4];
  }
  *(_QWORD *)(v19 + 8 * result) = v20;
  ++a1[4];
  *(_DWORD *)(v20 + 16) = v15;
  *(_DWORD *)(v20 + 20) = v13 - v15;
  return result;
}

