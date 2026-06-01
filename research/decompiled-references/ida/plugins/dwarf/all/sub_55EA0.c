__int64 __fastcall sub_55EA0(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rsi
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  __int64 result; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rdi
  unsigned int v11; // eax
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // r15
  __int64 v15; // rdi
  __int64 v16; // r13
  __int64 (*v17)(); // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 (*v21)(); // rax

  while ( 1 )
  {
    v4 = (_QWORD *)a1[2];
    v5 = a1[3];
    v6 = &v4[v5];
    if ( v4 != v6 )
    {
      v7 = (_QWORD *)a1[2];
      while ( *v7 != a2 )
      {
        if ( v6 == ++v7 )
          goto LABEL_8;
      }
      if ( v7 != v6 )
        return 0;
    }
LABEL_8:
    v9 = v5 + 1;
    if ( a1[4] < v9 )
    {
      v18 = qvector_reserve(a1 + 2, v4, v9, 8);
      v19 = a1[3];
      a1[2] = v18;
      v6 = (_QWORD *)(v18 + 8 * v19);
    }
    *v6 = a2;
    v10 = a1[1];
    ++a1[3];
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 24LL))(v10, a2);
    if ( (_DWORD)result )
      return result;
    v11 = *(_DWORD *)(a2 + 272);
    if ( v11 != 1 )
      break;
    v20 = a1[1];
    v21 = *(__int64 (**)())(*(_QWORD *)v20 + 16LL);
    if ( v21 != sub_52E40 )
    {
      result = ((__int64 (__fastcall *)(__int64, __int64))v21)(v20, a2 + 392);
      if ( (_DWORD)result )
        return result;
    }
    if ( *(_DWORD *)(a2 + 392) != 1 )
      return 0;
    a2 = *(_QWORD *)(a2 + 400);
  }
  if ( v11 <= 1 )
    return 0;
  if ( v11 - 2 > 1 )
  {
    if ( under_debugger )
      BUG();
    interr(728);
    return sub_56050(728, a2);
  }
  v12 = *(_QWORD *)(a2 + 392);
  if ( (int)v12 <= 0 )
    return 0;
  v13 = 0;
  v14 = 104 * ((unsigned int)(v12 - 1) + 1LL);
  while ( 1 )
  {
    v15 = a1[1];
    v16 = v13 + *(_QWORD *)(a2 + 384);
    v17 = *(__int64 (**)())(*(_QWORD *)v15 + 16LL);
    if ( v17 != sub_52E40 )
    {
      result = ((__int64 (__fastcall *)(__int64, __int64))v17)(v15, v16 + 48);
      if ( (_DWORD)result )
        break;
    }
    if ( *(_DWORD *)(v16 + 48) == 1 )
    {
      if ( *(_QWORD *)(v16 + 56) )
      {
        result = sub_55EA0(a1);
        if ( (_DWORD)result )
          break;
      }
    }
    v13 += 104;
    if ( v13 == v14 )
      return 0;
  }
  return result;
}

