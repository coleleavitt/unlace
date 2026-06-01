__int64 __fastcall sub_E3E20(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v8; // rax
  int v9; // edx
  __int64 v11; // rax
  __int64 result; // rax
  char *v13; // rax
  char *v14; // r15
  __int64 not_tail; // r14
  char v16; // r12
  int i; // r15d
  const void *v18; // rbp
  size_t v19; // rax
  size_t v20; // rbx
  void *v21; // rdi
  size_t v22; // r12
  __int64 v23; // rax
  _QWORD v24[9]; // [rsp+0h] [rbp-48h] BYREF

  v8 = a1[2];
  v9 = *(_DWORD *)(a4 + 4);
  v24[1] = __readfsqword(0x28u);
  v11 = *(_QWORD *)(v8 + 112);
  if ( v9 != *(_DWORD *)(v11 + 80) && v9 != *(_DWORD *)(v11 + 84) )
    return 0;
  v13 = sub_E31E0(*a1, a3, (char *)a4);
  v14 = v13;
  if ( *v13 == 3 )
  {
    v18 = *((const void **)v13 + 1);
    if ( v18 && (v19 = strlen(*((const char **)v13 + 1)), (v20 = v19) != 0) )
    {
      v21 = *(void **)a2;
      v22 = v19 + 1;
      if ( *(_QWORD *)(a2 + 16) < v19 + 1 )
      {
        v23 = qvector_reserve();
        *(_QWORD *)a2 = v23;
        v21 = (void *)v23;
      }
      *(_QWORD *)(a2 + 8) = v22;
      memmove(v21, v18, v20);
      *(_BYTE *)(*(_QWORD *)a2 + v20) = 0;
    }
    else
    {
      *(_QWORD *)(a2 + 8) = 0;
    }
    return 1;
  }
  else
  {
    if ( !(unsigned __int8)sub_155720(v13, a1[2], v24) )
      return 0;
    not_tail = v24[0];
    if ( *(_DWORD *)(a4 + 4) < *((_DWORD *)v14 + 1) )
    {
      not_tail = sub_325C90(v24[0], *(unsigned int *)(*(_QWORD *)(a1[2] + 112) + 84LL), 0);
      if ( v24[0] != not_tail )
        return 0;
    }
    if ( (get_flags_ex() & 0x600) == 0x200 )
      not_tail = prev_not_tail();
    v16 = a5 ^ 1;
    for ( i = 2; ; i = 1 )
    {
      result = sub_25D370(*(_QWORD *)(a1[2] + 112), a2, not_tail, v24[0] - not_tail, 0, 5);
      if ( (_DWORD)result || v16 )
        break;
      get_tinfo_property();
      if ( !(unsigned __int8)sub_E3B60() || i == 1 )
        return 0;
    }
    if ( (unsigned int)(result - 1) > 1 && (_DWORD)result != 4 )
      return 0;
  }
  return result;
}

