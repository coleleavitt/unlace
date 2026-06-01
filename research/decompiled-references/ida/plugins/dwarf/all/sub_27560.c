__int64 __fastcall sub_27560(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  _QWORD *v4; // rax
  unsigned __int64 v5; // rsi
  __int64 v6; // rdi
  int v7; // edx
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v13; // [rsp+0h] [rbp-38h] BYREF
  __int128 v14; // [rsp+8h] [rbp-30h]
  unsigned __int64 v15; // [rsp+18h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  v13 = 0;
  v14 = 0;
  sub_1B6C0((__int64)&v13, a2);
  v4 = sub_27450(a1 + 16, (__int64)&v13);
  if ( v4 != (_QWORD *)(a1 + 24) )
  {
    v5 = v4[8];
    if ( v5 )
    {
      v6 = v4[7];
      v7 = 0;
      v8 = 0;
      v9 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v10 = v6 + 24 * v9;
          v11 = *(_QWORD *)(v10 + 16);
          if ( a3 >= v11 )
            break;
LABEL_6:
          v9 = ++v7;
          if ( v7 >= v5 )
            goto LABEL_10;
        }
        if ( v8 )
        {
          if ( *(_QWORD *)(v8 + 16) < v11 )
            v8 = v10;
          goto LABEL_6;
        }
        ++v7;
        v8 = v10;
        v9 = v7;
        if ( v7 >= v5 )
          goto LABEL_10;
      }
    }
  }
  v8 = 0;
LABEL_10:
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v13);
  }
  return v8;
}

