unsigned __int64 __fastcall sub_364B0(__int64 a1, _QWORD *a2, unsigned __int64 a3, __int64 a4)
{
  _QWORD *v7; // rax
  unsigned __int64 *v8; // rdi
  unsigned __int64 *v9; // rcx
  unsigned __int64 *v10; // rax
  unsigned __int64 v12; // rax
  char v13; // al
  __int64 v14; // [rsp+10h] [rbp-118h] BYREF
  __int128 v15; // [rsp+18h] [rbp-110h]
  unsigned __int64 v16; // [rsp+30h] [rbp-F8h]
  __int64 v17; // [rsp+38h] [rbp-F0h]
  __int128 v18; // [rsp+40h] [rbp-E8h]
  __int64 v19; // [rsp+50h] [rbp-D8h]
  __int64 v20; // [rsp+58h] [rbp-D0h]
  __int64 selector; // [rsp+60h] [rbp-C8h]
  __int128 v22; // [rsp+68h] [rbp-C0h]
  __int128 v23; // [rsp+78h] [rbp-B0h]
  __int128 v24; // [rsp+88h] [rbp-A0h]
  __int128 v25; // [rsp+98h] [rbp-90h]
  __int128 v26; // [rsp+A8h] [rbp-80h]
  __int128 v27; // [rsp+B8h] [rbp-70h]
  __int128 v28; // [rsp+C8h] [rbp-60h]
  __int128 v29; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v30; // [rsp+E8h] [rbp-40h]
  unsigned __int64 v31; // [rsp+F8h] [rbp-30h]

  v31 = __readfsqword(0x28u);
  v7 = sub_1C420(a2, a3);
  if ( v7 )
  {
    v8 = (unsigned __int64 *)v7[66];
    v9 = &v8[4 * v7[67]];
    if ( v8 != v9 )
    {
      v10 = (unsigned __int64 *)v7[66];
      while ( a3 < *v10 || a3 >= v10[1] + *v10 )
      {
        v10 += 4;
        if ( v9 == v10 )
          return v31 - __readfsqword(0x28u);
      }
      if ( v10 )
      {
        while ( 1 )
        {
          v12 = *v8;
          if ( a3 >= *v8 && v8[1] >= a3 - v12 )
            break;
          v8 += 4;
          if ( v9 == v8 )
            return v31 - __readfsqword(0x28u);
        }
        if ( v8[2] + a3 - v12 != -1 )
        {
          file2base();
          v18 = 0;
          v19 = 0;
          v20 = 0;
          v30 = 0xFFFFFFFF00000003LL;
          v16 = a3;
          v17 = a4;
          v22 = -1;
          v23 = -1;
          v24 = -1;
          v25 = -1;
          v26 = -1;
          v27 = -1;
          v28 = -1;
          v29 = -1;
          selector = allocate_selector();
          v13 = *(_BYTE *)(a1 + 13692);
          LOWORD(v20) = 513;
          v15 = 0;
          *(_DWORD *)((char *)&v20 + 3) = (unsigned __int8)(v13 + 1);
          v14 = 0;
          qbasename();
          sub_35470(&v14);
          add_segm_ex();
          rangeset_t_add();
          if ( v14 )
          {
            *(_QWORD *)&v15 = 0;
            qfree();
          }
        }
      }
    }
  }
  return v31 - __readfsqword(0x28u);
}

