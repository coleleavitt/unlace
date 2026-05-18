unsigned __int64 __fastcall sub_177BC0(__int64 *a1, unsigned __int64 a2, unsigned __int8 *a3)
{
  unsigned __int64 v4; // r13
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 v9; // r12
  __int64 v10; // rdi
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // r12
  __int64 v15; // rdi
  unsigned __int8 v16[8]; // [rsp+0h] [rbp-58h] BYREF
  __int128 v17; // [rsp+8h] [rbp-50h]
  __int64 v18; // [rsp+18h] [rbp-40h]
  unsigned __int64 v19; // [rsp+28h] [rbp-30h]

  v4 = a1[1];
  v19 = __readfsqword(0x28u);
  if ( a2 < v4 )
  {
    v14 = a2;
    do
    {
      v15 = v14++;
      sub_176520(*a1 + 32 * v15);
    }
    while ( v4 != v14 );
    a1[1] = a2;
  }
  else if ( v4 < a2 )
  {
    v6 = *a1;
    v7 = a1[2];
    if ( (unsigned __int64)a3 < v6 || (unsigned __int64)a3 >= v6 + 32 * v7 )
    {
      if ( v7 >= a2 || (v11 = sub_1987B0(a1, v6, a2, 32), v4 = a1[1], *a1 = v11, v6 = v11, v4 < a2) )
      {
        while ( 1 )
        {
          v12 = v4++;
          v13 = 32 * v12 + v6;
          *(_BYTE *)v13 = 2;
          *(_QWORD *)(v13 + 24) = 0;
          *(_OWORD *)(v13 + 8) = 0;
          sub_176730((unsigned __int8 *)v13, a3);
          if ( v4 >= a2 )
            break;
          v6 = *a1;
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
      v16[0] = 2;
      v18 = 0;
      v17 = 0;
      sub_176730(v16, a3);
      if ( a1[2] < a2 )
        *a1 = sub_1987B0(a1, *a1, a2, 32);
      v9 = a1[1];
      if ( v9 < a2 )
      {
        do
        {
          v10 = *a1 + 32 * v9;
          *(_BYTE *)v10 = 2;
          *(_QWORD *)(v10 + 24) = 0;
          *(_OWORD *)(v10 + 8) = 0;
          sub_176730((unsigned __int8 *)v10, v16);
          ++v9;
        }
        while ( a2 != v9 );
      }
      a1[1] = a2;
      sub_176520((__int64)v16);
    }
  }
  return v19 - __readfsqword(0x28u);
}
