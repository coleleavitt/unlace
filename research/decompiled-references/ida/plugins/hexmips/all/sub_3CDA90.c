void __fastcall sub_3CDA90(_QWORD *a1, __int64 *a2, unsigned __int64 a3, double a4)
{
  unsigned int v4; // ebp
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  unsigned __int8 **v7; // rax
  unsigned __int8 *v8; // r14
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rax

  v4 = a3 & 7;
  if ( v4 <= 2 )
  {
    v5 = a3 >> 3;
    if ( v4 - 1 <= 1 )
    {
      v7 = (unsigned __int8 **)(a1[17] + 24 * v5);
      v8 = *v7;
      if ( a2[1] == -1 )
        a2[1] = sub_3CA120(*v7, a1[8], a4);
      v9 = *a2;
      if ( *a2 == -1 )
      {
        if ( *v8 != 4 || (v10 = *(_QWORD *)(*((_QWORD *)v8 + 1) + 24LL), *a2 = v10, v10 == -1) )
        {
          if ( *v8 == 2 && (unsigned __int8)is_mapped() && a1[3] && rangeset_t_find_range() )
          {
            v11 = **((_QWORD **)v8 + 1);
            *a2 = v11;
            if ( v11 != -1 )
              return;
          }
          else
          {
            *a2 = -1;
          }
          if ( v4 == 2 )
            v9 = *((_QWORD *)v8 + 2);
          *a2 = v9;
        }
      }
    }
    else
    {
      *((_DWORD *)a2 + 4) = v5;
      v6 = a1[8];
      if ( (unsigned int)v5 >= *(_DWORD *)(v6 + 64) )
        sub_3CA100(a4);
      a2[1] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 528) + 8LL * (unsigned int)v5) + 32LL);
    }
  }
}

