unsigned __int64 __fastcall sub_D510(int *a1, __int64 a2, unsigned __int64 *a3, double a4, double a5)
{
  int v6; // eax
  unsigned int *v7; // r14
  unsigned int *v8; // rbp
  __int64 v9; // rdi
  unsigned __int64 i; // rbp
  int v11; // ebx
  unsigned int v12; // r14d
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  const char *v17; // rcx
  unsigned int v18; // edx
  __int64 v21; // [rsp+10h] [rbp-888h] BYREF
  __int128 v22; // [rsp+18h] [rbp-880h]
  const char *v23; // [rsp+30h] [rbp-868h] BYREF
  __int64 v24; // [rsp+38h] [rbp-860h]
  _BYTE v25[1024]; // [rsp+50h] [rbp-848h] BYREF
  _DWORD v26[258]; // [rsp+450h] [rbp-448h] BYREF
  unsigned __int64 v27; // [rsp+858h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  memset(v25, 0, sizeof(v25));
  memset(v26, 0, 0x400u);
  if ( (int)netnode_supval(*((_QWORD *)a1 + 2), a2, v25, 1024, 89) > 1 )
  {
    v6 = 127;
    if ( v25[0] <= 0x7Fu )
      v6 = v25[0];
    if ( v25[0] )
    {
      v7 = (unsigned int *)&v25[1];
      v8 = (unsigned int *)&v25[8 * (v6 - 1) + 9];
      do
      {
        v9 = *v7;
        v7 += 2;
        sub_7150(v9, 1u, (__int64)"try 0x%a-0x%a:", a4, a5);
      }
      while ( v8 != v7 );
    }
    for ( i = *a3; i < a3[1]; i = get_item_end(i) )
    {
      if ( netnode_supval(*(_QWORD *)(*((_QWORD *)a1 + 1) + 40LL), i, v26, 1024, 325) > 4 )
      {
        v11 = v26[0];
        v12 = 255;
        if ( v26[0] <= 0xFFu )
          v12 = v26[0];
        create_insn(i, 0);
        if ( v11 )
        {
          v13 = 0;
          do
          {
            v18 = v26[v13 + 1];
            if ( v18 == -1 )
            {
              sub_7150(i, 1u, (__int64)"catch %s:", "all");
            }
            else
            {
              v14 = *a1;
              v15 = *((_QWORD *)a1 + 1);
              v21 = 0;
              v22 = 0;
              v16 = (unsigned int)(v14 - 1);
              if ( v16 >= *(_QWORD *)(v15 + 56) )
              {
                if ( !under_debugger )
                  interr(20112);
                BUG();
              }
              sub_8BD0((__int64)&v21, *(_QWORD *)(*(_QWORD *)(v15 + 48) + 8 * v16), v18, 0x55u);
              sub_83C0(&v23, (__int64)&v21);
              v17 = s1;
              if ( v24 )
                v17 = v23;
              sub_7150(i, 1u, (__int64)"catch %s:", v17);
              if ( v23 )
              {
                v24 = 0;
                qfree(v23);
              }
              if ( v21 )
              {
                *(_QWORD *)&v22 = 0;
                qfree(v21);
              }
            }
            ++v13;
          }
          while ( (unsigned int)v13 < v12 );
        }
      }
    }
  }
  return v27 - __readfsqword(0x28u);
}
