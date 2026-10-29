void __fastcall sub_3D7E0(__int64 *a1, __int64 a2, size_t a3)
{
  __int64 *v3; // r12
  __int64 v4; // rbp
  int v5; // ebx
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // r13
  __int64 *i; // r15
  __int64 v10; // rbp
  __int64 *v11; // r14
  int v12; // ebx
  __int64 v13; // rdx
  __int64 *v14; // [rsp+8h] [rbp-40h]

  v14 = (__int64 *)a2;
  if ( a1 != (__int64 *)a2 )
  {
    v3 = a1 + 1;
    if ( (__int64 *)a2 != a1 + 1 )
    {
      do
      {
        while ( 1 )
        {
          v4 = *a1;
          v5 = sub_FE30(*v3, a2, a3);
          v7 = sub_FE30(v4, a2, v6);
          v8 = *v3;
          if ( v5 < v7 )
            break;
          for ( i = v3; ; i[1] = *i )
          {
            v10 = *(i - 1);
            v11 = i--;
            v12 = sub_FE30(v8, a2, a3);
            if ( v12 >= (int)sub_FE30(v10, a2, v13) )
              break;
          }
          *v11 = v8;
          if ( v14 == ++v3 )
            return;
        }
        a3 = (char *)v3 - (char *)a1;
        if ( (char *)v3 - (char *)a1 <= 8 )
        {
          if ( (char *)v3 - (char *)a1 == 8 )
            *v3 = *a1;
        }
        else
        {
          a2 = (__int64)a1;
          memmove(a1 + 1, a1, a3);
        }
        ++v3;
        *a1 = v8;
      }
      while ( v14 != v3 );
    }
  }
}

