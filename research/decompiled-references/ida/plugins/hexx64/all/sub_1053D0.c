unsigned __int64 __fastcall sub_1053D0(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3, double a4)
{
  unsigned __int64 v4; // rbx
  __int64 v7; // rsi
  unsigned __int64 v8; // rax
  unsigned __int64 v10; // rbx
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r14
  unsigned __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17[2]; // [rsp+0h] [rbp-48h] BYREF
  int v18; // [rsp+10h] [rbp-38h]
  unsigned __int64 v19; // [rsp+18h] [rbp-30h]

  v4 = a1[1];
  v19 = __readfsqword(0x28u);
  if ( a2 < v4 )
  {
    v15 = a2;
    do
    {
      v16 = 3 * v15++;
      qfree(*(_QWORD *)(*a1 + 8 * v16));
    }
    while ( v4 != v15 );
    a1[1] = a2;
  }
  else if ( v4 < a2 )
  {
    v7 = *a1;
    v8 = a1[2];
    if ( a3 < *a1 || a3 >= v7 + 24 * v8 )
    {
      if ( v8 >= a2 || (v12 = qvector_reserve((__int64)a1, v7, a2, 24), v4 = a1[1], *a1 = v12, v7 = v12, v4 < a2) )
      {
        while ( 1 )
        {
          v13 = 3 * v4++;
          v14 = v7 + 8 * v13;
          sub_64000((__int64 *)v14, a3, a4);
          *(_DWORD *)(v14 + 16) = *(_DWORD *)(a3 + 16);
          if ( v4 >= a2 )
            break;
          v7 = *a1;
        }
        a1[1] = a2;
      }
      else
      {
        a1[1] = a2;
      }
    }
    else
    {
      sub_64000(v17, a3, a4);
      v18 = *(_DWORD *)(a3 + 16);
      if ( a1[2] < a2 )
        *a1 = qvector_reserve((__int64)a1, *a1, a2, 24);
      v10 = a1[1];
      if ( v10 < a2 )
      {
        do
        {
          v11 = *a1 + 24 * v10;
          sub_64000((__int64 *)v11, (__int64)v17, a4);
          ++v10;
          *(_DWORD *)(v11 + 16) = v18;
        }
        while ( a2 != v10 );
      }
      a1[1] = a2;
      qfree(v17[0]);
    }
  }
  return v19 - __readfsqword(0x28u);
}

