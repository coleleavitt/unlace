unsigned __int64 __fastcall sub_711C0(__int64 *a1, unsigned __int64 a2, double a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // rsi
  unsigned __int64 v6; // rax
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbx
  __int64 v11[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v12[3]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v13; // [rsp+28h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  v3 = a1[1];
  if ( v3 != a2 )
  {
    v11[0] = 0;
    v11[1] = 0;
    if ( a2 < v3 )
    {
      v8 = a2;
      do
      {
        v9 = v8++;
        qfree(*(_QWORD *)(*a1 + 16 * v9));
      }
      while ( v3 != v8 );
    }
    else
    {
      v5 = *a1;
      v6 = a1[2];
      if ( (unsigned __int64)v11 >= *a1 && (unsigned __int64)v11 < v5 + 16 * v6 )
      {
        sub_64000(v12, (__int64)v11, a3);
        if ( a1[2] < a2 )
          *a1 = qvector_reserve((__int64)a1, *a1, a2, 16);
        v10 = a1[1];
        if ( v10 < a2 )
        {
          do
            sub_64000((__int64 *)(*a1 + 16 * v10++), (__int64)v12, a3);
          while ( a2 != v10 );
        }
        a1[1] = a2;
        qfree(v12[0]);
        goto LABEL_9;
      }
      if ( v6 < a2 )
      {
        *a1 = qvector_reserve((__int64)a1, v5, a2, 16);
        v3 = a1[1];
      }
      for ( ; v3 < a2; ++v3 )
        sub_64000((__int64 *)(*a1 + 16 * v3), (__int64)v11, a3);
    }
    a1[1] = a2;
LABEL_9:
    qfree(v11[0]);
  }
  return v13 - __readfsqword(0x28u);
}

