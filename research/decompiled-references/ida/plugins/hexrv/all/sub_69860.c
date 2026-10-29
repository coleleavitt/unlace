__int64 __fastcall sub_69860(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rax
  int v4; // eax
  unsigned __int64 v5; // rbx
  __int64 v7; // rax
  int v8; // eax
  unsigned __int64 v9; // rdx
  __int64 v10; // rsi
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14[2]; // [rsp+0h] [rbp-48h] BYREF
  int v15; // [rsp+10h] [rbp-38h]
  __int64 *v16; // [rsp+18h] [rbp-30h]
  unsigned __int64 v17; // [rsp+28h] [rbp-20h]

  v2 = *a1;
  v17 = __readfsqword(0x28u);
  v4 = (*(__int64 (__fastcall **)(__int64 *))(v2 + 56))(a1);
  v5 = v4;
  if ( v4 )
  {
    if ( *a2 )
    {
      a2[1] = 0;
      qfree();
      *a2 = 0;
      a2[2] = 0;
    }
    if ( a2[3] )
    {
      a2[4] = 0;
      qfree();
      a2[3] = 0;
      a2[5] = 0;
    }
    if ( (v5 & 0x80000000) != 0LL )
      goto LABEL_8;
    v9 = a2[1];
    LODWORD(v14[0]) = -1;
    if ( v5 >= v9 )
    {
      if ( v9 >= v5 )
      {
LABEL_8:
        v7 = *a1;
        v16 = a2;
        v14[0] = 0;
        v14[1] = 0;
        v15 = 0;
        v8 = (*(__int64 (__fastcall **)(__int64 *))(v7 + 80))(a1);
        sub_68740(v14, (__int64)a1, v8, (__int64)v14);
        LODWORD(v5) = v15;
        qfree();
        return (unsigned int)v5;
      }
      v10 = *a2;
      v11 = a2[2];
      if ( (unsigned __int64)v14 < *a2 || (unsigned __int64)v14 >= v10 + 4 * v11 )
      {
        if ( v11 >= v5 || (v12 = qvector_reserve(), v9 = a2[1], *a2 = v12, v10 = v12, v9 < v5) )
        {
          while ( 1 )
          {
            *(_DWORD *)(v10 + 4 * v9++) = -1;
            if ( v5 == v9 )
              break;
            v10 = *a2;
          }
        }
      }
      else if ( v11 >= v5 || (v13 = qvector_reserve(), v9 = a2[1], *a2 = v13, v10 = v13, v9 < v5) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v10 + 4 * v9++) = -1;
          if ( v5 == v9 )
            break;
          v10 = *a2;
        }
      }
    }
    a2[1] = v5;
    goto LABEL_8;
  }
  return (unsigned int)v5;
}

