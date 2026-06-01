unsigned __int64 __fastcall sub_1CAA80(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v4; // rsi
  unsigned __int64 v5; // rax
  _DWORD *v6; // rbp
  unsigned __int64 v7; // rbp
  unsigned __int64 v9; // rbx
  _DWORD *v10; // rbp
  _QWORD v11[2]; // [rsp+0h] [rbp-78h] BYREF
  int v12; // [rsp+10h] [rbp-68h]
  int v13; // [rsp+20h] [rbp-58h]
  int v14; // [rsp+30h] [rbp-48h]
  unsigned __int64 v15; // [rsp+38h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 != a2 )
  {
    v11[0] = 0;
    v11[1] = 0;
    v12 = 0xFFFF;
    if ( a2 < v2 )
    {
      v7 = a2;
      do
      {
        ++v7;
        cleanup_argloc();
      }
      while ( v2 != v7 );
    }
    else
    {
      v4 = *a1;
      v5 = a1[2];
      if ( (unsigned __int64)v11 >= *a1 && (unsigned __int64)v11 < v4 + 24 * v5 )
      {
        v13 = 0;
        copy_argloc();
        v14 = v12;
        if ( a1[2] < a2 )
          *a1 = qvector_reserve((__int64)a1, *a1, a2, 24);
        v9 = a1[1];
        if ( v9 < a2 )
        {
          do
          {
            v10 = (_DWORD *)(*a1 + 24 * v9);
            *v10 = 0;
            copy_argloc();
            ++v9;
            v10[4] = v14;
          }
          while ( a2 != v9 );
        }
        a1[1] = a2;
        cleanup_argloc();
        goto LABEL_12;
      }
      if ( v5 < a2 )
      {
        *a1 = qvector_reserve((__int64)a1, v4, a2, 24);
        v2 = a1[1];
      }
      for ( ; v2 < a2; v6[4] = v12 )
      {
        v6 = (_DWORD *)(*a1 + 24 * v2);
        *v6 = 0;
        copy_argloc();
        ++v2;
      }
    }
    a1[1] = a2;
LABEL_12:
    cleanup_argloc();
  }
  return v15 - __readfsqword(0x28u);
}

