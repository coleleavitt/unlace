__int64 __fastcall sub_1A440(__int64 a1, _QWORD *a2, int a3)
{
  __int64 result; // rax
  __int64 v4; // rdi
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rdx
  int i; // eax
  __int64 v10; // rax
  size_t v11; // rdx
  __int64 v12; // rax

  if ( a3 == 112 || (result = 0, a3 == 64) )
  {
    v4 = a2[1];
    if ( v4 )
    {
      a2[2] = 0;
      qfree(v4);
      v5 = a2[2];
      a2[1] = 0;
      a2[3] = 0;
      v6 = v5 + 4;
      if ( v5 >= v5 + 4 )
      {
LABEL_5:
        a2[2] = v6;
        v7 = 0;
        goto LABEL_6;
      }
    }
    else
    {
      v5 = a2[2];
      v6 = v5 + 4;
      if ( v5 >= v5 + 4 )
        goto LABEL_5;
      if ( a2[3] >= v6 )
      {
        v10 = a2[2];
        v11 = 16;
LABEL_12:
        memset((void *)(v4 + 4 * v10), 0, v11);
        a2[2] = v6;
        v7 = a2[1];
LABEL_6:
        *(_DWORD *)(v7 + 4 * v5) = 6;
        v8 = 4 * v5 + 4;
        for ( i = 7; i != 10; ++i )
        {
          *(_DWORD *)(a2[1] + v8) = i;
          v8 += 4;
        }
        *a2 = 0x400000001LL;
        return 1;
      }
    }
    v12 = qvector_reserve(a2 + 1, 0, v6, 4);
    a2[1] = v12;
    v4 = v12;
    v10 = a2[2];
    v11 = 4 * (v6 - v10);
    goto LABEL_12;
  }
  return result;
}
