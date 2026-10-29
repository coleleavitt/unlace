unsigned __int64 __fastcall sub_341E0(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 v4; // rax
  __int128 i; // xmm0
  __int64 v6; // rbx
  int v7; // eax
  size_t v8; // r15
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  void *v12; // rax
  void *v13; // rsi
  int v14; // [rsp+0h] [rbp-88h] BYREF
  void *src; // [rsp+8h] [rbp-80h]
  size_t n[2]; // [rsp+10h] [rbp-78h]
  int v17; // [rsp+20h] [rbp-68h] BYREF
  __int64 v18; // [rsp+28h] [rbp-60h]
  __int128 v19; // [rsp+30h] [rbp-58h]
  unsigned __int64 v20; // [rsp+48h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 == a2 )
    return v20 - __readfsqword(0x28u);
  v14 = -2;
  src = (void *)-1LL;
  *(_OWORD *)n = 0;
  if ( a2 < v2 )
  {
    v10 = a2;
    do
    {
      v11 = *a1 + 32 * v10;
      if ( *(int *)v11 >= -1 && *(_QWORD *)(v11 + 8) )
      {
        *(_QWORD *)(v11 + 16) = 0;
        qfree();
      }
      ++v10;
    }
    while ( v2 != v10 );
  }
  else
  {
    v4 = a1[2];
    if ( (unsigned __int64)&v14 >= *a1 && (unsigned __int64)&v14 < *a1 + 32 * v4 )
    {
      v17 = -2;
      v18 = -1;
      v19 = 0;
      sub_340E0(a1, a2, (__int64)&v17);
      if ( v17 >= -1 && v18 )
      {
        *(_QWORD *)&v19 = 0;
        qfree();
      }
      goto LABEL_14;
    }
    if ( v4 < a2 )
    {
      *a1 = qvector_reserve();
      v2 = a1[1];
    }
    for ( i = 0; v2 < a2; ++v2 )
    {
      v6 = *a1 + 32 * v2;
      *(_DWORD *)v6 = -2;
      *(_QWORD *)(v6 + 24) = 0;
      *(_OWORD *)(v6 + 8) = i;
      if ( (int *)v6 != &v14 )
      {
        v7 = v14;
        if ( v14 < -1 )
        {
          *(_QWORD *)(v6 + 8) = src;
        }
        else
        {
          *(_QWORD *)(v6 + 8) = 0;
          *(_OWORD *)(v6 + 16) = 0;
          v8 = n[0];
          if ( n[0] )
          {
            v12 = (void *)qalloc_or_throw();
            *(_QWORD *)(v6 + 8) = v12;
            v13 = src;
            *(_QWORD *)(v6 + 24) = v8;
            memcpy(v12, v13, v8);
            *(_QWORD *)(v6 + 16) = v8;
            v7 = v14;
            i = 0;
          }
        }
        *(_DWORD *)v6 = v7;
      }
    }
  }
  a1[1] = a2;
LABEL_14:
  if ( v14 >= -1 && src )
  {
    n[0] = 0;
    qfree();
  }
  return v20 - __readfsqword(0x28u);
}

