__int64 __fastcall sub_1C870(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 *v2; // rax
  unsigned __int64 *v3; // rdx
  unsigned __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // [rsp+0h] [rbp-28h]

  v2 = *(unsigned __int64 **)(a1 + 528);
  v3 = &v2[4 * *(_QWORD *)(a1 + 536)];
  if ( v2 == v3 )
    return -1;
  while ( 1 )
  {
    v4 = *v2;
    if ( a2 >= *v2 && v2[1] >= a2 - v4 )
      break;
    v2 += 4;
    if ( v3 == v2 )
      return -1;
  }
  v5 = a2 - v4 + v2[2];
  if ( v5 == -1 || qlseek() != v5 )
    return -1;
  if ( *(_BYTE *)(a1 + 773) )
  {
    v7 = qlread();
    result = -1;
    if ( v7 == 8 )
      return v9;
  }
  else
  {
    v8 = qlread();
    result = -1;
    if ( v8 == 4 )
      return (unsigned int)v9;
  }
  return result;
}

