__int64 __fastcall sub_297D60(_QWORD *a1, __int64 a2, double a3)
{
  __int64 v3; // r12
  unsigned int v4; // ebp
  __int64 v7; // r13
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // r14d
  __int64 v13; // rbp
  int v14; // r12d
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rbx
  __int64 v19; // rbp
  __int64 v20; // rax
  __int64 v21; // rdi
  int v22; // eax
  __int64 v23; // [rsp+0h] [rbp-68h] BYREF
  __int64 v24; // [rsp+8h] [rbp-60h]
  __int64 v25; // [rsp+10h] [rbp-58h] BYREF
  __int128 v26; // [rsp+18h] [rbp-50h]
  unsigned __int64 v27; // [rsp+28h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v3 + 8) != 61 )
    return 0;
  v4 = (unsigned int)a1;
  if ( !sub_255A30(*(__int64 **)(v3 + 24)) )
    return 0;
  sub_283C00(&v23, a1, a2, a3);
  v7 = *(_QWORD *)v24;
  v24 = v7;
  if ( v7 == v23 )
    return 0;
  LOBYTE(v4) = *(_DWORD *)(v7 + 24) != 84 && (unsigned int)(*(_DWORD *)(v7 + 24) - 80) > 1;
  if ( (_BYTE)v4 )
  {
    return 0;
  }
  else
  {
    v8 = *(_QWORD *)(v3 + 64);
    v25 = 0;
    v26 = 0;
    if ( (unsigned __int8)sub_285490(v8, (__int64)&v25) )
    {
      if ( (unsigned __int64)v26 <= 1
        || *(_DWORD *)(v7 + 24) != 80
        || (v22 = *(_DWORD *)(*(_QWORD *)(v7 + 40) + 8LL), (unsigned int)(v22 - 64) <= 1)
        || v22 == 61 )
      {
        v9 = 81;
        v12 = sub_2853C0(a2, 81, 1);
        if ( (_BYTE)v12 )
        {
          if ( (_QWORD)v26 )
          {
            v13 = v7 + 16;
            v14 = 0;
            v15 = 0;
            do
            {
              v16 = j__qalloc_or_throw(32, v9, v10, v11);
              *(_QWORD *)v16 = -1;
              v17 = v16;
              *(_DWORD *)(v16 + 8) = 70;
              *(_QWORD *)(v16 + 12) = -1;
              sub_25AA70(v16, v13, 0.0);
              if ( v14 > 0 )
                *(_DWORD *)(v17 + 12) = -1;
              v9 = v17;
              sub_255580(*(__int64 **)(v25 + 8 * v15), v17, 0.0);
              v15 = ++v14;
            }
            while ( v14 < (unsigned __int64)v26 );
          }
          v18 = v24;
          v19 = v23;
          v20 = *(_QWORD *)v24;
          v21 = v24 + 16;
          **(_QWORD **)(v24 + 8) = *(_QWORD *)v24;
          *(_QWORD *)(v20 + 8) = *(_QWORD *)(v18 + 8);
          sub_255050(v21, 0.0);
          qfree(v18);
          --*(_QWORD *)(v19 + 16);
          v4 = v12;
        }
      }
    }
    if ( v25 )
    {
      *(_QWORD *)&v26 = 0;
      qfree(v25);
    }
  }
  return v4;
}

