unsigned __int64 __fastcall sub_31C00(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v5; // rsi
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v10; // r14
  __int64 v11; // rbp
  void *v12; // rdi
  void *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // [rsp+0h] [rbp-B8h] BYREF
  __int128 v17; // [rsp+8h] [rbp-B0h]
  __int64 v18; // [rsp+18h] [rbp-A0h]
  __int64 v19; // [rsp+20h] [rbp-98h]
  __int128 v20; // [rsp+28h] [rbp-90h]
  int v21; // [rsp+38h] [rbp-80h]
  __int64 v22; // [rsp+40h] [rbp-78h]
  __int128 v23; // [rsp+48h] [rbp-70h]
  __int64 v24; // [rsp+58h] [rbp-60h]
  __int64 v25; // [rsp+60h] [rbp-58h]
  __int128 v26; // [rsp+68h] [rbp-50h]
  int v27; // [rsp+78h] [rbp-40h]
  unsigned __int64 v28; // [rsp+88h] [rbp-30h]

  v28 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 != a2 )
  {
    v16 = 0;
    v18 = 0;
    v19 = 0;
    v21 = 0;
    v17 = 0;
    v20 = 0;
    if ( a2 < v2 )
    {
      v10 = a2;
      do
      {
        v11 = *a1 + (v10 << 6);
        v12 = *(void **)(v11 + 32);
        if ( v12 )
        {
          *(_QWORD *)(v11 + 40) = 0;
          j__free(v12);
        }
        v13 = *(void **)v11;
        if ( *(_QWORD *)v11 )
        {
          *(_QWORD *)(v11 + 8) = 0;
          j__free(v13);
        }
        ++v10;
      }
      while ( v2 != v10 );
      a1[1] = a2;
    }
    else
    {
      v5 = *a1;
      v6 = a1[2];
      if ( (unsigned __int64)&v16 < *a1 || (unsigned __int64)&v16 >= v5 + (v6 << 6) )
      {
        if ( v6 < a2 )
        {
          *a1 = sub_1987B0(a1, v5, a2, 64);
          v2 = a1[1];
        }
        if ( v2 < a2 )
        {
          do
          {
            v7 = v2++;
            v8 = *a1 + (v7 << 6);
            *(_QWORD *)v8 = 0;
            *(_QWORD *)(v8 + 24) = 0;
            *(_QWORD *)(v8 + 32) = 0;
            *(_DWORD *)(v8 + 56) = 0;
            *(_OWORD *)(v8 + 8) = 0;
            *(_OWORD *)(v8 + 40) = 0;
          }
          while ( a2 != v2 );
        }
      }
      else
      {
        v22 = 0;
        v24 = 0;
        v25 = 0;
        v27 = 0;
        v23 = 0;
        v26 = 0;
        if ( v6 < a2 )
        {
          *a1 = sub_1987B0(a1, v5, a2, 64);
          v2 = a1[1];
        }
        if ( v2 < a2 )
        {
          do
          {
            v14 = v2++;
            v15 = *a1 + (v14 << 6);
            *(_QWORD *)v15 = 0;
            *(_QWORD *)(v15 + 24) = 0;
            *(_QWORD *)(v15 + 32) = 0;
            *(_DWORD *)(v15 + 56) = 0;
            *(_OWORD *)(v15 + 8) = 0;
            *(_OWORD *)(v15 + 40) = 0;
          }
          while ( a2 != v2 );
        }
      }
      a1[1] = a2;
    }
  }
  return v28 - __readfsqword(0x28u);
}
