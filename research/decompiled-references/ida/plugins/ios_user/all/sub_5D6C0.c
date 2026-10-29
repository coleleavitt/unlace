bool __fastcall sub_5D6C0(__int64 a1, __int64 a2, _BYTE *a3, unsigned __int64 a4)
{
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  __int64 v8; // rbx
  unsigned __int64 i; // r15
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  bool result; // al
  bool v15; // [rsp+0h] [rbp-60h]
  __int64 v16; // [rsp+8h] [rbp-58h] BYREF
  __int128 v17; // [rsp+10h] [rbp-50h]
  unsigned __int64 v18; // [rsp+20h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  v17 = 0;
  v16 = 0;
  v5 = nbits();
  v6 = v5 + 14;
  v7 = v5 + 7;
  if ( v7 >= 0 )
    v6 = v7;
  v8 = a2 * (v6 >> 3);
  if ( a4 )
  {
    while ( 1 )
    {
      for ( i = a4; ; i = v11 )
      {
        sub_15620(&v16);
        v12 = qword_8F6A8;
        if ( qword_8F6A8 <= 0 )
        {
          v12 = *(_QWORD *)(a1 + 200);
          if ( v12 <= 0 )
          {
            v12 = *(_QWORD *)(a1 + 192);
            if ( v12 < 399 )
              v12 = 399;
          }
        }
        v10 = v12 - (((_QWORD)v17 == 0) + (_QWORD)v17 - 1LL);
        v11 = v10 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v10 & 0xFFFFFFFFFFFFFFFELL) >= i )
        {
          v11 = v10 >> 1;
          if ( v10 >> 1 >= i )
            break;
        }
      }
      sub_58A80(&v16, a3, i);
      result = sub_5B360(a1, &v16);
      if ( !result )
        break;
      a3 += i;
      v8 += i;
      a4 -= i;
      if ( !a4 )
        goto LABEL_15;
    }
  }
  else
  {
LABEL_15:
    result = 1;
  }
  if ( v16 )
  {
    v15 = result;
    *(_QWORD *)&v17 = 0;
    qfree();
    return v15;
  }
  return result;
}

