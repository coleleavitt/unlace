unsigned __int64 __fastcall sub_7C2C0(_QWORD *a1, __int64 *a2)
{
  int v3; // r14d
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 **v6; // rbp
  __int64 v7; // rax
  __int64 *v8; // rax
  __int64 v9; // rbp
  __int64 *v10; // r15
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int128 v13; // rt0
  char v15[8]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  sub_7B4E0(a2);
  if ( a1[4] )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      v5 = pack_dd();
      sub_7B360(a2, (__int64)v15, v5 - (_QWORD)v15);
      v6 = (__int64 **)(*a1 + 24 * v4);
      v7 = pack_dd();
      sub_7B360(a2, (__int64)v15, v7 - (_QWORD)v15);
      v8 = *v6;
      v9 = (__int64)&(*v6)[(_QWORD)v6[1]];
      if ( v8 != (__int64 *)v9 )
      {
        v10 = v8;
        do
        {
          v11 = *v10;
          v12 = -*v10;
          if ( *v10 > 0 )
            v12 = *v10;
          ++v10;
          *(_QWORD *)&v13 = v11;
          *((_QWORD *)&v13 + 1) = v12;
          sub_7B540(a2, v13 >> 63);
        }
        while ( (__int64 *)v9 != v10 );
      }
      v4 = ++v3;
    }
    while ( (unsigned __int64)v3 < a1[4] );
  }
  return v16 - __readfsqword(0x28u);
}

