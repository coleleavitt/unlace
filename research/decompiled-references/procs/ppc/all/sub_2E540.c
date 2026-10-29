void __fastcall sub_2E540(__int64 **a1, __int64 a2)
{
  __int64 *v2; // rbx
  unsigned __int64 v3; // rdx
  __int64 *v4; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  __int64 *v8; // rdi
  __int64 *v9; // rbx
  unsigned __int64 v10; // rbx
  unsigned __int64 i; // r12
  _BYTE *v12; // r13
  unsigned int v13; // ebx
  __int64 flags; // r14
  __int64 *v15; // r12
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r12
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax

  v2 = *a1;
  if ( *a1 )
  {
    v3 = v2[1];
    v4 = a1[1];
    if ( v4 != (__int64 *)v3 )
    {
      if ( *((_BYTE *)a1 + 24) )
      {
        v12 = (_BYTE *)(a2 + 41);
        v13 = 0;
        flags = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
        do
        {
          if ( (unsigned __int8)is_off(flags, v13)
            || *((_BYTE *)a1 + 25) && (*v12 == 2 || (unsigned __int8)(*v12 - 6) <= 1u) )
          {
            v2 = *a1;
            v4 = a1[1];
            v3 = (*a1)[1];
            goto LABEL_4;
          }
          ++v13;
          v12 += 40;
        }
        while ( v13 != 8 );
        v15 = *a1;
        v16 = (unsigned __int64)a1[1];
        v17 = (*a1)[1];
        if ( v17 < v16 )
        {
          v21 = *v15;
          if ( v15[2] < v16 )
          {
            v22 = qvector_reserve(*a1, v21, a1[1], 1);
            *v15 = v22;
            v21 = v22;
            v17 = v15[1];
          }
          memset((void *)(v21 + v17), 0, v16 - v17);
          v15[1] = v16;
        }
        else if ( v16 != v17 )
        {
          v15[1] = v16;
        }
      }
      else
      {
LABEL_4:
        v6 = *(unsigned __int16 *)(a2 + 26);
        if ( v3 - (unsigned __int64)v4 < v6 )
        {
          v18 = (unsigned __int64)v4 + v6;
          if ( v3 < (unsigned __int64)v4 + v6 )
          {
            v19 = *v2;
            if ( v2[2] < v18 )
            {
              v20 = qvector_reserve(v2, v19, (char *)v4 + v6, 1);
              v3 = v2[1];
              *v2 = v20;
              v19 = v20;
            }
            memset((void *)(v19 + v3), 0, v18 - v3);
            v2[1] = v18;
          }
          else if ( v18 != v3 )
          {
            v2[1] = v18;
          }
        }
        v7 = (unsigned __int64)a1[2];
        if ( v7 )
        {
          v8 = *a1;
          v9 = a1[1];
          if ( ((*a1)[1] - (__int64)v9) % v7 )
          {
            if ( under_debugger )
              BUG();
            interr(10359);
            sub_2E740();
          }
          else
          {
            v10 = (unsigned __int64)v9 + *v8;
            for ( i = (*a1)[1] + *v8; v10 < i; v10 += v7 )
            {
              swap_value(v10, v10, (unsigned int)v7);
              v7 = (unsigned __int64)a1[2];
            }
          }
        }
      }
    }
  }
}
