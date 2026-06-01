_BOOL8 __fastcall sub_114F0(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // rdi
  char v3; // al
  __int64 v4; // rbp
  __int64 v5; // r12
  __int64 v6; // rdi
  __int64 *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r14
  __int64 i; // r15
  __int64 v12; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  bool v16; // [rsp+Fh] [rbp-69h]
  _QWORD v17[2]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v18; // [rsp+20h] [rbp-58h] BYREF
  __int128 v19; // [rsp+28h] [rbp-50h]
  unsigned __int64 v20; // [rsp+38h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  if ( a1 == -1 )
    return 0;
  v17[0] = a1;
  v17[1] = a1 + 2;
  v18 = 0;
  v19 = 0;
  get_tryblks(&v18, v17);
  v1 = v19;
  v2 = v18;
  if ( (_QWORD)v19 )
  {
    v3 = *(_BYTE *)(v18 + 97);
    v16 = v3 == 1;
    if ( v18 )
    {
      v4 = 0;
      v5 = 0;
      while ( 1 )
      {
        v7 = (__int64 *)(v2 + v4);
        if ( v3 == 2 )
        {
          v8 = v7[3];
          if ( v8 )
          {
            v9 = v7[4];
            if ( v9 )
            {
              v10 = 0;
              for ( i = 0; i != v9; ++i )
              {
                v12 = *(_QWORD *)(v8 + v10);
                if ( v12 )
                {
                  *(_QWORD *)(v8 + v10 + 8) = 0;
                  qfree(v12);
                  v8 = v7[3];
                }
                v10 += 56;
              }
            }
            v7[4] = 0;
            qfree(v8);
          }
        }
        else if ( v3 == 1 )
        {
          v14 = v7[8];
          if ( v14 )
          {
            v7[9] = 0;
            qfree(v14);
          }
          v15 = v7[3];
          if ( v15 )
          {
            v7[4] = 0;
            qfree(v15);
          }
        }
        v6 = *v7;
        *((_BYTE *)v7 + 97) = 0;
        if ( v6 )
        {
          v7[1] = 0;
          qfree(v6);
        }
        ++v5;
        v2 = v18;
        v4 += 104;
        if ( v1 == v5 )
          break;
        v3 = *(_BYTE *)(v18 + v4 + 97);
      }
      goto LABEL_19;
    }
  }
  else
  {
    v16 = 0;
    if ( v18 )
    {
LABEL_19:
      *(_QWORD *)&v19 = 0;
      qfree(v2);
    }
  }
  return v16;
}

