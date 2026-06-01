__int64 __fastcall sub_124EC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  __int64 v7; // rbp
  __int64 v9; // rax
  unsigned __int64 *v11[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v12; // [rsp+10h] [rbp-48h]
  __int128 v13; // [rsp+18h] [rbp-40h]
  unsigned __int64 v14; // [rsp+28h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v5 = a2;
  if ( a2 == a4 )
  {
    LODWORD(v5) = 1;
  }
  else
  {
    v7 = a4;
    if ( v5 )
    {
      if ( a4 )
      {
        v9 = *(_QWORD *)(a4 + 8);
        if ( v9 )
        {
          while ( v5 != v9 )
          {
            v9 = *(_QWORD *)(v9 + 8);
            if ( !v9 )
              goto LABEL_7;
          }
          v5 = a4;
          a5 = a3;
          v7 = v9;
        }
      }
    }
LABEL_7:
    v13 = 0;
    v11[0] = nullptr;
    v11[1] = nullptr;
    v12 = 0;
    sub_123EA0(a1, (__int64 *)v11, a5, 1, 0xFFFF0000, 0.0);
    LOBYTE(v5) = sub_A9AA0(a1, v11, v5, v7, 1u) == 0;
    if ( v12 )
    {
      *(_QWORD *)&v13 = 0;
      qfree(v12);
    }
    qfree((__int64)v11[0]);
  }
  return (unsigned int)v5;
}

