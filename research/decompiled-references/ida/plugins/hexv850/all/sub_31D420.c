unsigned __int64 __fastcall sub_31D420(__int64 a1, char a2, double a3, __m128 a4)
{
  unsigned __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // r9d
  _QWORD *v8; // rax
  _QWORD *v9; // rbp
  __int64 v10; // rax
  _QWORD *v11; // rdx
  bool v12; // zf
  int v13; // r13d
  __int64 v14; // rax
  unsigned int *v15; // rdi
  int v16; // r13d
  __int64 v17; // rdi
  int v18; // r13d
  __int64 v19; // rax
  _QWORD *v21; // rax
  __int64 v22; // rdx
  _QWORD v23[3]; // [rsp+0h] [rbp-78h] BYREF
  __m128 v24; // [rsp+18h] [rbp-60h]
  __int64 v25; // [rsp+28h] [rbp-50h]
  __int128 v26; // [rsp+30h] [rbp-48h]
  __int64 v27; // [rsp+40h] [rbp-38h]
  unsigned __int64 v28; // [rsp+48h] [rbp-30h]

  v28 = __readfsqword(0x28u);
  sub_31C610(a1, a2, a3, a4);
  v8 = *(_QWORD **)(a1 + 1856);
  if ( v8 )
  {
    if ( *(_QWORD *)(a1 + 1864) )
    {
      v9 = (_QWORD *)v8[1];
      if ( v9 != v8 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v10 = *((int *)v9 + 7);
            if ( (int)v10 < 0 || (int)v10 >= *(_DWORD *)(a1 + 64) )
            {
              if ( !under_debugger )
                sub_37CFE0(50958);
LABEL_38:
              BUG();
            }
            if ( (unsigned int)v10 >= *(_DWORD *)(a1 + 64) )
            {
              if ( !under_debugger )
                sub_37CFE0(52719);
              goto LABEL_38;
            }
            if ( !sub_32B2C0(*(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v10), *((unsigned int *)v9 + 8)) )
            {
              if ( !under_debugger )
                sub_37CFE0(50959);
              goto LABEL_38;
            }
            if ( (*v9 & 2) == 0 )
              break;
LABEL_11:
            if ( *(_QWORD **)(a1 + 1856) == v9 )
              goto LABEL_12;
          }
          v11 = (_QWORD *)v9[2];
          if ( (*(_BYTE *)v11 & 2) == 0 )
          {
            do
            {
              v9 = v11;
              v11 = (_QWORD *)v11[1];
            }
            while ( (*(_BYTE *)v11 & 2) == 0 );
            goto LABEL_11;
          }
          v21 = (_QWORD *)(*v9 & 0xFFFFFFFFFFFFFFFCLL);
          v22 = *v21;
          if ( (*v21 & 2) != 0 )
          {
LABEL_25:
            v9 = v21;
            if ( *(_QWORD **)(a1 + 1856) == v21 )
              break;
          }
          else
          {
            while ( 1 )
            {
              if ( (_QWORD *)v21[2] != v9 )
                goto LABEL_25;
              v9 = v21;
              v5 = v22 & 0xFFFFFFFFFFFFFFFCLL;
              v22 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v22 & 2) != 0 )
                break;
              v21 = (_QWORD *)v5;
            }
            v9 = (_QWORD *)v5;
            if ( *(_QWORD *)(a1 + 1856) == v5 )
              break;
          }
        }
      }
    }
  }
LABEL_12:
  v12 = *(_QWORD *)(a1 + 1840) == 0;
  v23[2] = 0;
  v23[0] = off_4B1DB8;
  v25 = 0;
  v27 = 0;
  v23[1] = a1;
  v26 = 0;
  if ( !v12 )
  {
    v13 = 0;
    v14 = 0;
    do
    {
      v15 = (unsigned int *)(*(_QWORD *)(a1 + 1832) + 88 * v14 + 8);
      v24 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v15, (__m128i)(unsigned __int64)v15);
      sub_3189D0(v15, v23, 1, v24, v5, v6, v7);
      v14 = ++v13;
    }
    while ( (unsigned __int64)v13 < *(_QWORD *)(a1 + 1840) );
  }
  v12 = *(_QWORD *)(a1 + 1904) == 0;
  v24 = 0;
  if ( !v12 )
  {
    v16 = 0;
    v17 = 0;
    do
    {
      sub_3173F0((unsigned __int8 *)(*(_QWORD *)(a1 + 1896) + 16 * v17), (__int64)v23, 0, (__m128)0LL);
      v17 = ++v16;
    }
    while ( (unsigned __int64)v16 < *(_QWORD *)(a1 + 1904) );
  }
  if ( *(_QWORD *)(a1 + 1880) )
  {
    v18 = 0;
    v19 = 0;
    do
    {
      sub_3173F0((unsigned __int8 *)(*(_QWORD *)(a1 + 1872) + 40 * v19), (__int64)v23, 0, (__m128)0LL);
      v19 = ++v18;
    }
    while ( (unsigned __int64)v18 < *(_QWORD *)(a1 + 1880) );
  }
  v23[0] = off_4B1DB8;
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree();
  }
  return v28 - __readfsqword(0x28u);
}

