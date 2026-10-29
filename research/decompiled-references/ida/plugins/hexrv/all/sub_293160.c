__int64 __fastcall sub_293160(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r12
  unsigned int v3; // ebp
  __int64 *v5; // r13
  __int64 v6; // rdi
  unsigned int v7; // r14d
  __int64 v8; // rbp
  int v9; // r12d
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 *v13; // rbx
  __int64 *v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rdi
  int v17; // eax
  __int64 *v18; // [rsp+0h] [rbp-68h] BYREF
  __int64 *v19; // [rsp+8h] [rbp-60h]
  __int64 v20; // [rsp+10h] [rbp-58h] BYREF
  __int128 v21; // [rsp+18h] [rbp-50h]
  unsigned __int64 v22; // [rsp+28h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v2 + 8) != 61 )
    return 0;
  v3 = (unsigned int)a1;
  if ( !sub_250E30(*(__int64 **)(v2 + 24)) )
    return 0;
  sub_27F000(&v18, a1, a2);
  v5 = (__int64 *)*v19;
  v19 = v5;
  if ( v5 == v18 )
    return 0;
  LOBYTE(v3) = *((_DWORD *)v5 + 6) != 84 && (unsigned int)(*((_DWORD *)v5 + 6) - 80) > 1;
  if ( (_BYTE)v3 )
  {
    return 0;
  }
  else
  {
    v6 = *(_QWORD *)(v2 + 64);
    v20 = 0;
    v21 = 0;
    if ( (unsigned __int8)sub_280890(v6, (__int64)&v20) )
    {
      if ( (unsigned __int64)v21 <= 1
        || *((_DWORD *)v5 + 6) != 80
        || (v17 = *(_DWORD *)(v5[5] + 8), (unsigned int)(v17 - 64) <= 1)
        || v17 == 61 )
      {
        v7 = sub_2807C0(a2, 81, 1);
        if ( (_BYTE)v7 )
        {
          if ( (_QWORD)v21 )
          {
            v8 = (__int64)(v5 + 2);
            v9 = 0;
            v10 = 0;
            do
            {
              v11 = j__qalloc_or_throw();
              *(_QWORD *)v11 = -1;
              v12 = v11;
              *(_DWORD *)(v11 + 8) = 70;
              *(_QWORD *)(v11 + 12) = -1;
              sub_255E70(v11, v8);
              if ( v9 > 0 )
                *(_DWORD *)(v12 + 12) = -1;
              sub_250980(*(__int64 **)(v20 + 8 * v10), v12);
              v10 = ++v9;
            }
            while ( v9 < (unsigned __int64)v21 );
          }
          v13 = v19;
          v14 = v18;
          v15 = *v19;
          v16 = (__int64)(v19 + 2);
          *(_QWORD *)v19[1] = *v19;
          *(_QWORD *)(v15 + 8) = v13[1];
          sub_250450(v16);
          qfree();
          --v14[2];
          v3 = v7;
        }
      }
    }
    if ( v20 )
    {
      *(_QWORD *)&v21 = 0;
      qfree();
    }
  }
  return v3;
}

