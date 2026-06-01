__int64 __fastcall sub_29F20(const char **a1, __int64 a2, _DWORD *a3)
{
  const char *v3; // rbx
  char v4; // al
  const char *v6; // rdx
  char *v7; // rdx
  __int64 v8; // r14
  __int64 result; // rax
  int v10; // edx
  unsigned int v11; // r14d
  const char *v12; // rax
  _QWORD *v13; // rsi
  char s1[24]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-40h]

  v3 = *a1;
  v4 = **a1;
  v15 = __readfsqword(0x28u);
  if ( v4 == 32 )
  {
    v6 = v3 + 1;
    do
    {
      *a1 = v6;
      v3 = v6;
      v4 = *v6++;
    }
    while ( v4 == 32 );
  }
  v7 = s1;
  if ( !v4 )
    return 0;
  while ( v4 != 58 )
  {
    if ( (unsigned __int64)(v7 - s1) <= 0x12 )
    {
      ++v3;
      ++v7;
      *a1 = v3;
      *(v7 - 1) = *(v3 - 1);
      v4 = *v3;
      if ( *v3 )
        continue;
    }
    return 0;
  }
  *v7 = 0;
  v8 = 0;
  *a1 = v3 + 1;
  while ( strcmp(s1, off_719E0[v8]) )
  {
    if ( ++v8 == 17 )
      return 0;
  }
  v10 = v8;
  v11 = 1 << v8;
  v12 = v3 + 2;
  if ( v3[1] == 32 )
  {
    do
      *a1 = v12++;
    while ( *(v12 - 1) == 32 );
  }
  if ( v10 == 8 )
  {
    v13 = (_QWORD *)(a2 + 68);
  }
  else
  {
    if ( v11 <= 0x100 )
    {
      switch ( v11 )
      {
        case 0u:
        case 3u:
        case 5u:
        case 6u:
        case 7u:
        case 9u:
        case 0xAu:
        case 0xBu:
        case 0xCu:
        case 0xDu:
        case 0xEu:
        case 0xFu:
        case 0x11u:
        case 0x12u:
        case 0x13u:
        case 0x14u:
        case 0x15u:
        case 0x16u:
        case 0x17u:
        case 0x18u:
        case 0x19u:
        case 0x1Au:
        case 0x1Bu:
        case 0x1Cu:
        case 0x1Du:
        case 0x1Eu:
        case 0x1Fu:
          return 0;
        case 1u:
          v13 = (_QWORD *)(a2 + 4);
          goto LABEL_28;
        case 2u:
          v13 = (_QWORD *)(a2 + 28);
          goto LABEL_28;
        case 4u:
          v13 = (_QWORD *)(a2 + 12);
          goto LABEL_28;
        case 8u:
          v13 = (_QWORD *)(a2 + 20);
          goto LABEL_28;
        case 0x10u:
          v13 = (_QWORD *)(a2 + 36);
          goto LABEL_28;
        case 0x20u:
          v13 = (_QWORD *)(a2 + 44);
          goto LABEL_28;
        default:
          if ( v10 == 6 )
          {
            v13 = (_QWORD *)(a2 + 52);
            goto LABEL_28;
          }
          v13 = (_QWORD *)(a2 + 60);
          if ( v10 == 7 )
            goto LABEL_28;
          break;
      }
      return 0;
    }
    if ( v10 == 13 )
    {
      v13 = (_QWORD *)(a2 + 108);
    }
    else if ( v11 > 0x2000 )
    {
      if ( v10 == 15 )
      {
        v13 = (_QWORD *)(a2 + 124);
      }
      else if ( v10 == 16 )
      {
        v13 = (_QWORD *)(a2 + 132);
      }
      else
      {
        v13 = (_QWORD *)(a2 + 116);
        if ( v10 != 14 )
          return 0;
      }
    }
    else if ( v10 == 11 )
    {
      v13 = (_QWORD *)(a2 + 92);
    }
    else if ( v11 > 0x800 )
    {
      v13 = (_QWORD *)(a2 + 100);
      if ( v10 != 12 )
        return 0;
    }
    else if ( v10 == 9 )
    {
      v13 = (_QWORD *)(a2 + 76);
    }
    else
    {
      v13 = (_QWORD *)(a2 + 84);
      if ( v10 != 10 )
        return 0;
    }
  }
LABEL_28:
  result = sub_29CC0(a1, v13, 8u);
  if ( !(_BYTE)result )
    return 0;
  *a3 |= v11;
  return result;
}

