__int64 __fastcall sub_10BA0(__int64 a1, unsigned __int8 a2, _QWORD *a3)
{
  int tinfo_property; // eax
  unsigned int tinfo; // r14d
  __int64 v7; // rdi
  __int64 v8; // r12
  __int64 v9; // rbp
  _QWORD *v10; // rbx
  __int64 v11; // r14
  _QWORD *v12; // r8
  _QWORD *v13; // rbx
  unsigned __int64 v14; // r9
  size_t v15; // r10
  const void *v16; // r11
  void *v17; // rax
  _QWORD *v18; // [rsp+0h] [rbp-A8h]
  unsigned __int64 v19; // [rsp+0h] [rbp-A8h]
  unsigned __int64 v20; // [rsp+8h] [rbp-A0h]
  _QWORD *v21; // [rsp+8h] [rbp-A0h]
  size_t v22; // [rsp+10h] [rbp-98h]
  const void *v23; // [rsp+18h] [rbp-90h]
  __int64 v24; // [rsp+28h] [rbp-80h] BYREF
  __int64 v25; // [rsp+30h] [rbp-78h]
  __int128 v26; // [rsp+38h] [rbp-70h]
  __int128 v27; // [rsp+48h] [rbp-60h]
  __int64 v28; // [rsp+58h] [rbp-50h]
  int v29; // [rsp+60h] [rbp-48h]
  unsigned __int64 v30; // [rsp+68h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  v24 = 0;
  sub_FE10(a1, a2, (__int64)&v24, 0);
  tinfo_property = get_tinfo_property();
  tinfo = 0;
  v25 = 0;
  v28 = 0;
  v29 = 1;
  v26 = 0;
  v27 = 0;
  if ( tinfo_property )
  {
    if ( (unsigned __int8)get_tinfo_details() && (_QWORD)v27 == a3[3] && a3[1] == (_QWORD)v26 )
    {
      v11 = 0;
      if ( (_QWORD)v26 )
      {
        while ( 1 )
        {
          v7 = v25;
          v12 = (_QWORD *)(v25 + 144 * v11);
          v13 = (_QWORD *)(*a3 + 144 * v11);
          if ( *v12 != *v13 || v12[1] != v13[1] )
            break;
          if ( v12 + 2 != v13 + 2 )
          {
            v14 = v13[3];
            if ( !v14 || (v15 = v14 - 1, v14 == 1) )
            {
              v12[3] = 0;
            }
            else
            {
              v16 = (const void *)v13[2];
              v17 = (void *)v12[2];
              if ( v12[4] < v14 )
              {
                v23 = (const void *)v13[2];
                v22 = v14 - 1;
                v21 = (_QWORD *)(v25 + 144 * v11);
                v19 = v13[3];
                v17 = (void *)qvector_reserve();
                v12 = v21;
                v16 = v23;
                v15 = v22;
                v14 = v19;
                v21[2] = v17;
              }
              v12[3] = v14;
              v20 = v14;
              v18 = v12;
              memmove(v17, v16, v15);
              *(_BYTE *)(v18[2] + v20 - 1) = 0;
            }
          }
          copy_tinfo_t();
          if ( ++v11 >= (unsigned __int64)v26 )
            goto LABEL_29;
        }
        tinfo = 0;
      }
      else
      {
LABEL_29:
        tinfo = create_tinfo();
        if ( (_BYTE)tinfo )
          LOBYTE(tinfo) = (unsigned int)save_tinfo() == 0;
        v7 = v25;
      }
    }
    else
    {
      v7 = v25;
      tinfo = 0;
    }
    if ( v7 )
    {
      v8 = v26;
      if ( (_QWORD)v26 )
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
          v7 = v25;
        }
        while ( v8 != v9 );
      }
      *(_QWORD *)&v26 = 0;
      qfree();
    }
  }
  clear_tinfo_t();
  return tinfo;
}
