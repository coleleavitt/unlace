__int64 __fastcall sub_32E20(_BYTE *a1, __int64 *a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v4; // r13
  char *v10; // rsi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  void *v13; // rdi
  size_t v14; // rdx
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  char v20; // [rsp+7h] [rbp-31h] BYREF
  unsigned __int64 v21; // [rsp+8h] [rbp-30h]

  v4 = (int)a4;
  v21 = __readfsqword(0x28u);
  a2[1] = 0;
  if ( (a1[800] & 0x10) != 0 )
  {
    v20 = 0;
    if ( a4 )
    {
      v10 = (char *)*a2;
      v11 = a2[2];
      if ( &v20 < v10 || &v20 >= &v10[v11] )
      {
        v15 = 0;
        if ( v11 >= v4 || (v18 = qvector_reserve(), v15 = a2[1], *a2 = v18, v10 = (char *)v18, v15 < v4) )
        {
          while ( 1 )
          {
            v10[v15++] = v20;
            if ( v4 == v15 )
              break;
            v10 = (char *)*a2;
          }
        }
      }
      else
      {
        v12 = 0;
        if ( v11 >= v4 || (v19 = qvector_reserve(), *a2 = v19, v10 = (char *)v19, v12 = a2[1], v12 < v4) )
        {
          while ( 1 )
          {
            v10[v12++] = 0;
            if ( v4 == v12 )
              break;
            v10 = (char *)*a2;
          }
        }
      }
      a2[1] = v4;
    }
    return a4;
  }
  if ( a4 )
  {
    v13 = (void *)*a2;
    v14 = (int)a4;
    if ( a2[2] < (unsigned __int64)(int)a4 )
    {
      v16 = qvector_reserve();
      v17 = a2[1];
      *a2 = v16;
      v14 = v4 - v17;
      v13 = (void *)(v16 + v17);
    }
    memset(v13, 0, v14);
    a2[1] = v4;
  }
  if ( (*(__int64 (__fastcall **)(_BYTE *, __int64, __int64, unsigned __int64, _QWORD))(*(_QWORD *)a1 + 288LL))(
         a1,
         a3,
         *a2,
         v4,
         0) > 0 )
    return a4;
  return 0xFFFFFFFFLL;
}

