unsigned __int64 __fastcall sub_12D10(
        __int64 a1,
        unsigned __int64 a2,
        double a3,
        double a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rax
  bool v9; // cc
  unsigned int v11; // r13d
  __int64 i; // rbp
  unsigned int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned int *v19; // r12
  __int16 v20; // ax
  unsigned int *v21; // rdi
  unsigned int *v22; // r12
  __int64 v23; // [rsp+0h] [rbp-B8h]
  __int64 v24; // [rsp+8h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+10h] [rbp-A8h] BYREF
  __int128 v26; // [rsp+18h] [rbp-A0h]
  __int64 v27; // [rsp+28h] [rbp-90h]
  __int128 v28; // [rsp+30h] [rbp-88h]
  unsigned int *v29; // [rsp+40h] [rbp-78h]
  __int128 v30; // [rsp+48h] [rbp-70h]
  unsigned int *v31; // [rsp+58h] [rbp-60h]
  __int128 v32; // [rsp+60h] [rbp-58h]
  unsigned __int64 v33; // [rsp+78h] [rbp-40h]

  v8 = *(_QWORD *)(a1 + 40);
  v9 = *(_DWORD *)(a1 + 120) <= 0x26u;
  v33 = __readfsqword(0x28u);
  v11 = *(_DWORD *)(v8 + 96);
  if ( !v9 )
  {
    a2 = v11;
    sub_DA10((__int64 *)(a1 + 184), v11);
  }
  if ( v11 )
  {
    for ( i = 0; i != v11; ++i )
    {
      if ( __ROR4__(-1030792151 * i, 2) <= 0x28F5C28u )
      {
        v13 = i + 100;
        a2 = (unsigned __int64)"classes";
        if ( (int)i + 100 > v11 )
          v13 = v11;
        sub_7210((__int64)"Processing %s %5u..%-5u from %5u%s", "classes", i + 1, v13, v11, "");
      }
      if ( __ROR4__(-858993459 * i, 1) <= 0x19999999u
        && (unsigned __int8)callui(27, a2, &callui, a6, a7, a8, v23, v24, v25, v26) )
      {
        sub_7600();
      }
      v14 = sub_1C140(a1, (unsigned int)i);
      v15 = v14;
      if ( v14 )
      {
        a2 = v14;
        v24 = sub_1C180(a1, v14);
        if ( v24 )
        {
          v17 = *(_QWORD *)(a1 + 40);
          v29 = nullptr;
          a2 = (unsigned __int64)&v24;
          v31 = nullptr;
          v28 = 0;
          v30 = 0;
          v32 = 0;
          v18 = *(_QWORD *)(a1 + 32) + *(unsigned int *)(v17 + 32);
          v25 = 0;
          v27 = 0;
          v26 = 0;
          if ( !(unsigned __int8)sub_1C200(&v25, &v24, v18) )
            sub_7600();
          v19 = v29;
          if ( 12LL * (_QWORD)v30 )
          {
            do
            {
              a2 = (unsigned __int64)v19;
              sub_109E0(a1, v19, *(_DWORD *)(v15 + 16), 0.0, a4);
              v19 += 3;
            }
            while ( v19 != &v29[3 * (_QWORD)v30] );
          }
          v20 = v32;
          v21 = v31;
          v22 = v31;
          if ( 12LL * (_QWORD)v32 )
          {
            do
            {
              a2 = (unsigned __int64)v22;
              sub_109E0(a1, v22, *(_DWORD *)(v15 + 16), 0.0, a4);
              v20 = v32;
              v21 = v31;
              v22 += 3;
            }
            while ( v22 != &v31[3 * (_QWORD)v32] );
          }
          if ( *(_DWORD *)(a1 + 120) > 0x26u )
          {
            a6 = *(_QWORD *)(a1 + 184);
            *(_WORD *)(a6 + 2 * i) = v30 + v26 + v28 + v20;
            v21 = v31;
          }
          if ( v21 )
          {
            *(_QWORD *)&v32 = 0;
            qfree(v21);
          }
          if ( v29 )
          {
            *(_QWORD *)&v30 = 0;
            qfree(v29);
          }
          if ( v27 )
          {
            *(_QWORD *)&v28 = 0;
            qfree(v27);
          }
          if ( v25 )
          {
            *(_QWORD *)&v26 = 0;
            qfree(v25);
          }
        }
      }
      else
      {
        a2 = (unsigned int)i;
        sub_5860((__int64)"dex: failed to read classdef %u\n", i);
      }
    }
  }
  return v33 - __readfsqword(0x28u);
}
