unsigned __int64 __fastcall sub_11A90(__int64 a1)
{
  const double *v1; // rbx
  _QWORD *v2; // rdi
  __int64 v3; // r14
  __int64 v4; // r12
  __int64 v5; // rbp
  __int64 v6; // rdi
  _QWORD *v7; // rbx
  char v8; // al
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // r13
  __int64 i; // r15
  __int64 v13; // rdi
  int v14; // eax
  __int64 v16; // rdi
  __int64 v17; // rdi
  __m128 v18; // [rsp+10h] [rbp-98h] BYREF
  _QWORD *v19; // [rsp+20h] [rbp-88h] BYREF
  __int128 v20; // [rsp+28h] [rbp-80h]
  __int64 v21; // [rsp+40h] [rbp-68h] BYREF
  int v22; // [rsp+48h] [rbp-60h]
  __int128 v23; // [rsp+50h] [rbp-58h]
  unsigned __int64 v24; // [rsp+68h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  if ( a1 )
  {
    v21 = 0;
    v23 = 0;
    func_tail_iterator_set(&v21, a1, -1);
    v1 = (const double *)v21;
    v22 = -1;
    if ( v21 )
    {
      while ( 1 )
      {
        del_tryblks(v1);
        if ( find_syseh(*(_QWORD *)v1) == -1 )
          goto LABEL_22;
        v19 = nullptr;
        v20 = 0;
        v18 = _mm_loadh_ps(v1);
        get_tryblks(&v19, &v18);
        v2 = v19;
        if ( !(_QWORD)v20 )
        {
          if ( !v19 )
            goto LABEL_22;
          goto LABEL_21;
        }
        if ( *((_BYTE *)v19 + 97) != 1 || !v19[1] || *(_QWORD *)*v19 == *(_QWORD *)(*v19 + 8LL) )
          break;
        del_tryblks(*v19);
        v2 = v19;
        if ( v19 )
        {
          v3 = v20;
          if ( (_QWORD)v20 )
            goto LABEL_7;
          goto LABEL_21;
        }
LABEL_22:
        v1 = (const double *)v21;
        if ( !v21 )
          return v24 - __readfsqword(0x28u);
        v14 = v22 + 1;
        if ( *(_DWORD *)(v21 + 128) <= v22 + 1 )
        {
          lock_func_range(v21, 0);
          return v24 - __readfsqword(0x28u);
        }
        ++v22;
        if ( v14 >= 0 )
          v1 = (const double *)(*(_QWORD *)(v21 + 136) + 16LL * v14);
      }
      v3 = v20;
      if ( !v19 )
        goto LABEL_22;
LABEL_7:
      v4 = 0;
      v5 = 0;
      do
      {
        v7 = &v2[v4];
        v8 = BYTE1(v2[v4 + 12]);
        if ( v8 == 2 )
        {
          v9 = v7[3];
          if ( v9 )
          {
            v10 = v7[4];
            if ( v10 )
            {
              v11 = 0;
              for ( i = 0; i != v10; ++i )
              {
                v13 = *(_QWORD *)(v9 + v11);
                if ( v13 )
                {
                  *(_QWORD *)(v9 + v11 + 8) = 0;
                  qfree(v13);
                  v9 = v7[3];
                }
                v11 += 56;
              }
            }
            v7[4] = 0;
            qfree(v9);
          }
        }
        else if ( v8 == 1 )
        {
          v16 = v7[8];
          if ( v16 )
          {
            v7[9] = 0;
            qfree(v16);
          }
          v17 = v7[3];
          if ( v17 )
          {
            v7[4] = 0;
            qfree(v17);
          }
        }
        v6 = *v7;
        *((_BYTE *)v7 + 97) = 0;
        if ( v6 )
        {
          v7[1] = 0;
          qfree(v6);
        }
        ++v5;
        v2 = v19;
        v4 += 13;
      }
      while ( v5 != v3 );
LABEL_21:
      *(_QWORD *)&v20 = 0;
      qfree(v2);
      goto LABEL_22;
    }
  }
  return v24 - __readfsqword(0x28u);
}

