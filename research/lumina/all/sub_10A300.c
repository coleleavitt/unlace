unsigned __int64 __fastcall sub_10A300(__int64 a1, int a2, __int64 *a3, int a4, int a5, int a6, double a7)
{
  __int64 v7; // r12
  const char *v8; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 *v16; // r14
  int v17; // r15d
  __m128i *v18; // rsi
  __int64 v19; // rax
  unsigned int v20; // [rsp+Ch] [rbp-8Ch]
  int v21; // [rsp+1Ch] [rbp-7Ch] BYREF
  __int64 v22; // [rsp+20h] [rbp-78h] BYREF
  __int64 v23; // [rsp+28h] [rbp-70h]
  char v24; // [rsp+40h] [rbp-58h]
  char v25; // [rsp+41h] [rbp-57h]
  unsigned __int64 v26; // [rsp+58h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  if ( a2 > 0 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
    if ( (a2 & 1) != 0 )
    {
      v11 = sub_D9DB0(*a3, 1u, a7, (__int64)a3, a4, a5, a6);
      if ( !(unsigned int)sub_104900((__int64)&v22, a1, v11) )
      {
        if ( a2 == 1 )
        {
LABEL_18:
          if ( (*(_BYTE *)(v23 + 1) & 8) != 0 )
          {
            v18 = (__m128i *)a3[*(unsigned int *)(v23 + 8)];
            sub_FD650(a1, v18, v12, v13, v14, v15);
          }
          else
          {
            v18 = (__m128i *)a1;
            sub_103590(v23, (__int64 *)a1, (__int64)a3, v13, v14, v15, a7);
          }
        }
        else
        {
          v16 = a3 + 1;
          v17 = 2;
          v20 = 2 * ((unsigned int)(a2 - 2) >> 1) + 4;
          while ( 1 )
          {
            v18 = (__m128i *)sub_D9DB0(*v16, 1u, a7, v12, v13, v14, v15);
            v21 = 0;
            v19 = sub_109A50((__int64)&v22, v18->m128i_i8, &v21, a1);
            if ( v24 )
              break;
            if ( v25 )
              goto LABEL_17;
            if ( v19 )
            {
              v12 = v21 | (unsigned int)(v7 != 0);
              if ( v21 | (v7 != 0) )
              {
                *(_BYTE *)(v19 + 1) |= 8u;
                *(_DWORD *)(v19 + 8) = v17;
              }
            }
            v16 += 2;
            v17 += 2;
            if ( v17 == v20 )
              goto LABEL_18;
          }
          sub_E1560(a1, (__int64)v18, v12, v13, v14, v15);
        }
LABEL_17:
        sub_CA110(&v22, (__int64)v18);
      }
    }
    else
    {
      v8 = "set";
      if ( !v7 )
        v8 = "insert";
      sub_10A180((__int64 *)a1, (_DWORD *)(a1 + 36), v8);
    }
  }
  return __readfsqword(0x28u) ^ v26;
}
