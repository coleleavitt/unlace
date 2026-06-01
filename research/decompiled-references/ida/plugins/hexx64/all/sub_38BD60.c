__int64 __fastcall sub_38BD60(__m128i *a1, __int64 a2, _DWORD *a3, __int32 *a4, double a5)
{
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  __int32 v7; // r12d
  int v8; // r15d
  __int64 v9; // rax
  char *v10; // rbx
  int v11; // eax
  int v12; // edx
  _QWORD v16[11]; // [rsp+20h] [rbp-58h] BYREF

  v16[3] = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  sub_2581E0(a1);
  v5 = a1[8].m128i_u64[1];
  if ( a2 != 1 )
  {
    v6 = a1[9].m128i_i32[2];
    v7 = a1[9].m128i_i32[2];
    if ( v6 < v5 )
    {
      v8 = 0;
      while ( 1 )
      {
        v9 = a1[8].m128i_i64[0] + 32 * v6;
        v10 = (char *)s1;
        if ( *(_QWORD *)(v9 + 8) )
          v10 = *(char **)v9;
        v8 = sub_3862A0(v10, v8);
        if ( !v8 && !(unsigned int)sub_3862A0(v10, 0) )
        {
          v16[1] = a2;
          v16[0] = off_4E6638;
          v11 = sub_38A4F0((__int64)a1, v10, 0, (__int64)v16, a5);
          v12 = v11 - 1;
          if ( v11 )
            break;
        }
        v6 = ++v7;
        if ( (unsigned __int64)v7 >= a1[8].m128i_i64[1] )
          return 0;
      }
      goto LABEL_13;
    }
    return 0;
  }
  v7 = v5 - 1;
  v12 = 0;
LABEL_13:
  if ( a3 )
    *a3 = v12;
  if ( a4 )
    *a4 = v7;
  return 1;
}

