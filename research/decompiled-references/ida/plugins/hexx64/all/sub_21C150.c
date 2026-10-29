_QWORD *__fastcall sub_21C150(_QWORD *a1, const void *a2, int a3, int a4)
{
  __int64 v5; // rbp
  __int64 v7; // rbx
  __int64 v8; // r12
  __int64 v9; // r12
  __int64 v10; // rbp
  _QWORD *v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v15; // rdi
  __int64 v16; // r12
  __int64 v17; // rbp
  _QWORD *v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // [rsp+0h] [rbp-48h] BYREF
  __int128 v22; // [rsp+8h] [rbp-40h]
  unsigned __int64 v23; // [rsp+18h] [rbp-30h]

  v5 = a4;
  v23 = __readfsqword(0x28u);
  if ( (get_tinfo_property() & 0x2F) == 0xD )
  {
    v22 = 0;
    v21 = 0;
    sub_3349B0((__int64)&v21, a2, a3, nullptr, 3);
    v7 = v21;
    v8 = v21 + ((_QWORD)v22 << 6);
    if ( v8 == v21 )
    {
      if ( v21 )
      {
LABEL_4:
        v9 = v22;
        if ( (_QWORD)v22 )
        {
          v10 = 0;
          do
          {
            v11 = (_QWORD *)((v10 << 6) + v7);
            clear_tinfo_t();
            v12 = v11[4];
            if ( v12 )
            {
              v11[5] = 0;
              qfree(v12);
            }
            v13 = v11[1];
            if ( v13 )
            {
              v11[2] = 0;
              qfree(v13);
            }
            ++v10;
            v7 = v21;
          }
          while ( v9 != v10 );
        }
        *(_QWORD *)&v22 = 0;
        qfree(v7);
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
          v15 = v21;
          if ( v21 )
          {
            v16 = v22;
            if ( (_QWORD)v22 )
            {
              v17 = 0;
              do
              {
                v18 = (_QWORD *)(v15 + (v17 << 6));
                clear_tinfo_t();
                v19 = v18[4];
                if ( v19 )
                {
                  v18[5] = 0;
                  qfree(v19);
                }
                v20 = v18[1];
                if ( v20 )
                {
                  v18[2] = 0;
                  qfree(v20);
                }
                ++v17;
                v15 = v21;
              }
              while ( v16 != v17 );
            }
            *(_QWORD *)&v22 = 0;
            qfree(v15);
          }
          return a1;
        }
        v7 += 64;
      }
      while ( v7 != v8 );
      v7 = v21;
      if ( v21 )
        goto LABEL_4;
    }
  }
  *a1 = 0;
  return a1;
}

