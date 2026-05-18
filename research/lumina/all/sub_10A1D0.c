unsigned __int64 __fastcall sub_10A1D0(__int64 a1, int a2, __int64 *a3, int a4, int a5, int a6, double a7)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 *v14; // r15
  unsigned int v15; // r14d
  int v16; // ebx
  __m128i *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // [rsp+0h] [rbp-78h] BYREF
  __int64 v20; // [rsp+8h] [rbp-70h]
  char v21; // [rsp+21h] [rbp-57h]
  unsigned __int64 v22; // [rsp+38h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  if ( a2 > 0 )
  {
    if ( (a2 & 1) != 0 )
    {
      v9 = sub_D9DB0(*a3, 1u, a7, (__int64)a3, a4, a5, a6);
      if ( !(unsigned int)sub_104900((__int64)&v19, a1, v9) )
      {
        if ( a2 == 1 )
        {
LABEL_13:
          if ( (*(_BYTE *)(v20 + 1) & 8) != 0 )
          {
            v17 = (__m128i *)a3[*(unsigned int *)(v20 + 8)];
            sub_FD650(a1, v17, v10, v11, v12, v13);
          }
          else
          {
            v17 = (__m128i *)a1;
            sub_103590(v20, (__int64 *)a1, (__int64)a3, v11, v12, v13, a7);
          }
        }
        else
        {
          v14 = a3 + 1;
          v15 = 2 * ((unsigned int)(a2 - 2) >> 1) + 4;
          v16 = 2;
          while ( 1 )
          {
            v17 = (__m128i *)sub_D9DB0(*v14, 1u, a7, v10, v11, v12, v13);
            v18 = sub_109A50((__int64)&v19, v17->m128i_i8, nullptr, a1);
            if ( v21 )
              break;
            if ( v18 )
            {
              *(_BYTE *)(v18 + 1) |= 8u;
              *(_DWORD *)(v18 + 8) = v16;
            }
            v16 += 2;
            v14 += 2;
            if ( v16 == v15 )
              goto LABEL_13;
          }
        }
        sub_CA110(&v19, (__int64)v17);
      }
    }
    else
    {
      sub_10A180((__int64 *)a1, (_DWORD *)(a1 + 36), "replace");
    }
  }
  return __readfsqword(0x28u) ^ v22;
}
