unsigned __int64 __fastcall sub_4CEB0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // r12
  __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v15; // rax
  __int64 v16; // [rsp+0h] [rbp-50h]
  __int64 v17; // [rsp+8h] [rbp-48h] BYREF
  __int128 v18; // [rsp+10h] [rbp-40h]
  unsigned __int64 v19; // [rsp+20h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  v8 = *a2;
  v18 = 0;
  v17 = 0;
  sub_2F640(a3, &v17, v8, 0, a5, a6);
  v9 = v17;
  v10 = v17 + 8 * v18;
  v11 = v17;
  if ( v17 != v10 )
  {
    do
    {
      v13 = *(_QWORD *)v9;
      v9 += 8;
      if ( (*(_BYTE *)(v13 + 72) & 8) != 0 )
      {
        if ( v9 == v11 + 8LL * (_QWORD)v18 )
        {
          if ( (*(_BYTE *)(a3 + 412) & 1) != 0 )
          {
            v12 = *(_QWORD *)(a3 + 416);
          }
          else
          {
            v16 = v13;
            v15 = sub_97AE0(a3 + 8);
            v13 = v16;
            v12 = v15;
          }
        }
        else
        {
          v12 = *(_QWORD *)(*(_QWORD *)v9 + 40LL);
        }
        sub_4BED0(a1, (__int64)a2, a3, v13, v12);
        v11 = v17;
      }
    }
    while ( v10 != v9 );
  }
  if ( v11 )
  {
    *(_QWORD *)&v18 = 0;
    qfree(v11);
  }
  return v19 - __readfsqword(0x28u);
}

