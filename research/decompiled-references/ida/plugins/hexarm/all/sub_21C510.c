_QWORD *__fastcall sub_21C510(_QWORD *a1, int a2, int a3, int a4)
{
  __int64 v5; // rbp
  int v7; // r9d
  __int64 v8; // rbx
  __int64 v9; // r12
  __int64 v10; // r12
  __int64 v11; // rbp
  _QWORD *v12; // rbx
  __int64 v14; // rdi
  __int64 v15; // r12
  __int64 v16; // rbp
  _QWORD *v17; // rbx
  __int64 v18; // [rsp+0h] [rbp-48h] BYREF
  __int128 v19; // [rsp+8h] [rbp-40h]
  unsigned __int64 v20; // [rsp+18h] [rbp-30h]

  v5 = a4;
  v20 = __readfsqword(0x28u);
  if ( (get_tinfo_property() & 0x2F) == 0xD )
  {
    v19 = 0;
    v18 = 0;
    sub_334B10((unsigned int)&v18, a2, a3, 0, 3, v7);
    v8 = v18;
    v9 = v18 + ((_QWORD)v19 << 6);
    if ( v9 == v18 )
    {
      if ( v18 )
      {
LABEL_4:
        v10 = v19;
        if ( (_QWORD)v19 )
        {
          v11 = 0;
          do
          {
            v12 = (_QWORD *)((v11 << 6) + v8);
            clear_tinfo_t();
            if ( v12[4] )
            {
              v12[5] = 0;
              qfree();
            }
            if ( v12[1] )
            {
              v12[2] = 0;
              qfree();
            }
            ++v11;
            v8 = v18;
          }
          while ( v10 != v11 );
        }
        *(_QWORD *)&v19 = 0;
        qfree();
      }
    }
    else
    {
      do
      {
        if ( v5 == get_tinfo_size() && ((get_tinfo_property() & 0x2F) == 0xD || (get_tinfo_property() & 0xF) == 9) )
        {
          *a1 = 0;
          copy_tinfo_t();
          v14 = v18;
          if ( v18 )
          {
            v15 = v19;
            if ( (_QWORD)v19 )
            {
              v16 = 0;
              do
              {
                v17 = (_QWORD *)(v14 + (v16 << 6));
                clear_tinfo_t();
                if ( v17[4] )
                {
                  v17[5] = 0;
                  qfree();
                }
                if ( v17[1] )
                {
                  v17[2] = 0;
                  qfree();
                }
                ++v16;
                v14 = v18;
              }
              while ( v15 != v16 );
            }
            *(_QWORD *)&v19 = 0;
            qfree();
          }
          return a1;
        }
        v8 += 64;
      }
      while ( v8 != v9 );
      v8 = v18;
      if ( v18 )
        goto LABEL_4;
    }
  }
  *a1 = 0;
  return a1;
}

