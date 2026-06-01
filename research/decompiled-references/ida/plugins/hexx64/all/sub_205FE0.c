__int64 __fastcall sub_205FE0(__int64 a1, unsigned int a2, __m128i *a3, __int64 a4, char a5, double a6, __m128 a7)
{
  __int64 v7; // rax
  char v9; // dl
  __int64 *v13; // rcx
  __int64 *v14; // rdi
  __int64 v15; // rdx
  int v16; // r12d
  unsigned int *v17; // r14
  int v18; // eax
  __int64 *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  unsigned __int64 *v22; // rbp
  __int64 v23; // rdx
  _QWORD *v24; // rax
  __int64 v25; // rcx
  __int64 *v27; // rdx
  _QWORD *v28; // [rsp+10h] [rbp-88h]
  __int64 v29; // [rsp+20h] [rbp-78h] BYREF
  __int128 v30; // [rsp+28h] [rbp-70h]
  __int64 v31; // [rsp+38h] [rbp-60h]
  char v32; // [rsp+40h] [rbp-58h]
  unsigned __int64 v33; // [rsp+48h] [rbp-50h]
  char v34; // [rsp+50h] [rbp-48h]
  unsigned __int64 v35; // [rsp+58h] [rbp-40h]

  v7 = a2;
  v35 = __readfsqword(0x28u);
  v9 = *(_BYTE *)(a4 + 48);
  if ( (v9 & 2) != 0 )
  {
    return 0;
  }
  else
  {
    *(_BYTE *)(a4 + 48) = v9 | 2;
    v13 = *(__int64 **)(a1 + 72);
    v14 = *(__int64 **)(a1 + 80);
    if ( a5 )
    {
      v27 = v14;
      v14 = v13;
      v13 = v27;
    }
    v15 = *(_QWORD *)(a1 + 56);
    if ( (unsigned int)v7 >= *(_DWORD *)(v15 + 64) )
      sub_201380(a6);
    v16 = sub_205280(a1, *(_QWORD *)(*(_QWORD *)(v15 + 528) + 8 * v7), v14, v13, a3, a4, a6, a7, a5);
    if ( v16 >= 0 )
    {
      v17 = *(unsigned int **)a4;
      if ( 4LL * *(_QWORD *)(a4 + 8) )
      {
        do
        {
          v19 = *(__int64 **)(a1 + 80);
          if ( !a5 )
            v19 = *(__int64 **)(a1 + 72);
          v20 = (int)*v17;
          v21 = *v19;
          v34 = 1;
          v30 = 0;
          v29 = 0;
          v22 = (unsigned __int64 *)(v21 + 24 * v20);
          v23 = *(_QWORD *)(a4 + 24);
          v32 = *(_BYTE *)(a4 + 32);
          v31 = v23;
          v33 = 0xFFFFFFFF00000001LL;
          v24 = sub_104DF0(v22, (__int64)&v29);
          v25 = (__int64)v24;
          if ( v29 )
          {
            v28 = v24;
            *(_QWORD *)&v30 = 0;
            qfree(v29);
            v25 = (__int64)v28;
          }
          if ( v25 )
          {
            v18 = sub_205FE0(a1, *v17, (__int64)v22, v25, a5 ^ 1u);
            if ( v18 < 0 )
              return (unsigned int)v18;
            v16 += v18;
          }
          else if ( !(unsigned __int8)sub_1EEA60(*(unsigned __int8 **)(a1 + 56)) )
          {
            if ( !under_debugger )
              sub_383060(0xC4A2u, 0.0);
            BUG();
          }
          ++v17;
        }
        while ( v17 != (unsigned int *)(*(_QWORD *)a4 + 4LL * *(_QWORD *)(a4 + 8)) );
      }
    }
  }
  return (unsigned int)v16;
}

