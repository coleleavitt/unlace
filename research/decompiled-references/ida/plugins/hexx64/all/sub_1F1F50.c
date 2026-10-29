__int64 __fastcall sub_1F1F50(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        int a5,
        int a6,
        double a7,
        __m128 a8)
{
  __int64 v9; // rdi
  __int64 v11; // rbx
  __int64 v12; // r12
  unsigned int v13; // ebx
  unsigned __int64 *v15[2]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v16; // [rsp+10h] [rbp-58h]
  __int128 v17; // [rsp+18h] [rbp-50h]
  unsigned __int64 v18; // [rsp+28h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  if ( a1[8] )
  {
    v9 = *a1;
    v15[0] = nullptr;
    v15[1] = nullptr;
    v16 = 0;
    v17 = 0;
    sub_127FE0(v9, (__int64 *)v15, a3, 0, a5, a6, 0.0, a8);
    v11 = a1[7];
    v12 = v11 + 96 * a1[8];
    if ( v11 == v12 )
    {
LABEL_11:
      v13 = -1;
    }
    else
    {
      while ( !(unsigned __int8)sub_1F1B00(v11, a1, a2, v15, a4, 0.0) )
      {
        v11 += 96;
        if ( v12 == v11 )
          goto LABEL_11;
      }
      v13 = *(_DWORD *)(v11 + 80);
    }
    if ( v16 )
    {
      *(_QWORD *)&v17 = 0;
      qfree(v16);
    }
    qfree((__int64)v15[0]);
  }
  else
  {
    return (unsigned int)-1;
  }
  return v13;
}

