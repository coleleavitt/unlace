__int64 sub_4580()
{
  char **v0; // rbp
  __int64 *segm_by_name; // rax
  __int64 v2; // rcx
  __int64 v3; // r15
  __int64 v4; // rbx
  unsigned __int64 v5; // r8
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 v14; // r15
  __int64 *v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v20; // [rsp+8h] [rbp-70h]
  unsigned __int64 v21; // [rsp+10h] [rbp-68h]
  unsigned __int64 v22; // [rsp+18h] [rbp-60h]
  __int64 v23; // [rsp+20h] [rbp-58h] BYREF
  __int128 v24; // [rsp+28h] [rbp-50h]
  unsigned __int64 v25; // [rsp+38h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  if ( get_name_ea(-1, "rust_begin_unwind") == -1 )
  {
    v0 = off_9BA0;
    while ( 1 )
    {
      segm_by_name = (__int64 *)get_segm_by_name(*v0);
      if ( segm_by_name )
      {
        v2 = *segm_by_name;
        v3 = segm_by_name[1];
        v23 = 0;
        v20 = v2;
        v24 = 0;
        v23 = qvector_reserve(&v23, 0, 1, 80);
        v4 = v23 + 80 * v24;
        *(_OWORD *)(v4 + 8) = 0;
        *(_QWORD *)v4 = 0;
        *(_QWORD *)&v24 = v24 + 1;
        v5 = *(_QWORD *)(v4 + 8);
        *(_QWORD *)(v4 + 24) = 0;
        *(_QWORD *)(v4 + 48) = 0;
        *(_DWORD *)(v4 + 72) = -1;
        *(_OWORD *)(v4 + 32) = 0;
        v6 = v5 + 6;
        *(_OWORD *)(v4 + 56) = 0;
        if ( v5 >= 0xFFFFFFFFFFFFFFFALL )
        {
          v6 = 0x7FFFFFFFFFFFFFFFLL;
        }
        else
        {
          v22 = v5;
          v21 = v5 + 6;
          v7 = qvector_reserve(v4, *(_QWORD *)v4, v5 + 6, 1);
          v8 = *(_QWORD *)(v4 + 8);
          *(_QWORD *)v4 = v7;
          memset((void *)(v7 + v8), 0, v21 - v8);
          v5 = v22;
        }
        v9 = *(_QWORD *)v4 + v5;
        *(_QWORD *)(v4 + 8) = v6;
        *(_WORD *)(v9 + 4) = 11619;
        *(_DWORD *)v9 = 1953723762;
        v10 = bin_search(v20, v3, &v23, 3, 0);
        v11 = v23;
        v12 = v10;
        if ( v23 )
        {
          v13 = v24;
          if ( (_QWORD)v24 )
          {
            v14 = 0;
            do
            {
              v15 = (__int64 *)(v11 + 80 * v14);
              v16 = v15[6];
              if ( v16 )
              {
                v15[7] = 0;
                qfree(v16);
              }
              v17 = v15[3];
              if ( v17 )
              {
                v15[4] = 0;
                qfree(v17);
              }
              v18 = *v15;
              if ( *v15 )
              {
                v15[1] = 0;
                qfree(v18);
              }
              ++v14;
              v11 = v23;
            }
            while ( v13 != v14 );
          }
          *(_QWORD *)&v24 = 0;
          qfree(v11);
        }
        if ( v12 != -1 )
          break;
      }
      if ( &unk_9BB8 == (_UNKNOWN *)++v0 )
        return 0;
    }
  }
  return 1;
}

