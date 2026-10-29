__int64 __fastcall sub_6F180(__int64 *a1, __int64 a2, int a3)
{
  __int64 v3; // r15
  unsigned __int64 v6; // r12
  __int64 result; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rdi
  int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // r14
  __int64 v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD v19[10]; // [rsp+8h] [rbp-50h] BYREF

  v3 = a2;
  v19[2] = __readfsqword(0x28u);
  v6 = (int)sub_6F000(a2, a3);
  result = 0;
  if ( (int)v6 > 0 )
  {
    a1[3] = a2;
    *((_DWORD *)a1 + 8) = a3;
    if ( a3 == 4 )
    {
      *((_DWORD *)a1 + 11) = get_dword();
      *((_DWORD *)a1 + 12) = get_dword();
      v3 = a2 + 16;
      *((_DWORD *)a1 + 9) = get_dword();
      *((_DWORD *)a1 + 10) = get_dword();
    }
    v8 = a1[1];
    if ( v6 != v8 )
    {
      memset(v19, 0, 12);
      if ( v6 >= v8 )
      {
        v9 = a1[2];
        if ( (unsigned __int64)v19 < *a1 || (unsigned __int64)v19 >= *a1 + 12 * v9 )
        {
          if ( v9 < v6 )
          {
            *a1 = qvector_reserve();
            v8 = a1[1];
          }
          if ( v8 < v6 )
          {
            v10 = v19[0];
            v11 = v19[1];
            v12 = 12 * v8;
            do
            {
              v13 = *a1;
              ++v8;
              *(_QWORD *)(v13 + v12) = v10;
              *(_DWORD *)(v13 + v12 + 8) = v11;
              v12 += 12;
            }
            while ( v6 != v8 );
          }
        }
        else
        {
          if ( v9 < v6 )
          {
            *a1 = qvector_reserve();
            v8 = a1[1];
          }
          v17 = 12 * v8;
          if ( v8 < v6 )
          {
            do
            {
              ++v8;
              v18 = v17 + *a1;
              v17 += 12;
              *(_DWORD *)v18 = 0;
              *(_QWORD *)(v18 + 4) = 0;
            }
            while ( v6 != v8 );
          }
        }
      }
      a1[1] = v6;
    }
    v14 = v3 + 4;
    v15 = v3 + 12 * v6 + 4;
    do
    {
      v16 = -4 - v3 + v14;
      *(_DWORD *)(*a1 + v16) = get_dword();
      v14 += 12;
      *(_DWORD *)(*a1 + v16 + 4) = get_dword();
      *(_DWORD *)(*a1 + v16 + 8) = get_dword();
    }
    while ( v15 != v14 );
    return 1;
  }
  return result;
}
