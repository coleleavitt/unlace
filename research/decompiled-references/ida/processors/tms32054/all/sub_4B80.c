__int64 __fastcall sub_4B80(__int64 a1, unsigned __int8 a2, int a3)
{
  __int64 result; // rax
  char v4; // bl
  char v5; // r14
  int v6; // edx
  int v7; // r15d
  int v8; // ebx
  int v9; // edx
  int v10; // r13d
  unsigned __int8 v11; // bp
  unsigned __int8 v12; // si
  unsigned __int8 v13; // r14
  unsigned __int8 v14; // r13

  result = (a3 >> 6) & 3;
  v4 = a3;
  if ( (_DWORD)result == 1 )
  {
    v10 = a3 & 0x30;
    if ( (a3 & 7) != 0 )
    {
      sub_4AE0(a1, a2++, a3 & 0xCF);
      v11 = 2;
      if ( !v10 )
      {
        result = *(unsigned __int16 *)(a1 + 24);
        if ( (_WORD)result )
          goto LABEL_9;
        return result;
      }
    }
    else
    {
      if ( (a3 & 0x30) == 0 )
      {
        if ( *(_WORD *)(a1 + 24) )
          goto LABEL_15;
        return result;
      }
      v11 = 1;
    }
    sub_4AE0(a1, a2, v4 & 0xF8);
    result = *(unsigned __int16 *)(a1 + 24);
    v9 = v11;
    if ( (_WORD)result )
      goto LABEL_16;
    return result;
  }
  if ( (_DWORD)result )
  {
    result = 0;
    *(_WORD *)(a1 + 24) = 0;
    return result;
  }
  v5 = 0;
  v6 = a3 & 0x30;
  if ( v6 )
  {
    v5 = 1;
    sub_4AE0(a1, a2, v6);
  }
  v7 = v4 & 3;
  v8 = v4 & 0xC;
  if ( v8 )
  {
    v14 = v5 + 1;
    sub_4AE0(a1, (unsigned __int8)(v5 + a2), v8);
    if ( !v7 )
    {
      result = *(unsigned __int16 *)(a1 + 24);
      v9 = v14;
      if ( (_WORD)result )
        goto LABEL_16;
      return result;
    }
    v13 = v5 + 2;
    sub_4AE0(a1, (unsigned __int8)(v14 + a2), v7);
    result = *(unsigned __int16 *)(a1 + 24);
    if ( !(_WORD)result )
      return result;
    if ( a2 + v13 == 5 )
    {
      result = (unsigned int)(result + 1);
      *(_WORD *)(a1 + 24) = result;
      return result;
    }
LABEL_21:
    v9 = v13;
    goto LABEL_16;
  }
  if ( v7 )
  {
    v12 = v5 + a2;
    v13 = v5 + 1;
    sub_4AE0(a1, v12, v7);
    result = *(unsigned __int16 *)(a1 + 24);
    if ( !(_WORD)result )
      return result;
    goto LABEL_21;
  }
  result = *(unsigned __int16 *)(a1 + 24);
  if ( (_WORD)result )
  {
    if ( v5 )
    {
LABEL_9:
      v9 = 1;
LABEL_16:
      result = (unsigned int)(result + v9 - 1);
      *(_WORD *)(a1 + 24) = result;
      return result;
    }
LABEL_15:
    sub_4AE0(a1, a2, 0);
    LODWORD(result) = *(unsigned __int16 *)(a1 + 24);
    v9 = 1;
    goto LABEL_16;
  }
  return result;
}

