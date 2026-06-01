__int64 __fastcall sub_47A80(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rdx
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rbx
  unsigned int v6; // ebp
  __int64 (__fastcall *hexdsp)(__int64, __int64, _QWORD); // rax

  v2 = *(unsigned int **)(a2 + 16);
  result = *v2;
  if ( (_DWORD)result == 4 )
  {
    v4 = 0;
    goto LABEL_10;
  }
  if ( (unsigned int)result > 4 )
  {
    v4 = 0;
    if ( (_DWORD)result == 5 )
      goto LABEL_5;
    return result;
  }
  v4 = 56;
  if ( !(_DWORD)result )
  {
LABEL_10:
    v5 = a1 + 400;
    goto LABEL_6;
  }
  if ( (_DWORD)result == 1 )
  {
LABEL_5:
    v5 = a1 + 416;
LABEL_6:
    v6 = *(_DWORD *)(*((_QWORD *)v2 + 1) + v4 + 8);
    hexdsp = (__int64 (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(a1, a2);
    return hexdsp(205, v5, v6);
  }
  return result;
}

