__int64 *__fastcall sub_F44C0(_BYTE **a1, int *a2, int a3, int a4, double a5)
{
  int v5; // r13d
  __int64 *v7; // r14
  unsigned __int8 **v8; // rbx
  __int64 v9; // rax
  int v10; // ebp
  unsigned __int8 **v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rax

  v5 = *a2;
  v7 = sub_E3110(*a1, *a2 - a3, a4 + 1);
  if ( v7 )
  {
    v8 = (unsigned __int8 **)&a2[6 * a3 + 2];
    if ( v5 > a3 )
    {
      v9 = (unsigned int)(~a3 + v5);
      v10 = 0;
      v11 = &v8[3 * v9 + 3];
      do
      {
        v13 = sub_F3950((__int64)a1, *v8, a5);
        if ( !v13 )
          v13 = *((_QWORD *)*a1 + 2);
        v12 = v10;
        v8 += 3;
        ++v10;
        v7[v12 + 4] = v13;
        *(_BYTE *)(v7[3] + v12) = *((_BYTE *)v8 - 8);
      }
      while ( v8 != v11 );
    }
  }
  return v7;
}
