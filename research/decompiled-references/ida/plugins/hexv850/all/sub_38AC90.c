__int64 __fastcall sub_38AC90(__int64 a1, __int64 *a2, char a3)
{
  __int64 v3; // rbx
  __int64 v5; // rbp
  char v6; // al
  __int64 v7; // rdi
  __int64 v8; // r12
  __int64 v9; // r14
  _QWORD *v10; // r15
  __int64 v12; // rdi
  __int64 v13; // r12
  __int64 v14; // r14
  _QWORD *v15; // r15
  __int64 v16; // r12
  __int64 v17; // rbp
  _QWORD *v18; // rbx
  unsigned __int8 v19; // [rsp+7h] [rbp-81h]
  __int64 v21; // [rsp+10h] [rbp-78h] BYREF
  __int128 v22; // [rsp+18h] [rbp-70h]
  __int128 v23; // [rsp+28h] [rbp-60h]
  __int64 v24; // [rsp+38h] [rbp-50h]
  int v25; // [rsp+40h] [rbp-48h]
  unsigned __int64 v26; // [rsp+48h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  v19 = *((_BYTE *)a2 + 51);
  if ( v19 )
    return 1;
  v3 = *a2;
  v5 = *a2 + 144 * a2[1];
  if ( v5 != *a2 )
  {
    do
    {
      if ( (get_tinfo_property() & 0x2F) == 0xD )
      {
        if ( !a3 )
          return 1;
        v25 = 1;
        v21 = 0;
        v24 = 0;
        v22 = 0;
        v23 = 0;
        if ( !(unsigned __int8)get_tinfo_details() )
        {
          v12 = v21;
          if ( !v21 )
            goto LABEL_16;
          v13 = v22;
          if ( (_QWORD)v22 )
          {
            v14 = 0;
            do
            {
              v15 = (_QWORD *)(v12 + 144 * v14);
              clear_tinfo_t();
              if ( v15[5] )
              {
                v15[6] = 0;
                qfree();
              }
              if ( v15[2] )
              {
                v15[3] = 0;
                qfree();
              }
              ++v14;
              v12 = v21;
            }
            while ( v13 != v14 );
          }
          goto LABEL_15;
        }
        v6 = sub_38AC90(a1, &v21, 1);
        v7 = v21;
        if ( v6 )
        {
          if ( v21 )
          {
            v16 = v22;
            if ( (_QWORD)v22 )
            {
              v17 = 0;
              do
              {
                v18 = (_QWORD *)(v7 + 144 * v17);
                clear_tinfo_t();
                if ( v18[5] )
                {
                  v18[6] = 0;
                  qfree();
                }
                if ( v18[2] )
                {
                  v18[3] = 0;
                  qfree();
                }
                ++v17;
                v7 = v21;
              }
              while ( v16 != v17 );
            }
            *(_QWORD *)&v22 = 0;
            qfree();
          }
          return 1;
        }
        if ( v21 )
        {
          v8 = v22;
          if ( (_QWORD)v22 )
          {
            v9 = 0;
            do
            {
              v10 = (_QWORD *)(v7 + 144 * v9);
              clear_tinfo_t();
              if ( v10[5] )
              {
                v10[6] = 0;
                qfree();
              }
              if ( v10[2] )
              {
                v10[3] = 0;
                qfree();
              }
              ++v9;
              v7 = v21;
            }
            while ( v8 != v9 );
          }
LABEL_15:
          *(_QWORD *)&v22 = 0;
          qfree();
        }
      }
LABEL_16:
      v3 += 144;
    }
    while ( v3 != v5 );
  }
  return v19;
}

