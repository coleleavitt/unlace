unsigned __int64 __fastcall sub_2CA940(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  unsigned __int64 v8; // r14
  __int64 v9; // r13
  _QWORD *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rax
  _QWORD v14[3]; // [rsp+0h] [rbp-B8h] BYREF
  __int128 v15; // [rsp+18h] [rbp-A0h]
  __int64 v16; // [rsp+28h] [rbp-90h]
  int v17; // [rsp+30h] [rbp-88h]
  __int64 (__fastcall **v18)(); // [rsp+40h] [rbp-78h]
  __int64 v19; // [rsp+48h] [rbp-70h]
  __int64 v20; // [rsp+50h] [rbp-68h]
  __int128 v21; // [rsp+58h] [rbp-60h]
  __int64 v22; // [rsp+68h] [rbp-50h]
  int v23; // [rsp+70h] [rbp-48h]
  unsigned __int64 v24; // [rsp+78h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 != a2 )
  {
    v14[1] = -1;
    v17 = -2;
    v14[2] = 0;
    v16 = -1;
    v14[0] = off_4DBAA8;
    v15 = 0;
    if ( a2 < v2 )
    {
      v8 = a2;
      v9 = 56 * a2;
      do
      {
        v10 = (_QWORD *)(v9 + *a1);
        v11 = v10[2];
        *v10 = off_4DBA80;
        if ( v11 )
        {
          v10[3] = 0;
          qfree();
        }
        ++v8;
        v9 += 56;
      }
      while ( v2 != v8 );
      a1[1] = a2;
    }
    else
    {
      v4 = a1[2];
      if ( (unsigned __int64)v14 < *a1 || (unsigned __int64)v14 >= *a1 + 56 * v4 )
      {
        if ( v4 < a2 )
        {
          *a1 = qvector_reserve();
          v2 = a1[1];
        }
        if ( v2 < a2 )
        {
          v5 = 56 * v2;
          do
          {
            ++v2;
            v6 = v5 + *a1;
            v5 += 56;
            *(_QWORD *)(v6 + 8) = -1;
            *(_QWORD *)(v6 + 16) = 0;
            *(_QWORD *)(v6 + 40) = -1;
            *(_DWORD *)(v6 + 48) = -2;
            *(_QWORD *)v6 = off_4DBAA8;
            *(_OWORD *)(v6 + 24) = 0;
          }
          while ( a2 != v2 );
        }
      }
      else
      {
        v19 = -1;
        v20 = 0;
        v22 = -1;
        v23 = -2;
        v18 = off_4DBAA8;
        v21 = 0;
        if ( v4 < a2 )
        {
          *a1 = qvector_reserve();
          v2 = a1[1];
        }
        if ( v2 < a2 )
        {
          v12 = 56 * v2;
          do
          {
            ++v2;
            v13 = v12 + *a1;
            v12 += 56;
            *(_QWORD *)(v13 + 8) = -1;
            *(_QWORD *)(v13 + 16) = 0;
            *(_QWORD *)(v13 + 40) = -1;
            *(_DWORD *)(v13 + 48) = -2;
            *(_QWORD *)v13 = off_4DBAA8;
            *(_OWORD *)(v13 + 24) = 0;
          }
          while ( a2 != v2 );
        }
      }
      a1[1] = a2;
    }
  }
  return v24 - __readfsqword(0x28u);
}

