__int64 __fastcall sub_1A280(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v10; // rax
  unsigned __int64 v11; // r15
  __int64 v12; // rax
  unsigned __int64 v13; // rdi
  __int64 v14; // [rsp+0h] [rbp-48h]
  __int64 v15; // [rsp+8h] [rbp-40h]

  v7 = sub_13410(a1, 9);
  v8 = v7;
  if ( v7 )
  {
    if ( a4 )
      sub_13520(a1, a2, 9, v7, 1);
    v15 = sub_1A130(a1, a2 + 4, a3);
    if ( v15 != -1 )
    {
      v10 = sub_13410(a1, 10);
      if ( v10 )
      {
        v11 = v10 + v15;
        v12 = getseg(v10 + v15);
        v14 = v12;
        if ( v12 )
        {
          while ( v11 < *(_QWORD *)(v12 + 8) )
          {
            v13 = v11++;
            if ( !(unsigned __int8)get_byte(v13) )
              break;
            v12 = v14;
          }
        }
        if ( a4 )
          sub_13520(a1, v15, 10, v11 - v15, 1);
      }
    }
    sub_1A130(a1, a2 + 12, a3);
    nullsub_2();
  }
  return v8;
}
