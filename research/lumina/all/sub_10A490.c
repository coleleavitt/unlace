unsigned __int64 __fastcall sub_10A490(__int64 *a1, __int64 a2, __int64 *a3, double a4)
{
  int v4; // r12d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  double v11; // xmm1_8
  __int64 v12; // rdi
  int v13; // eax
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int8 *v19; // rbx
  int v20; // eax
  __int64 *v21; // [rsp+8h] [rbp-30h]
  double v22; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v23; // [rsp+18h] [rbp-20h]

  v4 = 0;
  v23 = __readfsqword(0x28u);
  if ( (_DWORD)a2 == 2 )
  {
    v12 = a3[1];
    v21 = a3;
    if ( byte_1BAD40[*(_WORD *)(v12 + 20) & 0x3F] == 5 )
      return __readfsqword(0x28u) ^ v23;
    v13 = sub_CD0F0((char **)v12);
    a3 = v21;
    if ( v13 >= 0 )
      v4 = v13;
    if ( v4 > 30 )
      v4 = 30;
  }
  if ( byte_1BAD40[*(_WORD *)(*a3 + 20) & 0x3F] != 5 )
  {
    sub_CD1F0(*a3);
    v22 = a4;
    if ( a4 >= -4.503599627370496e15 && a4 <= 4.503599627370496e15 )
    {
      if ( v4 )
      {
        a2 = (unsigned int)v4;
        v14 = sub_105970("%.*f", v4, a4);
        v19 = (unsigned __int8 *)v14;
        if ( !v14 )
        {
          sub_E1560((__int64)a1, (unsigned int)v4, v15, v16, v17, v18);
          return __readfsqword(0x28u) ^ v23;
        }
        v20 = strlen((const char *)v14) & 0x3FFFFFFF;
        v22 = 0.0;
        if ( v20 )
        {
          a2 = (__int64)&v22;
          sub_CAFA0(v19, &v22, v20, 1u);
        }
        sub_C91C0((__int64)v19, a2);
        a4 = v22;
      }
      else
      {
        if ( a4 < 0.0 )
          v11 = -0.5;
        else
          v11 = 0.5;
        a4 = (double)(int)(a4 + v11);
        v22 = a4;
      }
    }
    sub_C95A0(*a1, a2, v7, v8, v9, v10, a4);
  }
  return __readfsqword(0x28u) ^ v23;
}
