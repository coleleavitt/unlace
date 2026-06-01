unsigned __int64 __fastcall sub_1C7040(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rax
  _DWORD *v4; // rbp
  unsigned __int64 v5; // rbp
  unsigned __int64 v7; // rbx
  _DWORD *v8; // rbp
  _QWORD v9[2]; // [rsp+0h] [rbp-78h] BYREF
  int v10; // [rsp+10h] [rbp-68h]
  int v11; // [rsp+20h] [rbp-58h]
  int v12; // [rsp+30h] [rbp-48h]
  unsigned __int64 v13; // [rsp+38h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 != a2 )
  {
    v9[0] = 0;
    v9[1] = 0;
    v10 = 0xFFFF;
    if ( a2 < v2 )
    {
      v5 = a2;
      do
      {
        ++v5;
        cleanup_argloc();
      }
      while ( v2 != v5 );
    }
    else
    {
      v3 = a1[2];
      if ( (unsigned __int64)v9 >= *a1 && (unsigned __int64)v9 < *a1 + 24 * v3 )
      {
        v11 = 0;
        copy_argloc();
        v12 = v10;
        if ( a1[2] < a2 )
          *a1 = qvector_reserve();
        v7 = a1[1];
        if ( v7 < a2 )
        {
          do
          {
            v8 = (_DWORD *)(*a1 + 24 * v7);
            *v8 = 0;
            copy_argloc();
            ++v7;
            v8[4] = v12;
          }
          while ( a2 != v7 );
        }
        a1[1] = a2;
        cleanup_argloc();
        goto LABEL_12;
      }
      if ( v3 < a2 )
      {
        *a1 = qvector_reserve();
        v2 = a1[1];
      }
      for ( ; v2 < a2; v4[4] = v10 )
      {
        v4 = (_DWORD *)(*a1 + 24 * v2);
        *v4 = 0;
        copy_argloc();
        ++v2;
      }
    }
    a1[1] = a2;
LABEL_12:
    cleanup_argloc();
  }
  return v13 - __readfsqword(0x28u);
}

