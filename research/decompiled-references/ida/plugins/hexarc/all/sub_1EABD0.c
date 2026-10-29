__int64 __fastcall sub_1EABD0(__int64 *a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  __int64 v5; // rdi
  __int64 v7; // rbx
  __int64 v8; // r12
  unsigned int v9; // ebx
  __int64 v11[2]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v12; // [rsp+10h] [rbp-58h]
  __int128 v13; // [rsp+18h] [rbp-50h]
  unsigned __int64 v14; // [rsp+28h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  if ( a1[8] )
  {
    v5 = *a1;
    v11[0] = 0;
    v11[1] = 0;
    v12 = 0;
    v13 = 0;
    sub_121920(v5, v11, a3, 0);
    v7 = a1[7];
    v8 = v7 + 96 * a1[8];
    if ( v7 == v8 )
    {
LABEL_11:
      v9 = -1;
    }
    else
    {
      while ( !(unsigned __int8)sub_1EA780(v7, a1, a2, v11, a4) )
      {
        v7 += 96;
        if ( v8 == v7 )
          goto LABEL_11;
      }
      v9 = *(_DWORD *)(v7 + 80);
    }
    if ( v12 )
    {
      *(_QWORD *)&v13 = 0;
      qfree();
    }
    qfree();
  }
  else
  {
    return (unsigned int)-1;
  }
  return v9;
}

