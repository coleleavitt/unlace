__int64 __fastcall sub_2A8310(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6, __m128 a7)
{
  int v7; // r12d
  __int64 result; // rax
  __int64 v10; // r13
  __int64 v11; // rax
  int v12; // r14d
  int v13; // esi
  __int64 v14; // rax

  v7 = a3;
  result = sub_2A62C0(a2, *(_QWORD *)(a1 + 8), a3, a4, a5, a6, a7);
  if ( *(_DWORD *)a2 != 6 )
    goto LABEL_2;
  v14 = *(_QWORD *)(a2 + 8);
  if ( *(_DWORD *)(v14 + 8) == 61 )
  {
    result = sub_255A30(*(__int64 **)(v14 + 24));
    if ( !result )
      return result;
LABEL_2:
    v10 = a2 + 16;
    if ( *(_DWORD *)(a2 + 16) != 6 )
    {
LABEL_3:
      if ( *(_DWORD *)a2 == 1 && *(_DWORD *)(a2 + 16) == 1 )
        return result;
      goto LABEL_5;
    }
LABEL_19:
    result = *(_QWORD *)(a2 + 24);
    if ( *(_DWORD *)(result + 8) == 61 )
    {
      result = sub_255A30(*(__int64 **)(result + 24));
      if ( !result )
        return result;
    }
    goto LABEL_3;
  }
  v10 = a2 + 16;
  if ( *(_DWORD *)(a2 + 16) == 6 )
    goto LABEL_19;
LABEL_5:
  result = sub_29E6F0(a2, v10, *(double *)a7.m128_u64);
  if ( (_DWORD)result )
  {
    if ( *(_DWORD *)a2 != 6 )
      goto LABEL_12;
    v11 = *(_QWORD *)(a2 + 8);
    v12 = 0;
    if ( *(_DWORD *)(v11 + 8) != 65 )
      goto LABEL_12;
    while ( 1 )
    {
      v13 = *(_DWORD *)(v11 + 32);
      if ( *(_DWORD *)(a2 + 32) != 3 && v13 != -1 )
      {
        result = sub_2A7AB0(a1, v13, (unsigned int *)a2, v12, v7, a7);
        if ( (_BYTE)result )
          break;
      }
      if ( v12 == 1 )
        return sub_2A77F0(a1, (unsigned int *)a2, v7, *(double *)a7.m128_u64);
LABEL_12:
      if ( *(_DWORD *)v10 == 6 )
      {
        v11 = *(_QWORD *)(v10 + 8);
        v12 = 1;
        if ( *(_DWORD *)(v11 + 8) == 65 )
          continue;
      }
      return sub_2A77F0(a1, (unsigned int *)a2, v7, *(double *)a7.m128_u64);
    }
  }
  return result;
}

