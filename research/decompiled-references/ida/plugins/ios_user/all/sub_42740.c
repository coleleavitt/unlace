unsigned __int64 __fastcall sub_42740(__int64 *a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rsi
  __int64 v5; // rcx
  _DWORD *v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  char v14; // [rsp+7h] [rbp-21h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-20h]

  v1 = *a1;
  v2 = a1[5];
  v15 = __readfsqword(0x28u);
  v14 = 0;
  v3 = *(_QWORD *)(v1 + 8);
  if ( v3 >= v2 )
  {
    if ( v2 < v3 )
    {
      v9 = a1[4];
      v10 = a1[6];
      if ( (unsigned __int64)&v14 < v9 || (unsigned __int64)&v14 >= v9 + v10 )
      {
        if ( v10 >= v3 || (v13 = qvector_reserve(), v2 = a1[5], a1[4] = v13, v9 = v13, v2 < v3) )
        {
          while ( 1 )
          {
            *(_BYTE *)(v9 + v2++) = v14;
            if ( v3 == v2 )
              break;
            v9 = a1[4];
          }
        }
      }
      else if ( v10 >= v3 || (v12 = qvector_reserve(), v2 = a1[5], a1[4] = v12, v9 = v12, v2 < v3) )
      {
        while ( 1 )
        {
          *(_BYTE *)(v9 + v2++) = 0;
          if ( v3 == v2 )
            break;
          v9 = a1[4];
        }
      }
      v4 = a1[2];
      v1 = *a1;
      a1[5] = v3;
      goto LABEL_4;
    }
  }
  else
  {
    a1[5] = v3;
  }
  v4 = a1[2];
  if ( !v3 )
  {
LABEL_9:
    if ( v4 != v3 )
      a1[2] = v3;
    return v15 - __readfsqword(0x28u);
  }
LABEL_4:
  v5 = 3 * v3;
  v6 = *(_DWORD **)v1;
  v3 = 0;
  v7 = *(_QWORD *)v1 + 16 * v5;
  do
  {
    if ( v3 < *v6 + v6[1] )
      v3 = *v6 + v6[1];
    v6 += 12;
  }
  while ( (_DWORD *)v7 != v6 );
  if ( v4 >= v3 )
    goto LABEL_9;
  v11 = a1[1];
  if ( a1[3] < v3 )
  {
    v11 = qvector_reserve();
    v4 = a1[2];
    a1[1] = v11;
  }
  memset((void *)(v11 + v4), 0, v3 - v4);
  a1[2] = v3;
  return v15 - __readfsqword(0x28u);
}

