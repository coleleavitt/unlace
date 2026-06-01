unsigned __int64 __fastcall sub_D14C0(_QWORD *a1, unsigned int a2)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rdx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v16; // [rsp+8h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  sub_D0DC0((__int64)a1, a2);
  v15 = -1;
  v2 = a1[2];
  v3 = a1[24];
  if ( v2 >= v3 )
  {
    if ( v3 >= v2 )
      goto LABEL_3;
    v9 = a1[23];
    v10 = a1[25];
    if ( (unsigned __int64)&v15 < v9 || (unsigned __int64)&v15 >= v9 + 4 * v10 )
    {
      if ( v10 >= v2 || (v13 = qvector_reserve(), v3 = a1[24], a1[23] = v13, v9 = v13, v3 < v2) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v9 + 4 * v3++) = -1;
          if ( v2 == v3 )
            break;
          v9 = a1[23];
        }
      }
    }
    else if ( v10 >= v2 || (v12 = qvector_reserve(), v3 = a1[24], a1[23] = v12, v9 = v12, v3 < v2) )
    {
      while ( 1 )
      {
        *(_DWORD *)(v9 + 4 * v3++) = -1;
        if ( v2 == v3 )
          break;
        v9 = a1[23];
      }
    }
  }
  a1[24] = v2;
LABEL_3:
  v4 = a1[5];
  v5 = a1[27];
  v15 = -1;
  if ( v4 < v5 )
  {
LABEL_11:
    a1[27] = v4;
    return v16 - __readfsqword(0x28u);
  }
  if ( v5 < v4 )
  {
    v7 = a1[26];
    v8 = a1[28];
    if ( (unsigned __int64)&v15 < v7 || (unsigned __int64)&v15 >= v7 + 4 * v8 )
    {
      if ( v8 >= v4 || (v14 = qvector_reserve(), v5 = a1[27], a1[26] = v14, v7 = v14, v5 < v4) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v7 + 4 * v5++) = -1;
          if ( v4 == v5 )
            break;
          v7 = a1[26];
        }
      }
    }
    else if ( v8 >= v4 || (v11 = qvector_reserve(), v5 = a1[27], a1[26] = v11, v7 = v11, v5 < v4) )
    {
      while ( 1 )
      {
        *(_DWORD *)(v7 + 4 * v5++) = -1;
        if ( v4 == v5 )
          break;
        v7 = a1[26];
      }
    }
    goto LABEL_11;
  }
  return v16 - __readfsqword(0x28u);
}

