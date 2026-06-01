__int64 __fastcall sub_19A80(__int64 a1, int a2, double a3, double a4)
{
  __int64 result; // rax
  __int64 v6; // r13
  unsigned __int64 v7; // r13
  __int64 v8; // rdx
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // r12
  __int64 i; // rbp
  unsigned __int64 v14; // r14
  __int64 v15; // rdi
  unsigned __int64 v16; // r15
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rbp
  __int64 v20; // rdi
  unsigned int dword; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax

  result = *(_QWORD *)(a1 + 16);
  if ( result == -1 )
    return result;
  v6 = *(_QWORD *)(a1 + 40);
  if ( !v6 )
    return result;
  v7 = *(_QWORD *)(a1 + 32) * v6;
  if ( !v7 )
    return result;
  *(_DWORD *)(a1 + 72) = a2;
  result = sub_17230(*(_QWORD *)(a1 + 8), result, v7);
  if ( !(_BYTE)result )
    return result;
  if ( (get_flags_ex(*(_QWORD *)(a1 + 16), 4, v8) & 0xC000) != 0x4000 && (unsigned int)getinf(5) != 10 )
    set_name(*(_QWORD *)(a1 + 16), "ExceptionDir", 257);
  v9 = *(_QWORD *)(a1 + 16) + v7;
  result = getinf(5);
  v10 = *(_QWORD *)(a1 + 16);
  if ( (_DWORD)result != 10 )
  {
    if ( v10 >= v9 )
      goto LABEL_66;
    result = *(_QWORD *)(a1 + 40);
    while ( 1 )
    {
      v11 = v9 - result;
      if ( (unsigned __int8)sub_17230(*(_QWORD *)(a1 + 8), v9 - result, 1u) )
      {
        result = get_dword(v11);
        if ( (_DWORD)result )
          break;
      }
      result = *(_QWORD *)(a1 + 40);
      v10 = *(_QWORD *)(a1 + 16);
      v9 -= result;
      if ( v10 >= v9 )
        goto LABEL_66;
    }
    v10 = *(_QWORD *)(a1 + 16);
    if ( v10 >= v9 )
      goto LABEL_66;
    while ( 1 )
    {
      result = sub_17230(*(_QWORD *)(a1 + 8), v10, 1u);
      if ( (_BYTE)result )
      {
        result = get_dword(v10);
        if ( (_DWORD)result )
          break;
      }
      v10 = *(_QWORD *)(a1 + 16) + *(_QWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 16) = v10;
      if ( v10 >= v9 )
        goto LABEL_66;
    }
    v10 = *(_QWORD *)(a1 + 16);
  }
  if ( v10 < v9 )
  {
    v12 = v9;
    for ( i = -1; ; i = v12 )
    {
      *(_DWORD *)(a1 + 76) = 0;
      v12 -= *(_QWORD *)(a1 + 40);
      result = sub_197F0(a1, v12, a3, a4);
      if ( !(_BYTE)result )
        return result;
      if ( i != -1 )
      {
        result = *(unsigned int *)(a1 + 48);
        if ( v12 == i )
        {
          if ( (_DWORD)result == 3 )
            return result;
        }
        else
        {
          result = (unsigned int)(result - 1);
          if ( (unsigned int)result > 3 )
            goto LABEL_39;
          v14 = 0;
          if ( !(unsigned __int8)sub_17230(*(_QWORD *)(a1 + 8), v12, 1u)
            || (dword = get_dword(v12), v14 = dword, dword <= 1) )
          {
            if ( !(unsigned __int8)get_fixups(0, v12, 4) )
              goto LABEL_57;
          }
          v15 = *(_QWORD *)(a1 + 8);
          if ( (*(_BYTE *)(v15 + 124) & 2) != 0 )
            v14 += *(_QWORD *)(a1 + 24);
          if ( !(unsigned __int8)sub_17230(v15, v14, 1u) )
LABEL_57:
            v14 = -1;
          v16 = 0;
          if ( !(unsigned __int8)sub_17230(*(_QWORD *)(a1 + 8), i, 1u) || (v22 = get_dword(i), v16 = v22, v22 <= 1) )
          {
            result = get_fixups(0, i, 4);
            if ( !(_BYTE)result )
              goto LABEL_42;
          }
          v17 = *(_QWORD *)(a1 + 8);
          if ( (*(_BYTE *)(v17 + 124) & 2) != 0 )
            v16 += *(_QWORD *)(a1 + 24);
          result = sub_17230(v17, v16, 1u);
          if ( (_BYTE)result )
          {
            if ( v16 != v14 )
              goto LABEL_38;
          }
          else
          {
LABEL_42:
            if ( v14 != -1 )
              goto LABEL_39;
          }
          if ( *(_DWORD *)(a1 + 48) != 3 )
            goto LABEL_39;
          v14 = 0;
          if ( !(unsigned __int8)sub_17230(*(_QWORD *)(a1 + 8), v12 + 4, 1u)
            || (v23 = get_dword(v12 + 4), v14 = v23, v23 <= 1) )
          {
            if ( !(unsigned __int8)get_fixups(0, v12 + 4, 4) )
              goto LABEL_71;
          }
          v18 = *(_QWORD *)(a1 + 8);
          if ( (*(_BYTE *)(v18 + 124) & 2) != 0 )
            v14 += *(_QWORD *)(a1 + 24);
          if ( !(unsigned __int8)sub_17230(v18, v14 - 1, 1u) )
LABEL_71:
            v14 = -1;
          v19 = i + 4;
          v16 = 0;
          if ( !(unsigned __int8)sub_17230(*(_QWORD *)(a1 + 8), v19, 1u) || (v24 = get_dword(v19), v16 = v24, v24 <= 1) )
          {
            result = get_fixups(0, v19, 4);
            if ( !(_BYTE)result )
              goto LABEL_72;
          }
          v20 = *(_QWORD *)(a1 + 8);
          if ( (*(_BYTE *)(v20 + 124) & 2) != 0 )
            v16 += *(_QWORD *)(a1 + 24);
          result = sub_17230(v20, v16 - 1, 1u);
          if ( (_BYTE)result )
          {
            if ( v16 != v14 )
            {
LABEL_38:
              if ( v14 >= v16 )
                return result;
              goto LABEL_39;
            }
          }
          else
          {
LABEL_72:
            if ( v14 != -1 )
              goto LABEL_39;
          }
          if ( *(_DWORD *)(a1 + 48) == 3 )
            return result;
        }
      }
LABEL_39:
      v10 = *(_QWORD *)(a1 + 16);
      if ( v10 >= v12 )
        break;
    }
  }
LABEL_66:
  *(_DWORD *)(a1 + 76) = 1;
  while ( v10 < v9 )
  {
    v9 -= *(_QWORD *)(a1 + 40);
    result = sub_197F0(a1, v9, a3, a4);
    if ( !(_BYTE)result )
      break;
    v10 = *(_QWORD *)(a1 + 16);
  }
  return result;
}
