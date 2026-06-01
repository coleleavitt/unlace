unsigned __int64 __fastcall sub_32EE0(__int64 a1, _DWORD *a2, char a3)
{
  int v4; // esi
  unsigned __int64 result; // rax
  _DWORD *v6; // rcx
  int v7; // eax
  int v8; // eax
  unsigned __int64 v9; // rcx
  __int64 v10; // r13
  __int64 v11; // r12

  v4 = *(_DWORD *)(a1 + 16);
  if ( !*(_BYTE *)(a1 + 20) )
  {
    result = *(unsigned int *)(a1 + 40);
    v6 = (_DWORD *)(a1 + 40);
    if ( (_DWORD)result == v4 )
      goto LABEL_20;
    if ( !a2 )
      goto LABEL_13;
    if ( a3 )
    {
LABEL_9:
      if ( *(_DWORD *)a1 == 3 )
      {
        v7 = *(_DWORD *)(a1 + 44) + 44;
      }
      else if ( *(_DWORD *)a1 )
      {
        v7 = *(_DWORD *)(a1 + 40) + 44;
      }
      else
      {
        v7 = 46;
        if ( !*(_DWORD *)(a1 + 40) )
          v7 = 44;
      }
      goto LABEL_12;
    }
LABEL_18:
    v7 = *(_DWORD *)(a1 + 40) + 4;
LABEL_12:
    *a2 = 3;
    a2[2] = v7;
    result = (unsigned int)*v6;
    goto LABEL_13;
  }
  if ( !a3 )
  {
    v8 = *(_DWORD *)(a1 + 40);
    if ( v8 == v4 )
      goto LABEL_20;
    v6 = (_DWORD *)(a1 + 40);
    if ( !a2 )
    {
      result = (unsigned int)(v8 + 1);
      *(_DWORD *)(a1 + 40) = result;
      return result;
    }
    goto LABEL_18;
  }
  result = *(unsigned int *)(a1 + 44);
  v6 = (_DWORD *)(a1 + 44);
  if ( (_DWORD)result != v4 )
  {
    if ( !a2 )
    {
LABEL_13:
      *v6 = result + 1;
      if ( *(_DWORD *)a1 == 3 )
      {
        if ( a3 )
        {
          result = (unsigned int)(result + 2);
          *v6 = result;
        }
      }
      return result;
    }
    goto LABEL_9;
  }
LABEL_20:
  v9 = *(_QWORD *)(a1 + 8);
  v10 = (int)v9;
  if ( a2 )
  {
    v11 = *(_QWORD *)(a1 + 48) * v9;
    cleanup_argloc(a2);
    *a2 = 1;
    *((_QWORD *)a2 + 1) = v11;
    v9 = *(_QWORD *)(a1 + 8);
  }
  result = (v9 + v10 - 1) / v9;
  *(_QWORD *)(a1 + 48) += result;
  return result;
}

