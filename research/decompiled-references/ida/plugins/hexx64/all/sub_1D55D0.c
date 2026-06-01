__int64 __fastcall sub_1D55D0(__int64 a1, double a2)
{
  unsigned int v2; // r13d
  int *v5; // rdi
  unsigned int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  signed int v9; // eax
  __int64 v10; // r12
  int v11; // eax
  int v12; // edx
  __int64 v13; // rax
  int *v14; // rdi
  unsigned int v15; // eax
  unsigned __int64 v16; // rdi
  int flags; // eax
  __int64 v18; // r12
  __int64 v19; // rax
  unsigned __int64 v20; // r14
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rax
  int v27; // ebp
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rdx
  unsigned __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned __int64 v36; // rdi
  int v37; // eax

  LOBYTE(v2) = *(_DWORD *)(a1 + 76) == 1 || *(_DWORD *)(a1 + 76) == 6;
  if ( (_BYTE)v2 || (*(_BYTE *)(a1 + 25) & 0x60) != 0 )
    return 1;
  v5 = *(int **)(a1 + 56);
  if ( v5 )
  {
    v6 = *v5;
    if ( (unsigned int)*v5 > 0x39 )
    {
      if ( v6 == 58 )
        return 1;
    }
    else if ( v6 > 0x37 )
    {
      if ( (unsigned __int8)sub_11C750(v5, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), 0) )
        return 1;
    }
    else if ( v6 - 53 <= 2 )
    {
      return 1;
    }
  }
  v7 = *(_QWORD *)(a1 + 64);
  v8 = *(_DWORD *)(a1 + 72) + 1;
  v9 = *(_DWORD *)(v7 + 64);
  if ( (int)v8 < v9 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v8 >= v9 )
          sub_1D36D0(a2);
        v10 = *(_QWORD *)(*(_QWORD *)(v7 + 528) + 8LL * v8);
        v11 = *(_DWORD *)(v10 + 76);
        if ( v11 == 1 || (v12 = *(_DWORD *)(v10 + 24), (v12 & 2) == 0) || (v12 & 8) != 0 || v11 == 6 )
        {
LABEL_23:
          v16 = *(_QWORD *)(a1 + 40);
          if ( v10 )
          {
            if ( *(_DWORD *)(v10 + 76) != 1 )
              goto LABEL_51;
            if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 1496LL) + 24LL) + 24LL) == 8 )
            {
              if ( v16 != -1 )
                goto LABEL_27;
            }
            else if ( !HIDWORD(v16) )
            {
              goto LABEL_27;
            }
LABEL_29:
            v18 = *(_QWORD *)(v10 + 16);
            goto LABEL_30;
          }
          v7 = *(_QWORD *)(a1 + 64);
LABEL_42:
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 1496) + 24LL) + 24LL) == 8 )
          {
            if ( v16 == -1 )
              goto LABEL_44;
          }
          else if ( HIDWORD(v16) )
          {
            goto LABEL_44;
          }
          v10 = 0;
          goto LABEL_27;
        }
        v13 = *(_QWORD *)(a1 + 56);
        if ( v13 && *(_QWORD *)(v10 + 32) == *(_QWORD *)(v13 + 24) )
          return 1;
        v14 = *(int **)(v10 + 56);
        if ( v14 )
          break;
LABEL_22:
        v9 = *(_DWORD *)(v7 + 64);
        if ( (int)++v8 >= v9 )
          goto LABEL_23;
      }
      v15 = *v14;
      if ( (unsigned int)*v14 <= 0x39 )
      {
        if ( v15 <= 0x37 )
        {
          if ( v15 - 53 <= 2 )
            goto LABEL_41;
        }
        else
        {
          if ( (unsigned __int8)sub_11C750(v14, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), 0) )
            goto LABEL_23;
          v7 = *(_QWORD *)(a1 + 64);
        }
        goto LABEL_22;
      }
      if ( v15 == 58 )
      {
LABEL_41:
        v16 = *(_QWORD *)(a1 + 40);
        if ( !v10 )
          goto LABEL_42;
LABEL_51:
        v29 = *(_QWORD *)(v10 + 32);
        if ( v29 != v16 )
        {
          v30 = *(_QWORD *)(a1 + 56);
          if ( !v30 || v29 != *(_QWORD *)(v30 + 24) )
          {
            v31 = 0x100000000LL;
            if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 1496LL) + 24LL) + 24LL) == 8 )
              v31 = -1;
            if ( v16 >= v31 )
              goto LABEL_28;
LABEL_27:
            flags = get_flags_ex();
            if ( (~(_WORD)flags & 0x600) != 0 || (flags & 0x10000000) == 0 )
            {
LABEL_28:
              if ( !v10 )
                goto LABEL_44;
              goto LABEL_29;
            }
          }
        }
        return 1;
      }
      v9 = *(_DWORD *)(v7 + 64);
      if ( (int)++v8 >= v9 )
        goto LABEL_23;
    }
  }
  v36 = *(_QWORD *)(a1 + 40);
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 1496) + 24LL) + 24LL) == 8 )
  {
    if ( v36 == -1 )
      goto LABEL_44;
  }
  else if ( HIDWORD(v36) )
  {
    goto LABEL_44;
  }
  v37 = get_flags_ex();
  if ( (~(_WORD)v37 & 0x600) == 0 && (v37 & 0x10000000) != 0 )
    return 1;
LABEL_44:
  v18 = a1;
LABEL_30:
  v19 = *(_QWORD *)(v18 + 56);
  if ( v19 )
  {
    v20 = *(_QWORD *)(v19 + 24);
    if ( sub_32ED40(*(_DWORD *)v19, 1) )
    {
      v32 = sub_68FC0(*(_QWORD *)(a1 + 64), *(_DWORD *)(v18 + 72) + 1, v21, v22, a2);
      *(_DWORD *)(v32 + 24) |= 2u;
      v18 = v32;
      if ( *(_DWORD *)(a1 + 76) )
        *(_DWORD *)(v32 + 76) = 3;
    }
  }
  else
  {
    v20 = *(_QWORD *)(v18 + 32);
  }
  v24 = (__int64)sub_670B0(*(_QWORD *)(a1 + 64), *(_QWORD *)(a1 + 40));
  if ( v24 || (v24 = sub_68FD0(*(_QWORD *)(a1 + 64), v20, *(_QWORD *)(a1 + 40), 1, a2)) != 0 )
  {
    sub_B52C0((_QWORD *)v18, v20, *(unsigned int *)(v24 + 72), v23, a2);
    if ( *(_DWORD *)(v18 + 76) )
    {
      sub_6B180(v18, a2);
      v25 = *(_QWORD *)(v18 + 376);
      *(_DWORD *)(v18 + 76) = 3;
      if ( v25 )
      {
        if ( v25 != 1 )
          *(_QWORD *)(v18 + 376) = 1;
      }
      else
      {
        v33 = *(_QWORD *)(v18 + 368);
        if ( !*(_QWORD *)(v18 + 384) )
        {
          v35 = qvector_reserve(v18 + 368, v33, 1, 4);
          v25 = *(_QWORD *)(v18 + 376);
          *(_QWORD *)(v18 + 368) = v35;
          v33 = v35;
        }
        memset((void *)(v33 + 4 * v25), 0, 4 * (1 - v25));
        *(_QWORD *)(v18 + 376) = 1;
      }
      **(_DWORD **)(v18 + 368) = *(_DWORD *)(v24 + 72);
      v26 = *(_QWORD *)(v24 + 352);
      v27 = *(_DWORD *)(v18 + 72);
      v28 = *(_QWORD *)(v24 + 344);
      if ( *(_QWORD *)(v24 + 360) < (unsigned __int64)(v26 + 1) )
      {
        v34 = qvector_reserve(v24 + 344, v28, v26 + 1, 4);
        *(_QWORD *)(v24 + 344) = v34;
        v28 = v34;
        v26 = *(_QWORD *)(v24 + 352);
      }
      *(_DWORD *)(v28 + 4 * v26) = v27;
      ++*(_QWORD *)(v24 + 352);
    }
    return 1;
  }
  return v2;
}

