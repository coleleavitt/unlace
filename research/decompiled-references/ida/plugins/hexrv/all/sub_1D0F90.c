__int64 __fastcall sub_1D0F90(__int64 a1)
{
  unsigned int v1; // r13d
  int *v4; // rdi
  unsigned int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  signed int v8; // eax
  __int64 v9; // r12
  int v10; // eax
  int v11; // edx
  __int64 v12; // rax
  int *v13; // rdi
  unsigned int v14; // eax
  unsigned __int64 v15; // rdi
  int flags; // eax
  __int64 v17; // r12
  unsigned int *v18; // rax
  __int64 v19; // r14
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rax
  int v23; // ebp
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rdx
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // rdi
  int v33; // eax

  LOBYTE(v1) = *(_DWORD *)(a1 + 76) == 1 || *(_DWORD *)(a1 + 76) == 6;
  if ( (_BYTE)v1 || (*(_BYTE *)(a1 + 25) & 0x60) != 0 )
    return 1;
  v4 = *(int **)(a1 + 56);
  if ( v4 )
  {
    v5 = *v4;
    if ( (unsigned int)*v4 > 0x39 )
    {
      if ( v5 == 58 )
        return 1;
    }
    else if ( v5 > 0x37 )
    {
      if ( (unsigned __int8)sub_118290(v4, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), 0) )
        return 1;
    }
    else if ( v5 - 53 <= 2 )
    {
      return 1;
    }
  }
  v6 = *(_QWORD *)(a1 + 64);
  v7 = *(_DWORD *)(a1 + 72) + 1;
  v8 = *(_DWORD *)(v6 + 64);
  if ( (int)v7 < v8 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v7 >= v8 )
          sub_1CF090();
        v9 = *(_QWORD *)(*(_QWORD *)(v6 + 528) + 8LL * v7);
        v10 = *(_DWORD *)(v9 + 76);
        if ( v10 == 1 || (v11 = *(_DWORD *)(v9 + 24), (v11 & 2) == 0) || (v11 & 8) != 0 || v10 == 6 )
        {
LABEL_23:
          v15 = *(_QWORD *)(a1 + 40);
          if ( v9 )
          {
            if ( *(_DWORD *)(v9 + 76) != 1 )
              goto LABEL_51;
            if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 1496LL) + 24LL) + 24LL) == 8 )
            {
              if ( v15 != -1 )
                goto LABEL_27;
            }
            else if ( !HIDWORD(v15) )
            {
              goto LABEL_27;
            }
LABEL_29:
            v17 = *(_QWORD *)(v9 + 16);
            goto LABEL_30;
          }
          v6 = *(_QWORD *)(a1 + 64);
LABEL_42:
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 1496) + 24LL) + 24LL) == 8 )
          {
            if ( v15 == -1 )
              goto LABEL_44;
          }
          else if ( HIDWORD(v15) )
          {
            goto LABEL_44;
          }
          v9 = 0;
          goto LABEL_27;
        }
        v12 = *(_QWORD *)(a1 + 56);
        if ( v12 && *(_QWORD *)(v9 + 32) == *(_QWORD *)(v12 + 24) )
          return 1;
        v13 = *(int **)(v9 + 56);
        if ( v13 )
          break;
LABEL_22:
        v8 = *(_DWORD *)(v6 + 64);
        if ( (int)++v7 >= v8 )
          goto LABEL_23;
      }
      v14 = *v13;
      if ( (unsigned int)*v13 <= 0x39 )
      {
        if ( v14 <= 0x37 )
        {
          if ( v14 - 53 <= 2 )
            goto LABEL_41;
        }
        else
        {
          if ( (unsigned __int8)sub_118290(v13, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), 0) )
            goto LABEL_23;
          v6 = *(_QWORD *)(a1 + 64);
        }
        goto LABEL_22;
      }
      if ( v14 == 58 )
      {
LABEL_41:
        v15 = *(_QWORD *)(a1 + 40);
        if ( !v9 )
          goto LABEL_42;
LABEL_51:
        v25 = *(_QWORD *)(v9 + 32);
        if ( v25 != v15 )
        {
          v26 = *(_QWORD *)(a1 + 56);
          if ( !v26 || v25 != *(_QWORD *)(v26 + 24) )
          {
            v27 = 0x100000000LL;
            if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 1496LL) + 24LL) + 24LL) == 8 )
              v27 = -1;
            if ( v15 >= v27 )
              goto LABEL_28;
LABEL_27:
            flags = get_flags_ex();
            if ( (~(_WORD)flags & 0x600) != 0 || (flags & 0x10000000) == 0 )
            {
LABEL_28:
              if ( !v9 )
                goto LABEL_44;
              goto LABEL_29;
            }
          }
        }
        return 1;
      }
      v8 = *(_DWORD *)(v6 + 64);
      if ( (int)++v7 >= v8 )
        goto LABEL_23;
    }
  }
  v32 = *(_QWORD *)(a1 + 40);
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 1496) + 24LL) + 24LL) == 8 )
  {
    if ( v32 == -1 )
      goto LABEL_44;
  }
  else if ( HIDWORD(v32) )
  {
    goto LABEL_44;
  }
  v33 = get_flags_ex();
  if ( (~(_WORD)v33 & 0x600) == 0 && (v33 & 0x10000000) != 0 )
    return 1;
LABEL_44:
  v17 = a1;
LABEL_30:
  v18 = *(unsigned int **)(v17 + 56);
  if ( v18 )
  {
    v19 = *((_QWORD *)v18 + 3);
    if ( (unsigned __int8)sub_329A80(*v18, 1) )
    {
      v28 = sub_64C40(*(_QWORD *)(a1 + 64), *(_DWORD *)(v17 + 72) + 1);
      *(_DWORD *)(v28 + 24) |= 2u;
      v17 = v28;
      if ( *(_DWORD *)(a1 + 76) )
        *(_DWORD *)(v28 + 76) = 3;
    }
  }
  else
  {
    v19 = *(_QWORD *)(v17 + 32);
  }
  v20 = (__int64)sub_62D30(*(_QWORD *)(a1 + 64), *(_QWORD *)(a1 + 40));
  if ( v20 || (v20 = sub_64C50(*(_QWORD *)(a1 + 64), v19, *(_QWORD *)(a1 + 40), 1)) != 0 )
  {
    sub_B0E00((_QWORD *)v17, v19, *(_DWORD *)(v20 + 72));
    if ( *(_DWORD *)(v17 + 76) )
    {
      sub_66E00(v17);
      v21 = *(_QWORD *)(v17 + 376);
      *(_DWORD *)(v17 + 76) = 3;
      if ( v21 )
      {
        if ( v21 != 1 )
          *(_QWORD *)(v17 + 376) = 1;
      }
      else
      {
        v29 = *(_QWORD *)(v17 + 368);
        if ( !*(_QWORD *)(v17 + 384) )
        {
          v31 = qvector_reserve();
          v21 = *(_QWORD *)(v17 + 376);
          *(_QWORD *)(v17 + 368) = v31;
          v29 = v31;
        }
        memset((void *)(v29 + 4 * v21), 0, 4 * (1 - v21));
        *(_QWORD *)(v17 + 376) = 1;
      }
      **(_DWORD **)(v17 + 368) = *(_DWORD *)(v20 + 72);
      v22 = *(_QWORD *)(v20 + 352);
      v23 = *(_DWORD *)(v17 + 72);
      v24 = *(_QWORD *)(v20 + 344);
      if ( *(_QWORD *)(v20 + 360) < (unsigned __int64)(v22 + 1) )
      {
        v30 = qvector_reserve();
        *(_QWORD *)(v20 + 344) = v30;
        v24 = v30;
        v22 = *(_QWORD *)(v20 + 352);
      }
      *(_DWORD *)(v24 + 4 * v22) = v23;
      ++*(_QWORD *)(v20 + 352);
    }
    return 1;
  }
  return v1;
}

