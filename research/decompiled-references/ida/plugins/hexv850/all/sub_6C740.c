unsigned __int64 __fastcall sub_6C740(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rax
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // rbx
  _QWORD v7[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v8[3]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 != a2 )
  {
    v7[0] = 0;
    v7[1] = 0;
    if ( a2 < v2 )
    {
      v5 = a2;
      do
      {
        ++v5;
        qfree();
      }
      while ( v2 != v5 );
    }
    else
    {
      v3 = a1[2];
      if ( (unsigned __int64)v7 >= *a1 && (unsigned __int64)v7 < *a1 + 16 * v3 )
      {
        sub_5F580(v8, (__int64)v7);
        if ( a1[2] < a2 )
          *a1 = qvector_reserve();
        v6 = a1[1];
        if ( v6 < a2 )
        {
          do
            sub_5F580((__int64 *)(*a1 + 16 * v6++), (__int64)v8);
          while ( a2 != v6 );
        }
        a1[1] = a2;
        qfree();
        goto LABEL_9;
      }
      if ( v3 < a2 )
      {
        *a1 = qvector_reserve();
        v2 = a1[1];
      }
      for ( ; v2 < a2; ++v2 )
        sub_5F580((__int64 *)(*a1 + 16 * v2), (__int64)v7);
    }
    a1[1] = a2;
LABEL_9:
    qfree();
  }
  return v9 - __readfsqword(0x28u);
}

